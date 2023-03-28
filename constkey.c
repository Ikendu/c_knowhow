#include <stdio.h>

int main()
{
        int x = 10; // normal assignment
        const int x = 10; // unchanging assignment

        int *xp = &x; //normal pointer
        const int *xp = &x; // can change &x but but its content
        int *const xp = &x; // cannot change &x but can change its content
        const int *const xp = &x; // cannot change both &x and its content
}