# include<iostream>
using namespace std;
int fact(int n);
int main(){
    int a;          
    cout<<"enter the number\n";
    cin>>a;
    cout<<"the fact is :"<<fact(a);
}
    int fact(int n)
{
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;  
      }
      return fact;
    
}