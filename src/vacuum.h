/* Jake Kosberg
 * vacuum.h
 *
 *
 */

#ifndef _VACUUM_H_
#define _VACUUM_H_

#include "world.h"

class Vacuum
{
    private:
        int x;
        int y;
        int **memory;
        void initMemory(int worldX, int worldY);
        void memorize();

    public:
        // Constructors
        Vacuum(World world);
        Vacuum(World world, int X, int Y);
        ~Vacuum();
        
        // Mutators
        void clean(World world);
};

#endif
