import java.util.TreeSet;

public class Lotto_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TreeSet<Integer> ti = new TreeSet<Integer>();
		for(int i=0; ti.size()<6; i++) {
			int num=(int)(Math.random()*45)+1;
			ti.add(num);
		}
		System.out.println("로또 번호 : "+ti);
	}

}
