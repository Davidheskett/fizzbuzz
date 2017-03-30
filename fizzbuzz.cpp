
/* fizzbuzz */
#include <iostream> // Include for I/O streams

using namespace std; // Streams are in the std namespace (standard library)

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
				cout << x;
				break;
			case 1:
				cout << "Fizz";
				break;
			case 2: 
				cout << "Buzz";
				break;
			case 3:
				cout << "FizzBuzz";
				break;
				
		}
		
		cout <<  "\n";
		
	}
	
	return 1;

}
