#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
    printf("The rugment supplied is %s\n", argv[1]);
    printf("Number of arguments is %d\n", argc);
    int start=1;
    int sum=0;
    int holder=0;
    while(start<argc){
        const char* ch1=argv[start];
        holder=atoi(ch1);
        sum+=holder;
        start++;
    }
    printf("Sum is %d\n", sum);
}