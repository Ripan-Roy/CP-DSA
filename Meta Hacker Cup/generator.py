import sympy

# Count the number of prime numbers up to 10^7
count_primes = len(list(sympy.primerange(1, 10**7 + 1)))
count_primes
