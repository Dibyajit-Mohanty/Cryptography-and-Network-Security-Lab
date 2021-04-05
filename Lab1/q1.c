//Q1.Write a C program that contains a string (char pointer) with a value \Hello World’. The program should XOR each characterin this string with 0 and displays the result.

#include<stdio.h>
#include<string.h>
int main(){
        char str[13]="hello world";
        for(int a =0;a<strlen(str);a++){
        char r=str[a]^0;
        printf("%c",r);
      }
}
