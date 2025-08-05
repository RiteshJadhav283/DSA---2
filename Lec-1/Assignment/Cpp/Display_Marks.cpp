#include <iostream>
using namespace std;

void calculate_marks(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        cout<<"Marks of Subject "<<i<<": "<<arr[i]<<endl;
    }
}
int main()
{  
    int size;
    cout<<"Enter the number of subject: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the student marks: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    calculate_marks( arr,size);
}