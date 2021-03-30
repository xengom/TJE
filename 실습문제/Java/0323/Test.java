import java.util.Arrays;
import java.util.Collections;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] name = {"명지산","한라산","관악산","백두산","광교산"};
		System.out.println(name.length);
		for (String k: name) {
			System.out.println(k);
		}
		
		
		
		System.out.println("정렬 후");
		Arrays.parallelSort(name);//오름 정렬
		for (String k: name) {
			System.out.println(k);
		}
		
		System.out.println("정렬 후");
		Arrays.sort(name, Collections.reverseOrder());;//내림 정렬
		for (String k: name) {
			System.out.println(k);
		}
		
		
		
	}

}
