void insertionSort(int arr[], int n) {
    int key, i, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        // Pick the current element
        j = i - 1;            
        // Start comparing with the previous element  
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
           // Shift the element to the right
            j = j - 1;           
           // Move one step back
        }
        arr[j + 1] = key;     
       // Insert key into its correct position
    }
}
/*
example arr[] = [5, 4, 2, 3]
working :-
Pass 1: [4, 5, 2, 3]
Pass 2: [2, 4, 5, 3]
Pass 3: [2, 3, 4, 5]

Time complexity 
Best case - O(n)
Average case - O(n^2)
Wrost case - O(n^2)
Space complexity 
O(1)
*/
