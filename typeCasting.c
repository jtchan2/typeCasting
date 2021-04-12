#include <stdio.h>
#include <string.h>
int getSecond(void* intArr){
    int* ptr= (int*) intArr;
    
    return *(ptr+1);
}
int mod2(int* i){
    unsigned int num= (unsigned int) *i;
    num= num%2;
    return num;
}
char theLastChar(void* str){
    char *ptr= (char*) str;
    while(*ptr!=0){
        *ptr++;
    }
    *ptr--;
    return *ptr;

}
int main(void){
    int intArr[5]={20, 4, 10, 6, 5};
    printf("The second int is %d\n", getSecond((void*)intArr));
    unsigned int i= 0xfffffff1;
    printf("%u mod 2 is %d.\n", i, mod2((int*)&i));
    char str[]="USF";
    printf("The last character is %c.\n", theLastChar((void*)str));

}