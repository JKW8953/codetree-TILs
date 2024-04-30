arr = list(map(int, input().split()))

for elem in arr:
    if elem == 0:
        break
    elif elem % 2 != 0:
        print(elem + 3, end = ' ')
    else:
        print(int(elem / 2), end = ' ')