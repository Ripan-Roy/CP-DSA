exp = 100001
dp = [1] * (3 * 100001) #dp array
mod = 998244353 #mod

for i in range(2, exp):
    dp[i] = dp[i - 1] * i % mod
    dp[i + exp] = mod - mod // i * dp[mod % i + exp] % mod
    dp[i + (exp * 2)] = dp[i - 1 + (exp * 2)] * dp[i + exp] % mod

temp = lambda j, k: dp[j] * dp[k + (exp * 2)] * dp[j - k + (exp * 2)] % mod

#input() 
for test in range(int(input())):
    n = int(input())
    ty = 0
    id = tuple(map(int, input().split())).count(0)
    for it in range(n - id + 1):
        if not (n - it < 0 or id > n - it):
            ty = ty + (it * temp(n - it, id) % mod)
    
    print(ty * (id + 1) * dp[n - id] * dp[id] % mod)