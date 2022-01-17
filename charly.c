#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str[] = "Valores: 42 44 32 16 50 55 60";

    char *token = strtok(str, " "); 

    int vec[8];
    int i=0;

    while (token != NULL) { 
        printf("'%s'\n", token); 
        token = strtok(NULL, " "); 
        if(token != NULL) {
            vec[i]=atoi(token);
            printf("%d -- ", vec[i]);
            i+=1;
        }
    } 

    return 0; 
}