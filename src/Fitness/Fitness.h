//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_FITNESS_H
#define GENETIC_ALGORITHM_DEMO_FITNESS_H

#include "../Agents/Agent.h"
#include "../Genomes/Genome.h"

#include <vector>

namespace GenAlg {

    class Fitness {
    private:
        virtual float evalGenome(Genome g) = 0;

    public:
        virtual void eval(std::vector<Agent> population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_FITNESS_H
