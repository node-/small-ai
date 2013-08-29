/*
 * Naive vacuum AI
 * by jake kosberg
 * with random world generation
 *
 */

#include <iostream>
#include <cstdlib>

using namespace std;


void reflexAgent(bool& world_isEast, bool& world_isDirtyWest, bool& world_isDirtyEast, bool& world_isDirty);
void print_world(bool world_isEast, bool world_isDirtyWest, bool world_isDirtyEast);

int main()
{
    // world constants
    bool world_isDirty = true;

    // set these variables to a random boolean val
    bool world_isEast = rand() % 2;

    //bool world_isDirtyEast = rand() % 2;
    //bool world_isDirtyWest = rand() % 2;
    bool world_isDirtyEast = true;
    bool world_isDirtyWest = true;

    // index
    int i;

    // while the world is dirty
    for (i = 0; world_isDirty ; i++) {
        // print out the current location (east or west)
        const char* current_pos = world_isEast ? "East" : "West";
        cout << "Current position: " << current_pos << endl;

        // print the world as it is
        print_world(world_isEast, world_isDirtyWest, world_isDirtyEast);

        // the agent acts based on its percepts
        reflexAgent(world_isEast, world_isDirtyWest, world_isDirtyEast, world_isDirty);
    }

    return 0;
}


void reflexAgent(bool& world_isEast, bool& world_isDirtyWest, bool& world_isDirtyEast, bool& world_isDirty)
{
    cout << "ACTION: ";
    if (world_isEast) {
        if (world_isDirtyEast) {
            cout << "Cleaning East." << endl;
            world_isDirtyEast = false;
        } else if (world_isDirtyWest) {
            cout << "Moving West." << endl;
            world_isEast = false;
        } else {
            cout << "The world is no longer dirty." << endl;
            world_isDirty = false;
        }
    } else {
        if (world_isDirtyWest) {
            cout << "Cleaning West." << endl;
            world_isDirtyWest = false;
        } else if (world_isDirtyEast) {
            cout << "Moving East." << endl;
            world_isEast = true;
        } else {
            cout << "The world is not dirty." << endl;
            world_isDirty = false;
        }
    }
}

void print_world(bool world_isEast, bool world_isDirtyWest, bool world_isDirtyEast)
{
    cout << "|---|---|" << endl;
    if (world_isDirtyWest && world_isDirtyEast) {
        cout << "|-x-|-x-|" << endl;
    } else if (world_isDirtyWest) {
        cout << "|-x-|---|" << endl;
    } else if (world_isDirtyEast) {
        cout << "|---|-x-|" << endl;
    } else {
        cout << "|---|---|" << endl;
    }
    cout << "|---|---|" << endl;
}

