//
// Created by osele on 8/30/2025.
//
#include <stdio.h>
#include <stdlib.h>



char* rand_string(int length)
{
    char* randomWord = malloc(length + 1); // memory assignment
    if (randomWord == NULL) {return NULL;} // mem assign success?
    randomWord[length] = '\0'; // terminatorrrrrr

    for (int i = 0; i < length; i++)
    {
        randomWord[i] = ('A'+ rand() % 26); // Random Letter gen
    }

    return randomWord;
}
