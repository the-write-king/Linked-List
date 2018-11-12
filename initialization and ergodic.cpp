#include<stdio.h>
#include<stdlib.h>


typedef struct stu
{
	int nut;
	struct stu *next;
}str;


int link_in(int n)
{   
 	int i;
     
	str *head,*nnew,*link;
	
	link=(str*)malloc(sizeof(str)); 
	head=nnew=link;
	link->next=NULL;
	
	for(i=0;i<n;i++)
	{
	    nnew=(str*)malloc(sizeof(str));
	    printf("inter nut:");
	    scanf("%d",&nnew->nut);
	    if(i==0)
	    head=nnew;//save the first node;
	    
	    link->next=nnew;//creat the connection of link;
	    link=nnew;
	}
	link->next=NULL;//THE last node points to NULL
	///the initialization is down;
	
	while(head!=NULL)
	{
		printf("the out nu is %d\n",head->nut);
		head=head->next;
	}
	
	//the ergodic is down
	
	
	 return n;
	 
	
	
}
main()
{	
	int n=4;
	 link_in(n);
}
