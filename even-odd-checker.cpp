#include <iostream>
using namespace std;
int main()
{
    cout<<"even odd checker.\n";
    char choice;
    do
    {
        cout<<"input a number: ";
        int n; cin>>n;
        cout<<"\n checking... \n";
        if (n==0)
            cout<<"0 is neither even nor odd";
        else if (n>0)
        {
            if (n % 2 == 0)
                cout<<"even number";
            else if (n%2 != 0)
                cout<<"odd number";
        }
        else
            cout<<"invalid number";
        cout<<"\n";
        cout<<"check another number? (y/n): "; cin>>choice;
    } while (choice=='y'||choice=='Y');
    return 0;
}