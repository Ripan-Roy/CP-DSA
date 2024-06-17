def max_score(l, r):
    import math
    max_power = 0
    
    # Start from the highest possible power of 2 within the range
    current_power = 1
    while current_power <= r:
        current_power *= 2
    
    # Since we overshoot, we need to step back one power of 2
    current_power //= 2
    
    # Check downwards to find the highest power of 2 within the range
    while current_power >= l:
        if current_power >= l:
            max_power = current_power
            break
        current_power //= 2
    
    # Calculate the score as the exponent
    score = int(math.log2(max_power))
    return score

# Reading input
t = int(input())
results = []
for _ in range(t):
    l, r = map(int, input().split())
    results.append(max_score(l, r))

# Printing output
for result in results:
    print(result)
