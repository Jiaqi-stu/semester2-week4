
#include <stdio.h>
#include <string.h>

int main( void ) {

    // define suitable data
    int num1, num2;
    char operation;
    int result;
    char buffer[100];
    // use scanf to read from the terminal
    printf("Enter expression: ");
    fgets(buffer, sizeof(buffer), stdin);

    result = sscanf(buffer, "%d %c %d =", &num1,&operation, &num2);
    // print the output from scanf and the data values 
    printf("sscanf value: %d\n", result);
    printf("num1 value: %d\n", num1);
    printf("num2 value: %d\n", num2);
    if (operation=='+'){
        printf("%d\n",num1+num2);
    }

    return 0;
}