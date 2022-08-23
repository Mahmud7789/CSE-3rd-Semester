#include<stdio.h>

void FindMaxMin();

main()
{
    int size,i;

    printf("Enter Array Size : ");
    scanf("%d",&size);

    int array[size];

    printf("Enter Array Element : \n");
    for(i=0;i<size;i++){

        printf("INDEX [%d] = ",i);

        scanf("%d",&array[i]);
    }
    FindMaxMin(array,size);
}

void FindMaxMin(int array[],int size){

    int max,min,i;
    max = array[0];
    min = array[0];

    for(i=1;i<size;i++){
        if(array[i]>max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
    }
    printf("Maximum Value from given Array is = %d\n",max);
    printf("Minimum Value from given Array is = %d\n",min);

}
