// #include "lib.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *arr = (int *)malloc(100*sizeof(int));

void change_int_binary(int a){
    for(int i = 0; i < 100; i++){
        arr[i] = a % 2;
        a = a / 2;
    }
    for(int i = 0; i < 100; i++){
        printf("%d",arr[i]);
    }
}

int main(){
    if(ptr == NULL){
        printf("cannot allocate memory");
    }
    unsigned int a;
    printf("nhap a: \n");
    scanf("%d",&a);
    change_int_binary(a);
    return 0;
}
