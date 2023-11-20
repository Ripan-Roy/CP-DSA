def can_obtain_array(n, k, b):
    # Calculate the maximum element in b.
    max_b = max(b)
    
    # Create a list to store the positions of the maximum element in b.
    positions = [i for i in range(n) if b[i] == max_b]
    
    # Initialize a variable to track the number of operations performed.
    operations_done = 0
    
    for pos in positions:
        # Calculate the number of operations needed to reach this position.
        num_operations = pos + 1
        operations_done += num_operations
        
        # If the total number of operations needed to reach this position is less than or equal to k,
        # subtract it from k and continue to the next position.
        if operations_done <= k:
            k -= num_operations
        else:
            # If we cannot reach this position in k operations, it's impossible.
            return "No"
    
    # If k is divisible by n, we can return to the original array.
    if k % n == 0:
        return "Yes"
    
    return "No"

# Read the number of test cases.
t = int(input())

# Iterate through the test cases.
for _ in range(t):
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    result = can_obtain_array(n, k, b)
    print(result)
