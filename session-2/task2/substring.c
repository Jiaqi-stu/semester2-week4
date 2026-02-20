/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 //  Hints:
 //1. include the appropriate libraries
 #include <stdio.h>
 #include <string.h>
 //2. create the main function
 int main(void) {
 //3. define the program data as strings
    char str[] = "The quick brown fox jumped over the lazy dog";
    char substr[] = "ump";
 //4. using the string library documentation find the appropriate string function
    char *ptr = strstr(str, substr);
 //5. implement the solution and compute the answer  
    if (ptr != NULL) {
        printf("找到子字符串！\n\n");
 //6. print the answer appropriately as pointer, character and string
        // 以指针形式输出（地址）
        printf("指针地址: %p\n", (void *)ptr);
        // 以字符形式输出（找到位置的第一个字符）
        printf("该位置的第一个字符: %c\n", *ptr);
        // 以字符串形式输出（从匹配处开始的字符串）
        printf("从匹配处开始的字符串: %s\n", ptr);
        // 输出索引位置
        printf("索引位置: %ld\n", ptr - str);
    }
    else {
        printf("未找到子字符串。\n");
    }
 
 return 0;
 }