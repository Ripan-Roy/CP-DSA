def modular_inverse(a, mod):
    """Calculates the modular inverse of a under modulo mod using Fermat's little theorem."""
    return pow(a, mod - 2, mod)


def expected_days(W, G, L, mod):
    """Calculates the expected number of days to reach weight G from weight W."""
    if W <= G:
        # If current weight is already at or below target, no days needed.
        return 0

    # The expected days array, where expected[i] gives the expected days from weight i.
    expected = [0] * (W + 1)

    # Fill the expected days from G to W
    for w in range(G + 1, W + 1):
        expected[w] = 1 + 0.5 * (expected[w - 1] + expected[w + 1]
                                 if w + 1 <= W else expected[w - 1])

    # Final expected days from initial weight W
    exp_days = expected[W]

    # Convert expected days to fraction p/q
    p = int(exp_days * (2 ** (W - G - 1)))  # Scale by the total probability
    q = (2 ** (W - G - 1))

    # Reduce p/q to its lowest terms
    from math import gcd
    g = gcd(p, q)
    p //= g
    q //= g

    # Calculate the modular inverse of q
    q_inv = modular_inverse(q, mod)

    # Return the result p * q_inv % mod
    return (p * q_inv) % mod


def main():
    import sys

    mod = 998244353

    # Read number of test cases
    T = int(input().strip())

    for i in range(1, T + 1):
        W, G, L = map(int, input().strip().split())

        # Calculate expected days
        result = expected_days(W, G, L, mod)

        # Output the result
        print(f"Case #{i}: {result}")


if __name__ == "__main__":
    main()
