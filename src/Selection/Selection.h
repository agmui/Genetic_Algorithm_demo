//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_SELECTION_H
#define GENETIC_ALGORITHM_DEMO_SELECTION_H

#include "../Fitness/Fitness.h"
#include "../Reproduction/Reproduction.h"

#include <vector>

namespace GenAlg {

    template<typename T>
    class Selection {
    public:
        virtual void choose(std::vector<T*> population) = 0;
    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_SELECTION_H
