//
// Created by agmui on 1/1/24.
//

#include "Simulation.h"
#include "BinaryGenAlg.h"
#include "BinaryGenome.h"

using namespace GenAlg;
using namespace std;

int numOnes(const BinaryGenome *b) {
    int val = 0;
    char tmp = b->getGenotype();
    for (int i = 0; i < sizeof(tmp) * 8; ++i) {
        val += (tmp >> i) & 1;
//        tmp = tmp >> 1;
    }
    return val;
}


void printBin(char best) {
    for (int i = 0; i < 8; ++i) {
        printf("%d", !!((best << i) & 0x80));
    }
    printf("\n");
}

int main() {
    GenAlgInterface<BinaryGenome> *b = new BinaryGenAlg();
    Simulation<BinaryGenome> *s = new Simulation<BinaryGenome>(b);
    s->run();
    BinaryGenome *best = s->getPopulation().front();

//    printf("%08b\n", best->getGenotype());
//    printf("%x\n", best->getGenotype());
    cout << "best: "<<numOnes(best)<<endl;
    printBin(best->getGenotype());

//    char hi = best->getGenotype();
//    printBin(hi);

//    BinaryGenome *hi = new BinaryGenome();
//    hi->setGenotype('a');
//    cout << numOnes(hi) << endl;

}