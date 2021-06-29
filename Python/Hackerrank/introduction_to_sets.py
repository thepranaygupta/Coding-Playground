from statistics import mean

def average(array):
    avg=mean(set(array))
    return('%.3f'%avg)
    

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)