#include <stdio.h>


int Length(char string[]) {
    int length = 0;
    int i;
    
    for ( i = 0; string[i] != NULL; i++) {
        length++;
    }
    return length;
}

int main() {
    char string[100];
    int length;

    printf("Enter any string: ");
    scanf("%s", string);

    length = Length(string);

    printf("Length is: %d\n", length);

    return 0;
}
