/* Jake Kosberg
 * world.cpp
 *
 * World functions
 */

#include "world.h"

// Constructors
World::World()
{
    // do shit
}

World::World(int X, int Y)
{
    x = X;
    y = Y;
    // do shit
}

World::~World()
{
    delete [] matrix;
}

// Accessors
bool World::isDirty()
{
    // do shit
    return false;
}

ostream& operator<<(ostream& out, World world)
{
    out << "test\n";
    return out;
}


