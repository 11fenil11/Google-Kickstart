#Fenil Parmar 

T = int(input())
Strings=[]

for _ in range(T):
    Strings.append(input())

for _ in range(T):
    w = 0
    h = 0
    String = Strings[_]

    stack = []
    ml = 1
    ine = 0
    for char in String:
        if char.isdigit():
            ine = (ine*10)+int(char)
        elif char=="(":
            stack.append(ine)
            ml *= ine
            ine = 0
        elif char==")":
            ml //= stack.pop()
        else:
            if char=="N":
                h -= ml
            elif char=="S":
                h += ml
            elif char == "W":
                w -= ml
            elif char == "E":
                w += ml
    w = int(w%1000000000)+1
    h = int(h%1000000000)+1
    print("Case #"+str(_+1)+": "+str(w)+" "+str(h))
