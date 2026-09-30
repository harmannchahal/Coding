# import pyjokes
# joke=pyjokes.get_joke()
# print(joke)

# import pyttsx3
# engine=pyttsx3.init()
# engine.say("MY NamE iS HaRmaN,, chahal! WHy?& is this")
# engine.runAndWait()

#----------------------------------STRINGS----------------------------------------
# name='Harman'
# print(len(name))
# print(name.endswith("man"))
# print(name.startswith("har"))
# print(name.capitalize())

# name="Harman is a bad bad girl"
# n=name.replace("bad","good")
# print(n)

# n="\"Harman\" is a good girl but not a bad girl" #use \" to quote a string
# print(n)

#------------------PROGRAM BASED ON STRING------------------------------

#program to print name in a string
# n=(input("Enter the name : "))
# print("Good Afternoon",n)
# print(f"Good Afternoon {n}")

# #replace letter='''Dear </name>,
# # you are selected!
# # </date>''' with your name and todays date\
# letter='''Dear </name>,
# you are selected!
# </date>'''
# print(letter.replace("</name>","Harman").replace("</date>","26 september 2025"))



#-----------------------LIST-----------------------------------------
# l1=["apple","orange",22,33.0,False]
# print(l1[0])
# l1[0]="grapes"
# print(l1)
# print(l1.pop())
# print(l1)

# l1=["apple","orange",22,33.0,False]
# l2=["harman","abhi"]
# l1.append(l2)
# print(l1.append(l2)) #ase kru to y chij none output dega kyunki append apne aap m ek built in func h joki print k andr nhi aayga
# l1.extend(l2)
# l1.insert(1,"abhi") #ye index k sath kaam krta h
# print(l1)

# l3=["harman","abhi","Harman"]
# l3.sort()
# print(l3) 

# l2=["aabbddd","abc","abcd","ab","aabbccdddeeee","a"]
# l2.sort(key=len)
# print(l2)

# #--------------------------------------------------Functions----------------------------------------------------#
# #function defination
# def calc_sum(a,b): #parameters
#     return a+b
# sums=calc_sum(1,2) #func call;arguments
# print(sums)

# def print_hello():
#     print("hello")
# print_hello()

# def print_hello():
#     print("hello") #it will print hello
# output=print_hello()
# print(output) #this will print none as the function is not returning sny vajlue

# avg of 3 numbers:           
# def avg(a,b,c):
#     return (a+b+c)/3
# d=avg(1,2,3)
# print(d)
# #OR ANOTHER METHOD:
# def avg(a,b,c):
#     avrg=(a+b+c)/3
#     print(avrg)
#     return avrg
# avg(1,2,3)

# #functions to print length of list where list is a parameter
# l1=[1,2,3,4,5]
# l2=["harman","prachi","abhi",0.5]
# def len_list(lists):
#     print(len(lists))
# len_list(l1)
# len_list(l2)
    
# #print elements of list in a single line:
# names=["abhi","harman","ananya","aman","anmol","harsharan"]
# roll_no=[1,2,3,4,5]
# def elements_of_list(lists):
#     for i in lists:
#         print(i,end=" ")
# elements_of_list(names)
# elements_of_list(roll_no)

#functions to print factorial of n:
# def factorial(n):
#     fact=1
#     for i in range(1,n+1):
#         fact=fact*i
#     print(fact)
# factorial(4)
    
# #convert USD to INR:
# def usd_to_inr(usd):
#     inr=89.62*usd
#     print(inr)
# usd_to_inr(4)

# #funtion to print even if number is even and print odd if number is odd:
# def even_odd(n):
#     if n%2==0:
#         print("even")
#     elif n%2!=0:
#         print("odd")
#     else:
#         print("enter a valis no")
# even_odd(2)
# even_odd(5)


#-------------------------------------RECURSION-----------------------------------------#
# def show(n):
#     if n==0:
#         return
#     print(n)
#     show(n-1)
#     print("end")
# show(3)

# #factorial:
# def fact(n):
#     if n==0 or n==1:
#         return 1
#     else:
#         return fact(n-1)*n
# print(fact(5))

#function to calc the sum of first n natural nos:
# def natural(n):
#     if n==1:
#         return 1
#     else:
#         return natural(n-1)+n
# print(natural(9))

#func to print elements of list
# l1=["apple","mango","banana","lichi"]
# def lists(list,idx=0):
#     if(idx==len(list)):
#         return
#     print(list[idx])
#     lists(list,idx+1)
# lists(l1)

#HCF of two nos using recursion:
# def hcf(x,y):
#     if x==y:
#         return x
#     elif x>y:
#         return hcf(x-y,y)
#     else:
#         return hcf(x,y-x)
# ans=hcf(45,70)
# print(ans)

#fibbonacci series:
# def fibonacci(n):
#     if n==1:
#         return 1
#     elif fibonacci(n)+n-1


# # Calculate the length of the string using recursion.
# def string(s):
#     if s=="":
#         return 0
#     else:
#         return 1+string(s[1:])
# ans=(string("hello"))
# print(ans)
    



#------------------------------------------------------------------------FILE-I/O-------------------------------------------------------------------------------------#


#CAN PERFORM OPERATION : OPEN,CLOSE
# file=open("Hospital.csv","r") #as my csv file and cwh codes is in the same folder "python" so im writing the file name to open it. if not , i would have to wrote the entire path
# data=file.read()
# print(data)
# print(type(data))
# file.close()

'''Characters and their meaning:
r : open and reading(default)
w : open fir writing and truncating thr file first
x : create a new file and open it fir writing
a : open for writing, appending to the end if the file if it exists
b : binary mode
t : text mode
+ : open a disk file for updating(read and writing)'''

'''reading a file :
data = file.read() : reads entire file
 data = file.readline() : read one line at a timr'''
# file=open("Hospital.csv","r") 
# data=file.read(100) #reads only 100 characters
# print(data)

# file=open("Hospital.csv","r") 
# file.read()
# line1=file.readline() 
# print(line1)
# line2=file.readline() 
# print(line2)
# line3=file.readline() 
# print(line3) #it wont print anything as we alreay gave file.read above which already read the entire data.. now it wont ead the data line by line

#------------WRITING A FILE------------
# file=open("demo.txt","w") #here i created the file, in the code itself, that was not existing in my folder
# file.write("I want to learn Javascript") #to rewrite thee whole file
# file.close() 

# file=open("demo.txt","a")
# file.write('\nThen i will learn c and c++ languages') #to append at last
# file.close()

#to read and write simultaneously ---
'''r+ mode : wont truncate(data wont be  deleted) read+overwrite
    w+ mode : truncates (read +overwrite)
    a+ mode : wont truncate(read + append)''' 
# file= open("demo.txt","r+") #in this mode it will overwrite in the file in the very beggining
# file.write("abc")
# print(file.read()) #from here it will read after abc as the pointer now shifts after c
# file.close()

# file= open("demo.txt","w+") #in w+ mode it rewrote thee whole file after erasing the previous file
# file.write("abc")
# print(file.read()) #as after writing the pointer shifts after c so if we read the file it wont print anything as there is noting after c
# file.close()

#---------------with SYNTAX------------
# with open("demo.txt","r") as f:
#     data=f.read()
#     print(data) #while using with syntax there is no need to clode the file as with does that automatically



# import math
# def calculate(fn):
#     def innerfn(*args,**kwargs):
#         print("Decorator")
#         fn(*args,**kwargs)
#         print("*********************")
#     return innerfn

# @calculate
# def factorial(num):
#     print("In factorial function",math.factorial(num))
# @calculate
# def sqrt(num):
#     print("In sqrt function",math.sqrt(num))
# @calculate
# def maximum(*num):
#     print("In maximum function",max(num[0],num[1],num[2]))
# factorial(5) ;sqrt(16) ;maximum(23,9,78)





# class Student:
#     def __init__(self,name,marks):
#         self.name=name
#         self.marks=marks

#     def hello(self):
#         print(self.name,"hello")

# s1=Student("harman",91)
# s2=Student("abhi",99)

# s1.hello()





#create student class that takes name and marks of 3 sub as arguements in constructor . then method to print avg
# class Student:
#     def __init__(self,name,marks):
#         self.name=name
#         self.marks=marks

#     def avg(self):
#         s=0
#         for i in self.marks:
#             s+=i
#         print(s/3)

# s1=Student("Aman",[10,20,30])
# s1.avg()




#create acc class with 2 attributes - balance and acc no. Create methods for debit credit and printing balance
# class Account:
#     def __init__(self,balance,acc):
#         self.balance=balance
#         self.acc=acc
    
#     def debit(self):
#         self.balance


# acc1=Account(2500,345678)
# print(acc1.balance)
# print(acc1.acc)


class Travel:
    def __init__(self, Travel_Code, Place, Number_of_travelers, Number_of_buses):
        self.Travel_Code = Travel_Code
        self.Place = Place
        self.Number_of_travelers = Number_of_travelers
        self.Number_of_buses = Number_of_buses

    def Input(self):
        self.Travel_Code = int(input("Enter Travel Code: "))
        self.Place = input("Enter Place: ")
        self.Number_of_travelers = int(input("Enter Number of Travelers: "))

        if self.Number_of_travelers >= 10:
            self.Number_of_buses = 1
        else:
            self.Number_of_buses = 0

    def Display(self):
        # print("Travel Code:", self.Travel_Code)
        # print("Place:", self.Place)
        # print("Number of Travelers:", self.Number_of_travelers)
        print("Number of Buses:", self.Number_of_buses)


# Correct object creation
t1 = Travel(105, "Bombay", 15, 5)
t1.Input()
t1.Display()
