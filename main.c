#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>

int main()
{
       int i;
       float a, b, c, x, y, d, s;
printf("This program will solve the quadratic equation in the form ax^2+bx+c.\n");
printf("\nEnter a value for a: ");
scanf("%f", &a);
printf("Enter a value for b: ");
scanf("%f", &b);
printf("Enter a value for c: "); //Scans variables of a,b and c to be used in solution
scanf("%f", &c);

d=(b*b)-(4*a*c); //General solution for the discriminant prescribed to the variable d

if(d>0) //Solving for 2 solutions of x
{
    s=0.5*(d+d/d);
    for( i=1; i<21; i++) //Iterates the squareroot formula to provide accurate answer
    {
    s=0.5*(s+d/s); //Babylonion method for solving squareroot
    //printf("%d", i);
    }
    getch();
    //printf("%f", s);
    printf("\nThere are 2 solutions.\n");
    x = (-1*b + s)/(2*a);
    y = (-1*b - s)/(2*a);
    printf("The 2 solutions for x are: %f and %f\n", x, y);
    return 0;
}
else if(d==0) //General solution for 1 value of x
{
    printf("\nThere is 1 solution.\n");
    x = (-1*b)/(2*a);
    printf("The solution for x is: %f\n", x);
    return 0;
}
else if(d<0)
{
    printf("\nThere are no solutions for x.\n");
    return 0;
}

return 0;

}
