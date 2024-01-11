// #include "lib.h"

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "             hello world toi ten la ngoc truong ";
    int a = strlen(str);
    int word = 0;
    for(int i = 0; i < a; i++){
        if(str[i] == ' ' && str[i+1] == ' '){
            continue;
        }
        else if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            word++;
        }
        else{
            continue;
        }
    }
    printf("so tu trong chuoi:  %d",word);
    return 0;
}
