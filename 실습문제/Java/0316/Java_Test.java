package com.tj;

class score{
	String name;
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

	/*	
	public score(String name, int k, int e, int m) {//필드 생성자
		super();
		this.name = name;
		this.k = k;
		this.e = e;
		this.m = m;
	}
*/
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

public class Java_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		score s = new score();
		s.setName("판옥선");
		s.setK(96);
		s.setE(46);
		s.setM(75);
		
		//score s = new score("거북선",86,74,95);//필드생성자
/*		score s = new score(); //디폴트 생성자
 * 		s.name = "백두산";
		s.k = 96;
		s.e = 75;
		s.m = 70;
*/
		
		s.output();
	}

}
