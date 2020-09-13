#include<stdio.h>

void halfPiramid1(int nor)
{
    int i,j;
    for(i=0;i<nor;i++)
    {
        for(j=0;j<=i;j++)
            printf("* ");   	//  With gaps in between
            //printf("*");  	//  With no gaps
        printf("\n");
    }
}

void halfPiramid2(int nor)
{
    int i,j,k;
    for(i=1;i<=nor;i++)
    {
        for(j=0;j<nor-i;j++)
            printf(" ");

        for(k=0;k<i;k++)
            printf("* "); 		//  Full Piramid with gaps in between
            //printf(" *"); 	//  Full Piramid with piramid inside piramid
            //printf(" * ");

        printf("\n");
    }
}

int main()
{
    int nor;

    printf("\nEnter the number of rows = ");
    scanf("%d",&nor);

    halfPiramid1(nor);
    halfPiramid2(nor);
    //piramid(nor);

    return 0;
}