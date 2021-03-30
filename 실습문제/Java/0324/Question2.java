class Order{
	String ONum,ID,Date,Name,PNum,Address;

	public Order(String oNum, String iD, String date, String name, String pNum, String address) {
		ONum = oNum;
		ID = iD;
		Date = date;
		Name = name;
		PNum = pNum;
		Address = address;
	}
	
}
public class Question2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Order o = new Order("201907210001","abc123","2019년 7월 21일","홍길순","PD-345-12","서울시 영등포구 여의도동 20번지");
	}

}
