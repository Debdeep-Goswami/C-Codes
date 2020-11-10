#include<stdio.h>
#include<math.h>
 

int diagonalDifference(int arr_rows, int arr_columns, int arr[3][3]) 
{
    int i,j;
    int lsum=0;
    int rsum=0;
    
    for(i=0;i<arr_rows;i++)
        lsum=lsum+arr[i][i];
	
	i=0;
    for(j=arr_columns-1;j>=0;j--)
		rsum=rsum+arr[i++][j];
	
	
    return(abs(lsum-rsum));

}
int main()
{
	int arr2[3][3]={11,2,4,4,5,6,10,8,-12};
	printf("\n The magnitude of the Diagonal Sum Difference is %d\n",diagonalDifference(3,3,arr2));
	return 0;
}
