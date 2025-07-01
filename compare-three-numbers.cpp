#include <iostream>
using namespace std;
int main()
{
    cout<<"COMPARISION OF 3 NUMBERS\n";
    cout<<"enter 3 numbers: ";
    int a,b,c,min=0,max=0; cin>>a>>b>>c;
    if (a>b)
        max=a;
    else if (a<b)
        max=b;
    
    if (max>c)
        cout<<max<<" is greatest number";
    else
        cout<<c<<" is greatest number";
    return 0;
}