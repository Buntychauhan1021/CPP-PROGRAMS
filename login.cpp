//login page

# include<iostream>
using namespace std;
# include<string.h>
int main(){
  
    char password[100],username[100];
    char pass[100]="100",user[100]="kes";
    cout<<"enter the username\n";
    cin>>username;
    cout<<"enter the password\n";
    cin>>password;
    if (strcmp(pass,password)==0&&strcmp(user,username)==0)

    {
    cout<<"login successfully";
    }
    else
    {
        cout<<"not login";
    }
    

}