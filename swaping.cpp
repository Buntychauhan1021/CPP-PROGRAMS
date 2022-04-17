# include<iostream>
using namespace std;
int main(){
    int a,b,temp;
cout<<"enter the number before swapping\n";
cin>>a>>b;
cout<<"before swapping the number is"<<a <<" "<<b<<endl;
// temp=a;
// a=b;
// b=temp;
//without using thired variable
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping the number is"<<a <<" "<<b;


}