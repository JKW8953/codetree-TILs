n = int(input())

arr = list(map(int, input().split()))

ans = []

max_profit = 0
min_val = arr[0]

for i in range (n):
    if min_val > arr[i]:
        min_val = arr[i]
    ans.append(arr[i]-min_val)

print(max(ans))