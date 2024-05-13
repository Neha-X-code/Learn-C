// #include<stdio.h>
// int main()
// {
//     int side,area;
//     printf("Enter the side of square: ");
//     scanf("%d",&side);
//     area = side*side;
//     printf("The area of square is %d",area);
//     return 0;
// }

#include<stdio.h> //preprocessor directive
int main()
{
    float radius;
    printf("Enter the radius of cirle: ");
    scanf("%f",&radius);
    printf("The area of circle is %f",3.14*radius*radius);
    return 0;
}

/*
first declare then use
int x = y = z  = 4 is not valid
int oldAge = 22;
int newAge = oldAge+years;
int years;
the above code is also not valid as years is declared after
a = b^c is not valid use pow(b,c) (#include<math.h>)
int op float gives float (take larger)
conversion implicit and explicit (float or double cant be stored in int only vice versa is possible so we forcefully use type conversion like 
int a = (int)1.9999; this only stores 1 

operator precedence
()
*,/,%
+,-
=
associativity 
left to right
*/