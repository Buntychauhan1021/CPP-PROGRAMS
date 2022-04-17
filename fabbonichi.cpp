# include<iostream>
using namespace std;
int main(){
    int a,c=0,b=1,i,n;
    cout<<"enter the number\n";
    cin>>n;
     for ( i = 0; i <n; i++)
    { 
        cout<<c<<endl;
       a=b;
       b=c;
       c=a+b;
    }
    

}