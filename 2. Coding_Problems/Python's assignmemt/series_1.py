# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(n)
#   Title : sum of series s=1+x+x*x+x*x*x+....x**n
# 

x=int(input("enter the value of x: "))
n=int(input("enter the value of n: "))
s=0
for a in range(n+1):
    s+=x**a
print("sum of series",s)
