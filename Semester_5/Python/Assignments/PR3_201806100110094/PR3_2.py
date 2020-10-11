'''
        * 
      * * 
    * * * 
  * * * * 
* * * * *
'''
rows=5
k = 2 * rows - 2
for rows in range(0, rows):
    for cols in range(0, k):
        print(end=" ")
    k = k - 2
    for cols in range(0, rows + 1):
        print("* ", end="")
    print("")
