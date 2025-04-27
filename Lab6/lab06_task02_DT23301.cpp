#include<iostream>
using namespace std;

int main(){
    int num,count=0;
    cout << "Enter an Integer : ";
    cin >> num;
    while(num>0)
    {
        num/=10;
        count++;
    }
    cout <<"No of digits Counts : " << count << endl;
    return 0;
}