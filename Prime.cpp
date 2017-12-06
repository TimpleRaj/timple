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
    i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            cout<<"Not a Prime Number";
            s=1;
            break;
        }
        i++;
    }
    if(s==0)
        cout<<"Prime Number";
}
