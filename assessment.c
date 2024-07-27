#include<stdio.h>
main()
{
	int m1[3][3], m2[3][3], m3[3][3];
	int i, j, k;
	
	printf("-------Matrix-1-------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\t Enter elements = ");
			scanf("%d",&m1[i][j]);	
		}
	}
	
	printf("-------Matrix-2-------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\t Enter elements = ");
			scanf("%d",&m2[i][j]);	
		}
	}
	
	
	// Multiplication
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			m3[i][j]=0;
			for(k=0; k<2; k++)
			{
				m3[i][j]+=m1[i][k] * m2[k][j];
			}
		}
	}
	
	printf("-------result-------");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m3[i][j]);	
		}
		printf("\n");
	}
	
}
