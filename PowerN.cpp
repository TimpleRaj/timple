#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num[2],i;
    cout<<"Enter a number : ";
    for(i=0;i<2;i++)
    {
       while(!( cin>>num[i] ))
       {
         cout<<"Not a Number"<<endl;
         cin.clear();
         cin.ignore(1000,'\n');
       }
    }
    cout<<pow(num[0],num[1]);
}
