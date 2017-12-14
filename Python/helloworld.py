#hello world 2017 10 15
print("hello world")
name = input("Please enter your name:")
h = input("Please enter your height(m):")
w = input("Please enter your weight(kg):")
#体质指数（BMI）=体重（kg）÷身高^2（m）
BMI = float(w)/float(h)**2
print("Hello",name)
#    print("{0}÷{1}^2={2}",format(h,w,BMI))   useless 
if BMI<18.5:
    print('You are too thin!Eat more.')
elif BMI<23.9:
    print('You are fit! Keep it up.')
elif BMI<27:
    print('You are overweight!Do more exercise!')
else:
    print('You are obesity!Do MORE EXERCISE AND EAT LESS!')
    