abstract class AAA{
	abstract void out();
}



public class Inner_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		AAA aa = new AAA() {
		
		@Override
		void out() {
			System.out.println("�͸� Ŭ����");
		}};
		aa.out();
	}

}
