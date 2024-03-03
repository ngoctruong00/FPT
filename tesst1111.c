#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include <time.h>

#define MAX_LENGTH 25


// create struct to save player and player's score
struct Node{
    char Player[MAX_LENGTH];
    int one_c = 0;
    int two_c = 0;
    int three_c = 0;
    int four_c = 0;
    int score = 0;
    int number_guests;
};

void save_info_player(struct Node Table[],int &times){
    FILE *file = fopen("Player.txt", "a");
    if (file == NULL){
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < times; i++) {
        fprintf(file, "%s %d %d %d %d %d %d\n", Table[i].Player, Table[i].one_c, Table[i].two_c,Table[i].three_c, Table[i].four_c, Table[i].score, Table[i].number_guests);
    }

    fclose(file);
    
}
void printFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    struct Node PL;
    while (fscanf(file, "%s %d %d %d %d %d %d\n", PL.Player, &PL.one_c, &PL.two_c,&PL.three_c, &PL.four_c, &PL.score, &PL.number_guests) == 7) {
        printf("Name: %s, Score: %d, number_guests: %d\n", PL.Player, PL.score, PL.number_guests);
    }
	if (feof(file)) {
        printf("End of file reached.\n");
    } else if (ferror(file)) {
        perror("Error reading from file");
    }
    fclose(file);
}

// create the function random number generator
int random(int min, int max){
    return min + rand() % (max + 1 - min);
} 

// function compare magic numbers and number of players
void compare_number1(int &magic_number, struct Node Table[], int &dem,const int a[]){
    
    for(int i = 0; i < 4; i++){
        if(Table[dem].one_c == a[i]){
            printf("%d", i);
            // printf("table: %d\n",Table[dem].one_c );
            // printf("a[%d]: %d\n",i,a[i] );
            Table[dem].score += 1;
        }
		else{
            printf("-");
        }
    }
    printf("\n");
    
}
// function compare magic numbers and number of players
void compare_number2(int &magic_number, struct Node Table[], int &dem,const int a[]){
    
    for(int i = 0; i < 4; i++){
        if(Table[dem].two_c == a[i]){
            printf("%d", i);
            // printf("table: %d\n",Table[dem].two_c );
            // printf("a[%d]: %d\n",i,a[i] );
            Table[dem].score += 1;
        }
		else{
            printf("-");
        }
    }
    printf("\n");
    
}
// function compare magic numbers and number of players
void compare_number3(int &magic_number, struct Node Table[], int &dem,const int a[]){
    
    for(int i = 0; i < 4; i++){
        if(Table[dem].three_c == a[i]){
            printf("%d", i);
            // printf("table: %d\n",Table[dem].three_c );
            // printf("a[%d]: %d\n",i,a[i] );
            Table[dem].score += 1;
        }
		else{
            printf("-");
        }
    }
    printf("\n");
    
}
// function compare magic numbers and number of players
void compare_number4(int &magic_number, struct Node Table[], int &dem,const int a[]){
    
    for(int i = 0; i < 4; i++){
        if(Table[dem].four_c == a[i]){
            printf("%d", i);
            // printf("table: %d\n",Table[dem].four_c );
            // printf("a[%d]: %d\n",i,a[i] );
            Table[dem].score += 1;
        }
		else{
            printf("-");
        }
    }
    printf("\n");
    
}
// MAIN Function
int main(){
    // create a array struct to save player and player's score
    struct Node Table[100];

    // print game's name
    printf("------------Number Guesting Game------------------\n");
    
    // create the number player must guest
    // number of enter
    int dem = 0;
    int times = 1;
    char choose;
    do{
        // print request to player enter their player's name

        // create the number player must guest
	    srand((int) time(0));
	    int magic_number = random (0,9999);
	
	    int ngan = magic_number / 1000;
	    int tram = (magic_number / 100) - ngan*10;
	    int chuc = (magic_number / 10) - ngan*100 - tram*10;
	    int donvi = magic_number - ngan*1000 - tram*100 -  chuc*10;
	
	    int a[4] = {ngan, tram, chuc, donvi};
		Table[dem].number_guests = magic_number;
        printf("magic number %d\n",magic_number);
        printf("Enter your player: " );
        scanf("%s",&Table[dem].Player);

        printf("Enter number: ");
        scanf(" %d",&Table[dem].one_c);
        compare_number1(magic_number,Table,dem,a);

        printf("Enter number: ");
        scanf(" %d",&Table[dem].two_c);
        compare_number2(magic_number,Table,dem,a);

        printf("Enter number: ");
        scanf(" %d",&Table[dem].three_c);
        compare_number3(magic_number,Table,dem,a);

        printf("Enter number: ");
        scanf(" %d",&Table[dem].four_c);
        compare_number4(magic_number,Table,dem,a);
        dem++;
        if(dem == 5){
            dem = 0;
            times++;
        }
        save_info_player(Table,times);
        printf("Do you want to continue? [y/n]?");
        scanf(" %s",&choose);
    }while(choose == 'Y' || choose == 'y');
    char conti;
    printf("Do you want to print history? [y/n]?");
    scanf("%s",&conti);
    printFromFile("Player.txt");
    return 0;
}