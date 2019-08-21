#include<bits/stdc++.h>
using namespace std;


/* Global declaration of Head
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
  temp->next = head;
  head = temp;
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
 
 head = NULL;
 int n,x;
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cin>>x;
   insert(x);
   print();
 }
}
   */

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

void print(node* head)
{
  //node* temp = head;
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