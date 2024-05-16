#include<stdio.h>
void main()
{
    int a[3][3],c[3][3]={0},b[3][3]={0},i,j,k;

    printf("enter the first matrix\n");
    for( i=0;i<3;i++)
        for( j=0;j<3;j++)
          scanf("%d",&a[i][j]);

    printf("enter the second matrix\n");
    for( i=0;i<3;i++)
        for( j=0;j<3;j++)
          scanf("%d",&b[i][j]);

    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
         {
            int q=0,p=0;
            for( k=0;k<3;k++)
            {
                c[i][j]+= a[i][q]*b[p][j];
                p++;
                q++;
            }
         }
    }
    printf("\n New array\n");
    for( i=0;i<3;i++)
        {
            for( j=0;j<3;j++)
              printf("%d ",c[i][j]);
           printf("\n");
        }
}
