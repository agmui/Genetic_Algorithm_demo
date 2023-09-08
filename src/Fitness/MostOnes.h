//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_MOSTONES_H
#define GENETIC_ALGORITHM_DEMO_MOSTONES_H

#include "../Agents/Agent.h"
#include "../Genomes/Genome.h"
#include "Fitness.h"

#include <vector>

namespace GenAlg {

    class MostOnes: public  Fitness{
    private:
//        std::sorted_map fitnessValues;
        void sort(std::vector<Agent> population);
        float evalGenome(Genome g) override;

    public:
        void eval(std::vector<Agent> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_MOSTONES_H
