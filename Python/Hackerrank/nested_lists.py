if __name__ == '__main__':

    records=[]
    grades=set()
    second_name=list()

    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name,score])
        grades.add(score)
    
    second_low=sorted(grades)[1]
    
    for name,score in records:
        if score==second_low:
            second_name.append(name)
    
    for name in sorted(second_name):
        print(name, end='\n')