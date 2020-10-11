def smallest_largest_words(str1):
    word = ""
    all = []
    str1 = str1 + " "
    for i in range(0, len(str1)):
        if(str1[i] != ' '):
            word = word + str1[i]  
        else:
            all.append(word)  
            word = ""
          
    small = large = all[0]  
   
    for k in range(0, len(all)):
        if(len(small) > len(all[k])):
            small = all[k]
        if(len(large) < len(all[k])):
            large = all[k]
    return small,large

str1 = "BABU MADHAV INSTITUTE OF INFORMATION TECHNOLOGY" 
print("Original String :\n",str1)
small, large = smallest_largest_words(str1)  
print("Smallest word: " + small) 
print("Largest word: " + large) 
