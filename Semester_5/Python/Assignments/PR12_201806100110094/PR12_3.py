txt = "ABC XYZ"
x = re.findall("^XYZ", txt)
if x:
  print("Yes, the string starts with 'XYZ'")
else:
  print("No match")