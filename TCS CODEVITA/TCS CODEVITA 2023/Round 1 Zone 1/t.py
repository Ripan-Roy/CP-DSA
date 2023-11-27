def count(row):
    count = 0
    last = -1
    for i in range(len(row) - 1):

         if row[i] != row[i + 1]:
             count += (i-last) *(len(row) -i - 1)
             last = i

    return count

ashok_row = input().strip()
anand_row= input().strip()

if not all(tree in 'ML' for tree in ashok_row + anand_row):
      print("Invalid input", end="")
else:
      ashok = count(ashok_row)
      anand= count(anand_row)
     
      if ashok > anand:
         print("Ashok", end="")

      elif anand > ashok:
         print("Anand", end="")

      else:
         print("Draw", end="")
