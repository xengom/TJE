package com.tj;

import java.util.Scanner;

public class Week_Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("����(1-7)�Է�");
		int su=sc.nextInt();
		Week today = null;
		switch (su) {
		case 1:
			today = Week.������; break;
		case 2:
			today = Week.ȭ����; break;
		case 3:
			today = Week.������; break;
		case 4:
			today = Week.�����; break;
		case 5:
			today = Week.�ݿ���; break;
		case 6:
			today = Week.�����; break;
		case 7:
			today = Week.�Ͽ���; break;

		}
		System.out.print("������ ������ "+ today);
		
	}

}
