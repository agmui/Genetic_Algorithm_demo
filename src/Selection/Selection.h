//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_SELECTION_H
#define GENETIC_ALGORITHM_DEMO_SELECTION_H

#include <vector>

namespace GenAlg {

    template<class T>
    class Selection {
    public:
        virtual void selection(std::vector<T*> population);

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_SELECTION_H
