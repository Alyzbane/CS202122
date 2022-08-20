#define <stdbool.h>
#define <stdio.h>

#define PRINT_STACK(x) printf("%d\n", x);

#define STACK_SIZE 100

int array[STACK_SIZE]; //stack size
int top = 0; //top current position

void make_empty (void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}
bool is_full(void)
{
	return top == STACK_SIZE;
}

void stack_overflow(void)
{
	printf("Stack overflow: stack is full\n");
}
void stack_underflow(void)
{
	 printf("Not enough elements in stack\n");
}

void push (int *i)
{
	if(is_full())
		stack_overflow();
	else
		*array++ = i;
}
int pop (void)
{
	if (is_empty())
		stack_underflow();
	else
		return array[--top];
}

int main()
{
	int popped;
	push(10);
	poppped = pop();
	
	PRINT_STACK(popped);
	
	return 0;
}
