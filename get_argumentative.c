#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Write a function that uses strep to parse a line of arguments
//Return an array of pointers to each individual argument in the parameter string, 
//that could be used for execvp()

char ** parse_args( char * line ){
    int n = strlen(line);

    char ** array_pointers = malloc(sizeof(char *) * n);
    char *command;
    int i = 0;
    while(line) {
        command = strsep(&line, " ");
        array_pointers[i] = command;
        i++;
    }
    printf("\n");

    free(array_pointers);

    return array_pointers;

}    
