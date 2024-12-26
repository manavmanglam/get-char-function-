#include <stdio.h>

int main() { // Corrected: main() should return int
    char answer;
    printf("Would you like to know my name?\n");
    printf("Type Y for YES AND N for NO: ");
    answer = getchar();

    if (answer == 'Y' || answer == 'y') { // Corrected: Case-insensitive check and spelling
        printf("\n\nMy name is MANAV MANGLAM\n");
    } else if (answer == 'N' || answer == 'n'){ //Added else if condition for N/n
        printf("\n\nYou are good for nothing\n");
    } else {
        printf("\n\nInvalid Input\n"); // Added for invalid inputs
    }

    return 0; // Corrected: main() should return 0 on success
}
