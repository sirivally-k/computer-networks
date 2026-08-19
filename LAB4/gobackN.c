#include<stdio.h>
int main(){
	int windowsize,totalFrames,i;
	int Frames[50];
	printf("enter window size:");
	scanf("%d",&windowsize);
	printf("\n enter number of frames to transmit:");
	scanf("%d",&totalFrames);
	printf("\n enter %d frames:",totalFrames);
	for(i=1;i<=totalFrames;i++)
	{
		scanf("%d",&Frames[i]);
	}
	printf("\n sliding window protocol simulation(assuming no frames loss)\n");
	printf("sender sends %d frames at a time and waits for acknowledgement\n\n",windowsize);
	for(i=1;i<=totalFrames;i++){
		printf("%d",Frames[i]);
		if(i % windowsize==0){
			printf("\n acknoledgement of above frames is received by sender\n\n");
		}
	}
	if(totalFrames % windowsize!=0){
		printf("\n Acknowledment of above frames is received by sender\n");
	}
return 0;
}
