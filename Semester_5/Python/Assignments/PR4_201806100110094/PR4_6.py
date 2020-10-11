'''
Write a python style code to implement following instructions.	
•Create a list with one decimal literal and one string literal.
•Append float literal in the list.
•Remove one literal from the list
'''

#Creating a list with one decimal literal and one string literal
l=[5,9.0,'Bardoli']
print("List Elements ",l)

#Appending float literal in the list
l.append(8.5)
print("List after appending float literal ",l)

#Removing one literal from the list
l.remove(9.0)
print("List after removing a literal from list ",l)
