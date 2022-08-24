import sys
re=0
a=0
for i in range(9):
    n=int(sys.stdin.readline().strip())
    if n>a:
        a=n
        re=i+1
print(a)
print(re)