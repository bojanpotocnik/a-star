cmake_minimum_required(VERSION 3.28)
project(a-star-implementations)

set(CMAKE_CXX_STANDARD 11)

# Setup:
#   git submodule update --init --remote --recommend-shallow --recursive --single-branch --progress

# https://github.com/daancode/a-star.git
add_executable(daancode
        daancode/source/AStar.cpp
        daancode/main.cpp
)

# https://github.com/MarcnKov/A-star-in-Cpp.git
add_executable(MarcnKov
        MarcnKov/A_star_v2.cpp
)

# https://github.coventry.ac.uk/jansonsa/D1.git
add_executable(jansonsa
        # Add wrapper, because we are only interested in the A* implementation in Coordinate.h
        jansonsa/pokemonGUI/pokemonGUI/Cordinate.h
        jansonsa.cpp
)
target_compile_options(jansonsa PRIVATE
        -Wno-return-type
)
