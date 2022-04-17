# include<iostream>
using namespace std;
// int main(){
//     int a=10,b;
//     b=++a;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }
// int main(){
//      int a=10,b;
//     b=a++;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }

// int main(){
//     int i=1;
//     i=++i + i++;
//     cout<<i<<endl;
// }

int main(){
    int i=1,j=1,k;
    k=i+j+ ++i + ++j + i++;
    cout<<i<<" "<<j<<" "<<k;

}