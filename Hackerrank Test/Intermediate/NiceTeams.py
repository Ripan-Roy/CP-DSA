def maxPairs(skillLevel, minDiff):
    skillLevel.sort()
    n = len(skillLevel)
    i = 0
    x = []
    for j in range(n // 2):
        while i < n and skillLevel[i] - skillLevel[j] < minDiff:
            i += 1
        if i >= n:
            break
        x.append(i)
    x = x[:(n // 2)]
    ans = 0
    k = n - 1
    for y in reversed(x):
        if y <= k:
            ans += 1
            k -= 1
    return 