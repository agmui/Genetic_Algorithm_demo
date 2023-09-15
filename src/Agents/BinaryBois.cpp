//
// Created by agmui on 9/7/23.
//

#include "BinaryBois.h"

namespace GenAlg {
    BinaryBois::BinaryBois(Logger *logger):
                                        logger(logger)
    {
//        genome = new BinaryGenome(8, logger);

    }

    BinaryBois::~BinaryBois() {
        delete genome;

    }
} // GenAlg