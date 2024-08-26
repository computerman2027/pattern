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

try:
    n=int(input("Enter height : "))
    execute(n)
except:
    print("ERROR : ONLY INTEGER INPUT ACCEPTED")