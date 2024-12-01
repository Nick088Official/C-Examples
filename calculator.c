#include <stdio.h>

int main() {
    printf("Enter 1st number: \n");
    float n1;
    scanf("%f", &n1);

    printf("Enter 2nd number: \n");
    float n2;
    scanf("%f", &n2);

    printf("Enter operator: \n");
    char op;
    scanf(" %c", &op);

    float out;

    switch (op) {
        case '+':
            out = n1 + n2;
            break;
        case '-':
            out = n1 - n2;
            break;
        case '*':
            out = n1 * n2;
            break;
        case '/':
            if (n1 != 0 || n2 != 0)
                out = n1 / n2;
            else {
                printf("You can't divide by 0 \n");
                return 1;
            }
            break;
    }

    printf("%f", out);

    return 0;
}
