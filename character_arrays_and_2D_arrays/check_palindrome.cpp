bool checkPalindrome(char str[]) {
    // Write your code here
    int n = 0;
    while (str[n] != '\0'){
        n++;
    }
    if (n ==1) return true;
    int a = (n-1)/2;
    int i =0, j = n-1;
    while (i<=a && j>=a){
        if (str[i] != str[j]){
            return false;
        }
        i++;
        j--;
            
    }
    return true;
}
