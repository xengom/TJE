abstract class Base{
	int a,b;
	void set(int a, int b) {
		this.a=a;
		this.b=b;
	}
	abstract void out();
}
class Aa extends Base{
	@Override
	void out() {
		System.out.println(a+b);
	}

}
class Bb extends Base{
	@Override
	void out() {
		System.out.println(a-b);
	}

}
public class Calcal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Base aa = new Aa();
		aa.set(10,5);
		aa.out();
	}

}
