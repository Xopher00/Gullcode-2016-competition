#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

int sum = 0;

int i;
for(i = 100; i < 150; i++){
    int divisor;
    if(i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0)
        continue;       //add together all primes between 100 and 150
    else{
       // printf("%d ", i);
        sum = sum + i;}
}

sum = sum * 2;//take sum and multipy by 2

//printf("%d ", sum);

int j;
for(j = 250; j < 350; j++){
    int divisor;
    if(j%2 == 0 || j%3 == 0 || j%5 == 0 || j%7 == 0)
        continue;
    else{
       // printf("%d ", j);
        sum = sum + j;}        //add primes between 250 and 350 to that number
}

sum = sum/5; //divide sum by 5

int f;
for(f = 700; f < 800; f++){
    int divisor;
    if(f%2 == 0 || f%3 == 0 || f%5 == 0 || f%7 == 0)
        continue;
    else
        sum = sum + f;        //add primes between 700 and 800 to that number
}

printf("%d", sum);

exit(0);
}