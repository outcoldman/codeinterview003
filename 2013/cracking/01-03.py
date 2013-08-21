# coding=utf8
# Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. 
# NOTE: One or two additional variables are fine. An extra copy of the array is not.

def remove_duplicates(str):
    buffer = list(str)
    for i in xrange(len(buffer) - 1, -1, -1):
        found_duplicate = False
        
        for j in xrange(i - 1, -1, -1):
            if buffer[i] == buffer[j]:
                found_duplicate = True
                break
            
        if found_duplicate:
            del buffer[i]
            
        
    return "".join(buffer)

print "Duplicates removed %s" % remove_duplicates("aaabbb")
    