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
	public score(String name, int k, int e, int m) {//�ʵ� ������
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
		System.out.println("���� ó�� �ý���");
		System.out.println("�̸�"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"���"+"\t"+"����");
		System.out.println("================================================================");
		System.out.println(name+"\t"+k+"\t"+e+"\t"+m+"\t"+t+"\t"+a+"\t"+g);
	}
}

public class Java_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		score s = new score();
		s.setName("�ǿ���");
		s.setK(96);
		s.setE(46);
		s.setM(75);
		
		//score s = new score("�źϼ�",86,74,95);//�ʵ������
/*		score s = new score(); //����Ʈ ������
 * 		s.name = "��λ�";
		s.k = 96;
		s.e = 75;
		s.m = 70;
*/
		
		s.output();
	}

}
