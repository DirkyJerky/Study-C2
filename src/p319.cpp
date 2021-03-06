#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_BUF 512

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

#define abs_i(X) ((X) < 0) ? -(X) : (X)

int main(int argc, char *argv[]) {
    demo(abs_i(5))
    demo(abs_i(45))
    demo(abs_i(-5))
    demo(abs_i(0))
    return 0;
}
