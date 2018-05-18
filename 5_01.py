s1=input()
s2=input()
t1=tuple(list(s1))
t2=tuple(list(s2))
flag=0
for i in t1:
	if t1.count(i)!=t2.count(i):
		flag=1
		print("false")
		break
if flag==0:
	print("true")
