//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_ROULETTE_H
#define GENETIC_ALGORITHM_DEMO_ROULETTE_H


#include "../Fitness/Fitness.h"
#include "../Agents/Agent.h"
#include "Selection.h"

#include <vector>

namespace GenAlg {

    class Roulette: public Selection {
    private:
        Fitness* fitness;

    public:
        Roulette(Fitness* fitness);

        void choose(std::vector<Agent> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_ROULETTE_H
