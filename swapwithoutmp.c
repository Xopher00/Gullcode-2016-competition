#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <ctype.h>

int main(){

int a;
int b;

printf("Enter 'a': ");
scanf("%d", &a);
printf("Enter 'b': ");
scanf("%d", &b);

a = a - b;//a = 4 - 6 = -2
b = b + a;//b = 6 + -2 = 4
a = -1 * (a - b);//a = -1 * (-2 - 4) = -1 * -6 = 6

printf("a: %d\n", a);
printf("b: %d\n", b);

exit(0);
}