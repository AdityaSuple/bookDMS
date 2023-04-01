#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "proto.h"
void storevalue(book* p ,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a book %d Id: ",i+1);
		scanf("%d",&p[i].id);
		printf("Enter a book %d name: ",i+1);
		scanf("%s",&p[i].bname);
		printf("Enter author name of book %d:",i+1);
		scanf("%s",&p[i].author);
		printf("Enter book %d price:",i+1);
		scanf("%lf",&p[i].price);
	}
}
void display(book* p,int n)
{
	int i;
	printf("\n\t\tBook id\t\tBook name\t\tAuthor name\t\tBook Price");
    for(i=0;i<n;i++)
    {
      printf("\n\t\t%d\t\t\t%s\t\t%s\t\t\t%.2lf",p[i].id,p[i].bname,p[i].author,p[i].price);   
	}		
}
void search(book* p,int n)
{
   	int ch;
   	printf("\n1.Search by Name\n2.Search by Id\nEnter your choice:");
   	scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:
   			printf("\nSearch by name:- ");
			char a[20];
			scanf("%s",&a);
			int i,j=0;
			printf("\n\t\tBook id\t\tBook name\t\tBook Author\t\tBook Price");
   			for(i=0;i<n;i++)
   			{
   				if(strcmp(a,p[i].bname)==0)
   				{
   				  printf("\n\t\t%d\t\t%s\t\t\t%s\t\t\t%.2lf",p[i].id,p[i].bname,p[i].author,p[i].price);
				  j++;
				  break;	
				}
			}
			if(j==0)
			{
			    printf("\n\tRecord is not found");	
			}
		//	break;		
		case 2:
			j=0;	
			int s;
			printf("\nSearch by Id:-");
			scanf("%d",&s);
			printf("\n\t\tBook id\t\tBook name\t\tBook Author\t\tBook Price");
			for(i=0;i<n;i++)
			{
				if(s==p[i].id)
				{
					printf("\n\t\t%d\t\t%s\t\t\t%s\t\t\t%.2lf",p[i].id,p[i].bname,p[i].author,p[i].price);
					j++;
					break;
				}	
			}
			if(j==0)
			{
			    printf("\nRecord is not found");	
			}
			break;
		default:
			printf("\nWrong Choice");
		    break;
	}
}
void append(book* p,int n)
{
	  //  printf("\nEnter your choice");
	    printf("\nEnter a book %d Id: ",n+1);
		scanf("%d",&p[n].id);
		printf("Enter a book %d name: ",n+1);
		scanf("%s",&p[n].bname);
		printf("Enter author name of book %d: ",n+1);
		scanf("%s",&p[n].author);
		printf("Enter book price: ",n+1);
		scanf("%lf",&p[n].price);
}
void update(book* p,int n)
{
	char m[20];
	printf("\nUpdate by name:");	
	scanf("%s",&m);
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(m,p[i].bname)==0)
		{
		   	printf("Enter book %d id=",i+1);
		   	scanf("%d",&p[i].id);
		   	printf("Enter book %d name=",i+1);
		   	scanf("%s",&p[i].bname);
		   	printf("Enter Author name of book %d =",i+1);
		   	scanf("%s",&p[i].author);
		   	printf("\n\t\tEnter Author name of book %d =",i+1);
		   	scanf("%lf",&p[i].price);  
		}
	}	
}
void delite(book* p,int n)
{
	char v[20];
	printf("\nDelete by name:");
	scanf("%s",&v);
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(v,p[i].bname)==0)
		{
			for(j=i;j<n;j++)
			{
				p[j]=p[j+1];
			}
			k++;
		}
	}
	if(k==0)
	{
		printf("\nRecord is not found");
	}
	
}
void sort(book* p,int n)
{
	book temp;
	int i,j,c;
	printf("\n1.Accending price of book:\n2.Decending price of book\nEnter by Choice:");
	scanf("%d",&c);
	switch(c)
	{
	    case 1:
		   for(i=1;i<n;i++)
		   for(j=0;j<n-i;j++)
		   if(p[j].price>p[j+1].price)
		   {
		   	  temp=p[j];
		   	  p[j]=p[j+1];
		   	  p[j+1]=temp;
		   }
		   break;
		case 2:
		   for(i=1;i>n;i++)
		   for(j=0;j>n-i;j++)
		   if(p[j].price<p[j+1].price)
		   {
		      temp=p[j];
		   	  p[j]=p[j+1];
		   	  p[j+1]=temp;	
		   } 
		   break;
		default:
		   printf("\nRecord is not found");
		   break;	  	
	}	
}
