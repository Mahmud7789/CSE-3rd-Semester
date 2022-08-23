#include<stdio.h>

int LinearSearch();

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
    printf("\nEnter element for linear search : ");
    scanf("%d",&item);

    found=LinearSearch(array,size,item);

    if(found==-1){
        printf("\nItem %d is not Found in this Array\n",item);
    }
    else{
        printf("\nItem %d found at index = %d\n",item,found);
    }


}

int LinearSearch(int array[],int size,int item){

    int i;
    for(i=0;i<size;i++){
        if(array[i]==item){
            return i;
        }
    }
    return -1;

}
