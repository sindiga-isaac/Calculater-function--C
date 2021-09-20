#include<stdio.h>

int main() {
    int num1, num2, addition, multiplication, division;
    
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the second number:\n");
    scanf("%d",num2);
    
    addition=num1+num2;
    multiplication=num1*num2;
    division=num1/num2;
    
    printf("Answer of additionis:%d\n",addition);
    printf("Answer of multiplication is:%d\n",multiplication);
    printf("Answer of division is:%d\n",division);
    return 0;
}