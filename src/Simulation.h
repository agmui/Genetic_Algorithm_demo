//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_SIMULATION_H
#define GENETIC_ALGORITHM_DEMO_SIMULATION_H

#include "GenAlgInterface.h"
#include "vector"

namespace GenAlg {

    template<class T>
    class Simulation {
    private:
        GenAlgInterface<T>* genAlgFramework;
        std::vector<T*> population;

    public:
        explicit Simulation(GenAlgInterface<T>* genAlgFramework);
        ~Simulation();
        void initPopulation();
        void run();
    };



} // GenAlg


#endif //GENETIC_ALGORITHM_DEMO_SIMULATION_H
