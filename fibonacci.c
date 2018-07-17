#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(){

int n, i, y, fib1 = 0, fib2 = 1;

printf("Iterate how many times? ");
scanf("%d", &n);



for(i = 1; i <= n; i++){
    y = fib2;//save second fib in temp var
    if(i == 1)
        fib2 = 1;
    else{
        fib2 = fib1 + fib2;//next number in the sequence is the sum of the two previous numbers
        fib1 = y;}////first fib becomes previous second fib- this way the values in the sequence continue shifting back
    printf("%d : %d\n", i, fib2);
}

exit(0);
}
