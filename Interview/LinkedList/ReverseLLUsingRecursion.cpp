#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head;

void insert(int x)
{
  node* temp = new node();
  temp->data = x;
  temp->next = NULL;
  if(head==NULL)
  {
  	head = temp;
  	return;
  }
  node* t = head;
  while(t->next!=NULL)
  	t = t->next;
  t->next = temp;
}

void reverse(node* p)
{
   
   if(p->next==NULL)
   {
   	 head = p;
   	 return;
   }
   reverse(p->next);
   node* temp = p->next; // p->next->next = p;
   temp->next = p;
   p->next = NULL;
}

void print()
{
  node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main()
{
  int t,x;
  cin>>t;
  while(t--)
  {
  	cin>>x;
  	insert(x);
  }
  print();
  reverse(head);
  print();
}