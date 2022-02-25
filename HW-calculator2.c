#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *argv[]) {
    double num1;
    char ch;
    double num2;
    double sum;
    if(args > 1) {
        printf("ERROR!\n");
        return 2;
    }
    while( scanf("%lf %c %lf", &num1, &ch, &num2) != EOF) {
        if(ch == '+') {
            sum = num1 + num2;
        } else if(ch == '-') {
            sum = num1 - num2;
        } else if(ch == '*') {
            sum = num1 * num2;
        } else if(ch == '/') {
            sum = num1 / num2;
        } else {
            printf("There is no function: '%c' in this calculator!\n", ch);
            return 2;
        }
        printf("Product = %.2lf\n", sum);
    }
}
