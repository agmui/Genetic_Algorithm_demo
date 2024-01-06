//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_ROULETTE_H
#define GENETIC_ALGORITHM_DEMO_ROULETTE_H

#include "Selection.h"

namespace GenAlg {

    template<class T>
    class Roulette : public Selection<T>{
        void selection(std::vector<T*> population) override;

    };

    template<class T>
    void Roulette<T>::selection(std::vector<T *> population) {
        //TODO:
    }


} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_ROULETTE_H
