//Ritesh Jadhav, Jensen Huang, 138

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool removing_special_char_and_checking_palindrome(char charArray [])
{
    int length = strlen(charArray);
    char* palinCheck = new char[length + 1];
    int palinCheck_size=0;
    for(int i=0;charArray[i]!='\0';i++)
    {
        if(isalnum(charArray[i]))
        {
            palinCheck[palinCheck_size]=tolower(charArray[i]);
            palinCheck_size++;
        }
    }
    palinCheck[palinCheck_size] = '\0';

    int left=0;
    int right=palinCheck_size-1;
    bool isPalindrome=true;

    while(left<right)
    {
        if (palinCheck[left] != palinCheck[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    return isPalindrome;    
}
int main()
{
//Working 


    string s;
    cout<<"Enter the array :";
    getline(cin,s);

    char* charArray = new char[s.length() + 1];
    strcpy(charArray, s.c_str()); 

    // for (int i=0;charArray[i]!='\0';i++) {
    //     cout << charArray[i] << " ";
    // }

    if(!removing_special_char_and_checking_palindrome(charArray))
    {
        cout<<"The String is not an Palindrome.";
    }
    else
    {
        cout<<"The String is an Palindrome.";
    }



}