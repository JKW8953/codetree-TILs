import sys

n1, n2 = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

for i in range (len(A)):
    if A[i] == B[0]:
        for j in range (len(B)):
            if i+j >= len(A):
                break
            if A[i+j] != B[j]:
                break
            if j == len(B) - 1:
                print("Yes")
                sys.exit()
print("No")