#include<iostream>
using namespace std;

int main(){

int row,col;
char display_char;
cout<<"Enter a character for display:";
cin>>display_char;
cout<<endl<<endl;
for(row=1;row<=10;row++){
    for(col=1;col<=10;col++){
        cout<<display_char;
    }
    cout<<endl;
}
return 0;
}