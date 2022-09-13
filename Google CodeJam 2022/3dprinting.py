t = int(input())
for j in range(1, t+1):
    list1 = list(map(int, input().split()))
    list2 = list(map(int, input().split()))
    list3 = list(map(int, input().split()))
    min1 = min(list1[0], list2[0], list3[0])
    min2 = min(list1[1], list2[1], list3[1])
    min3 = min(list1[2], list2[2], list3[2])
    min4 = min(list1[3], list2[3], list3[3])
    ans = min1+min2+min3+min4
    if ans == 1000000:
        print('Case #'+str(j)+':', min1, min2, min3, min4)
    elif ans < 1000000:
        print('Case #'+str(j)+': IMPOSSIBLE')
    else:
        ans = 0
        i = 0
        arr1 = [min1, min2, min3, min4]
        while ans < 1000000:
            ans = ans + arr1[i]
            i = i+1
        if ans == 1000000:
            arr2 = arr1[:i]
        else:
            arr2 = arr1[:i-1]
            arr2.append(1000000-sum(arr1[:i-1]))
        arr2.extend(list(map(int, list('0'*(4-len(arr2))))))
        print('Case #'+str(j)+':', *arr2)
