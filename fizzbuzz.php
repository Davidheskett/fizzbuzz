<?php

for ($x = 1; $x <= 100; $x++) {
	$flag = 0;
	
	$flag += !($x % 3) * 1;
	$flag += !($x % 5) * 2;
	
	//echo 'x = ' . $x . ' ';
	switch ($flag)
	{
		case 0:
			echo $x;
			break;
		case 1:
			echo 'Fizz';
			break;
		case 2: 
			echo 'Buzz';
			break;
		case 3:
			echo 'FizzBuzz';
			break;
			
	}

	//echo '<br>';
	echo "\n";
}

?>
