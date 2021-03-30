
public class Lambda_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread tt = new Thread(()->{
			for(int i=1; i<=10;i++) {
				System.out.println(i);
			}
		});
		tt.start();
	}

}
