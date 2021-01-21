# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(n)
#   Title : Fibbonacci Series
#  
n=int(input("enter thr value of 'n':"))
a=1
b=1
sum=0
count=3
print("fibonacci series:",end=" ")
print(a,end=" ")
print(b,end=" ")
while(count<=n):
   sum=a+b
   print(sum,end=" ")
   count += 1
   a=b
   b=sum        
