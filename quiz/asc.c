#include <stdio.h>
void arrSum (int*, int len); //evaluating the sum of array

int main ()
{
   int arr;
   //get the array size
   scanf("%d", &arr);

   //assign the array size in a list
   int list1[arr];
   //Input the array elements
    for(int k = 0; k < arr; k++)
       scanf(" %d", &list1[k]);
 
   //assign the first element of list1 into index
   //then put it into new arr list2[0]
   int index = list1[0], list2[10] = {index};
   for(int i = 1; i < arr; i++)
   {
      //assign the incremented indices of array into index
      //put the arr indices starting from 1 to n
      if (index < list1[i]) 
         list2[i] = list1[i];
      else //break the loop once condit failed
         break;
      index = list1[i]; 
   }
   //compute the bytes of array using sizeof divide
   //to get the size
   int lenLst2 = (int) sizeof(list2) / sizeof(list2[0]);
   
   arrSum (list2, lenLst2); //print the sum of array

   return 0;
}

//Computing the sum of Array
void arrSum (int *arr, int len)
{
   int sum = 0, i;
   for(i = 0; i < len; i++)
   {
      sum += arr[i];
   }
   printf("%d", sum);
}