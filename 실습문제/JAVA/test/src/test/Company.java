package test;

class Sample{
	String dep;
	String name;
	int ea,price;
	int sales;
	
	void sale() {
		sales = ea*price;
	}
	void output() {	
		sale();
		System.out.println("부서명 :"+dep+"\n이름 : "+name+"\n수량 : "+ea+"\n단가 : "+price+"\n매출액 : "+sales);
	}
}


public class Company {

	public static void main(String[] args) {
		Sample sam = new Sample();
		
		sam.dep = "인사과";
		sam.name = "백두산";
		sam.ea = 450;
		sam.price = 900;
		sam.output();
	}

}
