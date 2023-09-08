//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_SELECTION_H
#define GENETIC_ALGORITHM_DEMO_SELECTION_H

#include "../Fitness/Fitness.h"
#include "../Agents/Agent.h"

#include <vector>

namespace GenAlg {

    class Selection {
    private:
       Fitness* fitness;
    public:
        virtual void choose(std::vector<Agent> population) = 0;
    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_SELECTION_H
