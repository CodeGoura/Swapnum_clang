// Swap two number without using 3rd variable... & using 3rd Variable....
// import of header file standard input and out put....
#include <stdio.h>
// main branch.....
int main()
{
    //declar variable.
    int num1,num2;
    printf("please Enter 1st num :\n");
    scanf("%d",&num1);
    printf("please Enter 2nd num :\n");
    scanf("%d",&num2);
    //calculation.....
    num1 = num1 - num2; 
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("number after swap 1st value is %d \n",num1);
    printf("number after swap 2nd value is %d",num2);
    
}