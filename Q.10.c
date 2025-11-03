#include<stdio.h>
int main()
{
    int n , count=0 ;
    printf("enter the numberof students");
    scanf("%d",&n);
    int marks[n];
    printf("enter marks of %d students",n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&marks[i]);
    }
      int students[count];
    for(int i=0;i<n;i++)
    {
        if(marks[i]==99)
        {
            count++;
            students[i]=i+1;
        }
    }
    printf("The number of students who scored 99 marks = %d",count);
    printf("\n students who scored 99 have roll no -");
    for(int j =0;j<count;j++)
    {
        printf("%d",students[count]);
    }
    return 0;
}
