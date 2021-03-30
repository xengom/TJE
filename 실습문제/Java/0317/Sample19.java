package com.jt;
class Lpg{
	String name;
	int kor,eng,mat,tot;
	double avg;
	char hak;
	
	public String getName() {
		return name;
	}


	public void setName(String name) {
		this.name = name;
	}


	public int getKor() {
		return kor;
	}


	public void setKor(int kor) {
		this.kor = kor;
	}


	public int getEng() {
		return eng;
	}


	public void setEng(int eng) {
		this.eng = eng;
	}


	public int getMat() {
		return mat;
	}


	public void setMat(int mat) {
		this.mat = mat;
	}


	void tot() {
		tot=kor+eng+mat;
	}
	void avg() {
		avg=(double)tot/3;
	}
	void hak() {
		if (avg>=90) hak='A';
		else if (avg>=80) hak='B';
		else if (avg>=70) hak='C';
		else if (avg>=60) hak='D';
		else  hak='F';
	}
	void out() {
		tot();
		avg();
		hak();
		System.out.println("이름\t국어\t영어\t수학\t총점\t평균\t학점");
		System.out.println(name+"\t"+kor+"\t"+eng+"\t"+mat+"\t"+tot+"\t"+avg+"\t"+hak+"\t");
	}
}
public class Sample19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Lpg score = new Lpg();
		score.setName("홍길동");
		score.setKor(98);
		score.setEng(89);
		score.setMat(80);
		score.out();
	}

}
