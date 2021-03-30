import java.util.*;
public class Exception_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("수를 입력하세요?");
		
		Scanner sc = new Scanner(System.in);
		
			
			try {
				int i = sc.nextInt();
				System.out.println(23+i);
			}
			catch(InputMismatchException e){
				System.out.println("아무튼 에러"+e.getMessage());
			}
		
	}

}
