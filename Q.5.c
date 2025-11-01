
#include<stdio.h>
int main(){
    int xcoordinate, ycoordinate;
    printf("Enter the x-coordinate:");
    scanf("%d",&xcoordinate);
        printf("Enter the y-coordinate:");
    scanf("%d",&ycoordinate);
    if (xcoordinate>0 && ycoordinate>0 ){
        printf("The point lies in the first quadrant.");
    }
        else if(xcoordinate<0 && ycoordinate<0){
           printf("The point lies in the third quadrant.");   
        }
         else if(xcoordinate ==0 && ycoordinate<0){
           printf("The point lies on the x-axis.");   
        }

           else if(ycoordinate==0 && xcoordinate<0){
           printf("The point lies on the y-axis.");   
        }
        
        else if(xcoordinate>0 && ycoordinate<0){
           printf("The point lies in the fourth quadrant.");  
        }  
        else if(xcoordinate<0 && ycoordinate>0){
           printf("The point lies in the second quadrant.");   
        }
        else if (xcoordinate == 0 && ycoordinate == 0){
           printf("The point lies on the origin.");  
        }
return 0;
    }
