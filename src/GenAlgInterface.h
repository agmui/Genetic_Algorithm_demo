//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_GENALGINTERFACE_H
#define GENETIC_ALGORITHM_DEMO_GENALGINTERFACE_H

#include <vector>
#include "Reproduction/Reproduction.h"
#include "Selection/Selection.h"
#include "Reproduction/LazyReproduction.h"
#include "Selection/Roulette.h"
#include "Selection/Truncation.h"

namespace GenAlg {

    template<class T>
    class LazyReproduction;

    template<class T>
    class GenAlgInterface {
    public:
        int seed = 69;
        int epochs = 100;
        int populationSize = 100;

        virtual void fitness(std::vector<T*>& population) = 0;
        virtual void mutation(std::vector<T*>& population) = 0;
        Selection<T>* selectionFunc = new Truncation<T>(); //new Roulette<T>();
        Reproduction<T>* reproductionFunc = new LazyReproduction<T>(this);

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_GENALGINTERFACE_H
