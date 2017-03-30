
x = 1

while x <= 100:
	flag = 0
	
	three = 0
	if (x % 3) == 0: three = 1
	
	five = 0
	if (x % 5) == 0: five = 1
	
	flag += three * 1
	flag += five * 2
	
	if flag == 0:
		print(x)
	elif flag == 1:
		print('Fizz')
	elif flag == 2:
		print('Buzz')
	elif flag == 3:
		print('FizzBuzz')
	x += 1
