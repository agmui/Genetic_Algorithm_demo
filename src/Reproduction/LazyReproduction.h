//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H

#include "Reproduction.h"

#include <vector>
#include "../Logging/Logger.h"

namespace GenAlg {

    template <typename T>
    class LazyReproduction: public Reproduction<T>{
    private:
        Logger* logger;

    public:
        LazyReproduction(Logger* logger){};

        void repopulate(std::vector<T*> population) override{

        }

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
