// bubble sort algorithm 
// normal approach 
void bubblesort (int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
/* Time complexity 
Best case , Average case & worst case is O(n^2)
space complexity - O(1)
*/
// optimal approch
void bubblesort (int arr[], int n)
{
    int i, j;
    bool swaping;

    for (i = 0; i < n - 1; i++)
    {
        swaping = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swaping = true;
            }
        }
        if (swaping == false)
            break;
    }
}
/* Time complexity 
Best case - O(1)
Average case & worst case is O(n^2)
space complexity - O(1)
*/
