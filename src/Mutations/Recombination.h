//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_RECOMBINATION_H
#define GENETIC_ALGORITHM_DEMO_RECOMBINATION_H

#include "../Agents/Agent.h"
#include "Mutation.h"

#include "vector"
#include "../Logging/Logger.h"

namespace GenAlg {

    class Recombination: public Mutation<BinaryGenome>{
    private:
        Logger* logger;
    public:
        Recombination(Logger* logger);

        void mutate(std::vector<BinaryGenome*> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_RECOMBINATION_H
