//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_BINARYBOIS_H
#define GENETIC_ALGORITHM_DEMO_BINARYBOIS_H

#include "Agent.h"
#include "../Genomes/BinaryGenome.h"
#include "../Logging/Logger.h"

namespace GenAlg {

    class BinaryBois: public Agent<BinaryGenome*>{
    private:
        Logger* logger;
    public:
        BinaryBois(Logger* logger);
        ~BinaryBois();
//        BinaryGenome* getGenome(){ return genome; }
    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_BINARYBOIS_H
