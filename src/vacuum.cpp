/* Jake Kosberg
 * vacuum.cpp
 *
 *
 */

#include "vacuum.h"

// Constructors
Vacuum::Vacuum(World world)
{
    x = 0;
    y = 0;
    int worldX = world.rowCount();
    int worldY = world.colCount();
    initMemory(worldX, worldY);
}

Vacuum::Vacuum(World world, int X, int Y)
{
    x = X;
    y = Y;
    int worldX = world.rowCount();
    int worldY = world.colCount();
    initMemory(worldX, worldY);
}

Vacuum::~Vacuum()
{
}

// Mutators
void Vacuum::initMemory(int worldX, int worldY)
{
    memory = new int* [worldX];
    for (int i = 0; i < worldX; i++) {
        memory[i] = new int [worldY];
        for (int j = 0; j < worldY; j++) {
            memory[i][j] = 0;
        }
    }
}

void Vacuum::clean(World world)
{
    /*
    if (world.location(x, y))
    {
        world.clean(x, y);
    }
    else {
        move(world.surroundings(x, y));
    }
    memorize();
    */
}

void Vacuum::memorize()
{
    memory[x][y] = 0;
}
