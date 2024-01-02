//
// Created by agmui on 1/1/24.
//

#include "Simulation.h"
#include "BinaryGenAlg.h"
#include "BinaryGenome.h"

using namespace GenAlg;
int main(){
    GenAlgInterface<BinaryGenome>* b = new BinaryGenAlg();
//    BinaryGenAlg* b = new BinaryGenAlg();
    Simulation<BinaryGenome>* s = new Simulation<BinaryGenome>(b);
    s->run();
}