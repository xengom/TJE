interface soldier{
	void duty();
}

interface Food{
	void eat();
}
class Army implements soldier,Food{
	@Override
	public void duty() {
		System.out.println("국방의 의무 육군");
	}
	public void eat() {
		System.out.println("육빔소");
	}
}
class Navy implements soldier,Food{
	@Override
	public void duty() {
		System.out.println("바다를 지키는 해군");
	}
	public void eat() {
		System.out.println("해빔소");
	}
}
public class Interface_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	}

}
