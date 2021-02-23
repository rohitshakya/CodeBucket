# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(n)
#   Title : GCD
#  
x=int(input("input number 1\n"))
y=int(input("input number 2\n"))
i=1
print("For X: ")
while x%i !=0 and i<=x:
    i=i+1
    print("Gcd is "+i+"\n")
i=1
print("For Y: ")
while y%i !=0 and i<=y:
    i=i+1
    print("Gcd is "+i+"\n")
    
