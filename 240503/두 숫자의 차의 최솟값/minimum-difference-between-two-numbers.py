n = int(input())
arr = list(map(int, input().split()))

ans = 100
for i in range (n):
    for j in range (i+1, n):
        sub = abs(arr[i]-arr[j])
        if ans > sub:
            ans = sub

print(ans)