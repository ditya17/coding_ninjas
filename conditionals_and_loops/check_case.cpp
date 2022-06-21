#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
    cin>>c;
    int a = c;
    if (a>=97 && a<=122){
        cout<<0;
    }
    else if (a>=65 && a<=90){
        cout<<1;
    }
    else cout<< -1;
}
