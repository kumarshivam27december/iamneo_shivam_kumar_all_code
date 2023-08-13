#include <iostream>
using namespace std;
int main()
{
    int n,position,num;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    cin>>position;
    cin>>num;

    n++;
    for (int i = n; i>1; i--)
    {
        arr[i-1]=arr[i-2];
    }
    
    arr[0] = num;
   
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   
     
    return 0;
}