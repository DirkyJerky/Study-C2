#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctype.h>
#include "common.h"
#define MAX_BUF 512

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        exit(1);
    }

    std::ifstream fin(argv[1]);

    if(!fin) {
        println("Error opening file \"" << argv[1] << '"' << std::endl);
    }

    fin.unsetf(std::ios::skipws);

    int numWords = 0;
    char temp;
    bool onWord = false;

    while(!fin.eof()) {
        fin >> temp;
        if(isspace(temp)) {
            if(onWord) {
                // After end of word
                // Starting Whitespace

                onWord = false;
                numWords++;
            } else {
                // In consecutive whitespace
                // NOOP
            }
        } else {
            if(onWord) {
                // In consecutive word
                // NOOP
            } else {
                // After end of whitespace
                // Starting Word
                onWord = true;
            }
        }
    }

    println("There are " << numWords << " whitespace deliminated words in file \"" << argv[1] << '"');
}
