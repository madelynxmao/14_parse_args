#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Write a function that uses strep to parse a line of arguments
//Return an array of pointers to each individual argument in the parameter string, 
//that could be used for execvp()

char ** parse_args( char * line ){
    int n = strlen(line);

    char ** array_pointers = malloc(sizeof(char *) * n);

    int i;
    for(int i = 0; i < n; i++){
        array_pointers[i] = &line[i];
        printf("%p, ", array_pointers[i]);
    }
    printf("\n");

    return array_pointers;

}
