//YashRastogi exp-7
//24070123135
#include <iostream>
using namespace std;

int main(){
   string str;
   int n;
   cout<<"Enter a String: ";
   cin>>str;
   n=str.length();
   for(int i=n-1;i>=0;i--)
   {
       cout<<str[i];
   }
}
/*
Output:
Enter a String: yash
hsay
*/