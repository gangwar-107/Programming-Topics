#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* prev;
	node* next;
};

node* head;

// generating new node
node* NewNode(int x)
{
   node* temp = new node();
   temp->data = x;
   temp->prev = NULL;
   temp->next = NULL;
   return temp;
}

// adding a node after the given node

void afternode(node* nd,int x)
{
	node* temp = NewNode(x);
	temp->next = nd->next;
	nd->next = temp;
	temp->prev = nd;
	if(temp->next!=NULL)
	  temp->next->prev = temp;
}

// Adding a node before a node:

void beforenode(node* nd,int x)
{
  
  node* temp = NewNode(x);
  temp->prev = nd->prev;
  nd->prev = temp;
  temp->next = nd;
  if(temp->prev!=NULL)
  	temp->prev->next = temp;
}


// inserting a anode at the begining
void insertAthead(int x)
{
   node* temp = NewNode(x);
   if(head==NULL)
   {
     head = temp;
     return;
   } 
   head->prev = temp;
   temp->next = head;
   head = temp;
}

//Deletion of A node at nth position

void del(node* head, int x)
{

if(head==NULL)
	return;
node* temp = head;
for(int i=1;i<x;i++)
 temp = temp->next;

if(temp==head)
  head = temp->next;
if(temp->next!=NULL)
	temp->next->prev = temp->prev;
if(temp->prev!=NULL)
	temp->prev->next = temp->next;
 delete temp;
}

//Inserting an element at the end:
void insertEnd(int x)
{
  node* temp = NewNode(x);
  if(head==NULL)
  {
  	head = temp;
  	return;
  }

  node* t = head;
  while(t->next!=NULL)
  	t = t->next;

  t->next = temp;
  temp->prev = t;
  return;
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

void reverse()
{
  node* temp = head;
  if(head==NULL)
  	return;
  while(temp->next!=NULL)
  	temp = temp->next;

  while(temp!=NULL)
  {
  	cout<<temp->data<<" ";
  	temp = temp->prev;
  }
  cout<<endl;
}

int main()
{
  
  int t,n;
  cin>>t;
  while(t--)
  {
  	cin>>n;
    insertAthead(n);	
  }
  print();
  reverse();
  cin>>n;
  insertEnd(n);
  print();
}