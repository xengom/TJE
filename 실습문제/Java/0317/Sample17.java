package com.jt;
import java.util.Scanner;

class test{ //�ֹι�ȣ �Է�
	String str;
	public String getStr() {return str;}
	public void setStr(String str) {this.str=str;}
	void sex() {
		if(str.charAt(7)=='1' || str.charAt(7)=='3') System.out.println("����");
		else System.out.println("����");
		
	}
}


public class Sample17 {

	public static void main(String[] args) {
		test a = new test();
		Scanner sc = new Scanner(System.in);
		
		
		System.out.print("�ι�?");
		String aa = sc.next();
		a.setStr(aa);
		System.out.println("��ȣ"+a.getStr());
		a.sex();
		
		
	}

}
