package com.jt;
import java.util.Scanner;

class test{ //주민번호 입력
	String str;
	public String getStr() {return str;}
	public void setStr(String str) {this.str=str;}
	void sex() {
		if(str.charAt(7)=='1' || str.charAt(7)=='3') System.out.println("남자");
		else System.out.println("여자");
		
	}
}


public class Sample17 {

	public static void main(String[] args) {
		test a = new test();
		Scanner sc = new Scanner(System.in);
		
		
		System.out.print("민번?");
		String aa = sc.next();
		a.setStr(aa);
		System.out.println("번호"+a.getStr());
		a.sex();
		
		
	}

}
