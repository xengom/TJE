import java.util.Scanner;

public class Array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] name = {"������","�Ѷ��","���ǻ�","��λ�","������"};
	
		Scanner sc = new Scanner(System.in);
		String mo = sc.next();
		int p=0;
		for (int i=0; i<name.length; i++) {
			if(name[i].equals(mo)) p++;
		}
		if (p==0) System.out.println("���� ���̴�");
		else System.out.println(p+"�� �ִ�.");

		
	}

}
