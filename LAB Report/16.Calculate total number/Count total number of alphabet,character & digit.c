#include <stdio.h>
#define MAX_SIZE 100

void countTotalNumber();

int main()
{
    char str[MAX_SIZE];

    printf("Enter any String : ");
    gets(str);

    countTotalNumber(str);

    return 0;
}

void countTotalNumber(char str[])
{
    int alphabets, digits, others, i;

    alphabets = digits = others = i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){

            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9'){

            digits++;
        }
        else{

            others++;
        }

        i++;
    }
    printf("\nNumber of Alphabets in the string is : %d\n",alphabets);

    printf("\nNumber of Digits in the string is : %d\n",digits);

    printf("\nNumber of Special characters in the string is : %d\n",others);
}
