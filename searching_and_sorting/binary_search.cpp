int binarySearch(int *input, int n, int val)
{
    int low=0, high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (input[mid]==val) return mid;
        else if (input[mid]>val) high = mid-1;
        else low = mid+1;
    }
    return -1;
}
