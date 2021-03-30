import java.util.Scanner;

class Array{
	int [] a = new int [5];
	int sum=0;
	Scanner sc = new Scanner(System.in);
	void avg() {
		for(int i=0;i<a.length; i++) {
			a[i] = sc.nextInt();
			sum+= a[i];
		}
		System.out.println("ЦђБе : "+sum/a.length);
	}
	
}

public class Question6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Array ar = new Array();
		ar.avg();
	}

}
