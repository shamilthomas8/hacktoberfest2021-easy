# String is a palindrome or not

str1 = input()

ans = (str1 == str1[::-1])

if ans:
	print("String is a palindrome")
else:
	print("String is not a palindrome")
