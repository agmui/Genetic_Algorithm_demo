//
// Created by agmui on 1/1/24.
//

#ifndef GENETIC_ALGORITHM_DEMO_BINARYGENOME_H
#define GENETIC_ALGORITHM_DEMO_BINARYGENOME_H

#include <string>
#include <bitset>

namespace GenAlg {

    class BinaryGenome {
    private:
        char genotype;
    public:
        BinaryGenome();

        ~BinaryGenome() = default;

        explicit operator std::string() const { return std::bitset<8>(genotype).to_string(); }

        char getGenotype() const{
            return genotype;
        }
        void setGenotype(char genotype){
            this->genotype = genotype;
        }

    };

} // GenAlg

#endif //GENETIC_ALGORITHM_DEMO_BINARYGENOME_H
