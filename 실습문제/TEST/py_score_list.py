a=[]
with open("c:\\파이선\\3-9.txt","r") as f:
    i=0
    for i in range(0,4):
        data=f.readline().split()
        a.append(data)

for i in range(0,4):
    a[i][1]=int(a[i][1])
    a[i][2]=int(a[i][2])
    a[i][3]=int(a[i][3])
    a[i].append(a[i][1]+a[i][2]+a[i][3])
    a[i].append(a[i][4]/3)
    if (a[i][5]>=90):
       a[i].append("A")
    elif (a[i][5]>=80):
       a[i].append("B")            
    elif (a[i][5]>=70):
       a[i].append("C")
    elif (a[i][5]>=60):
       a[i].append("D")
    else:
       a[i].append("F")

print("이름\t국어\t 영어\t 수학\t 총점\t 평균\t 학점\n")
print("-----------------------------------------------------\n") 

for i in range(0,4):
    print("{}\t {}\t {}\t {}\t {}\t {:.1f}\t {}".format(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],a[i][6]))                
           
    
       