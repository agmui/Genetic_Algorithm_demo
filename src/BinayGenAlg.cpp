//
// Created by agmui on 1/1/24.
//

#include "BinaryGenAlg.h"
#include <bits/stdc++.h>

namespace GenAlg {
    int numOnes(const BinaryGenome* b){
        int val = 0;
        char tmp = b->getGenotype();
        for (int i = 0; i < sizeof(tmp); ++i) {
            val += tmp & 1;
            tmp = tmp >> 1;
        }
        return tmp;
    }
    void BinaryGenAlg::fitness(std::vector<BinaryGenome *> population) {
        // most ones
        struct comp {
            bool operator()(const BinaryGenome* a, const BinaryGenome* b) {
                return numOnes(a) < numOnes(b);
            }
        };
        std::sort(population.begin(), population.end(), comp());
    }

    void BinaryGenAlg::mutation(std::vector<BinaryGenome *> population) {
        // flips 1 random bit
        for (BinaryGenome *g: population) {
            char tmp = g->getGenotype();
            g->setGenotype(tmp ^ (1 << std::rand() % sizeof(tmp)));
        }
    }
} // GenAlg