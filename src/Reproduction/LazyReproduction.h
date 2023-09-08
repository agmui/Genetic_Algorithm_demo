//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H

#include "Reproduction.h"

#include <vector>

namespace GenAlg {

    class LazyReproduction: public Reproduction{
    public:
        LazyReproduction();

        void repopulate(std::vector<Agent> population) override;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
