int duplicateNumber(int *arr, int size)
{
    for (int i =0;i<size -1;i++){
        int count =0;
        int key = i;
        for (int j =0;j<size ;j++){
            if (arr[j] == key){
                count++;
            }
        }
        if (count ==2) return key;
    }
}
