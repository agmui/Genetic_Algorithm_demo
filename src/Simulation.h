//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_SIMULATION_H
#define GENETIC_ALGORITHM_DEMO_SIMULATION_H

#include <iostream>
#include "stdio.h"
#include <cstdlib>
#include "GenAlgInterface.h"
#include "vector"

namespace GenAlg {

    template<class T>
    class Simulation {
    private:
        GenAlgInterface<T> *genAlgFramework;
        std::vector<T *> population;

    public:
        explicit Simulation(GenAlgInterface<T> *genAlgFramework);

        ~Simulation();

        void initPopulation();

        void run();

        std::vector<T*> getPopulation(){
            return population;
        }
    };

    template<class T>
    Simulation<T>::Simulation(GenAlgInterface<T> *genAlgFramework):genAlgFramework(genAlgFramework) {
    }

    template<class T>
    Simulation<T>::~Simulation() {
        for (int i = 0; i < population.size(); ++i) {
            delete population[i];
        }
        population.clear();
        delete population;
    }

    template<class T>
    void Simulation<T>::initPopulation() {
        std::srand(genAlgFramework->seed); // sets seed
        population.reserve(genAlgFramework->populationSize);
        for (int i = 0; i < genAlgFramework->populationSize; ++i) {
            population.push_back(new T());
        }
    }

    template<class T>
    void Simulation<T>::run() {
        this->initPopulation();
        for (int epoch = 1; epoch < genAlgFramework->epochs+1; ++epoch) {
            printf("==epoch: %d==\n", epoch);
            genAlgFramework->fitness(population);
            genAlgFramework->selectionFunc->selection(population);
            genAlgFramework->reproductionFunc->reproduction(population);
            genAlgFramework->mutation(population);
        }

    }


} // GenAlg


#endif //GENETIC_ALGORITHM_DEMO_SIMULATION_H
