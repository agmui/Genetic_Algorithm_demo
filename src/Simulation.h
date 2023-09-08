//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_SIMULATION_H
#define GENETIC_ALGORITHM_DEMO_SIMULATION_H

#include "params.h"
#include "Agents/Agent.h"
#include "Reproduction/Reproduction.h"
#include "Mutations/Mutation.h"
#include "Fitness/Fitness.h"
#include "Selection/Selection.h"
#include "Logging/Logger.h"

#include <vector>

namespace GenAlg {
    class Simulation {
    private:
        int populationSize = POPULATION_SIZE;
        std::vector<Agent> population;
        float time = 0;

        Mutation* mutationFuncs[1];
        Fitness* fitness;
        Selection* selectionFuncs[1];
        Reproduction* reproductionFuncs[1];
        Logger loggers[];

    public:
        Simulation();

        ~Simulation();

        void initPopulation();
        void run();


    };
} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_SIMULATION_H
