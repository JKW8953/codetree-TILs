a = list(input())
b = list(input())
a.sort()
b.sort()

if len(a) != len(b):
    print("No")
else:
    for i in range(min(len(a), len(b))):
        if a[i] != b[i]:
            print("No")
            sys.exit()
    print("Yes")