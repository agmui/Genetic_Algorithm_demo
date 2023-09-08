//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_BINARYBOIS_H
#define GENETIC_ALGORITHM_DEMO_BINARYBOIS_H

#include "Agent.h"
#include "../Genomes/BinaryGenome.h"

namespace GenAlg {

    class BinaryBois: public Agent{
        Genome* genome = new BinaryGenome();

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_BINARYBOIS_H
