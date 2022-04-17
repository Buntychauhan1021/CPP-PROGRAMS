# include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the alphabet\n";
    cin>>ch;
     if (ch>=65&&ch<=90)
     {
        cout<<(char)(ch+32);
     }
     else
     {
         cout<<(char)(ch-32);
     }
     
}