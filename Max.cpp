#include<iostream>
using namespace std;
int main()
{
   int num[3],i;
   cout<<"Enter the numbers : ";

   for(i=0;i<3;i++)
   {

        while(!( cin>>num[i] ))
       {
         cout<<"Not a Number"<<endl;
         cin.clear();
         cin.ignore(1000,'\n');
       }
   }
   if(num[0]>num[1] && num[0]>num[2])
     cout<<num[0];
   else if (num[1]>num[2])
     cout<<num[1];
   else
    cout<<num[2];
}
