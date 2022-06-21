#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=n-i;j<=n;j++){
            char ch= 'A' + j -1;
            cout<<ch;
        }
        cout<<endl;
    }
    
}
