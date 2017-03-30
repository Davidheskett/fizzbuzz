
/* fizzbuzz */
import java.lang.System;

public class fizzbuzz {

	public static void main(String[] args) 
	{
	
		int x = 0;
		int flag = 0;
		
		for (x = 1; x <= 100; x++) {
			flag = 0;
			
			flag += (((x % 3)==0) ? 1 : 0 ) * 1;
			flag += (((x % 5)==0) ? 1 : 0 ) * 2;
			
			switch (flag)
			{
				default:
				case 0:
					System.out.println( x );
					break;
				case 1:
					System.out.println("Fizz");
					break;
				case 2: 
					System.out.println("Buzz");
					break;
				case 3:
					System.out.println("FizzBuzz");
					break;
			}
		}	
	}
}
