#2017-11-15 函数参数传递
def addInterestList(balance,rate):
	print(balance)
	balance[0] = balance[0] * (1+rate)
	print(balance)

def addInterestNumber(balance,rate):
	print(balance)
	balance = balance * (1+rate)
	print(balance)

def main1():
	amount = [1000]    #声明为列表
	rate = 0.05
	addInterestList(amount,rate)
	print("List:",amount)

def main2():
	amount = 1000      #声明为常量? 喵?
	rate = 0.05
	addInterestNumber(amount,rate)
	print("Number:",amount)
#---------------------------------------------
main1()
main2()