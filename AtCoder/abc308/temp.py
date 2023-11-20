def helper():
    n = int(input())
    arr = []
    for i in range(n):
        first, second = map(int, input().split())
        arr.append((first, second))
    
    prob = []
    for i in range(n):
        prob.append((i + 1, arr[i][0] / (arr[i][0] + arr[i][1])))
    
    prob.sort(key=lambda x: x[1], reverse=True)
    for i in range(n):
        print(prob[i][0], end=" ")

def main():
    t = 1
    for _ in range(t):
        helper()

if __name__ == "__main__":
    main()
