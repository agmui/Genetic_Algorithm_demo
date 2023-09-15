//
// Created by agmui on 9/7/23.
//
#include "Simulation.h"
#include "Mutations/Recombination.h"
#include "Selection/Roulette.h"
#include "Selection/Truncation.h"
#include "Reproduction/LazyReproduction.h"
#include "Logging/CSVLogger.h"
#include "Agents/BinaryBois.h"
#include "Fitness/MostOnes.h"

#include<iostream>
#include<cstdlib>
namespace GenAlg {

    Simulation::Simulation() {
        loggers[0] = new CSVLogger();

        fitness = new MostOnes(loggers[0]);

        mutationFuncs[0] = new Recombination(loggers[0]);

        reproductionFuncs[0] = new LazyReproduction<BinaryGenome>(loggers[0]);

        selectionFuncs[0] = new Truncation(reproductionFuncs[0], loggers[0]);

    }

    Simulation::~Simulation() {
        //free population
        for (int i = 0; i < POPULATION_SIZE; ++i) {
            delete population[i];
        }
        population.clear();
        population.shrink_to_fit();
    }

    void Simulation::initPopulation() {
        std::srand(SEED); // sets seed

        population.reserve(POPULATION_SIZE);
        for (int i = 0; i < POPULATION_SIZE; ++i) {
            population.push_back(new BinaryGenome(8,loggers[0]));
        }
    }

    void Simulation::run() {
        initPopulation();

        int runs = 0;
        while (runs < EPOCHS){
            fitness->eval(population);

            for (auto* s: selectionFuncs) {
                s->choose(population);
            }
            for (auto* m: mutationFuncs) {
                m->mutate(population);
            }

            time++;
//            for (Logger* l: loggers) {
//                //TODO:
//            }

            runs++;
        }

    }

} // GenAlg
