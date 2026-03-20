#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("You entered One.\\n");
            break;
        case 2:
            printf("You entered Two.\\n");
            break;
        case 3:
            printf("You entered Three.\\n");
            break;
        default:
            printf("You entered something other than 1, 2, or 3.\\n");
    }

    return 0;
}
