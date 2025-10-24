#include<stdio.h>
#include<math.h>
int main(){
int number;
int sum = 0;
int digits=0,armstrong,temp,eachdigit=0;
 printf("Enter the number:");
scanf("%d",&number);
for (temp = number;temp !=0 ;temp/=10)
digits++;
for(temp = number;temp !=0 ;temp/=10){
    eachdigit=temp%10;
  int power = 1;
  for (int i = 0; i < digits; i++){
     power = power * eachdigit;
  }
        sum += power;
}
if (sum == number){
    printf("the given number is armstrong number ");
}
else{
        printf("the given number is not a armstrong number ");
}
return 0;
}
