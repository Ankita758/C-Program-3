#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter The Number Of Rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		printf("\n");
		for(j=0;j<2*i;j++)
		{
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
	}
  return 0;
}
