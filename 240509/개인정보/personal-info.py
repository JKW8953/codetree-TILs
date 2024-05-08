class Student:
    def __init__(self, name, h, w):
        self.name, self.h, self.w = name, h, w

students = []
for _ in range(5):
    name, h, w = input().split()
    students.append(Student(name, int(h), float(w)))

students.sort(key = lambda s: s.name)
print("name")
for elem in students:
    print(f"{elem.name} {elem.h} {elem.w:.1f}")

print()

students.sort(key = lambda s: -s.h)
print("height")
for elem in students:
    print(f"{elem.name} {elem.h} {elem.w:.1f}")