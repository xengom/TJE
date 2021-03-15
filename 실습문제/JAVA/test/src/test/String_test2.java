package test;

public class String_test2 {

	public static void main(String[] args) {
		int [] a = {67,67,78,89,45,78,22,37};
		int sum=0;
		
		 
		for(int i:a) { //python : for i in a -> 람다식
			sum+=i;
		}
		System.out.println(sum);
		System.out.println(a.length);//배열은 ()없이 
		String name = "korea pusan Seoul";
		System.out.println(name.length());
		
	}

}
