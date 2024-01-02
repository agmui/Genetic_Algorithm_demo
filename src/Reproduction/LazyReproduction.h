//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
#define GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H

#include <vector>
#include "Reproduction.h"
#include "../GenAlgInterface.h"

namespace GenAlg {

    template<class T>
    class GenAlgInterface;

    template<class T>
    class LazyReproduction : public Reproduction<T>{
    private:
        GenAlgInterface<T>* genAlgInterface;
    public:
        LazyReproduction(GenAlgInterface<T>* genAlgInterface):genAlgInterface(genAlgInterface){};
        ~LazyReproduction();

        void reproduction(std::vector<T*>) override;

    };


} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_LAZYREPRODUCTION_H
