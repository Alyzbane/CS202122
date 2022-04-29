#include <stdio.h>
//smal land largest numbers
void insertionSort(int array[], int size);

int main ()
{
   int data, arrN[5];
   
   printf("Input 5 integers: ");
   for(int i = 0; i < 5; i++)
   {
      scanf(" %d", &arrN[i]);
   }
   //get the byte size or something like address of array elem
   data = sizeof(arrN) / sizeof(arrN[0]);
   insertionSort(arrN, data);
   
   //the problem define the array is with 5 size
   //after sorting the array low to high 
   //just get the 1st and last value respectively for small and large
   printf("Smallest value is %d", arrN[0]);
   printf("\nLargest value is array %d", arrN[4]);

   return 0;
}

void insertionSort(int array[], int size) 
{
  for (int step = 1; step < size; step++) 
  {
   //hold the value of 1st to last arr indices
    int key = array[step];
    //use the j as identifier of indices in array
    //start from 0
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    //once the value reaches zero & condition is still going
    //it will switch the j[0] with the current key element
    while (key < array[j] && j >= 0) 
    {
      //switch the element of incr j to current j value
      array[j + 1] = array[j];
      --j;
    }
    //if while breaks out on loop
    //switch the element of decremented j with the current value of arr in key
    array[j + 1] = key;
  }
}