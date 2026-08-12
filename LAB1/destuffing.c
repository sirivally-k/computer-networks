#include<stdio.h>
int main(){
	
	int a[20],b[20];
	int i,j=0,count=0,n;
	printf("enter the number of bits");
	scanf("%d",&n);
	
	printf("enter the frames of a:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		b[j++]=a[i];	
		if(a[i]==1)
		{
			count++;
		if(count==5){
			i++;
			count=0;
			}
		
		}
	    else
		{
		  count=0;
		}
	}
	printf("enter the bit stuffing,the frame is:\n");
	for(i=0;i<j;i++){
		printf("%d",b[i]);
	}
	printf("\n");
}
