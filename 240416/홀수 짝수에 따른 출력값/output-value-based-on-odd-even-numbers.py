def fun(N):
    if N == 1 or N == 2:
        return N
    
    return N + fun(N-2)

N = int(input())
print(fun(N))