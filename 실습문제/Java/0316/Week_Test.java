package com.tj;

import java.util.Scanner;

public class Week_Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("수를(1-7)입력");
		int su=sc.nextInt();
		Week today = null;
		switch (su) {
		case 1:
			today = Week.월요일; break;
		case 2:
			today = Week.화요일; break;
		case 3:
			today = Week.수요일; break;
		case 4:
			today = Week.목요일; break;
		case 5:
			today = Week.금요일; break;
		case 6:
			today = Week.토요일; break;
		case 7:
			today = Week.일요일; break;

		}
		System.out.print("선택한 요일은 "+ today);
		
	}

}
