//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_BINARYGENOME_H
#define GENETIC_ALGORITHM_DEMO_BINARYGENOME_H

#include "../Logging/Logger.h"
#include "Genome.h"

namespace GenAlg {

    class BinaryGenome: public Genome{
    private:
        int genomeLength;
        int* genome;
        Logger* logger;

    public:
        BinaryGenome(int genomeLength, Logger *logger);
        ~BinaryGenome();

        int* getGenome(){ return genome; }
        int getLength() { return genomeLength; }


    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_BINARYGENOME_H
