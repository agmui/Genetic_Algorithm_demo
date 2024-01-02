//
// Created by agmui on 1/1/24.
//

#include <cstdlib>
#include "Simulation.h"
#include "GenAlgInterface.h"

namespace GenAlg {
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
        for (int epoch = 0; epoch < genAlgFramework->epochs; ++epoch) {
            genAlgFramework->fitness(population);
            genAlgFramework->mutation(population);
            genAlgFramework->selectionFunc->selection(population);
            genAlgFramework->reproductionFunc->reproduction(population);
        }
    }
} // GenAlg