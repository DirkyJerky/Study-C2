#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class string {
    private:
        char *p;
        int len;

    public:
        string(char *ptr) {
            len = strlen(ptr);
            if((p = (char *) malloc(len + 1)) == NULL) {
                println("Allocation error");
                exit(1);
            }
            p = strcpy(p, ptr);
        };

        void show() {
            printf("String: %s\n", p);
        };
        
        friend char* getString(string str);
};
 
char* getString(string str) {
    return str.p;
};

int main(int argc, char *argv[]) {
    demo_void(string s1("Test1"));
    demo_string(getString(s1));
    demo_void(s1.show());
    
}
