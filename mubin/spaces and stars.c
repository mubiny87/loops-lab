#include<stdio.h>
main()
{
    int i , j , k ;
    for(i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<i ; j++)
        {
                printf("O");
        }
        for(k=7; k>=(2*i)-1; k--)
        {

                printf("*");
        }


    printf("\n");
    }
}
