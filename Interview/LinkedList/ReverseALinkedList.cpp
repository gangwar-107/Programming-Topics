#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* link;
};

node* insert(node* head,int x)
{
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
	if(head==NULL)
	{
	  head = temp;
	  return head;
	}
	node* t = head;
	while(t->link!=NULL)
		t = t->link;
	t->link = temp;
	return head;
}

void print(node* head)
{
	while(head!=NULL)
	{
	 cout<<head->data<<" ";
	 head = head->link;
	}
	cout<<endl;
}

node* reverse(node* head)
{
  node *current,*next, *prev;
  current = head;
  prev = NULL;
  while(current!=NULL)
  {
  	next = current->link;
  	current->link = prev;
  	prev = current;
  	current = next; 
 }

 head = prev;
 return head;
}

int main()
{
  node* head = NULL;
  int n,x;
  cin>>n;
  while(n--)
  {
  	cin>>x;
  	head = insert(head,x);
  }
  print(head);
  head = reverse(head);
  print(head);
}