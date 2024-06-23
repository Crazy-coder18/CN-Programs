#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, noframes, x, x1 = 10;

    // Initialize random number generator
    for (i = 0; i < 200; i++) {
        rand();
    }

    // Determine the number of frames
    noframes = rand() / 200;
    noframes = noframes / 8;

    printf("\nNumber of frames is %d", noframes);
    getch();

    i = 1;
    j = 1;

    while (noframes > 0) {
        printf("\nSending frame %d", i);

        srand(x1++);
        x = rand() % 10;

        if (x % 2 == 0) {
            printf("\nSending frame %d", i);

            srand(x1++);
            x = rand() % 10;
        }

        printf("\nAck for frame %d", j);

        noframes -= 1;
        i++;
        j++;
    }

    printf("\nEnd of Stop and Wait protocol");

    return 0;
}
