#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
NODE *create();
void insert();
void traverse(NODE*);
NODE *create()
{
	NODE *new=(NODE*)malloc(sizeof(NODE));
	printf("Enter data");
	scanf("%d",&new->data);
	new->left=new->right=NULL;
	return new;
}
void insert()
{
	NODE *new=create(),*temp,*ptr;
	if(root==NULL)
	root=new;
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			ptr=temp;
			if(new->data<temp->data)
			temp=temp->left;
			else
			temp=temp->right;
		}
		if(ptr->data<new->data)
		ptr->right=new;
		else
		ptr->left=new;
	}
}
void traverse(NODE *t)
{
	if(t!=NULL)
	{
		traverse(t->left);
		printf("%d\t",t->data);
	    traverse(t->right);
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.Insert\n2.traverse\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
		    case 2:if(root==NULL)
		    		printf("tree is empty");
		    		else
		    		traverse(root);
		   			 break;
		    default:exit(0);
		}
			
			
		}while(1);
		
	}



