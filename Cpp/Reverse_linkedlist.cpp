#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    if(head==NULL)
    cout<<"NULL";
    else{
        cout<<head->data<<" ";
        display(head->next);
    }
}



struct node* reverse(struct node *head)
{
    if(head==NULL || head->next==NULL)
    return head;

    struct node *rev_list= reverse(head->next);

    head->next->next=head;
    head->next=NULL;
    return rev_list;
}

int main()
{
    int i,n;
    struct node *head,*prev,*p;
    cout<<"size of ll:";
    cin>>n;
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(node*)malloc(sizeof(node));
        cin>>p->data;
        if(head==NULL)
        head=p;
        else
        prev->next=p;
        prev=p;
    }

     head=reverse(head);
     display(head);

return 0;
}
