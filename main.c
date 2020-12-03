#include <unistd.h>
#include "get_argumentative.h"
#include <stdio.h>

int main(){
    char line[] = "ls -a -l";
    char **args = parse_args(line);
    execvp(args[0], args);

    return 0;
}
