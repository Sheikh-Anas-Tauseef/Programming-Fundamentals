#include<iostream>
using namespace std;

int main(){
    int sum=0,num;
    while(sum<=100){
        cout << "Enter an Integer : "; cin >> num; sum+=num;
        if(sum>100){ cout << "Sum Exceed 100. Program Terminated...."<<endl; break;}
        else cout << "Running Sum-"<< sum <<endl;        
    }        
    return 0;
}