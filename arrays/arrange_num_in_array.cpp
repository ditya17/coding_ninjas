void arrange(int *arr, int n)
{
   int i,j=0;
	for(i = 1; i <= n; i++){
		if( i % 2 != 0){
			arr[j] = i;
			j++;
		}
	}
	for(i = n ; i > 0;i--){
		if( i%2 == 0){
			arr[j] = i;
			j++ ;
		}
	}
}
