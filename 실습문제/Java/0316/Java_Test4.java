package com.tj;
//ID�� PW�Է¹޾� ���

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
			if (RPW.equals(PW))  System.out.println("�α��� ����");
			else System.out.println("PW�� Ʋ�Ƚ��ϴ�.");
		}
		else System.out.println("ID�� Ʋ�Ƚ��ϴ�.");
			
		
	}
	

}


public class Java_Test4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.print("ID�Է�:");
		String ID = sc.next();
		System.out.print("PW�Է�:");
		String PW = sc.next();
		
		IDPW idpw = new IDPW(ID,PW);

		idpw.compare(idpw.getID(),idpw.getPW());
	}

}
