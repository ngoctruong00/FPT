#include <stdio.h>

// Define a structure to hold different data types
struct Element {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare an array of structures to hold different data types
    struct Element dataArray[5];

    // Initialize the elements with different values
    dataArray[0].intValue = 10;
    dataArray[1].floatValue = 3.14;
    dataArray[2].charValue = 'A';
    // You can continue initializing the remaining elements...

    // Access and print the values
    printf("Value at index 0 (int): %d\n", dataArray[0].intValue);
    printf("Value at index 1 (float): %.2f\n", dataArray[1].floatValue);
    printf("Value at index 2 (char): %c\n", dataArray[2].charValue);
    // You can continue accessing and printing the values for other elements...

    return 0;
}
