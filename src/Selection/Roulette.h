//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_ROULETTE_H
#define GENETIC_ALGORITHM_DEMO_ROULETTE_H


#include "../Fitness/Fitness.h"
#include "../Agents/Agent.h"
#include "../Logging/Logger.h"
#include "Selection.h"

#include <vector>

namespace GenAlg {

    template <typename T>
    class Roulette: public Selection<T> {
    private:
        Reproduction<T>* reproduction;
        Logger* logger;

    public:
        Roulette(Reproduction<T>* reproduction, Logger* logger);

        void choose(std::vector<T*> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_ROULETTE_H
