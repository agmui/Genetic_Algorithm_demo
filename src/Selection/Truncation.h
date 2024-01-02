//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_TRUNCATION_H
#define GENETIC_ALGORITHM_DEMO_TRUNCATION_H

#include <vector>
#include "Selection.h"

namespace GenAlg {


    template<class T>
    class Truncation : public Selection<T>{
    private:
        int eliteNum;
    public:
        Truncation(int eliteNum=1): eliteNum(eliteNum){};
        void selection(std::vector<T*> population) override;

    };


} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_TRUNCATION_H
