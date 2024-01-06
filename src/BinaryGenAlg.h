//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_BINARYGENALG_H
#define GENETIC_ALGORITHM_DEMO_BINARYGENALG_H

#include "GenAlgInterface.h"
#include "BinaryGenome.h"
#include "Reproduction/LazyReproduction.h"
#include "Selection/Roulette.h"
#include "Selection/Truncation.h"

namespace GenAlg {

    class BinaryGenAlg : public GenAlgInterface<BinaryGenome>{
    public:
        BinaryGenAlg(){
            seed = 69;
            epochs = 50;
            populationSize = 10;
        }

        void fitness(std::vector<BinaryGenome*>& population) override;
        void mutation(std::vector<BinaryGenome*>& population) override;

        Reproduction<BinaryGenome>* reproductionFunc = new LazyReproduction<BinaryGenome>(this);
        Selection<BinaryGenome>* selectionFunc = new Truncation<BinaryGenome>(5);


    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_BINARYGENALG_H
