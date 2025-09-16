def value(op):
    if op in ["^"]:
        return 3
    elif op in ["*", "/"]:
        return 2
    elif op in ["+", "-"]:
        return 1
    else:
        return 0

def convert(s: str):
    output = ""
    stack = []
    for i in s:
        if i.isdigit():
            output += i
        else:
            while stack and value(stack[-1]) >= value(i):
                output += stack.pop()
            stack.append(i)
    while stack:
        output += stack.pop()
    return output


print(convert("2+3*4"))  # 234*+
print(convert("2*3+4"))  # 23*4+
