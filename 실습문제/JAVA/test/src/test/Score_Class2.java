package test;

class Grade2{
	String n;
	int k,e,m,t;
	double a;
	char g;
	
	void tot() {
		
		if(a>=90) g = 'A';
		else if (a>=80) g = 'B';
		else if (a>=70) g = 'C';
		else if (a>=60) g = 'D';
		else g = 'F';
		String avg = String.format("%.2f", a);
		System.out.println("�̸�"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"����"+"\t"+"���"+"\t"+"����");
		System.out.println("===================================================");
		System.out.println(n+"\t"+k+"\t"+e+"\t"+m+"\t"+t+"\t"+avg+"\t"+g);
	}
}
public class Score_Class2 {
	public static void main(String[] args) {
		Grade2 gra = new Grade2();
		
		gra.n = "ȫ�浿";
		gra.k = 73;
		gra.e = 62;
		gra.m = 85;
		gra.t = gra.k + gra.e + gra.m;
		gra.a = gra.t/3;
		
		gra.tot();
		
		
	}
}
