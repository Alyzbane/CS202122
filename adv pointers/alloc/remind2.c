#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_REMIND 10
#define MSG_LEN 30


int read_line (char str[], int n);

int main()
{
	char *reminders[MAX_REMIND];
	//use for identitfying the day, msg variable
	char day_str[3], msg_str[MSG_LEN+1];  

	int day, i, j, num_remind = 0;
	
	for (;;)
	{
	 if (num_remind == MAX_REMIND)
	 {
	  printf("-- No space left --\n");
	  break;
	 }
	 printf("Enter day and reminder: ");
	 scanf("%2d", &day);
	 if (day == 0)
		 break;
	 
	 //turn the int into string 
	 sprintf(day_str, "%2d", day); 
	 //read the actual reminder
	 read_line(msg_str, MSG_LEN);

	 //comparing the days into existing days in remind
	 for (i = 0; i < num_remind; i++)
	{
	     if (strcmp(day_str, reminders[i]) < 0)
	     {	
		     break;
	     } 
	
	}
	 //sorting the days & reminder
	 for (j = num_remind; j > i; j--)
	     reminders[j] = reminders[j-1];

	 //day + msg_str + NULL (str terminator)
	 reminders[i] = malloc( 2 + strlen(msg_str) + 1); 
	 if (reminders[i] == NULL)
	 {
	  printf("-- No space left --\n");
	  break;
	 }
	 strcpy (reminders[i], day_str);
	 strcat (reminders[i], msg_str);

	 num_remind++;
	 printf("\nNum_Remind %d\n", num_remind);
	}

	printf("\nDay Reminders\n");
	for (i = 0; i < num_remind; i++)
		printf("%s\n", reminders[i]);

	return 0;
}

int read_line (char str[], int n)
{
	int ch, i = 0;

	while((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

