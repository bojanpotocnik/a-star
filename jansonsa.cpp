#include <iostream>
#include <set>

// region Cordinate.h requirements

#include <cfloat>
#include <cmath>

using namespace std;

// Including jansonsa/pokemonGUI/pokemonGUI/World.h adds a lot of dependencies, fake the class here
class World
{
public:
    set<int> obstacles;
};

static World world;

// endregion Cordinate.h requirements


#include "jansonsa/pokemonGUI/pokemonGUI/Cordinate.h"


int main()
{
    auto path = Cordinate::aStar(Node{}, Node{});

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
