cmake_minimum_required(VERSION 3.13)  # CMake version check
project(POO)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(Proiect main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(Proiect main.cpp Elev.h Elev.cpp situatie_scolara.h situatie_scolara.cpp materie.cpp materie.h materie_imp.cpp materie_imp.h)