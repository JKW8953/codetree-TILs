n1, n2 = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

flag = True

if n1 < n2:
    print("No");

else:
    for i in range (len(A)):
        if A[i] == B[0]:
            for j in range (len(B)):
                if A[i+j] != B[j]:
                    flag = False
                    break
                flag = True
            if flag:
                break
                
    print("Yes") if flag else print("No")