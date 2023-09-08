//
// Created by agmui on 9/7/23.
//
#include "Simulation.h"
#include "Mutations/Recombination.h"
#include "Selection/Roulette.h"
#include "Reproduction/LazyReproduction.h"

#include<iostream>
#include<cstdlib>
namespace GenAlg {

    Simulation::Simulation() {
        mutationFuncs[0] = new Recombination();

        selectionFuncs[0] = new Roulette(fitness);

        reproductionFuncs[0] = new LazyReproduction();
    }

    Simulation::~Simulation() {

    }

    void Simulation::initPopulation() {
        std::srand(SEED); // sets seed

        population.reserve(POPULATION_SIZE);
    }

    void Simulation::run() {
        initPopulation();

        int runs = 0;
        while (runs < EPOCHS){
            for (Selection* s: selectionFuncs) {
                s->choose(population);
            }
            for (Reproduction* r: reproductionFuncs) {
                r->repopulate(population);
            }
            for (Mutation* m: mutationFuncs) {
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
