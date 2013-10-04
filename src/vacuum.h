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

    public:
        // Constructors
        Vacuum();
        Vacuum(int X, int Y);
        
        // Mutators
        void clean(World world);

};

#endif
