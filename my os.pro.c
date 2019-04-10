#include<stdio.h>
#include<conio.h>

int main()
{   int n;
    printf("Enter No... Of Process :::  ");
    scanf("%d",&n);
	int i,j,Proc[n],ariv_t[n],burst_t[n],Prio[n],wait_t[n],trnar_t[n];
	
	printf("\nEnter Burst-Time And Arrival-Time Of Each Process (In Integer Seconds) :::\n");
	for(i=0;i<n;i++)
	{
		printf("\nprocs%d\t",(i+1));
		scanf("%d",&burst_t[i]);
		scanf("%d",&ariv_t[i]);
		Proc[i]=i+1;
	}
	wait_t[0]=0;
    for(j=0;j<n;j++)
	{
	  wait_t[j+1]=wait_t[j]+burst_t[j];	
	  
	}
	
	for(j=0;j<n;j++)
	{
	  trnar_t[j]=wait_t[j]+burst_t[j];	
	}
	
	for(j=0;j<n;j++)
	{
	  printf("\n%d \t %d" ,wait_t[j],trnar_t[j])	;
	}
}
