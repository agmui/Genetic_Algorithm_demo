//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_MUTATION_H
#define GENETIC_ALGORITHM_DEMO_MUTATION_H

#include "../Agents/Agent.h"

#include "vector"

namespace GenAlg {

    template <typename T>
    class Mutation {
    public:
        virtual void mutate(std::vector<T*> population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_MUTATION_H
