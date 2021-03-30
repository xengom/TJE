import java.util.Scanner;

public class Array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] name = {"명지산","한라산","관악산","백두산","광교산"};
	
		Scanner sc = new Scanner(System.in);
		String mo = sc.next();
		int p=0;
		for (int i=0; i<name.length; i++) {
			if(name[i].equals(mo)) p++;
		}
		if (p==0) System.out.println("없는 산이다");
		else System.out.println(p+"개 있다.");

		
	}

}
