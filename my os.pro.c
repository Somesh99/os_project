#include<stdio.h>
#include<conio.h>

int main()
{   
  int n;
    printf("Enter No... Of Process :::  ");
    scanf("%d",&n);
	int i,j,p[n],at[n],bt[n],Prio[n],wt[n],trt[n],min,pos,min1,min2,pos1,min3;
	
	printf("\nEnter Burst--Time (In Integer Seconds) :::\n");
	for(i=0;i<n;i++)
	{
		printf("\nprocs%d\t",(i+1));
		scanf("%d",&bt[i]);
	}
	printf("\n\nEnter Arrival--Time (In Integer Seconds) :::\n");
	{
		for(i=0;i<n;i++)
	{
		printf("\nprocs%d\t",(i+1));
		scanf("%d",&at[i]);
	    p[i]=i+1;
	}
	}
  /////////////////
  
  
  for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[j]<at[pos])
               pos=j;
        }  
        min=at[i];
        at[i]=at[pos];
        at[pos]=min;  
        min=p[i];
        min3=bt[i];
        p[i]=p[pos];
        bt[i]=bt[pos];
        p[pos]=min;
        bt[pos]=min3;
    } 
   system("cls");
   printf("\n");
   system("color 5E");
   printf("PROCESS\t\tARIVAL_T\tBURST_T\n");
   for(i=0;i<n;i++)
   {
   	printf(" Pr %d\t\t  %d\t\t %d",p[i],at[i],bt[i]);
   	printf("\n");
   	
   }
///////////////////////
   for(i=1;i<n;i++)
    {
        pos1=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos1])
               pos1=j;
        }  
        min1=bt[i];
        bt[i]=bt[pos1];
        bt[pos1]=min1;  
        min1=p[i];
        min2=at[i];
        p[i]=p[pos1];
        at[i]=at[pos1];
        p[pos1]=min1;
        at[pos1]=min2;
        
    }   
   printf("\n");
   //system("color 5E");
   printf("PROCESS\t\tARIVAL_T\tBURST_T\n");
   printf(" pr %d\t\t %d\t\t %d",p[0],at[0],bt[0]);
    printf("\n");
   for(i=1;i<n;i++)
   {
   	printf(" Pr %d\t\t %d\t\t %d",p[i],at[i],bt[i]);
   	printf("\n");
   	
   }
 

   // wt[0]=0;
   // tot_wt=0;
    //for(i=0;i<n;i++)
  //  {
   // 	bt
//	}
  //  for(i=0;i<n;i++)
   // {
    //	wt[i]=wt[i]+bt[i];
    //	tat[i]=bt[i]+wt[i]; 
    //	tot_wt=tot_wt+wt[i];
    //	tot_tat=tot_tat+tat[i];
//	}

    

    
  
}

