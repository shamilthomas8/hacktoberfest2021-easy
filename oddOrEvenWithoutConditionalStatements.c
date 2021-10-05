#include<stdio.h> 
int main() 
{ 
    int number; 
    printf("Enter a no: "); 
    scanf("%d", &number); 
    (number & 1 && printf("odd"))|| printf("even"); 
    return 0; 
} 