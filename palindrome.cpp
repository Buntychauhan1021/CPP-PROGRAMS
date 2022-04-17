# include<iostream>
using namespace std;
int main(){
    int n,i,num,sum=0,temp;
    cout<<"enter te number"<<endl;
    cin>>n;
    temp=n;

     while(n>0)
    {
        num=n%10;
        sum=sum*10+num;
        n=n/10;
         }

    if (temp==sum)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    
    
    

}