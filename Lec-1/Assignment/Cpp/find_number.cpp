#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Insert the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int a;
    cout<<"Enter the number you want to find: ";
    cin>>a;
    bool b=false;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==a)
        {
            cout<<"The Element "<<a<<" found at index "<<i;
            b=true;
            break;
        }
    }
    if(!b)
    {
        cout<<"The Element is not present in the array.";
    }
}