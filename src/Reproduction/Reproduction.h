//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_REPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_REPRODUCTION_H


#include "vector"

namespace GenAlg {

    template <typename T>
    class Reproduction {
    public:
        virtual void repopulate(std::vector<T*> population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_REPRODUCTION_H
