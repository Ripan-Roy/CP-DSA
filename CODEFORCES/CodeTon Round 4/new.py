def candy_spells(n):
    spells = []
    while n > 1:
        if n % 2 == 0:
            spells.append(2)
            n = (n - 1) // 2
        else:
            spells.append(1)
            n = (n + 1) // 2
        if len(spells) > 40:
            return "IMPOSSIBLE"
    spells.reverse()
    return spells

def main():
    n = int(input())
    spells = candy_spells(n)
    print(len(spells))
    print(" ".join(map(str, spells)))

if __name__ == "__main__":
    main()

