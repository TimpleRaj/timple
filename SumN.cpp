#include<iostream>
using namespace std;
int main()
{
    int num,s=0,i;
    cout<<"Enter a number : ";
   while(!( cin>>num ))
   {
     cout<<"Not a Number"<<endl;
     cin.clear();
     cin.ignore(1000,'\n');
   }

   for(i=1;i<=num;i++)
    s+=i;
   cout<<s;
}
