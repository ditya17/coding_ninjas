void sort012(int *arr, int n)
{
    //Write your code here
    int c0 =0,c1=0,c2=0;
    for (int i=0;i<n;i++){
        if (arr[i] == 0) c0++;
         else if (arr[i] == 1) c1++;
         else if (arr[i] == 2) c2++;
        
    }
    int i=0;
    for (;i<c0;i++){
        arr[i] =0;
    }
    for (;i<c1+c0;i++){
        arr[i] =1;
    }
    for (;i<c2+c1+c0;i++){
        arr[i] =2;
    }
}
