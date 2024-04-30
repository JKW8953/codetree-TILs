a1, a2 = map(int, input().split())
arr = [a1, a2]

for i in range (2, 10):
	arr.append(arr[i - 1] + 2 * arr[i - 2])

for elem in arr:
	print(elem, end=' ')