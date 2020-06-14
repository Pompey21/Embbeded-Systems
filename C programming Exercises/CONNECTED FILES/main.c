#include <stdio.h>
#include "input.c"
#include <stdlib.h>


int main(int argc, char *argv[]){
	if(argc<=1) {
        printf("You haven't passed an argument ... pass it as ./a.out X\n");
        exit(1);
    }

    int arg1 = atoi(argv[1]); 

    int a = acceptInput(arg1);
    printf("Argument passed is: %d\n", a);

}