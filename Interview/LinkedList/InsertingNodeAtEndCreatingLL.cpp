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
   if(head == NULL)
   {
     head = temp;
     return head;
   }
   node* t = head;
   while(t->next!=NULL)
   	t = t->next;

   t->next = temp;
   return head;
}

void print(node * head)
{
  while(head!=NULL)
  {
  	cout<<head->data<<" ";
  	head = head->next;
  }
  cout<<endl;
}

int main()
{
  node* head = NULL;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    head = insert(head,x);
    print(head);
  }
}