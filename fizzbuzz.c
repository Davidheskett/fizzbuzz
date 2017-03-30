
/* fizzbuzz */
#include<stdio.h>

int main(void) 
{
	int x = 0;
	int flag = 0;
	
	for (x = 1; x <= 100; x++) {
		flag = 0;
		
		flag += !(x % 3) * 1;
		flag += !(x % 5) * 2;
		
		switch (flag)
		{
			case 0:
				printf("%d", x);
				break;
			case 1:
				printf("%s", "Fizz");
				break;
			case 2: 
				printf("%s", "Buzz");
				break;
			case 3:
				printf("%s", "FizzBuzz");
				break;
				
		}
	
		printf("%s", "\n");
		
	}
	
	return 1;

}
