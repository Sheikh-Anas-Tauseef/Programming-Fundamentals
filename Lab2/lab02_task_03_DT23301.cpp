#include<iostream>
#include<limits>
using namespace std;

int main(){
    cout<<"Minimum Value : " << numeric_limits<int>::min() << endl;
    cout<<"Maximum Value : " << numeric_limits<int>::max() << endl;
    return 0;
}