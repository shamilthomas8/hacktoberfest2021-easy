# It's a python code wheather a password is valid or not. It takes in a string as input and evaluates it as a valid password. The password is valid if it has at a minimum 2 numbers, 2 of the following special characters ('!', '@', '#', '$', '%', '&', '*'), and a length of at least 7 characters.If the password passes the check, output 'Strong', else output 'Weak'.

p = input()
n = list("0123456789")
s = ['!', '@', '#', '$', '%', '&', '*']
r = list("_-+()/:;?~`||√π÷×¶∆£¢€¥^°={}\©®™✓[]'")
a = 0
b = 0
for i in range (0,len(p)):
     if p[i] in n :
        a+=1
     elif p[i] in s :
        b+=1
     elif p[i] in r :
         print ("Weak")
     elif p[i] == " ":
        print ("Weak")
if a>=2 & b>=2:
   if len(p)>=7:
    print ("Strong")
   else:
     print ("Weak")
else :
   print ("Weak")