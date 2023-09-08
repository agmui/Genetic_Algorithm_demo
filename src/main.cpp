#include <iostream>
#include "Simulation.h"

int main() {
    std::cout << "My crappy Genetic Algorithm simulator" << std::endl;
    auto* sim = new GenAlg::Simulation();
    sim->run();
    return 0;
}
