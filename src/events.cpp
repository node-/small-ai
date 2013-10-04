/* Jake Kosberg
 * events.cpp
 * 
 *
 */

#include "vacuum.h"

int main()
{
    // World dimensions
    World world(4, 4);

    // Can also initiate with coords
    Vacuum ai;

    // When the world is dirty, ai is clean()'ing
    while(world.isDirty())
    {
        ai.clean(world);
        cout << world;
    }
    
    return 0;
}
