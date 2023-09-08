//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_VISITOR_H
#define GENETIC_ALGORITHM_DEMO_VISITOR_H

#include "../Fitness/ValueOfString.h"

namespace GenAlg {

    class Visitor {
        virtual void visit(ValueOfString fitnessFunc) = 0;

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_VISITOR_H
