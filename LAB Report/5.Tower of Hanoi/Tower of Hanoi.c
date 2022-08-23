#include<stdio.h>

void TowerOfHanoi(int ,char,char,char);

main()
{
    int num;
    printf("Enter the number of disk : ");
    scanf("%d",&num);
    TowerOfHanoi(num,'A','C','B');

}
void TowerOfHanoi(int disk,char source,char destination,char auxiliary){

    if(disk>0){

        TowerOfHanoi(disk-1,source,auxiliary,destination);

        printf("Move disk %d from peg %c to peg %c\n ",disk,source,destination);

        TowerOfHanoi(disk-1,auxiliary,destination,source);
    }

}
