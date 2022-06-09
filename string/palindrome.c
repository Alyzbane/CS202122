#include<stdio.h>
#include<string.h>

//Palindrome
//String that can be read forward same as reading it backward
int main() {
	char st[100];
	
	// assume that st is a palindrome (1 - palindrome, 0 - not a palindrome)
	int isPalindrome = 1;

	// scan for the string
	printf("Enter the string: ");
	scanf("%s", st);
	int length = strlen(st);

	for(
		// i is the left index while
		// j is the right index
		int i = 0, j = length-1; 
		i < j; 
		i++, j--
	) {
		
		// if the character at the left is not the
		// same with the character at the right,
		// then this is not a palindrome so we set the
		// 'isPalindrome' flag to 0 and break from the loop
		if(st[i] != st[j]) {
			isPalindrome = 0;
			break;
		}

	}

	if(isPalindrome) {
		printf("%s is a palindrome", st);
	} else {
		printf("%s is not a palindrome", st);
	}

	return 0;
}