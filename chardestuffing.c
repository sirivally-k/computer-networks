#include<stdio.h>
int main()
{
	char a[20];
	int n,i;
	printf("enter the size of frames:");
	scanf("%d",&n);
	printf("enter the frame characters:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	printf("destuffed data:");
	for(i=1;i<n-1;i++)
	{
		if(a[i]=='@')
		{
			i++;
		}
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
