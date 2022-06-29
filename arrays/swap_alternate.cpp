void swapAlternate(int *arr, int size)
{
	for (int i = 0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
