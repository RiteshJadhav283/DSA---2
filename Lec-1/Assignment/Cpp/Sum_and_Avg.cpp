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
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum of the elements of the array: "<<sum<<endl;
    cout<<"The avg of the elements of the array: "<<(sum/size);
}