n = int(input())
arr = list(map(int, input().split()))

arr.sort()

print(arr[int(len(arr)/2) - 1] + arr[int(len(arr)/2)])