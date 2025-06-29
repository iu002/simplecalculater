#include <stdio.h>

void main() {
    int x, y, z;
    char ch;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &ch); 

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch(ch) {
        case '+':
            z = x + y;
            printf("%d + %d = %d\n", x, y, z);
            break;

        case '-':
            z = x - y;
            printf("%d - %d = %d\n", x, y, z);
            break;

        case '*':
            z = x * y;
            printf("%d * %d = %d\n", x, y, z);
            break;

        case '/':
            if (y != 0) {
                z = x / y;
                printf("%d / %d = %d\n", x, y, z);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (y != 0) {
                z = x % y;
                printf("%d %% %d = %d\n", x, y, z); 
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }
}
