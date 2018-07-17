#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

    int i;

    printf("Enter an integer: ");
    scanf("%d \n", i);
    int input = i;
    int divisor = 2;

    while(input/divisor != 1){
        input = input/divisor;
        divisor++;
        if(input/divisor < 1){
            printf("%d NONE\n", i);
            exit(1);
        }
    }

    printf("%d = %d!\n", i, input);
    exit(0);

}