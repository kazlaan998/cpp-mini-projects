#include <iostream>
using namespace std;
int main()
{
    cout<<"reversing integers\n";
    cout<<"enter a number: "; int n; cin>>n;
    int reversed=0;
    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed*10 + digit;
        n /= 10;
    }
    cout<<reversed;
    return 0;
}