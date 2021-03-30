import java.util.*;

class  KoExcept extends Exception{//사용자 예외처리 클래스 생성
   public KoExcept(String message) { 
      super(message);
   }
}

public class User_Exception2 {//수를 계속 받되 홀수만 받음 

   public static void main(String[] args) throws Exception {
     Scanner sc = new Scanner(System.in);
     
     try {
    	 System.out.print("이름 입력");
    	 String name=sc.next();
    	 System.out.print("국어 입력");
    	 int kor = sc.nextInt();
    	 System.out.print("영어 입력");
    	 int eng = sc.nextInt();
    	 System.out.print("수학 입력");
    	 int mat = sc.nextInt();
    	 if(kor>100||eng>100||mat>100) {
    		 throw new KoExcept("너무 크다 새끼야");
    	 }
    	 else {
    		 System.out.print("이름 : "+name+"\n국어 : "+kor+"\n영어 : "+eng+"\n수학 : "+mat+"\n총점 : "+(kor+eng+mat));
    	 }
    	 
    	 
     }
     catch(KoExcept e){
    	 System.out.println("형, 너무커");
     }
    	 
     }
}
