package com.tj;

import java.util.Scanner;

class score2{
	private String name;
	int k,e,m,t;
	double a;
	char g;
	
	
	public score2(String name, int k, int e, int m) {
		super();
		this.name = name;
		this.k = k;
		this.e = e;
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

public class Java_Test3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		System.out.print("이름 입력 : ");
		String n = sc.next();
		System.out.print("\n국어 입력 : ");
		int ko = sc.nextInt();
		System.out.print("\n영어 입력 : ");
		int en = sc.nextInt();
		System.out.print("\n수학 입력 : ");
		int ma = sc.nextInt();
		
		score2 s = new score2(n,ko,en,ma);
		s.output();
	}

}
