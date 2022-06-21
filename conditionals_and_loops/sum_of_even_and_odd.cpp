#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N;
    cin>>N;
    
    int a=0,b=0;
    while (N>0){
        int c = N%10;
        N = N/10;
        
        if (c%2==0){
            a = a +c;
        }
         else if (c%2!=0){
            b = b +c;
        }
    }
    cout<<a<<" "<<b;
}
