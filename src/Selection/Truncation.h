//
// Created by agmui on 9/9/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_TRUNCATION_H
#define GENETIC_ALGORITHM_DEMO_TRUNCATION_H

#include "Selection.h"
#include "../Logging/Logger.h"
#include "../Fitness/Fitness.h"

namespace GenAlg {

    template <typename T>
    class Truncation: public Selection<T> {
    private:
        Reproduction<T>* reproduction;
        Logger* logger;
        float percent;

    public:
        Truncation(Reproduction<T>* reproduction, Logger *logger, float percent=0.5):
                reproduction(reproduction),
                logger(logger),
                percent(percent)
        {

        }

        void choose(std::vector<T*> population) override {
            int index_percent = (int)(percent*population.size())-1;
            for (int i = index_percent; i < population.size(); ++i) {
                population[i] = nullptr;
            }
            reproduction->repopulate(population);
        }

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_TRUNCATION_H
