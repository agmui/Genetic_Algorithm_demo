//
// Created by agmui on 9/7/23.
//

#include "BinaryGenome.h"

namespace GenAlg {
    BinaryGenome::BinaryGenome(int genomeLength, Logger *logger):
                                    genomeLength(genomeLength),
                                    logger(logger)
    {
        genome = new int[genomeLength];
    }

    BinaryGenome::~BinaryGenome() {
        delete genome;
    }

} // GenAlg