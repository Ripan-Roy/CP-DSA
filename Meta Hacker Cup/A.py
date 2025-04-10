def solve_sonic_problem_adjusted(test_cases):
    results = []

    for idx, test in enumerate(test_cases, 1):
        N, stations = test
        v_min, v_max = 0, float('inf')

        for i, (A_i, B_i) in enumerate(stations, 1):
            if B_i > 0:
                v_min = max(v_min, i / B_i)  # Update the lower bound on speed
            if A_i > 0:
                v_max = min(v_max, i / A_i)  # Update the upper bound on speed
            else:
                # If A_i is 0, no restriction on upper bound in this case
                v_max = min(v_max, float('inf'))

        # Check if the calculated speed range is valid
        if v_min <= v_max:
            results.append(f"Case #{idx}: {v_min:.6f}")
        else:
            results.append(f"Case #{idx}: -1")

    return results


def read_input_from_file(file_path):
    with open(file_path, 'r') as f:
        t = int(f.readline().strip())  # Number of test cases
        test_cases = []

        for _ in range(t):
            N = int(f.readline().strip())  # Number of stations
            stations = []
            for _ in range(N):
                A_i, B_i = map(int, f.readline().strip().split())
                stations.append((A_i, B_i))
            test_cases.append((N, stations))

    return test_cases


def write_output_to_file(file_path, results):
    with open(file_path, 'w') as f:
        for result in results:
            f.write(result + '\n')


# Main execution
input_file = "input.txt"
output_file = "output.txt"

# Read input from the file
test_cases = read_input_from_file(input_file)

# Solve the problem
output = solve_sonic_problem_adjusted(test_cases)

# Write output to the file
write_output_to_file(output_file, output)

print(f"Results have been written to '{output_file}'")
