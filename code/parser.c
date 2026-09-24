#include "parser.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NUM_INSTRUCTIONS 17

const char *VALID_INSTRUCTIONS[NUM_INSTRUCTIONS] = {
    "NOP",
    "ADD",
    "ADDI",
    "SUB",
    "SUBI",
    "MUL",
    "MULI",
    "DIV",
    "DIVI",
    "LD",
    "ST",
    "EXIT",
    "MOV",
    "B",
    "CBZ",
    "CBNZ",
    "CBNEG"
};

int parseLine(char *line, Instruction *instruction){
    int lineIndex = 0; // position in line
    int tokenIndex = 0; // which token
    int charIndex = 0; // position in token
    char c = line[lineIndex]; // current char
    char k; // temp char

    while(c != '\0'){
        k = c;
        while(k != ' ' && k != ','){
            instruction->tokens[lineIndex][tokenIndex] = f;
            k = line[charIndex];
            charIndex++;
            tokenIndex++;
        }

        lineIndex++;
        c = line[lineIndex];
    }
}