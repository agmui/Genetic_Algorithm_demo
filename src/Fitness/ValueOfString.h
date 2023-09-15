//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H
#define GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H

#include "../Genomes/BinaryGenome.h"
#include "Fitness.h"
#include "../Logging/Logger.h"

#include <vector>

namespace GenAlg {

    class ValueOfString: public Fitness<BinaryGenome>{
    private:
        int max = 0;
        int min = 0;
        float avg = 0;
//        std::sorted_map fitnessValues;
        Logger* logger;
        void sort(std::vector<BinaryGenome*> population);

    public:
        ValueOfString(Logger* logger);
        void eval(std::vector<BinaryGenome*> population); //override;


    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_VALUEOFSTRING_H
