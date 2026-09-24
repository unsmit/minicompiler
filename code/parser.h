#ifndef PARSER_H
#define PARSER_H
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TOKENS 4

int parseLine(char *line);
typedef struct{
    char tokens[1];
} Instruction;

#endif