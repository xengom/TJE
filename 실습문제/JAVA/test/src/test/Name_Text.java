package test;

class NTest{ //Ŭ����

	
	public NTest() {//()�� �����Ƿ� ������, �μ� ������ ����Ʈ ������
		super();//���� ���߿� ����Ҷ� ��
	}
	
	public NTest(String name) {//������, ���� �����Ƿ� ���� ���� 
		super();
		this.name = name;
	}


	String name;
	void out() {
		System.out.println("�̸��� : "+name);
	}
}


public class Name_Text {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		NTest tt = new NTest("�ҹ��");
		tt.out();
	}

}
