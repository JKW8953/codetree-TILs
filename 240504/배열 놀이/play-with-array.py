n, q = map(int, input().split())
arr = list(map(int, input().split()))

while q > 0:
    qes = list(map(int, input().split()))
    
    if qes[0] == 1:
        print(arr[qes[1]-1])
    if qes[0] == 2:
        if qes[1] in arr:
            print(arr.index(qes[1])+1)
        else:
            print(0)
    if qes[0] == 3:
        for i in arr[qes[1]-1:qes[2]]:
            print(i, end=' ')
    q -= 1