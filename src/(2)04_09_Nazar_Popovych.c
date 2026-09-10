#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Nazar";
    char f_letter = name[0];
    char l_letter = name[strlen(name) - 1]; 

    printf("Your name is: %s\n", name);
    printf("The first letter of your name is: %c\n", f_letter);
    printf("The last letter of your name is: %c\n", l_letter);

}