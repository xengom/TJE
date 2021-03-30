abstract class Cal{
	int a,b;
	void setT(int a, int b) {
		this.a=a;
		this.b=b;
	}
	abstract void print();
}

class Plu extends Cal{

	@Override
	void print() {
		System.out.println(a+"+"+b+"="+(a+b));
	}
	
}



public class Inheritage2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Plu p = new Plu();
		p.setT(10, 20);
		p.print();
	}
}
