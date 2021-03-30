package com.tj;
class Box<T>{
	private T ko;

	public T getKo() {
		return ko;
	}

	public void setKo(T ko) {
		this.ko = ko;
	}
	
}
public class Gare_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Box<String> bb = new Box<String>();
		bb.setKo("우리나라ㅏ");
		System.out.println(bb.getKo());
		
		Box<Integer> cc=new Box<Integer>();
		cc.setKo(88);
		System.out.println(cc.getKo());
	}

}
