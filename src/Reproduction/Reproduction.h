//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_REPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_REPRODUCTION_H

#include "../Agents/Agent.h"

#include "vector"

namespace GenAlg {

    class Reproduction {
    public:
        virtual void repopulate(std::vector<Agent> population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_REPRODUCTION_H
