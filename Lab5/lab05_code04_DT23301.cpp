#include<iostream>
using namespace std;

int main(){

for(int row = 1; row <= 5; ++row){
    for(int col = 1; col <= 5; ++col){
        cout<<row<<" * "<<col<<" = " <<row * col<<"\t";
    }
    cout<<endl;
}
return 0;
}