
import java.util.Scanner;

public class Sample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		while(true) {
			System.out.print("�̸� �Է�");
			Scanner sc = new Scanner (System.in);
			String name=sc.next();
			
			System.out.println(name);
			System.out.println("��� �Է�(Y/N)");
			String qq = sc.next();
			System.out.println(qq.hashCode());
			
			
		}
	}

}
