#include<stdio.h>
#include<conio.h>

int main()
{   int n;
    printf("Enter No... Of Process :::  ");
    scanf("%d",&n);
	int i,j,proc[n],ariv_t[n],burst_t[n],Prio[n],wait_t[n],trnar_t[n],min;
	
	printf("\nEnter Burst--Time (In Integer Seconds) :::\n");
	for(i=0;i<n;i++)
	{
		printf("\nprocs%d\t",(i+1));
		scanf("%d",&burst_t[i]);
	}
	printf("\n\nEnter Arrival--Time (In Integer Seconds) :::\n");
	{
		for(i=0;i<n;i++)
	{
		printf("\nprocs%d\t",(i+1));
		scanf("%d",&ariv_t[i]);
	
	}
	}
	wait_t[0]=0;
    for(j=0;j<n;j++)
	{
	  wait_t[j+1]=wait_t[j]+burst_t[j];	 
	}
	
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n-i-1;j++)
	 {
	   if(ariv_t[j]>ariv_t[j+1])
	   {
	  	min=ariv_t[j];
	  	ariv_t[j]=ariv_t[j+1];
	  	ariv_t[j+1]=min;
	  	//proc[j]=min;
	   }
     }
	}
    for(i=0;i<n;i++)
    {
    	printf("%d",ariv_t[i]);
    	printf("%d",proc[i]);
	}
}

        

//this is my os project made by me...
