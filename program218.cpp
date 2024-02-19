
 // singly 

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node*next;
}NODE, *PNODE,**PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;

    public:
        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);

        void DeleteFirst();

        void DeleteLast();
       
        void Display();
       
        int CountNode();

        void InsertAtPos(int no , int ipos);

        void DeleteAtPos(int ipos);
       
};

    SinglyLL::SinglyLL()
    {
        cout <<"Inside constructor\n";
        first = NULL;
        Count = 0;
    }

    void SinglyLL:: InsertFirst(int no)
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(first == NULL)  // if(Count == 0)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
            Count++;

    }
    void SinglyLL:: InsertLast(int no)
    {
            PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        PNODE temp = first;

        if(first == NULL)  // if(Count == 0)
        {
            first = newn;
        }
        else
        {
            while(temp->next != NULL)
            { 
            temp = temp->next;
            }
            temp->next = newn;

        }
            Count++;
    }
    void SinglyLL:: Display()
    {
        PNODE temp = first;
        while(temp != NULL)
        {
            cout<< " |"<<temp->data<<" |-> ";
            temp=temp->next;
        }
        cout <<"NULL \n";
    }
    int SinglyLL:: CountNode()
    {
        return Count;
    }
    void SinglyLL::DeleteFirst()
    {
        if(first == NULL)
        {
            return ;
        }
        else if(first->next == NULL)
        {
            delete first;
            first = NULL;
        }
        else{ 
        PNODE temp = first;
        first=first->next;
        delete temp;
        }
         Count--;

    }
    void SinglyLL::DeleteLast()
    {
                if(first == NULL)
        {
            return ;
        }
        else if(first->next == NULL)
        {
            delete first;
            first = NULL;
        }
        else{ 
        PNODE temp = first;
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        }
         Count--;

    }
    void SinglyLL::InsertAtPos(int no , int ipos)
    {
        PNODE temp = first;
        int iCnt = 0;
        if((ipos<1) || (ipos>Count+1))
        {
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == Count +1)
        {
            InsertLast(no);

        }
        else {
            PNODE newn = new NODE;
            newn->data=no;
            newn->next=NULL;
            PNODE temp = first;
            int iCnt = 0;
        for(iCnt =1 ; iCnt < ipos-1 ; iCnt++)
        {
            temp= temp ->next;
        }  
           newn->next=temp->next;
          temp->next = newn;

        }
        Count++;
    }
    void SinglyLL::DeleteAtPos(int ipos)
    {
       PNODE temp = first;
        int iCnt = 0;
        if((ipos<1) || (ipos>Count+1))
        {
            return;
        }
        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == Count )
        {
            DeleteLast();

        }
        else {
           
            PNODE temp = first;
            int iCnt = 0;
        for(iCnt =1 ; iCnt < ipos-1 ; iCnt++)
        {
            temp= temp ->next;
        }  
        PNODE targetnode = temp->next;
          temp->next = temp->next->next;
          delete targetnode;
        }
        Count--;
    }
int main()
{
    SinglyLL obj;
    int iRet = 0;
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    obj.InsertLast(121);
    obj.InsertLast(151);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    obj.DeleteLast();
     obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    obj.InsertAtPos(123,3);
     obj.Display();

     obj.DeleteAtPos(3);
     obj.Display();
    return 0;
}