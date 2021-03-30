import java.util.InputMismatchException;
import java.util.Scanner;

public class Question7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(true) {
			try {
				int a = sc.nextInt();
				int b = sc.nextInt();
				System.out.println(a/b);
				break;
			}
			catch(ArithmeticException e){
				System.out.println("0으로 나눌 수 없음");
				continue;
			}
		}
		
	}

}
