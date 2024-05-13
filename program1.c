#include<stdio.h> //preprocessor directive
int main()
{
    int num = 25;
    char star = '*';
    int age = 22;
    float pi = 3.14;
    int A = 40;
    int final_price = 100.0;
    printf("age is %d \n",age); // %d is format specifiers
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);// & is used to specify the address where the mark is stored
    printf("Your mark is %d\n",marks);
    return 0;
}
//Variables are case sensitive, could only start with alphabet or _
//no space or comma allowed
//no other symbol other than _