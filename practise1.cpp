#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;

class stack
{
    int top;
    int data[MAX];

    public:
    
    stack(){
        top=-1;
    }


    void push(){
if(top==MAX-1){
    cout<<"Stack is full"<<endl;
}

else{
    int item;
    top=top+1;
    cout<<"Enter the element for stack:"<<endl;
    cin>>item;
    data[top]=item;
}
    }


    void pop(){
        int item=data[top];
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            top=top-1;
            cout<<"The popped item is:"<<item<<endl;
        }
    }


    void display()
    {
        for(int i=0; i<=top; i++)
        {
            cout<<data[i]<<endl;
        }
    }
};
 
int main()
{
    stack st;
    int choice;
    do{
        cout<<"Menu"<<endl;
        cout<<"1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"\n";
        cout<<"Enter an option for menu (1-4):"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"PUSH"<<endl;
            st.push();
            break;


            case 2:
            cout<<"POP"<<endl;
            st.pop();
            break;


            case 3:
            cout<<"Display"<<endl;
            st.display();
            break;

            case 4:
            cout<<"End of the menu";
            return 0;
        }

    

    }while(true);
    getch();

    return 0;
}