#include<iostream>
using namespace std;
int main()
{
    int num,s=0,i=0;
    cout<<"Enter a number : ";
    while(!( cin>>num ))
    {
     cout<<"Not a Number"<<endl;
     cin.clear();
     cin.ignore(1000,'\n');
    }
    i=num;
    while(num>0)
    {
      s+=num%10;
      num/=10;
      s=s*10;
    }
    s/=10;
    if(i==s)
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
}
