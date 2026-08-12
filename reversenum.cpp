#include<iostream>
using namespace std;
int main(){
int a,b;
int rev=0;
int c=1;
cout<<"Enter your number convert to Reverse"<<endl;
cin>>a;
while(a>0){
b=a%10;
rev=b+(rev*c);
a/=10;
c=10;
}
cout<<"your reverse number:"<<rev;
return 0;
}




