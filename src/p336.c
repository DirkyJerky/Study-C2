#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX_BUF 512

#define demo_int(X) printf( #X " -> %d\n", (X) );
#define demo_string(X) printf( #X " -> %s\n", (X) );
#define demo_float(X) printf( #X " -> %f\n", (X) );
#define demo(X) demo_int(X)

#define PRINT_ARRAY 1

int comp(const void *i, const void *j) {
    return *((int*) i) - *((int*) j);        
}                              
                               
int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        exit(1);
    }    
    
    int sort[100];
    int i;
    
    srand(time(NULL));
    for(i = 0; i < 100; i++) {
        sort[i] = rand() % 100;
    }

    qsort(sort, 100, sizeof(int), comp);

  #if PRINT_ARRAY == 1
    for(i = 0; i < 100; i++) {
        printf("%d\n", sort[i]);
    }
  #endif

    int input = atoi(argv[1]);
    bool included = !(bsearch(&input, sort, 100, sizeof(int), comp) == NULL);
    printf("sort[100] %s the number %d.\n", (included ? "contains" : "does not contain"), input);

    return 0;
}
