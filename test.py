##생성자.. 객체를 초기화.. 값을 넣어주는 과정
##      .. 클래스가 호출되면 생성자 함수가  가장 먼저 실행, 
##      .. 함수 (자바: 클래스명과 동일, 파이썬은 __init__())

class Score:
    name=""
    kor=0
    eng=0
    mat=0

    def __init__(self,name,k,e,m):
        self.name=name
        self.kor=k
        self.eng=e
        self.mat=m
        
    def calc(self):
        self.tot=self.kor+self.eng+self.mat
        self.avg=float(self.tot)/3

        if self.avg>=90 :
            self.hak = "A"
        elif self.avg>=80:
            self.hak="B"
        elif self.avg>=70 :
            self.hak="C"
        elif self.avg >=60:
            self.hak="D"
        else : self.hak ="F"

    def out(self):
        
        print("{}\t {}\t {}\t {}\t {}\t {:.1f}\t {}".format(self.name, self.kor, self.eng, self.mat, self.tot, self.avg, self.hak))
        



a=[]
i=0
with open("F:\Git\TJE\실습문제\Python\score.txt", "r") as f:
    print("이름\t 국어\t 영어\t 수학\t 총점\t 평균\t 학점")
    while(True):
        data = f.readline().split()
        if not data : break
        a.append(data)
        name = a[i][0]
        kor = int(a[i][1])
        eng = int(a[i][2])
        mat = int(a[i][3]) 

        pp = Score(name, kor, eng, mat)
        pp.calc()
        pp.out()
        i+=1

        
