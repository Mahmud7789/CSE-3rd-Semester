#include<stdio.h>
int Factorial(int);
main()
{
    int item,value;

    printf("Enter item for find factorial : ");
    scanf("%d",&item);

    value=Factorial(item);
    printf("Factorial is = %d\n",value);
}
int Factorial(int N){

    if(N==1){
        return 1;
    }
    return N * Factorial(N - 1);
}
