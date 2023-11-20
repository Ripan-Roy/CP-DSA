t = int(input())
for _ in range(t):
    n, m = map(int, input().split())

    start = [0] * (m + 1)
    end = [0] * (m + 1)
    diff = [0] * (m + 1)

    count_start = count_end = max_count = min_count = 0

    for _ in range(n):
        l, r = map(int, input().split())
        start[l] += 1
        end[r] += 1

    for i in range(1, m + 1):
        count_start += start[i]
        count_end += end[i]
        diff[i] = count_start - count_end
        max_count = max(max_count, diff[i])
        min_count = min(min_count, diff[i])

    max_cost = max_count - min_count
    print(max_cost)
