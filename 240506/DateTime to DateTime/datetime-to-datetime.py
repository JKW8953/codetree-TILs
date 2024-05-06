a, b, c = map(int, input().split())

if b<11 or (b==11 and c<11):
    print(-1)
else:
    print(1440*(a-11)+60*(b-11)+(c-11))