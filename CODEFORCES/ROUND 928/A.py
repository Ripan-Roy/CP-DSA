def count(s):
    a = s.count('A')
    b = s.count('B')

    if a > b:
        return 'A'
    else:
        return 'B'


t = int(input())
for _ in range(t):
    s = str(input())
    print(count(s))