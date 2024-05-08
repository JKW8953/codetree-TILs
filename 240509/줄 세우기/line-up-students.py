class Student:
    def __init__(self, h, w, i):
        self.h, self.w, self.i = h, w, i

n = int(input())
students = []
for i in range(1, n+1):
    h, w = map(int, input().split())
    students.append(Student(h, w, i))

students.sort(key = lambda s: (-s.h, -s.w, s.i))

for elem in students:
    print(elem.h, elem.w, elem.i)