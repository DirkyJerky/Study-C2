#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "common.h"
#define MAX_BUF 512

char *reverseString(char *str, int count) {
    int len = strlen(str);

    if(count <= 0 || count > len) {
        return NULL;
    }

    char *ptr = (char*) malloc(len);
    strcpy(ptr, str);

    int bot;
    int top = count - 1;
    int reps = (int) (ceil(count / 2.0));
    for(bot = 0; bot < reps; bot++, top--) {
        char temp = ptr[bot];
        ptr[bot] = ptr[top];
        ptr[top] = temp;
    }  
    return ptr;
}

int main(int argc, char *argv[]) {
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 5));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 9));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 2));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 15));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 25));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 0));
    demo_string(reverseString("abcdefghijklmnopqrstuvwxyz", 100));
}
