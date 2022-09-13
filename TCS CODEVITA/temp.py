def class_arrangement(si):
 N = len(si)

 
 ones = 0

 
 zeros = 0

 for i in range(N):
  if (si[i] == 'B'):
   ones += 1
  else:
   zeros+= 1
 
 
 if (ones > zeros + 1 or zeros > ones + 1):
  return -1

 
 if (N % 2):
 
  
  num = (N + 1) // 2

  
  
  one_even = 0
  zero_even = 0

  for i in range(N):
   if (i % 2 == 0):
    if (si[i] == 'B'):
     one_even+=1
    else:
     zero_even+=1
   
  if (ones > zeros):
   return num - one_even

  else:
   return num - zero_even
 
 
 else:
  
  one_odd = 0
  one_even = 0

  for i in range(N):
   if (si[i] == 'B'):
    if (i % 2):
     one_odd+=1

    else:
     one_even+=1
   
  return min(N // 2 - one_odd, N // 2 - one_even)


si = input()
print(class_arrangement(si),end="")