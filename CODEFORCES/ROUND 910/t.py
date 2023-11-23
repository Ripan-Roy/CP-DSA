def generate_worst_case():
    t = 500
    n = 100
    k = 0
    test_case = f"{t}\n"

    for _ in range(t):
        s = 'B' * n
        test_case += f"{n} {k}\n{s}\n"

    return test_case

if __name__ == "__main__":
    worst_case = generate_worst_case()

    with open("worst_case.txt", "w") as file:
        file.write(worst_case)

    print("Worst-case test case saved in 'worst_case.txt'")
