import textwrap

def wrap(string, max_width):
    li=list(string[i:i+max_width] for i in range(0,len(string),max_width))
    return "\n".join(li)
        
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)