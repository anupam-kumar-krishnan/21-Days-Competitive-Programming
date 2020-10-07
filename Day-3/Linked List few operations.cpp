#include<iostream>
#include<conio.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create();
void display(node*);
node *c_n();
node *insert_f(node*,int);
node *insert_l(node*,int);
node *insert_b(node*,int,int);
int count_node(node*);
node *delete_f(node*);
node *reverse(node*);
node *sort(node*);
node *remove_dup(node*);
node *merge(node*,node*);
node *merge_sort(node*,node*);

int main()
{
    node *HEAD=NULL,*HEAD1=NULL,*HEAD2=NULL,*HEAD3=NULL;

    int ch,x,pos;
    while(1)
    {
        cout<<"\n******************************************\n";
        cout<<"\n1 : Create SLL";
        cout<<"\n2 : Display SLL";
        cout<<"\n3 : Insert First Node in SLL";
        cout<<"\n4 : Insert Last Node in SLL";
        cout<<"\n5 : Insert Between Node in SLL";
        cout<<"\n6 : Delete First Node From SLL";
        cout<<"\n7 : Delete Last Node From SLL";
        cout<<"\n8 : Delete Between Node From SLL";
        cout<<"\n9 : Count Nodes in SLL";
        cout<<"\n10 : Delete Duplicate SLL";
        cout<<"\n11 : Exit";
        cout<<"\n**************************************\n";

        cout<<"Enter Your Choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                HEAD = create();
                cout<<"\nCreate Success SLL";
                break;
            case 2:
                display(HEAD);
                break;
            case 3:
                cout<<"Enter Data : ";
                cin>>x;
                HEAD = insert_f(HEAD,x);
                cout<<"\nInsert Success";
                break;
            case 4:
                cout<<"Enter Data : ";
                cin>>x;
                HEAD = insert_l(HEAD,x);
                cout<<"\nInsert Success";
                break;
            case 5:
                cout<<"Enter Data & Position: ";
                cin>>x>>pos;
                HEAD = insert_b(HEAD,x,pos);
                cout<<"\nInsert Success";
                break;
            case 6:
                HEAD = delete_f(HEAD);
                break;

            case 9:
                x=count_node(HEAD);
                cout<<"\nNumber Of Nodes are "<<x;
                break;

            case 10:
                HEAD = remove_dup(HEAD);
                cout<<"\nRemove Duplicate Success";
                break;
            case 11:
                exit(0);
            default:
                cout<<"\nPlease Select Proper Choice";
        }
    }

    return 0;
}

node *create()
{
    int n,x,i=1;
    node *head,*p,*q;

    cout<<"Enter Number Of Nodes U Want : ";
    cin>>n;//3
    head =c_n();
    cout<<"Enter Data : ";
    cin>>x;//30
    head->data=x;
    head->next=NULL;

    p=head;

    while(i<n)//3<3
    {
        q = c_n();
        cout<<"Enter Data : ";
        cin>>x;
        q->data=x;
        q->next=NULL;

        p->next=q;
        p = p->next;//p = 3002

        i++;//2++
    }

    return head;//1002

}
void display(node *head)//1002
{
    node *p;
    p=head;
    if(p==NULL)
        cout<<"\nEmpty SLL";
    else
    {

       p=head;
       while(p!=NULL)
       {
           cout<<p->data<<"\t";
           p=p->next;
       }

    }
}
//SLL
//p head
//5|1002    10|2002       20|3002     30|NULL
//4002      1002          2002        3002
//==============================
node *insert_f(node *head,int x)//1002
{
    node *p;

    if(head==NULL)
    {
        head=c_n();
        head->data=x;
        head->next=NULL;
        return head;
    }
    else
    {
        p=c_n();
        p->data=x;
        p->next=head;
        head=p;
    }
    return head;//4002
}
node *insert_l(node *head,int x)
{
    node *p,*q;
    if(head==NULL)
    {
        head=c_n();
        head->data=x;
        head->next=NULL;
        return head;
    }
    p=head;
    while(p->next!=NULL)//NULL!=NULL
        p=p->next;//p=3002
    q=c_n();
    q->data=x;
    q->next=NULL;
    p->next=q;
    return head;
}
node *insert_b(node *head,int x,int pos)
{
    node *p,*q;
    int i=1 , n ;
    char ch;
    n=count_node(head);//n=0
    if(n==pos-1)//0==4
    {
        head = insert_l(head,x);
        return head;
    }
    if(n<pos)//0<5
    {
        cout<<"\nInValid Position : ";
        cout<<"\nDo U Want To Insert at Last[Y/N] : ";
        ch = getch();
        if(ch=='y'||ch=='Y')
        {
            head = insert_l(head,x);
            cout<<"\nInsert Last- Success";
            return head;
        }
        else
        {
            cout<<"\nInsert Failed";
            return head;
        }
    }

    p=head;
    while(i<pos-1)//3<3
    {
        p=p->next;
        i++;//2++
    }

    q=c_n();
    q->data=x;
    q->next=p->next;
    p->next=q;

    return head;
}
//head                                          p
//10|2002       20|3002     30|5002     35|4002 40|NULL
//1002          2002        3002        5002    4002

int count_node(node *p)
{
    int count=0;
    while(p!=NULL)//NULL!=NULL
    {
        count++;//5
        p=p->next;//p=NULL
    }
    return count;//5
}
node *delete_f(node *head)
{
    node *p;
    if(head==NULL)
    {
        cout<<"\nDelete Failed!!!";
        return head;
    }
    p=head;
    head=head->next;
    free(p);
    cout<<"\nSuccess Delete";
    return head;
}
//head                          p
//10|2002       20|3002     30|NULL
//1002          2002        3002
node *delete_l(node *head)
{
    node *p,*q;
    if(head == NULL || head->next== NULL  )
    {
        free(head);
        return NULL;
    }

    p=head;
    while(p->next->next!=NULL)
        p=p->next;

    q=p->next;
    free(q);
    p->next=NULL;
}

node *delete_b(node *head,int pos)
{
    node *p,*q;
    int i=1 , n ;
    char ch;
    n=count_node(head);//n=0
    if(n==0)
    {
        cout<<"\nDelete Failed!!!";
        return head;
    }
    if(n==pos)//3==4
    {
        head = delete_l(head);
        cout<<"\nDelete Last- Success";
        return head;
    }
    if(n<pos)//5<3
    {
        cout<<"\nInValid Position : ";
        cout<<"\nDo U Want To Delete at Last[Y/N] : ";
        ch = getch();
        if(ch=='y'||ch=='Y')
        {
            head = delete_l(head);
            cout<<"\nDelete Last- Success";
            return head;
        }
        else
        {
            cout<<"\nDelete Failed";
            return head;
        }
    }

    p=head;
    while(i<pos-1)//2<2
    {
        p=p->next;
        i++;//1++
    }
    q=p->next;
    p->next=q->next;
    free(q);
//head          p
//10|2002       20|4002          40|NULL
//1002          2002              4002
    return head;
}
node *c_n()
{
    return (node*)malloc(sizeof(node));

}

node *remove_dup(node *head)
{
    node *p,*q,*r;

    if(head==NULL || head->next==NULL)
        return head;

    p=head;
    while(p->next!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(p->data==q->data)
            {
                r=p;
                while(r->next!=q)
                    r=r->next;

                r->next=q->next;
                free(q);
                q=r;
            }
            q=q->next;
        }
        p=p->next;
    }
    return head;
}
