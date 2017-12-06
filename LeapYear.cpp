#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number : ";

    while(!( cin>>num ))
       {
         cout<<"Not a Number"<<endl;
         cin.clear();
         cin.ignore(1000,'\n');
       }
    if((num%400==0) || (num%100==0) || (num %4==0) )
        cout<<"Leap Year";
    else
        cout<<"Not a Leap Year";
}
