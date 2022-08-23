//Bubbble sort Algorithm.
#include<stdio.h>
void BubbleSort();
void PrintArray();

main(){
    int size,i;
    printf("Enter arry size : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter array element : \n");
    for(i=0;i<size;i++){

        printf("Element [%d] = ",i);

        scanf("%d",&array[i]);
    }
    BubbleSort(array,size);
}
void BubbleSort(int array[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1] = temp;
            }
        }
    }
    PrintArray(array,size);
}
    //user define function for print array.

void PrintArray(int arr[],int size){
    int i;
    printf("Sorted Array is : {");
    for(i=0;i<size;i++){
    printf(" %d, ",arr[i]);
    }
    printf("}");
}
