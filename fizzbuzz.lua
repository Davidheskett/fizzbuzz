
-- fizzbuzz 

for x = 1, 100 do
  
  flag = 0
  three = 0
  five = 0
  if (x % 3) == 0 then three = 1 end
  if (x % 5) == 0 then five = 1 end
  
  flag = flag + three * 1
  flag = flag + five * 2
  
  if flag == 0 then print(x) 
  elseif flag == 1 then print('fizz')
  elseif flag == 2 then print('buzz')
  elseif flag == 3 then print('fizzbuzz')
  end
  
end
	
	
