# include<iostream>
using namespace std;
int main(){
    char str1[100],str2[100];
    int i=0,j=0;
    cout<<"enter the first string\n";
    cin>>str1;
    cout<<"enter the second string\n";
    cin>>str2;
    while (str1[i]!='\0')
    {
        i++;
    }
   
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
       
        
        j++;
         i++;
       
    }
    str1[i]='\0';
    cout<<str1;
    
    

}