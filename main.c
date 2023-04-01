/*Create a structure book with data member as bname,id,author,price.
Accept the value of all these members from user and display.*/
#include<stdio.h>
//#include"def.c"
#include"proto.h"

int main()
{
	int n,c=1;
	while(c!=0)
	{
	  printf("\nBook Data Management System\n");
	  printf("\n1.Store Book Value\n2.Display information of book\n3.Search Book\n4.Append Data\n5.Update by name\n6.Delete by name\n7.Sort by price\n8.Exit\nEnter your choice: ");
	  scanf("%d",&c);
	  switch(c)
	  {
		case 1:
			printf("\nEnter a number of Book: ");
			scanf("%d",&n);
			book*ptr;
			ptr=(book*)malloc(sizeof(book)*n);
			storevalue(ptr,n);
			break;
		case 2:
			display(ptr,n);
			break;
		case 3: 
			search(ptr,n);
			break;
		case 4:
			append(ptr,n++);
			break;
		case 5:
			update(ptr,n);
			break;	
		case 6:
			delite(ptr,n--);
			break;	
	    case 7:
			sort(ptr,n);
			break;
		case 0:
		    break;
		default:
		    printf("\nWrong choice");	
      }
    }	
}



