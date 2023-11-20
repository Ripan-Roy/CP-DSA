t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    x, y, m = 0, 0, 1
    count = 0
    while x != a or y != b:
        if a-x > b-y:
            x += m
        elif b-y > a-x:
            y += m
        else:
            x += m
            y += m
        count += 1
        if max(a-x, b-y) > m:
            m += 1
            count += 1
    print(count)
