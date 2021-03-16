package com.tj;
//ID와 PW입력받아 출력

import java.util.Scanner;
class IDPW {
	String RID = "DeC";
	String RPW = "decgom";
	String ID;
	String PW;
	

	public IDPW(String iD, String pW) {
		super();
		ID = iD;
		PW = pW;
	}



	public String getID() {
		return ID;
	}



	public void setID(String iD) {
		ID = iD;
	}



	public String getPW() {
		return PW;
	}



	public void setPW(String pW) {
		PW = pW;
	}



	void compare(String ID, String PW) {
		if (RID.equals(ID)) {
			if (RPW.equals(PW))  System.out.println("로그인 성공");
			else System.out.println("PW가 틀렸습니다.");
		}
		else System.out.println("ID가 틀렸습니다.");
			
		
	}
	

}


public class Java_Test4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.print("ID입력:");
		String ID = sc.next();
		System.out.print("PW입력:");
		String PW = sc.next();
		
		IDPW idpw = new IDPW(ID,PW);

		idpw.compare(idpw.getID(),idpw.getPW());
	}

}
