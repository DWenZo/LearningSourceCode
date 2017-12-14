 #20171117
 #对N与10进行同符号加法、减法和乘法运算
 #同符号运算指使用N的绝对值与另一个数进行运算
 #运算结果的绝对值被赋予N相同的符号(正号或负号)
 #其中0的符号是正号

import math
N = eval(input())
if N>=0:
	sign = 1
else:
	sign = -1
Na = abs(N)
Npl = ( abs(N) + 10 )*sign
Nmi = abs(( abs(N) - 10 ))*sign
Nmu = N * 10
print(Na,Npl,Nmi,Nmu)
