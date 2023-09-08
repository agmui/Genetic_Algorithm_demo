//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_RECOMBINATION_H
#define GENETIC_ALGORITHM_DEMO_RECOMBINATION_H

#include "../Agents/Agent.h"
#include "Mutation.h"

#include "vector"

namespace GenAlg {

    class Recombination: public Mutation{
        void mutate(std::vector<Agent> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_RECOMBINATION_H
