class Spy:
    def __init__(self, secretcode, meetingpoint, time):
        self.s = secretcode
        self.m = meetingpoint
        self.t = time

secretcode, meetingpoint, time = input().split()
time = int(time)

spy1 = Spy(secretcode, meetingpoint, time)
print("secret code :", spy1.s)
print("meeting point :", spy1.m)
print("time :", spy1.t)