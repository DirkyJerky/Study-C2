#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_BUF 512

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        exit(1);
    }    
    
}
