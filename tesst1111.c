/*Pointer advance assignment

Cho một mảng gồm 20 bytes “uint8_t assignment4[20] = {0xFF, 0xFF,…,0xFF}” dùng để lưu trữ các giá trị từ 0 đến 100.

Dùng danh sách liên kết đơn để quản lý các phần tử trong mảng theo giá trị từ thấp đến cao và viết “menu” chương trình cho phép người dùng:

+ Nhập 1 giá trị vào 1 phần tử chỉ định của mảng trên (Dùng phím 1 để chọn option này)
    Vị trí từ 0 đến 19. Báo lỗi nếu:
        Vị trí người dùng chọn ngoài khoảng 0 đến 19
        Vi trí đã được nhập rồi.
    Giá trị từ 0 đến 100. Báo lỗi nếu:
        Giá trị người dùng chọn ngoài khoảng 0 đến 100
        Giá trị người dùng chọn đã tồn tại ở trong mảng.
+ Xóa 1 giá trị nào đó trong mảng trên (Dùng phím 2 để chọn option này)
    Sau khi chọn option này, người dùng sẽ chọn 1 giá trị từ 0 đến 100 để xóa, ví dụ người dùng chọn 50:
        Nếu giá trị này nằm trong mảng trên thì xóa phần tử này khỏi mảng.
        Nếu giá trị này không nằm trong mảng, báo lỗi không tồn tại.
    Nếu giá trị người dùng chọn ngoài khoảng từ 0 đến 100, báo lỗi giá trị chọn không đúng.
+ In giá trị các phần tử được nhập vào mảng (Dùng phím 3 để chọn option này)
    Sau khi chọn option này, người dùng chọn
        1: In các giá trị đã được nhập của mảng khi chưa sắp xếp từ thấp đến cao.
        2: In các giá trị đã được nhập của mảng sau khi đã sắp xếp (dùng danh sách liên kết đơn theo yêu cầu ban đầu).
Kết thúc chương trình (Dùng phím 4 để chọn option này).

Chú ý: Không được dùng các hàm cấp phát bộ nhớ động.*/




#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

struct Array{
    int data;
    struct Array* next;
};

// insert_value
void insert_value(uint8_t a[],int position,int value){
    //check range
    if(position > 19 && position < 0){
        printf("Position is out of range");
    }
    // check available position
    if(value != 0xFF){
        printf("This location has a value entered");
    }
    // check value
    if( value < 0  && value > 100)
        printf("Value is out of range");
    }
    // check  value exists or not
    struct Array* head = &a[0];
    head->data = a[0];
    head->next = NULL;

    struct Array* root = head;
    while (current != NULL) {
        if (current->data == value) {
            printf("Lỗi: Giá trị đã tồn tại trong mảng.\n");
        }
        current = current->next;
    }
    assignment4[position] = value;
}


// MAIN Function
int main(){
    uint8_t assignment4[20] = = {0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFF,0xFF, 0xFFF}; // array have 20 element
    uint8_t value;
    uint8_t position;
    int choice;
    printf("\nMenu:\n");
    printf("1. Insert value\n");
    printf("2. Delete value\n");
    printf("3. Print array\n");
    printf("4. Exit\n");
    printf("Select an option: ");
    scanf("%d",&choice);
    switch (choice){
        case 1 :
            printf("Enter position: ");
            scanf("%d", &position);
            printf("Enter value (0 to 100): ");
            scanf("%d", &value);
            insert_value(position,value);
            break;
        case 2 :
            break;
        case 3 :
            break;
        case 4 :
            break;
        default:
            break
    }
    return 0;
}