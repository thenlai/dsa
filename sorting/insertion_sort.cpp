// insertion sort

// time complexity
// best: O(n)
// worst: O(n^2)
// average: 

void insertion_sort(int list[], int size) {
	int i, j, temp;
	for(i=1; i<=size-1; i++) {
		temp = list[i];
		j = i - 1;
		while(j>=0 && list[j]>temp) {
			list[j+1] = list[j];
			j--;
		}
		//list[j+1] = temp; //?
	}
}