a=[ ]
b=[ ]
s=input()
a=s.split()
n=int(a[len(a)-1])
a.pop()
for i in range(len(a)):
	b.append(int(a[i]))
b.sort()
for i in range(n-1):
	print(b[i],end=" ")

print(b[n-1])
