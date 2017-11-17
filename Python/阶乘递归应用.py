def factorial(n):
	if n== 0:
		return 1
	else:
		return n * factorial(n-1)

a = eval(input("请输入XX的阶乘:"))
a = factorial(a)
print(a)