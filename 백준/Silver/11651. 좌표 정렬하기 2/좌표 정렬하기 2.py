import sys
num=[]
n=int(sys.stdin.readline().strip())
for i in range(n):
    num.append(list(map(int,sys.stdin.readline().split())))
num.sort()
num.sort(key=lambda x:x[1])
for i in range(n):
    print(num[i][0],end=' ')
    print(num[i][1])