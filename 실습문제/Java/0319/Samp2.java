interface P{
	final String name = "홍길동";
	void food();//점심메뉴
}
interface P2{
	final int don = 0;
	void duty();//육,해,공,미필 or 해당없음
}

class Stu implements P,P2{
	public void food() {
		
	}
	public void duty() {
		
	}
	void out() {
		System.out.println("오늘 점심 메뉴 : "+name);
		System.out.println("국방의 의무 : "+don);
	}
}
public class Samp2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
