#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number : ";
   while(!( cin>>num ))
   {
     cout<<"Not a Number"<<endl;
     cin.clear();
     cin.ignore(1000,'\n');
   }

    if(num==0)
        cout<<"Zero";
    else if (num>0)
        cout<<"Positive";
    else
        cout<<"Negative";
}
