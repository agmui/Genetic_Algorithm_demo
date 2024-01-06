//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_REPOPULATION_H
#define GENETIC_ALGORITHM_DEMO_REPOPULATION_H

namespace GenAlg {

    template<class T>
    class Reproduction {
    public:
        virtual void reproduction(std::vector<T *>& population) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_REPOPULATION_H
