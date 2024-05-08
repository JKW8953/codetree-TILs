class User:
    def __init__(self, name, addr, city):
        self.name = name
        self.addr = addr
        self.city = city

n = int(input())
users = []

for _ in range(n):
    name, addr, city = input().split()
    users.append(User(name, addr, city))

latest_idx = 0
for i in range(n):
    if users[i].name > users[latest_idx].name:
        latest_idx = i


print(f"name {users[latest_idx].name}")
print(f"addr {users[latest_idx].addr}")
print(f"city {users[latest_idx].city}")