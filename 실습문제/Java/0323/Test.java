import java.util.Arrays;
import java.util.Collections;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] name = {"������","�Ѷ��","���ǻ�","��λ�","������"};
		System.out.println(name.length);
		for (String k: name) {
			System.out.println(k);
		}
		
		
		
		System.out.println("���� ��");
		Arrays.parallelSort(name);//���� ����
		for (String k: name) {
			System.out.println(k);
		}
		
		System.out.println("���� ��");
		Arrays.sort(name, Collections.reverseOrder());;//���� ����
		for (String k: name) {
			System.out.println(k);
		}
		
		
		
	}

}
