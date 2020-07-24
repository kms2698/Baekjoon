n, t, c, p = input().split()
l = int(n) % int(t)
f = int(n) // int(t)
if l == 0:
    print((f-1) * int(c) * int(p))
else:
    print(int(n) // int(t) * int(c) * int(p))
