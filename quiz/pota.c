//find the maximum sum of strictly
// increasing subarrays
#include <stdio.h>
int max (int a, int b)
{
   a = a < b ? b : a;
}
// Returns maximum sum of strictly increasing
// subarrays
int maxsum_SIS(int arr[], int n)
{
	// Initialize max_sum be 0
	int max_sum = arr[0];

	// Initialize current sum be arr[0]
	int current_sum = arr[0];

	// Traverse array elements after first element.
	for (int i = 1; i < n; i++)
	{
		// update current_sum for
		// strictly increasing subarray
		if (arr[i - 1] < arr[i])
		{
			current_sum = current_sum + arr[i];
			max_sum = max(max_sum, current_sum);
		}

		else // strictly increasing subarray break
		{
			// update max_sum and current_sum ;
			max_sum = max(max_sum, current_sum);
			current_sum = arr[i];
		}
	}

	return max(max_sum, current_sum);
}

// Driver code
int main()
{
   int a;
   scanf("%d", &a);
	int arr[a];
   for(int i = 0; i < a; i++)
		scanf(" %d", &arr[i]);
   
	int n = (int) sizeof(arr) / (int) sizeof(arr[0]);

	printf("Maximum sum : %d", maxsum_SIS(arr, n));
	return 0;
}