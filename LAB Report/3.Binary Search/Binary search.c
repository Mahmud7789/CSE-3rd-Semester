#include<stdio.h>

int BinarySearch();

main()
{
    int item,size,found,i;

    printf("Enter array size : ");
    scanf("%d",&size);

    int array[size];

    printf("Enter array element : \n");

    for(i=0;i<size;i++){
        printf("INDEX [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter element for Binary search : ");
    scanf("%d",&item);

    found=BinarySearch(array,size,item);

    if(found==-1){
        printf("\nItem %d is not Found in this Array\n",item);
    }
    else{
        printf("\nItem %d found at index = %d\n",item,found);
    }


}

int BinarySearch(int array[],int size,int item){

    int low,top,mid;
    low=0;
    top=size-1;
    while((low<=top)&&(array[mid]!=item)){
        mid=(low+top)/2;
        if(array[mid]==item){
           return mid;
        }
        if(array[mid]<item){
            low=mid+1;
        }
        else{
            top=mid-1;
        }
    }
    return -1;


}
