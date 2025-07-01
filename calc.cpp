#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;
    cout<<endl;
    int operation;
    while(true)
    {
        cout<<"enter operation to be performed:"<<endl;
        cout<<"------------OPERATIONS-------------"<<endl;
        cout<<"1. add, 2. sub, 3. mul, 4. div, 5. none"<<endl;;
        cout<<"\n choose operation: "; cin>>operation;
        if (operation == 1)
            cout<<a+b;
        else if (operation==2)
            cout<<a-b;
        else if (operation==3)
            cout<< a*b;
        else if (operation==4)
        {
            if (b==0)
                cout<<"divide by zero error";
            else
                cout<< a/b;
        }
        else if (operation==5)
            exit(0);
        else
            cout<<"invalid operation, try again"<<endl;
        cout<<"\n\n";
    }
    return 0;
}