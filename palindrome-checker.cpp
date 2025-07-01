#include <iostream>
using namespace std;

bool palchecker(string input)
{
    int left=0, right=input.length()-1;
    while (left<right)
    {
        if (input[left]!=input[right])
        {
            return false;
            break;
        }
        left++; right--;
    }
    return true;
}

int main()
{
    cout<<"enter word or number: "; 
    string input;
    cin>>input;
    if (palchecker(input) == true)
        cout<<"it is palindrome";
    else    
        cout<<"it is not a palindrome";
    return 0;
}