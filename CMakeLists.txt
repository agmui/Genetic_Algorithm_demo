cmake_minimum_required(VERSION 3.26)
project(Genetic_Algorithm_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Genetic_Algorithm_demo src/main.cpp
        src/Simulation.h
        src/Simulation.cpp

#        src/Logging/Logger.h
#        src/Logging/CSVLogger.cpp
#        src/Logging/CSVLogger.h
#        src/Genomes/BinaryGenome.cpp
#        src/Genomes/BinaryGenome.h
#        src/Mutations/Recombination.cpp
#        src/Mutations/Recombination.h
#        src/Fitness/MostOnes.cpp
#        src/Fitness/MostOnes.h
#        src/Selection/Roulette.cpp
#        src/Selection/Roulette.h
#        src/Fitness/ValueOfString.cpp
#        src/Fitness/ValueOfString.h
#        src/Reproduction/LazyReproduction.cpp
#        src/Reproduction/LazyReproduction.h
#        src/Selection/Truncation.cpp
#        src/Selection/Truncation.h
        src/GenAlgInterface.h
        src/Reproduction/Reproduction.h
        src/Reproduction/LazyReproduction.h
        src/Reproduction/LazyReproduction.cpp
        src/Selection/Selection.h
        src/Selection/Roulette.cpp
        src/Selection/Roulette.h
        src/BinaryGenome.cpp
        src/BinaryGenome.h
        src/BinayGenAlg.cpp
        src/BinaryGenAlg.h
        src/Selection/Truncation.cpp
        src/Selection/Truncation.h
)
