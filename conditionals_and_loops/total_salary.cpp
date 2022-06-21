#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int Basic;
    char Grade;
    cin>>Basic>>Grade;
    float hra = Basic/5.0;
    float da = Basic/2.0;
    float pf = (Basic*11)/100.0;
    int allow;
    if (Grade=='A'){
        allow = 1700;
    }
    else if (Grade=='B'){
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    float total = Basic + hra + da + allow -pf;
//    cout<<Basic<<" "<<hra<<" "<<da<<" "<<allow<<" "<<pf<<" ";
    cout << fixed << setprecision(0) << total;
}
