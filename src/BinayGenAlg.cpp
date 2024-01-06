//
// Created by agmui on 1/1/24.
//

#include "BinaryGenAlg.h"
#include <bits/stdc++.h>

namespace GenAlg {
    void printBin(char best) {
        for (int i = 0; i < 8; ++i) {
            printf("%d", !!((best << i) & 0x80));
        }
        printf("\n");
    }

    int numOnes(const BinaryGenome* b){
        int val = 0;
        char tmp = b->getGenotype();
        for (int i = 0; i < sizeof(tmp)*8; ++i) {
            val += (tmp>>i) & 1;
//            tmp = tmp >> 1;
        }
        return val;
    }
    void BinaryGenAlg::fitness(std::vector<BinaryGenome *>& population) {
//        printf("-fitness-\n");
//        for (auto p:population){
//            printBin(p->getGenotype());
//            std::cout<<numOnes(p)<<std::endl;
//        }

        // most ones
        struct comp {
            bool operator()(const BinaryGenome* a, const BinaryGenome* b) {
                return numOnes(a) > numOnes(b);
            }
        };
        std::sort(population.begin(), population.end(), comp());

//        printf("-after fitness-\n");
//        for (auto p:population)
//            printBin(p->getGenotype());
    }

    void BinaryGenAlg::mutation(std::vector<BinaryGenome *>& population) {
//        printf("-mutation-\n");
//        for (auto p:population)
//            printBin(p->getGenotype());

        // flips 1 random bit
//        for (BinaryGenome *g: population) {
//            char tmp = g->getGenotype();
//            g->setGenotype(tmp ^ (1 << (std::rand() % (sizeof(tmp)*8))));
//        }
        for (int i = 1; i < populationSize; ++i) {
            BinaryGenome *g = population[i];
            char tmp = g->getGenotype();
            g->setGenotype(tmp ^ (1 << (std::rand() % (sizeof(tmp)*8))));
        }

//        printf("-after mutation-\n");
//        for (auto p:population)
//            printBin(p->getGenotype());
    }
} // GenAlg