MAX_N = 10000000
is_prime = [True] * (MAX_N + 1)
primes = []


def sieve():
    global is_prime, primes
    is_prime[0], is_prime[1] = False, False
    for i in range(2, int(MAX_N ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, MAX_N + 1, i):
                is_prime[j] = False
    primes = [i for i in range(2, MAX_N + 1) if is_prime[i]]


def count_subtractorizations(N):
    found = set()  # Use a set to track found differences
    count = 0
    primes_len = len(primes)

    for i in range(primes_len):
        if primes[i] > N:
            break
        for j in range(i + 1, primes_len):
            if primes[j] > N:
                break
            diff = primes[j] - primes[i]
            if diff > N:
                break  # No need to continue if diff exceeds N
            # Check if diff is prime and not found
            if diff not in found and is_prime[diff]:
                found.add(diff)  # Add diff to the set
                count += 1

    return count


def main():
    sieve()

    with open('input.txt', 'r') as infile, open('output.txt', 'w') as outfile:
        T = int(infile.readline().strip())
        for t in range(1, T + 1):
            N = int(infile.readline().strip())
            result = count_subtractorizations(N)
            outfile.write(f"Case #{t}: {result}\n")


if __name__ == "__main__":
    main()
