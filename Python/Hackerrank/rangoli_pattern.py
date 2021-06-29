n = int(input())
alpha = "abcdefghijklmnopqrstuvwxyz"
data = [alpha[i] for i in range(n)]
items = list(range(n))
items = items[:-1]+items[::-1]
print(items)