n = int(input())
arr = list(map(int, input().split()))

for i in range(1, n+1):
    if i % 2 != 0: 
        new_arr = sorted(arr[:i + 1])
        print(new_arr[i // 2], end=' ')