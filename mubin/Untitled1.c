#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=4;i++)
        {
                for(j=1;j<=i;j++)
                {
                   if(j==1)
                   {
                       printf("1");
                   }
                   else if (j==2)
                    {
                        printf("2");
                    }
                    else if(j==3)
                    {
                        printf("3");
                    }
                    else if (j==4)
                    printf("4");
                }




                printf("\n");
        }


    return 0;
}
