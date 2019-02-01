#include<iostream>
#include<string.h>
using namespace std;
class Stack
{
    int sos,top;
    char s[500];
public:
    Stack(int a)
    {
        sos=a;
        top=-1;
        s[sos+1];
    }
void push(char x)
    {

        if(top!=sos-1)
        {
            top++;
            s[top]=x;

        }
        else
        {
            cout<<"The stack is full. ";
        }
    }
    char pop()
    {
        if(top==-1)
            cout<<"Stack is empty. ";
        else
        {
            return(s[top--]);
        }
        return 0;
    }
    void display()
    {
        if(top==-1)
        {
                cout<<"The Stack is empty. ";
        }
        else
        {
            int i;
            for(i=top;i>=0;i--)
            {
                cout<<""<<s[i];
                cout<<"\n";
            }
        }
    }
};
int main()
{
    int p,s,comp;
    char ya,a1;
    cout<<"Enter the size of the stack :";
    cin>>s;
    Stack s1(s);
    while(1)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        cin>>p;
        switch(p)
        {
        case 1:

            cout<<"Enter the element to push in the stack : ";
            cin>>ya;
            s1.push(ya);
            break;
        case 2:
            a1=s1.pop();
            cout<<"Popped out Letter :"<<a1;
            break;
        case 3:
            s1.display();
            break;
        case 4:
            comp=10;
            break;
        default:
            cout<<"Enter correct option ";
        }
        if(comp==10)
            break;
    }

    char cha[10];
    char temp,ca;
    cout<<"Enter a word :";
    cin>>cha;
    int i,j;

    Stack s2(strlen(cha));
    for(i=0;i<strlen(cha);i++)
    {


        s2.push(cha[i]);
    }
    cout<<"The STRING REVERSE is :";

    for(i=0;i<strlen(cha);i++)
    {
        ca=s2.pop();
        cout<<ca;
    }
    return 0;
}
