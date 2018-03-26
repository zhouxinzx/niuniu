dic={ }
for i in input():
		if i in dic:
			dic[i]=dic[i]+1
			if dic[i]==3 and i.isalpha():
				print(i)
				break
		else:
			dic[i]=1
