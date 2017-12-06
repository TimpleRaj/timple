#include<iostream>
using namespace std;
int main()
{
    int num,s;
    cout<<"Enter a number : ";
   while(!( cin>>num ))
   {
     cout<<"Not a Number"<<endl;
     cin.clear();
     cin.ignore(1000,'\n');
   }
   s=num;
   while(num--)
    s+=num;
   cout<<s;
}
