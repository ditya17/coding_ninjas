#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
   int n;
    cin>>n;
    for (int i = 1;i<=n;i++){
        cout<<string (n-i, ' ');
            for (int j=1;j<=i;j++) cout<<j;
        cout<<endl;
    }
}
