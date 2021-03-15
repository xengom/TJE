package test;

class NTest{ //클래스

	
	public NTest() {//()가 있으므로 생성자, 인수 없으니 디폴트 생성자
		super();//조상 나중에 상속할때 씀
	}
	
	public NTest(String name) {//생성자, 변수 있으므로 값을 받음 
		super();
		this.name = name;
	}


	String name;
	void out() {
		System.out.println("이름은 : "+name);
	}
}


public class Name_Text {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		NTest tt = new NTest("소백산");
		tt.out();
	}

}
