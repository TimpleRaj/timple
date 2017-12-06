#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    ch=toupper(ch);
    if ((ch=='A' || ch=='E' || ch=='I' ||ch=='O'||ch=='U' ))
        cout<<"Vowel";
    else if (isalpha(ch))
        cout<<"Consonant";
    else
        cout<<"It's not an alphabet.";
}
