#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<process.h>
int main()
{   
  int n,i,j,min,pos;
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  	b[i]=i+1;
  }
  
  for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
               pos=j;
        }  
        min=a[i];
        a[i]=a[pos];
        a[pos]=min;  
        min=b[i];
        b[i]=b[pos];
        b[pos]=min;
    } 
   system("cls");
   printf("\n");
   system("color 7E");
   printf("PROCESS\t\tBURST_T\n");
   for(i=0;i<n;i++)
   {
   	printf(" Pr %d\t\t  %d",b[i],a[i]);
   	printf("\n");
   	
   }	

//this is my os project made by me.....
//for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
               pos=j;
        }  
        min=a[i];
        a[i]=a[pos];
        a[pos]=min;  
        min=b[i];
        b[i]=b[pos];
        b[pos]=min;
