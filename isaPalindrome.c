#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <strings.h>
#include <ctype.h>

int main(){

/*----*/int* pal;
        char *str;

        printf("****************************************\n");
/*----*/printf("* WELCOME TO THE PALINDROME CALCULATOR *\n");
        printf("****************************************\n");

/*----*/printf("Please enter a number: ");
        scanf("%s", &str);

        int j = strlen(&str);
/*----*/int d = 0;

/*----*/while( d < j){
        sscanf(&str[d], "%d", &pal[d]);
/*----*/printf("test");
        d++;
/*----*/}

/*----*/int i = 0;
/*----*/while(pal[i] == pal[j]){
                i++;
                j--;
/*----*/}

/*----*/if(pal[i] != pal[j])
            printf("%d is not a palindrome\n", pal);
/*----*/else
            printf("%d is a palindrome\n", pal);

        printf("****************************************\n");
/*----*/printf("* PALINDROME CALCULATOR IS FINISHED *\n");
        printf("****************************************\n");

/*----*/exit(0);

}
