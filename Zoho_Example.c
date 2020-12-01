#include<stdio.h>

int main()
{
	
	
	int i ,j,n ,number=1,k;
	
	scanf("%d",&n);
	
	
	
	for(i=0;i<=n;i++)
	{
		
		
		for(j=n-1;j>=i;j--)
		{
				printf(" ");
				
		}
		
		
		for(k=1;k<=i;k++)
		{
			printf("%d",number);
			++number;
		}
		
		printf("\n");
	
	}
	
	return 0;
}
