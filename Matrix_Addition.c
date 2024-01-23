#include <stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat_1[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat_1[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	int mat_2[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat_2[i][j]);
		}
	}
	for(i=0;i<a,i<r;i++)
	{
		for(j=0;j<b,j<c;j++)
		{
			printf("%d ",mat_1[i][j]+mat_2[i][j]);
		}
		printf("
");
	}
}