#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

void computeLPSArray(char* pat, int M, int* lps);
int KMPSearch(char* pat, char* txt);
void printKMH (char *str1, char *str2, char *pat, int srcRes, int destRes);
void sortKMH (char *str1, char *str2, int srcRes, int destRes);

//qsort simple compare
int compare_char (const void *a, const void *b) {
    if (*(char *)a != *(char *)b)
        return *(char *)a - *(char *)b;

    return 0;
}

int main()
{
	int len, srcRes, destRes;
   char str1[SIZE], str2[SIZE];
   char pat[SIZE];

	printf("1st Input: ");
	scanf(" %s", &str1);
	printf("2nd Input: ");
	scanf(" %s", &str2);
	
	len = strlen(str1) + strlen(str2); //get the size of two strings
	printf("Size %d\n", len);

	printf("Pattern to be searched: "); //search pattern
	scanf(" %s", &pat);
	
	//find the pattern existing in the strings
	srcRes = KMPSearch(pat, str1); 
	destRes = KMPSearch(pat, str2);

	char newStr1[(int)strlen(str1)]; //assign the size of str1
	strncpy(newStr1, str1, sizeof str1); //copy the str1 to newStr1

	printKMH(str1, str2, pat, srcRes, destRes);

	strcat(str1, str2);
	sortKMH(str1, str2, srcRes, destRes);
	
	printf("\nNew string %s\nOld String:\n%s\n%s\n", str1, newStr1, str2);

	return 0;
}

void sortKMH (char *str1, char *str2, int srcRes, int destRes)
{
	
	if(srcRes == 1 && destRes == 1) //sort the string only in this
	{
		//qsort (QUICK SORT) inbuilt function in C library <stlib.h>
		qsort (str1, strlen (str1), sizeof *str1, compare_char);
   	printf("\nConcatenated Sorted Characters: %s", str1);
	}
	else if(srcRes == 0 || destRes == 1)
		printf("\nConcatenated Characters: %s", str1);
	else if(srcRes == 1 || destRes == 0)
		printf("\nConcatenated Characters: %s", str1);
}
void printKMH (char *str1, char *str2, char *pat, int srcRes, int destRes)
{
	if(srcRes == 1 && destRes == 1) //sort the string only in this
		printf("Output: %s + %s both string has a pattern of %s.", str1, str2, pat);
	else if(srcRes == 0 || destRes == 1)
      printf("Output: %s + %s one of the string has no pattern of %s.", str1, str2, pat);
	else if(srcRes == 1 || destRes == 0)
      printf("Output: %s + %s one of the string has no pattern of %s.", str1, str2, pat);
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
	// length of the previous longest prefix suffix
	int len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) 
		{
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) 
			{
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}


int KMPSearch(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	// create lps[] that will hold the longest prefix suffix
	// values for pattern
	int lps[M];

	// Preprocess the pattern (calculate lps[] array)
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while (i < N) 
	{
		if (pat[j] == txt[i]) 
		{
			j++;
			i++;
		}

		if (j == M) 
		{
			return 1; //pattern found both at string
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) 
		{
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return 0; //pattern is not found at both string
}
