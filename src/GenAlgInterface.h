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

namespace GenAlg {

    template<class T>
    class LazyReproduction;

    template<class T>
    class GenAlgInterface {
    public:
        const int seed = 69;
        const int epochs = 100;
        static constexpr int populationSize = 100;

        virtual void fitness(std::vector<T*> population);
        virtual void mutation(std::vector<T*> population);
        Reproduction<T>* reproductionFunc = new LazyReproduction<T>(this);
        Selection<T>* selectionFunc = new Roulette<T>();

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_GENALGINTERFACE_H
