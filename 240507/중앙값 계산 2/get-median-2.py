n = int(input())
arr = list(map(int, input().split()))

for i in range(n):
    if i % 2 == 0: 
        new_arr = sorted(arr)
        print(new_arr[i // 2], end=' ')