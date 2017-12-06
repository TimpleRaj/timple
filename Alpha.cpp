#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter a character : ";
   cin>>ch;
   if(isalpha(ch))
   {
      cout<<"alphabet";
   }
   else
   {
      cout<<"It's not an alphabet.";
   }
}
