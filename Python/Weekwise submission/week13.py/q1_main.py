from math_utils import add,subtract,multiply,divide

num1=int(input("Enter integer 1 : "))
num2=int(input("Enter Integer 2 : "))
operator=(input("Enter the operator u want to use (+, -, *, /) : "))

if (operator == "+"):
    res=(add(num1,num2))
elif operator=="-":
    res=subtract(num1,num2)
elif operator=="*":
    res=multiply(num1,num2)
elif operator=="/":
    res=divide(num1,num2)
else:
    print("No Such Operator")
print("Result = ",res)