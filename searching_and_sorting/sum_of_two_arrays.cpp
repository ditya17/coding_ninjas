void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int a,sum,x,n =0;
    if (size1>size2) a = size1+1;
    else a=size2+1;
    while(size1>=0 && size2>=0 ){
        sum = input1[size1] + input2[size2] + n;
        x = sum%10;
        n = sum/10;
        output[a-1] = x;
        
        size1--;
        size2--;
        a--;
    }
    while (size1 ==0 && size!= )
}
