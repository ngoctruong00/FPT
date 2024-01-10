// #include "lib.h"

#include <stdio.h>
struct Student{
    char name[100];
    int toan;
    int van;
    int anh;
    int ly;
    int hoa;
};
void input(struct Student a[], int n){
    for(int i = 0; i < n; i++){
        printf("Ten hoc sinh: \n");
        scanf("%s",&a[i].name);
        printf("Diem Toan: \n");
        scanf("%d",&a[i].toan);
        printf("Diem van: \n");
        scanf("%d",&a[i].van);
        printf("Diem anh: \n");
        scanf("%d",&a[i].anh);
        printf("Diem ly: \n");
        scanf("%d",&a[i].ly);
        printf("Diem hoa: \n");
        scanf("%d",&a[i].hoa);
    }
}
void print(struct Student a[],int n){
    for(int i = 0; i < n ; i++){
        printf("Ten hoc sinh: %s \n",a[i].name);
        printf("Diem Toan: %d\n",a[i].toan);
        printf("Diem van: %d \n",a[i].van);
        printf("Diem anh: %d\n",a[i].anh);
        printf("Diem ly: %d\n",a[i].ly);
        printf("Diem hoa: %d\n",a[i].hoa);
    }    

}
int main(){
    int n;
    struct Student student1[n];
    input(student1,2);
    print(student1,2);
    return 0;
}
