void delete()
{
	if(root==NULL)
	printf("the tree is empty");
	else
	{
		int data;
		NODE *temp=root,*ptr;
		printf("enter data");
		scanf("%d",&data);
		while(temp->left!=NULL||temp->right!=NULL)
		{
			if(data==temp->data)
			break;
			else if(data<temp->data)
			{
				ptr=temp;
				temp=temp->left;
			}
			else
			{
				ptr=temp;
				temp=temp->right;
			}
				
		}
		if(temp->left==NULL && temp->right==NULL)
		{
			if(data<ptr->data)
			{
			     ptr->left==NULL;
			}
			else
			{
				ptr->right==NULL;
			}
		else if(temp->left!=NULL && temp->right==NULL)
		{
		    if(data<temp->data)
		    {
		    	ptr->left=temp->left;
			}
			else 
			{
				ptr->right=temp->left;
			}
			printf("%d is remove",temp->data);
			free(temp);
		}
		else if(temp->right!=NULL && temp->left==NULL)
		{
			if(data>temp->data)
			{
				ptr->right=temp->right;
			}
			else
			{
				ptr->left=temp->right;
			}
				printf("%d is remove",temp->data);
			free(temp);
		}
		else
		{
			NODE *P=findpredecessor(temp->left);
			int t=p->data;
			p->data=temp->data;
			temp->data=t;
			printf("%d is removed",p->data);
			free(p);
			
		}
	}
}
NODE *findpredecessor(NODE *t)

{
	NODE *p=*t,*pt;
	while(p->right!=NULL)
	{
		pt=p;
		p=p->right;
	}
	if(p->left!=NULL)
	{
		pt->right=p->left;
	}
	else
	{
	  pt->right=NULL;	
	}
	return p;
}
		}
		
	
