c1 = 48
c2 = 57
c3 = 65
c4 = 97
t1 = c1
t2 = c2
t3 = c3
t4 = c4

print ("DEC\n")
print (c1, "\t", c2, "\t", c3, "\t", c4, "\t")

c1 = chr (c1)
c2 = chr (c2)
c3 = chr (c3)
c4 = chr (c4)
print ("CONVERT TO ASCII")
print (c1, "\t", c2, "\t", c3, "\t", c4, "\t")
print ("CONVERT HEX TO BINARY\n")

c1 = bin(t1)
c2 = bin(t3)
c3 = bin(t3)
c4 = bin(t4)

print (c1, "\t", c2, "\t", c3, "\t", c4, "\t")
print ("CONVERT HEX TO HEXADECIMAL\n")

c1 = hex(t1)
c2 = hex(t2)
c3 = hex(t3)
c4 = hex(t4)

print (c1, "\t", c2, "\t", c3, "\t", c4, "\t")
