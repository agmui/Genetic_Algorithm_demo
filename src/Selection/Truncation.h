//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_TRUNCATION_H
#define GENETIC_ALGORITHM_DEMO_TRUNCATION_H

#include <vector>
#include "Selection.h"
#include "stdio.h"

namespace GenAlg {


    template<class T>
    class Truncation : public Selection<T> {
    private:
        int eliteNum;
    public:
        Truncation(int eliteNum = 1) : eliteNum(eliteNum) {};

        void selection(std::vector<T *>& population) override;

    };

    template<class T>
    void Truncation<T>::selection(std::vector<T *>& population) {
//        int popSize = population.size();
//        for (int i = popSize-1; i > eliteNum; --i) {
        if(population.size()>1){
            population.erase(population.begin()+eliteNum, population.end());
            population.resize(eliteNum);
        }
//        }
    }


} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_TRUNCATION_H
