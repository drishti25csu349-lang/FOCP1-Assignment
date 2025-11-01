#include<stdio.h>
int main(){
    int temp,a,b;
    char choice;
    while(1){
        printf("Enter the two nos:");
    scanf("%d %d",&a,&b);
    if(b == 0 && a == 0){
        printf("the hcf is not defined ");
    }
        else{
       while (b != 0){ temp=b;
                      b=a%b;
                      a=temp;}
    }
       printf("HCF = %d\n", a);
       printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if (choice == 'N' || choice == 'n') {
            printf("Program ended.");
            break; 
        }
    }


    return 0;

}
