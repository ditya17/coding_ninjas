#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
    int n;
    cin>>n;
    int sum,sum1 =1,sum2 =1;
    for (int i =3;i<=n;i++){
        
        sum = sum1 + sum2;
        sum2 = sum1;
        sum1 = sum;
        
    }
    if (n == 1 || n ==2) cout<< sum1;
    else cout<<sum;
}
