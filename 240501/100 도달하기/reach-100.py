n = int(input())
arr = [1, n]
print(1, n, end = ' ')

new_elem, idx = 0, 2
while new_elem < 100:
    new_elem = arr[idx - 1] + arr[idx - 2]
    arr.append(new_elem)
    idx += 1
    print(new_elem, end = ' ')