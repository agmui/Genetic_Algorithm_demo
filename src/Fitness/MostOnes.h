//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_MOSTONES_H
#define GENETIC_ALGORITHM_DEMO_MOSTONES_H

#include "../Agents/Agent.h"
#include "../Agents/BinaryBois.h"
#include "../Genomes/BinaryGenome.h"
#include "../Logging/Logger.h"
#include "Fitness.h"

#include <vector>
#include <map>

namespace GenAlg {

    class MostOnes: public Fitness<BinaryGenome>{
    private:
        std::multimap<int, BinaryGenome*> fitnessValues;
        float evalGenome(BinaryGenome* g);
        Logger* logger;

    public:
        MostOnes(Logger* logger);
        void eval(std::vector<BinaryGenome*> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_MOSTONES_H
