t = int(input())  # Number of test cases

for _ in range(t):
    n, m, k = map(int, input().split())
    rainy_days = [0] * (n + 1)

    for _ in range(m):
        l, r = map(int, input().split())
        rainy_days[l - 1] += 1  # Increment the count just before the rainy day
        if r < n:
            rainy_days[r] -= 1  # Decrement the count just after the rainy day

    max_dry_cities = 0
    dry_cities = 0

    for i in range(n):
        dry_cities += rainy_days[i]  # Accumulate rainy days
        if dry_cities < k:  # If we can prevent rain on this day
            max_dry_cities += 1

    print(max_dry_cities)
