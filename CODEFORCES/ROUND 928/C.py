def digitSum(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum


t = int(input())

digSum = [0] * 200010

for i in range(1, 200010):
    digSum[i] = digSum[i - 1] + digitSum(i)


for _ in range(t):
    n = int(input())

    print(digSum[n])