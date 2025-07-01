#include <iostream>
using namespace std;

bool primechecker(int n)
{
    if (n<=1)
        return false;
    else
    {
        for (int i=2; i*i <=n; i++)
        {
            if (n%i==0)
                return false;
        }
    }
    return true;
}

int main()
{
    cout<<"enter number: ";
    int n; cin>>n;
    if (primechecker(n)==true)
        cout<<"it is a prime number";
    else
        cout<<"it is not a prime number";
    return 0;
}