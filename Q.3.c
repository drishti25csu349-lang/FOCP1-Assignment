#include <stdio.h>
int main() {
 int a,b;
   printf("Enter the first number for subtraction: ");
   scanf("%d",&a);
     printf("Enter the second number for subtraction: ");
     scanf("%d",&b);
     int diff = a+(~b+1);
     printf("the difference is %d",diff);
return 0;
         }
// in the above the (~) uses the bitwise value of the entered number and then ~b+1 is the command for subtraction in bitwise only.
// for example if we enter b=5 then ~b = 10001(say)and then ~b+1 converts into -5
