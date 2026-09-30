#question 1
def q1():
    n=int(input("enter a no"))
    l1=[]
    l2=[]
    for i in range(1,n+1):
        l1.append(i)
    for j in l1:
        if j%3==0 and j%5==0:
            l2.append("FizzBuzz")
        elif j%3==0:
            l2.append("Fizz")
        elif j%5==0:
            l2.append("Buzz")
        else:
            l2.append(j)
    return l2
print(q1())

#question 2
n=eval(input("nums: "))
l1=[]
l2=[]
for i in range(1,n+1):
    l1.append(i)
    for  j in l1:
        if (j%2==0):
            l2.append(j)