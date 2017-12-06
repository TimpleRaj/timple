#include<iostream>
using namespace std;
int main()
{
    int num[2],s=0,i=0;
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

    for(i=num[0]+1;i<num[1];i++)
    {
        if(i%2!=0)
          cout<<i<<endl;
    }
}
