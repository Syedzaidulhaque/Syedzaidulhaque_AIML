#include<stdio.h>
int main (){
    int n;
    int EvenCount=0;
    int OddCount=0;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            EvenCount++;
            
        }
        else{
            OddCount++;
        }

    }
    printf("%d is EvenCOunt \n",EvenCount);
    printf("%d is OddCount \n",OddCount);
}