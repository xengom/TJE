package test;

public class Score {

	public static void main(String[] args) {
		String n;
		int k,e,m,t;
		double a;
		char g;
		
		n = "ȫ�浿";
		k = 73;
		e = 62;
		m = 85;
		t = k + e + m;
		a = t/3;
		String avg = String.format("%.2f", a); 
		if(a>=90) g = 'A';
		else if (a>=80) g = 'B';
		else if (a>=70) g = 'C';
		else if (a>=60) g = 'D';
		else g = 'F';
		System.out.println("�̸�"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"���"+"\t"+"����");
		System.out.println("===================================================");
		System.out.println(n+"\t"+k+"\t"+e+"\t"+m+"\t"+t+"\t"+a+"\t"+g);
		
	}

}
