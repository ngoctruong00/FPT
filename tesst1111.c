#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 24
typedef struct{
    int ID[60000];
    char FULL_NAME[MAX_STRING_LENGTH];
    float AVERAGE_MARK;
} table;

// write to a strudent to text
void write_student_to_text_file(FILE *fp, const table *tb){
    fprintf(fp,"%d %s %f\n",tb->ID,tb->FULL_NAME,tb->AVERAGE_MARK);
}
// read to a strudent to text
void read_student_to_text_file(FILE *fp,table *tb){
    fscanf(fp,"%d %s %f\n",tb->ID,tb->FULL_NAME,tb->AVERAGE_MARK);
}
// write to a strudent to binary
// read to a strudent to binary


int main() {

    // input each student from keyboard.
    FILE *fp;
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    char choice,view_all;
    table tb;
    do{
    printf("Studen information: ");                 //input information strudent
    printf("Student ID: ");
    scanf("%d",&tb.ID);
    fflush(stdin);
    printf("Student FULL_NAME: ");
    fgets(tb.FULL_NAME, MAX_STRING_LENGTH, stdin);
    tb.FULL_NAME[strcspn(tb.FULL_NAME, "\n")] != '\0'; // Remove trailing newline
    printf("Student AVERAGE_MARK: ");
    scanf("%f",&tb.AVERAGE_MARK);

    // save information student into file.txt
    fp = fopen("table.txt", "a");
    // write to a strudent to text
    write_student_to_text_file(fp, &tb);


    printf("DO YOU WANT INPUT THE NEXT STUDENT?");
    printf("Y OR N?");
    scanf("%d",&choice);
    }while(choice == 'Y' || choice == 'y');

    printf("Do you want to view all students (y/n)? ");
    scanf(" %c", &view_all);

    if(view_all == 'y' || view_all == 'Y'){
        fp = fopen("table.txt", "r");
        printf("%d %s %.2f\n", tb.ID, tb.FULL_NAME, tb.AVERAGE_MARK);
    }
    return 0;
}
