def countOne(matrix):
    count = 0
    for i in matrix:
        if i == '1':
            count += 1
    return count

t = int(input())

for _ in range(t):
    n = int(input())
    rowSet = set()
    for i in range(n):
        inp = input()
        var = countOne(inp)
        if var > 0:
            rowSet.add(var)
    if len(rowSet) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")
