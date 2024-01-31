def build_kmp_table(pattern):
    table = [0] * len(pattern)
    j = 0

    for i in range(1, len(pattern)):
        while j > 0 and pattern[i] != pattern[j]:
            j = table[j - 1]

        if pattern[i] == pattern[j]:
            j += 1

        table[i] = j

    return table


def is_substring_present(substring, s2):
    pattern = substring + "#" + s2
    table = build_kmp_table(pattern)

    for i in range(len(substring) + 1, len(pattern)):
        if table[i] == len(substring):
            return True

    return False


def find_substrings(s1, s2):
    substrings = []
    remaining_s1 = s1

    while remaining_s1:
        found_substring = False

        for i in range(len(remaining_s1), 0, -1):
            current_substring = remaining_s1[:i]

            if is_substring_present(current_substring, s2):
                substrings.append(current_substring)
                found_substring = True
                remaining_s1 = remaining_s1[i:]
                break

        if not found_substring:
            return ["Impossible"]

    return substrings


s1 = input().strip()
s2 = input().strip()
result = find_substrings(s1, s2)
print("|".join(result), end="")
