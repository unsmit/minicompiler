#include <stdio.h>

#include "parser.h"

int main() {

    char line[] = "ADD X1,X2,";

    Instruction instruction;

    if(!parseLine(line, &instruction)){
        return 0;
    }
    

    for (int i = 0; i < 4; i++) {
        
        printf("Token %d: %s\n", i, instruction.tokens[i]);

    }

    return 0;

}