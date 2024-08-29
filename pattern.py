def pattern1(h):
# *
# **
# ***
# ****
    if h<1:
        print("Invalid height")
        return
    for i in range(h):
        print("*"*(i+1))

def pattern2(h):
# 1
# 23
# 456
# 78910
    if h<1:
        print("Invalid height")
        return
    term=1
    for i in range(h):
        for j in range(i+1):
            print(term,"\t",end="")
            term+=1
        print()

def pattern3(h):
# 1
# 12
# 123
# 1234
    if h<1:
        print("Invalid height")
    for i in range(1,h+1):
        for j in range(1,i+1):
            print(j,end="")
        print()
def pattern3_2(h):
# 1
# 12
# 123
# 1234
    if h<1:
        print("Invalid height")
    for i in range(1,h+1):
        print(*range(1,i+1),sep=" ")

def pattern4(h):
#    *
#   **
#  ***
# ****
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        print("*"*(i+1))
def pattern5(h):
#    *
#   **
#  ***
# ****
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        print("* "*(i+1))

def pattern6(h):
#      1
#     12
#    123
#   1234
#  12345
# 123456
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        for j in range(1,(i+2)):
            print(j,end="")
        print()

def pattern7(h):
#      1 
#     1 2 
#    1 2 3 
#   1 2 3 4 
#  1 2 3 4 5 
# 1 2 3 4 5 6 
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        for j in range(1,(i+2)):
            print(j,"",end="")
        print()

def pattern8(h):
# 1
# 21
# 321
# 4321
# 54321
# 654321
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        for j in range(i+1,0,-1):
            print(j,end="")
        print()
def pattern9(h):
#      1
#     21
#    321
#   4321
#  54321
# 654321
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        for j in range(i+1,0,-1):
            print(j,end="")
        print()
def pattern10(h):
#      1 
#     2 1 
#    3 2 1 
#   4 3 2 1 
#  5 4 3 2 1 
# 6 5 4 3 2 1 
    if h<1:
        print("Invalid height")
    for i in range(0,h):
        print(" "*(h-i-1),end="")
        for j in range(i+1,0,-1):
            print(j,"",end="")
        print()

def pattern11(h):
# 15    14	13	12	11	
# 10	9	8	7	
# 6	    5	4	
# 3	    2	
# 1
    c=(h*(h+1))//2
    for i in range(0,h):
        for j in range(h,i,-1):
            print(c,"\t",end="")
            c-=1
        print()
def pattern12(h):
# 15	14	13	12	11	
#  	10	9	8	7	
#  	 	6	5	4	
#  	 	 	3	2	
#  	 	 	 	1	
    c=(h*(h+1))//2
    for i in range(0,h):
        print("\t"*(i),end="")
        for j in range(h,i,-1):
            print(c,"\t",end="")
            c-=1
        print()
def pattern13(h):
# 15	14	13	12	11	
#  	10	9	8	7	
#  	 	6	5	4	
#  	 	 	3	2	
#  	 	 	 	1	
    c=(h*(h+1))//2
    for i in range(0,h):
        print(" "*(i),end="")
        for j in range(h,i,-1):
            print(c,"",end="")
            c-=1
        print()

def execute(h):
    print("PATTERN 1:\n")
    pattern1(h)
    print("PATTERN 2:\n")
    pattern2(h)
    print("PATTERN 3:\n")
    pattern3(h)
    print("PATTERN 3_2:\n")
    pattern3_2(h)
    print("PATTERN 4:\n")
    pattern4(h)
    print("PATTERN 5:\n")
    pattern5(h)
    print("PATTERN 6:\n")
    pattern6(h)
    print("PATTERN 7:\n")
    pattern7(h)
    print("PATTERN 8:\n")
    pattern8(h)
    print("PATTERN 9:\n")
    pattern9(h)
    print("PATTERN 10:\n")
    pattern10(h)
    print("PATTERN 11:\n")
    pattern11(h)
    print("PATTERN 12:\n")
    pattern12(h)
    print("PATTERN 13:\n")
    pattern13(h)

try:
    n=int(input("Enter height : "))
    execute(n)
except:
    print("ERROR : ONLY INTEGER INPUT ACCEPTED")