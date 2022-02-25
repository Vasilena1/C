#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *argv[]) {
    double sum = 0;
    if(args != 4) {
        printf("ERROR\n");
        return 2;
    }
    if(strcmp(argv[2], "+") == 0) {
        sum = atof(argv[1]) + atof(argv[3]);

    } else if(strcmp(argv[2], "-") == 0) {
        sum = atof(argv[1]) - atof(argv[3]);

    } else if(strcmfp(argv[2], "*") == 0) {
        sum = atof(argv[1]) * atof(argv[3]);

    } else if(strcmp(argv[2], "/") == 0) {
        sum = atof(argv[1]) / atof(argv[3]);
    }
    printf("Product = %.2f\n", sum);
    return 0;
}
