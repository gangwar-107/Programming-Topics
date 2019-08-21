#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* insert(node* head,int x)
{
	node* temp = new node();
	temp->data = x;
	temp->next = NULL;
    if(head==NULL)
    {
      head = temp;
      return head;
    }
   node* t = head;
   while(t->next!=NULL)
   	t =  t->next;

   t->next = temp;
   return head;
}

void print(node* head)
{
  while(head!=NULL)
  {
  	cout<<head->data<<" ";
  	head = head->next;
  }
  cout<<endl;
}

node* del(node* head,int n)
{  
  node* temp = head;
  // if we haven't a node before deleting node
  if(n==1)
  {
    head = temp->next;
    delete temp;
    return head;
  }
  // we have a node before deleting node
  for(int i=0;i<n-2;i++)
  	temp = temp->next;

  // creating a virtual node:
  node* temp1 = temp->next;
  temp->next = temp1->next;
  delete temp1;
  return head;
}

int main()
{
  node* head = NULL;
  int x,n,pos;
  cin>>n;
  for(int i=0;i<n;i++)
   {
     cin>>x;
     head = insert(head,x);
   }
   print(head);
   cout<<"Enter the position want to delete:";
   cin>>pos;
   head = del(head,pos);
   print(head);
}