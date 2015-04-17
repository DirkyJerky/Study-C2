#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_BUF 512

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

#define PWR_TYPE float
#define PWR_CHAR "%f"
#define PWR_CONV atof

int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("Usage: %s <base> <power>\n", argv[0]);
        exit(1);
    }    
    
    PWR_TYPE base = PWR_CONV(argv[1]);
    int power = atoi(argv[2]);

    

    PWR_TYPE result = 1;
    int i;
    for(i = 0; i < power; i++) {
        result *= base;
    }

    printf( "(" PWR_CHAR ")^(%d) = " PWR_CHAR "\n", base, power, result);
    return 0;
}
