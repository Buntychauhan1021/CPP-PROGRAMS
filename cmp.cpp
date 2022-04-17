# include<iostream>
using namespace std;
int main(){
    char str1[100],str2[100];
    int i=0,cmp=0;
    cout<<"enter the string"<<endl;
    cin>>str1;
    cout<<"enter the second string"<<endl;
    cin>>str2;
    while (str1[i]!='\0' && str2[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            cmp=1;
            break;
        }
        i++;
        
    }
    if (cmp==0&&str1[i]=='\0'&&str2[i]=='\0')
    {
        cout<<"equal";
    }
    else
    {
        cout<<"not eual";
    }
    
    
}