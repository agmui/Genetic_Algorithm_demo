//
// Created by agmui on 1/1/24.
//

#include "LazyReproduction.h"

namespace GenAlg {
    template<class T>
    void LazyReproduction<T>::reproduction(std::vector<T *> population) {
        while(population.size() < genAlgInterface->populationSize){
            population.push_back(new T());
        }
    }
} // GenAlg