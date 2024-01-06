//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H

#include <vector>
#include <cstdio>
#include "Reproduction.h"
#include "../GenAlgInterface.h"

namespace GenAlg {

    template<class T>
    class GenAlgInterface;

    template<class T>
    class LazyReproduction : public Reproduction<T> {
    private:
        GenAlgInterface<T> *genAlgInterface;
    public:
        LazyReproduction(GenAlgInterface<T> *genAlgInterface) : genAlgInterface(genAlgInterface) {};

        ~LazyReproduction() = default;

        void reproduction(std::vector<T *>& population) override;

    };

    template<class T>
    void LazyReproduction<T>::reproduction(std::vector<T *>& population) {
//        printf("reproduction pop size: %d\n",population.size());
        while (population.size() < genAlgInterface->populationSize) {
            population.push_back(new T());
        }
//        printf("reproduction pop size: %d\n",population.size());
    }


} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
