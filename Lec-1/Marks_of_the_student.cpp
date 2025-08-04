#include <iostream>
using namespace std;

int calculate_marks(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
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
    int total_marks=calculate_marks(arr,size);
    cout<<"Total Marks of the Student = "<<total_marks;
}