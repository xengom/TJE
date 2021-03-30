package com.jt;
import java.util.Scanner;

class rn{
	
	String resnum;
	int rny,rnm,rnd,rna;
	
	public String getResnum() {
		return resnum;
	}
	public void setResnum(String resnum) {
		this.resnum = resnum;
	}
	void find_age() {
		rny=Integer.parseInt(resnum.substring(0,2));
		rnm=Integer.parseInt(resnum.substring(2,4));
		rnd=Integer.parseInt(resnum.substring(4,6));
		char temp = resnum.charAt(7);
		if  (temp=='3'||temp=='4') rna = rny+2000;
		else rna = rny+1900;
		
	}
	void out() {
		find_age();
		System.out.print(rny+"년 "+rnm+"월 "+rnd+"일\n"+(2021-rna+1)+"살\n");
	}
	
}


public class Sample18 {//주민번호 입력받아 출력

	public static void main(String[] args) {
		rn resn = new rn();
		Scanner sc = new Scanner(System.in);
		String aa = sc.next();
		resn.setResnum(aa);
		resn.out();
	}

}
