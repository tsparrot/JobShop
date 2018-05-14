//
// Created by JmPotato on 2018/5/9.
//

#ifndef JOBSHOP_IN_H
#define JOBSHOP_IN_H

#include <stdio.h>

typedef struct item {
    int id;
    int ** schedule;
} ITEM;

typedef struct machine {
    int id;
    int ** schedule;
} MACHINE;

int * readIuputHeader(FILE * input_txt);    //Read the first line of input.txt to get the numbers of items and machines
ITEM * initializeIiems(FILE * input_txt, int n);  //To build a struct array of items
MACHINE * initializeMachines(FILE * input_txt, int m);    //To build a struct array of machines

#endif //JOBSHOP_IN_H
