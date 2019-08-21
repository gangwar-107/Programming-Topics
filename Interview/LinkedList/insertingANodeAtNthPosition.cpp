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
  temp->next = head;
  head = temp;
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

node* nthpos(node* head, int x, int n)
{
  node* temp = new node();
  temp->data = x;
  if(n==1)
  {
    temp->next = head;
    head = temp;
    return head;
  }
  node *t = head;
  for(int i=0;i<n-2;i++)
  	t = t->next;
  temp->next = t->next;
  t->next = temp;
  return head;
}

int main()
{
  node* head = NULL;
  int t,x,pos;
  cin>>t;
  while(t--)
  {
    cin>>x;
    head = insert(head,x);
    print(head);
  }
  cout<<"Inserting an element at nth position:";
  cin>>x>>pos;
  head = nthpos(head,x,pos);
  print(head);
}

