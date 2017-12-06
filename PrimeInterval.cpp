#include<iostream>
using namespace std;
int main()
{
    int num[2],t=0,s=0,i=0;
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

    for(t=num[0]+1;t<num[1];t++)
    {
         i=2;
        while(i<t)
        {
            if(t%i==0)
            {
                s=1;
                break;
            }
            i++;
        }
        if(s==0)
            cout<<t<<endl;
        else
             s=0;
    }
}
