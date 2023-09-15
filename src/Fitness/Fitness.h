//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_FITNESS_H
#define GENETIC_ALGORITHM_DEMO_FITNESS_H

#include "../Genomes/Genome.h"

#include <vector>

namespace GenAlg {
    template <typename T>
    class Fitness {
//    private:
//        virtual float evalGenome(Genome* g) = 0;

    public:
        /**
         * evaluates and sorts all agents in the population
         * @param population
         */
        virtual void eval(std::vector<T*> population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_FITNESS_H
