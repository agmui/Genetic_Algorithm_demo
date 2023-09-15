//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_AGENT_H
#define GENETIC_ALGORITHM_DEMO_AGENT_H

#include "../Genomes/Genome.h"
#include "../Fitness/Fitness.h"
#include "../Genomes/BinaryGenome.h"

namespace GenAlg {

    template <typename T>
    class Agent {

    protected:
        T* genome;
    public:
        T* getGenome(){ return genome; }
    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_AGENT_H
