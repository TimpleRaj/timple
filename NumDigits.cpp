#include<iostream>
using namespace std;
int main()
{
    int num,s=0;
    cout<<"Enter a number : ";
   while(!( cin>>num ))
   {
     cout<<"Not a Number"<<endl;
     cin.clear();
     cin.ignore(1000,'\n');
   }

    while(num>0)
    {
      num=num/10;
      s++;
    }
    cout<<s;
}
