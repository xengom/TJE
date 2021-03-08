class Score:#전역변수
    name=""#class 클래스명 : 무조건 첫 자는 대문자로
    kor=0
    eng=0
    mat=0

    def __init__(self,name,k,e,m):#initialize#생성자.....생성자는 가장 먼저 실행#지역변수
        self.name=name
        self.kor=k
        self.eng=e
        self.mat=m

    def calc(self):#계산전용(calc)함수를 불러내는거 클래스안에있는멤버변수나 함수를 호출하려면
        pp.tot=pp.kor+pp.eng+pp.mat
        pp.avg=float(pp.tot)/3
        if pp.avg>=90:
            pp.hak="A"
        elif pp.avg>=80:
            pp.hak='B'
        elif pp.avg>=70:
            pp.hak='C'
        elif pp.avg>=60:
            pp.hak='D'
        else:
            pp.hak='F'

    def out(self):#출력전용(out)
        print('이름\t 국어\t 영어\t 수학\t 총점\t 평균\t 학점\t')
        print('♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥')
        print('{}\t{}\t{}\t{}\t{}\t{:.1f}\t  {}\t'.format(pp.name,pp.kor,pp.eng,pp.mat,pp.tot,pp.avg,pp.hak))

        a=[]
        i=0
        with open("c:\\파이선\\3-8.txt","r") as f:
            while(True):
                data=f.readline().split()
                if not data : break
                a.append(data)
                name=a[i][0]#이름
                kor=int(a[i][1])#국어
                eng=int(a[i][2])#영어
                mat=int(a[i][3])#수학
                i=i+1
    #초기화 해줘야 함.
                pp=Score(name,kor,eng,mat)
                pp.calc()
                pp.out()
