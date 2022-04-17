# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number\n";
    cin>>a;
    for (int  i = 0; i < a; i++)
    {
        if (i%2==0)
        {
         continue;
        }
        else 
        {
        cout<<i<<endl;
        }
        
        
    }
    
}