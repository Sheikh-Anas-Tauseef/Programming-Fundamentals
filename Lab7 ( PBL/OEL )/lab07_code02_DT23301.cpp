#include<iostream>
using namespace std;

int main(){
int n,counter; char x;
int prev_term ,curr_term = 1,sum;
cout<<"Enter number of terms to generate: "; cin>>n;
cout<<prev_term<<" ";
for (counter=1; counter<n; counter++){
    if (counter%10 == 0) cout<<endl;
    cout<<curr_term<<" ";
    sum = prev_term + curr_term;
    prev_term = curr_term;
    curr_term = sum;
}
return 0;
}