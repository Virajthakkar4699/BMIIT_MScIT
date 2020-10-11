input: 'Python is a high-level programming language'
output : ['language']


result=re.findall(r'\w+$','Python is a programmimg language')
print("last word :",result)