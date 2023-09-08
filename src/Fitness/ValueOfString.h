//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H
#define GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H

#include "../Agents/Agent.h"
#include "../Genomes/Genome.h"
#include "Fitness.h"

#include <vector>

namespace GenAlg {

    class ValueOfString: public Fitness{
    private:
        int max = 0;
        int min = 0;
        float avg = 0;
//        std::sorted_map fitnessValues;

        void sort();
    public:
        void eval(std::vector<Agent> population);


    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H
