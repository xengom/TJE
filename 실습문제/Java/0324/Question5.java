class gugu{
	void gugudan() {
		for(int i=2; i<10; i++) {
			for(int j=1;j<10; j++) {
				System.out.print(i+"*"+j+"="+i*j);
				System.out.print('\t');
			}
			System.out.println();
		}
	}
}
public class Question5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		gugu g = new gugu();
		g.gugudan();
	}

}
