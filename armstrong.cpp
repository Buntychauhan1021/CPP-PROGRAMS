# include<iostream>
using namespace std;
int main(){
    int n,temp,num,sum=0;
    cout<<"enter the number\n";
    cin>>n;
    temp=n;
    while (n>0)
    {
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;

    }
    if(temp==sum)
    {
        cout<<"yes armstrong\n";
    }
    else
    {
        cout<<"not armstrong\n";
    }
    


}