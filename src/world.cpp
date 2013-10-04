/* Jake Kosberg
 * world.cpp
 *
 * World functions
 */

#include "world.h"

// Constructors
World::World()
{
    matrix[0][0] = 0;
}

World::World(int X, int Y)
{
    x = X;
    y = Y;
    matrix = new int* [x];
    for (int i = 0; i < x; i++) {
        matrix[i] = new int [y];
        for (int j = 0; j < y; j++) {
            matrix[i][j] = rand() % 2;
        }
    }
}

World::~World()
{
}

// Accessors
bool World::isDirty()
{
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            if (matrix[i][j] != 0)
                return true;
    return false;
}

void World::show(ostream &out)
{
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            out << matrix[i][j] << " ";
        out << endl;
    }
    out << endl;
}

int World::location(int X, int Y)
{
    if (X <= x && Y <= y)
        return matrix[X][Y];
    else
        return 0;
}

int World::rowCount()
{
    return x;
}

int World::colCount()
{
    return y;
}

// Mutators
void World::clean(int X, int Y)
{
    if (X <= x && Y <= y)
        matrix[X][Y] = 0;
}

// Operators
ostream& operator<<(ostream& out, World world)
{
    return out;
}
