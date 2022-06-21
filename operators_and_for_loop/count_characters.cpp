#include<iostream>
using namespace std;

int main() {
    
    int char_count =0; 
    int digit_count =0;
    int space_count =0;
    
    char a;
    a = cin.get();
    while (a!= '$'){
     
        if (isalpha(a)) char_count++;
        else if (isdigit(a)) digit_count++;
        else space_count++;
        
        a  = cin.get();
        }
    
    cout<<char_count<<" "<<digit_count<<" "<<space_count;
    
}
