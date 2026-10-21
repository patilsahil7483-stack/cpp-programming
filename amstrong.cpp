#include<iostream>
using namespace std;
int main(){
int a=153;
int n,b;
int k=a;
int s=k;
int sum=1;
cin>>a;
while(a>0){
n++;
a/=10;
}
while(k>0){
b=k%10;
for(int i=10;i<=n;i++){
sum*=b;
}
k/=10;
}
if(sum!=s){
cout<<"your no is amstrong";
}
else{
cout<<"your no. is not amstrong";
}
return 0;
}
