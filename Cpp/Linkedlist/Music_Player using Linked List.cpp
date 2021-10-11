#include<iostream>
using namespace std;

struct node
{
    char data[200];
    struct node* next;
};
struct node *head,*newnode,*temp;

void insert_song()
{
    newnode = (struct node*)malloc(sizeof(struct node*));
    cout<<"Enter the song you want to insert: ";
    cin>>newnode -> data;
    newnode->next = head;
    head = newnode;
    cout<<"Song has been inserted.\n";
}

void delete_song()
{
    struct node* newnode;
    int pos,i=1;
    temp = head;
    cout<<"Enter position of song to be deleted\t";
    cin>>pos;
    if(pos == 1)
    {
        struct node *ptr;
        {
            ptr = head;
            head = ptr->next;
            free(ptr);
        }
    }
    else
    {
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
    newnode = temp->next;
    temp->next = newnode->next;
    free(newnode);
    }
}

void display()
{
    struct node *current = head;
    if(head == 0)
    {
        cout<<"Playlist is empty\n";
        return;
    }
    cout<<"List of songs in playlist\n";
    while(current != 0)
    {
        cout<<current->data<<endl;
        current = current->next;
    }
    cout<<"\n";
}


int main()
{
    int n;
    while(n != -1)
    {
    cout<<"1-----Insert a song\n";
    cout<<"2-----Delete a song\n";
    cout<<"3-----Display the playlist\n";
    cout<<"-1----Exit\n";
    cin>>n;
        if(n == 1)
        {
            insert_song();
        }
        else if(n==2)
        {
            delete_song();
        }
        else if(n==3)
        {
            display();
        }
        else if(n == -1)
        {
            break;
        }
    }
}
