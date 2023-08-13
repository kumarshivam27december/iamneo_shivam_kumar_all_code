#include <iostream>
using namespace std;
int main()
{
    int a;cin>>a;int arr[a];
    for (int  i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    a++;
    int pos; cin>>pos;
    int num;cin>>num;

    for (int i = a; i>=pos-1; i--)
    {
       arr[i+1] = arr[i];
    }
    arr[pos-1] = num;

    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}