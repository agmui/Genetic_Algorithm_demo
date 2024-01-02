//
// Created by agmui on 1/1/24.
//

#include "Truncation.h"

namespace GenAlg {
    template<class T>
    void Truncation<T>::selection(std::vector<T *> population) {
        int popSize = population.size();
        for (int i = popSize; i > popSize-eliteNum; --i) {
            delete population[i];
            population.erase(population.end());
        }
    }
} // GenAlg