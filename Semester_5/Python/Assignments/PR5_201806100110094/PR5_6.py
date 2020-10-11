'''
6.Write a Python program to create a nested tuple. Which consider one
integer literal, one string literal, one list literal andone tuple literal.
	Integer literal: - 10
	String literal: - "Python"
	List literal: - [10,3,4,5,90]
	Tuple literal: - (1,2,3,4,5) 
Perform the following operations:
	Print out the list literal's 0th index value.
	Update the list literal's 1th index value to 20.
	Print out the 3rd position literal of tuple.
'''


t1=(-10,"python",[10,3,4,5,90],(1,2,3,4,5))
print(t1)
print("the list literal's 0th index value")
print(t1[0])
print("Update the list literal's 1th index value to 20.")
t1[2][1]=20
print(t1)
print("Print out the 3rd position literal of tuple.")
print(t1[3])
