//오버로딩
package com.tj;
class ko1{
	int a1,a2,a3;
	
	void hap1(int a, int b, int c) {
		System.out.println(a+b+c);
	}
	
	void hap1(int a, int b) {
		System.out.println(a+b);
	}
		
}
public class Sample {

	public static void main(String[] args) {
		ko1 k = new ko1();
		k.hap1(10, 20);
		k.hap1(10,20,30);
	}

}
