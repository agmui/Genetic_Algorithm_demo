cmake_minimum_required(VERSION 3.26)
project(Genetic_Algorithm_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Genetic_Algorithm_demo src/main.cpp
        src/params.h
        src/Simulation.cpp
        src/Simulation.h
        src/Agents/Agent.h
        src/Genomes/Genome.h
        src/Mutations/Mutation.h
        src/Fitness/Fitness.h
        src/Selection/Selection.h
        src/Logging/Visitor.h
        src/Logging/Logger.h
        src/Logging/CSVLogger.cpp
        src/Logging/CSVLogger.h
        src/Agents/BinaryBois.cpp
        src/Agents/BinaryBois.h
        src/Genomes/BinaryGenome.cpp
        src/Genomes/BinaryGenome.h
        src/Mutations/Recombination.cpp
        src/Mutations/Recombination.h
        src/Fitness/MostOnes.cpp
        src/Fitness/MostOnes.h
        src/Selection/Roulette.cpp
        src/Selection/Roulette.h
        src/Fitness/ValueOfString.cpp
        src/Fitness/ValueOfString.h
        src/Reproduction/Reproduction.h
        src/Reproduction/LazyReproduction.cpp
        src/Reproduction/LazyReproduction.h)
