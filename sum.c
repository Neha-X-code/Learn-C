#include<stdio.h> //preprocessor directive
int main()
{
    int a,b;
    int sum = 0;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum is %d",sum);
    return 0;
}