/* Jake Kosberg
 * world.h
 *
 *
 */

#ifndef _WORLD_H_
#define _WORLD_H_

#include <iostream>
#include <cstdlib>

using namespace std;

class World
{
    private:
        int y;
        int x;
        int **matrix;

    public:
        // Constructors
        World();
        World(int X, int Y);
        ~World();

        // Accessors
        bool isDirty();
        void show(ostream &out);
        int location(int X, int Y);
        int rowCount();
        int colCount();

        // Mutators
        void clean(int X, int Y);

        // Operators
        friend ostream& operator<<(ostream& out, World world);
};

#endif
