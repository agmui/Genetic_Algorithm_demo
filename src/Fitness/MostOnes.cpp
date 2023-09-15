//
// Created by agmui on 9/7/23.
//

#include "MostOnes.h"

namespace GenAlg {
    MostOnes::MostOnes(Logger *logger):logger(logger) {

    }

    float MostOnes::evalGenome(BinaryGenome* g) {
        int sum = 0;
        for (int i = 0; i < g->getLength(); ++i) {
            sum += g->getGenome()[i];
        }
        return (float)sum;
    }

    void MostOnes::eval(std::vector<BinaryGenome*> population) {
        for (BinaryGenome* a: population) {
            evalGenome(a);
        }

    }


} // GenAlg