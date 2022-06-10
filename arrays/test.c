
#include <stdio.h>

#define ON               1
#define OFF              0
#define MAX_ARRAY_LENGTH 100

int main(int argv, char *argc[])
{
  //parse input
  int currentWordLength = 0;
  char c                = 0x0;
  int wasInWord         = 0;
  int isInWord          = 0;

  int frequencies[MAX_ARRAY_LENGTH];
  for(int i = 0; i < MAX_ARRAY_LENGTH; ++i) //initialize to zero
    frequencies[i] = 0;
  
  while( (c = getchar()) != EOF )
  {
    isInWord = (c >= 0x21) && (c <= 0x7E);
    
    if (isInWord)
      currentWordLength++;
    else if ( wasInWord )
    {
      ++frequencies[ currentWordLength - 1 ];
      currentWordLength = 0;
    }

    wasInWord = isInWord;
  }

  //measure histogram bars and store as an array
  int maxWordLength = 0;
  int maxFrequency  = 0;

  for(int i = 0 ;i < MAX_ARRAY_LENGTH; ++i)
  {
    if ( frequencies[i] > 0 )
    {
      maxWordLength = i+1;

      if ( frequencies[i] > maxFrequency )
        maxFrequency = frequencies[i];
    }
  }

  int maxY = maxFrequency;
  int maxX = maxWordLength;
  
  char verticalHistogram[ maxY ][ maxX ];
  for(int i = 0; i < maxX; ++i)
  {
    for(int j = 0; j <= maxY; ++j)
      verticalHistogram [j][i] =
          ( j >= maxY - frequencies[i] ) && ( j < maxY ) ? '*' : ' ';
  }

  //print histogram and accompanying table
  printf("\n\nHistogram of Frequency (y-axis) vs. Word Length (x-axis):\n\n");

  for(int j = 0; j < maxY; ++j)
  {
    printf("%11d%1s",maxY-j,"|");
    for(int i = 0; i < maxX; ++i)
    {
      printf("%4c",verticalHistogram[j][i]);
    }
    printf("\n");
  }

  printf("%12s","");

  for(int i = 0; i < maxX; ++i)
    printf("----");
  
  printf("\n%11s",   "Word Length:");
  for(int i = 0; i < maxX; ++i)
    printf("%4d", i+1 );

  printf("\n%11s", "Frequency:  ");
  for(int i = 0; i < maxX; ++i)
    printf("%4d", frequencies[i]);

  printf("\n\n");

  return 1;
}