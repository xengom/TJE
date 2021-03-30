import java.text.DecimalFormat;
import java.util.Scanner;

class Reapeat{
	DecimalFormat df = new DecimalFormat("#,##0.00");
	int sum,cnt;
	double avg;
	void sum(int n) {
		sum+=n;
		cnt++;
	}
	void avg() {
		avg = (double)sum/cnt;
	}
	
	void out(int n) {
		if (n!=-1) {
			sum(n);
			avg();
			System.out.println("Че : "+df.format(sum) +"\nЦђБе : "+df.format(avg));
		}
	}
}
public class Question3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Reapeat r = new Reapeat();
		int a = 0;
		Scanner sc = new Scanner(System.in);
		while(a!=-1) {
			a = sc.nextInt();
			r.out(a);
		}
	}



}
