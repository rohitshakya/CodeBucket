# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(1)
#   Title : Larger of three numbers
# 
num1=int(input("enter the first number:"))
num2=int(input("enter the second number:"))
num3=int(input("enter the third number:"))
if(num1>=num2) and (num1>=num3):
    print("num1 is larger")
elif(num2>=num1) and (num2>=num3):
    print("num2 is larger")
else:
    print("num3 is larger")
     
