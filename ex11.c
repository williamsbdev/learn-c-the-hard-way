#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i;
    for(i = argc - 1; i > -1; i--) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    i = 0;
    while(i < 4) {
        states[i] = argv[i];
        i++;
    }

    int num_states = 4;
    i = 0;  // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
