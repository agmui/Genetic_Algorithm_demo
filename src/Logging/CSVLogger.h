//
// Created by agmui on 9/7/23.
//

#ifndef GENETIC_ALGORITHM_DEMO_CSVLOGGER_H
#define GENETIC_ALGORITHM_DEMO_CSVLOGGER_H

#include "Logger.h"
#include "Visitor.h"

namespace GenAlg {

    class CSVLogger: public Logger, public Visitor{

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_CSVLOGGER_H
