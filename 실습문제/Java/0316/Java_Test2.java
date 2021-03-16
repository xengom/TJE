package com.tj;

class score3{
	private String name;
	int k,e,m,t;
	double a;
	char g;
	
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getK() {
		return k;
	}

	public void setK(int k) {
		this.k = k;
	}

	public int getE() {
		return e;
	}

	public void setE(int e) {
		this.e = e;
	}

	public int getM() {
		return m;
	}

	public void setM(int m) {
		this.m = m;
	}

	
	void tot() {
		t=k+e+m;
	}
	
	void avg() {
		a=t/3;
	}
	
	void sco() {
		if (a>=90) g='A';
		else if (a>=80) g='B';
		else if (a>=70) g='C';
		else if (a>=60) g='D';
		else g='F';
	}
	void output() {
		tot();
		avg();
		sco();
		System.out.println("성적 처리 시스템");
		System.out.println("이름"+"\t"+"국어"+"\t"+"영어"+"\t"+"수학"+"\t"+"총점"+"\t"+"평균"+"\t"+"학점");
		System.out.println("================================================================");
		System.out.println(name+"\t"+k+"\t"+e+"\t"+m+"\t"+t+"\t"+a+"\t"+g);
	}
}

public class Java_Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		score3 s = new score3();
		
		s.setName("백두산") ;
		s.setK(98);
		s.setE(87);
		s.setM(79);

		System.out.println("이름 :"+s.getName());
		
		s.output();
	}

}
