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
     
	str *head,*nnew,*link,*inhead,*insertnode;
	
	link=(str*)malloc(sizeof(str)); 
	inhead=insertnode=head=nnew=link;
	link->next=NULL;
	insertnode->next=NULL;
	
	for(i=0;i<n;i++)
	{
	    nnew=(str*)malloc(sizeof(str));
	    printf("inter nut:");
	    scanf("%d",&nnew->nut);
	    if(i==0)
	    inhead=head=nnew;//save the first node;
	    
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
	
	
	 //insert a link list node
	  printf("inter insert nut:");
	    scanf("%d",&insertnode->nut);
	    ///the first one,insert inhead node before second node,after first node;
		while(inhead!=NULL)
	    {
		
		if(insertnode->nut>inhead->nut)
		{   
			insertnode->next=inhead->next;
			inhead->next=insertnode;
			
		}
		printf("the new link nut:%d\n",inhead->nut);
	 	inhead=inhead->next;
	    }
	    
	 
	 
	
	
}
main()
{	
	int n=4;
	 link_in(n);
}
