import java.util.*;
class  KoExcept extends Exception{//사용자 예외처리 클래스 생성
   public KoExcept(String message) { 
      super(message);
   }
}
public class User_Exception {//수를 계속 받되 홀수만 받음 

   public static void main(String[] args) throws Exception {
     Scanner sc = new Scanner(System.in);
     int i =0,sum=0; 
     while(i<5) {
     System.out.print("홀수를 입력해라!");
        try {
        int n = sc.nextInt();
        if (n%2 == 0 ) {throw new KoExcept("짝수는 안돼요!");}
        else {System.out.println("홀수: "+n); i++; sum += n;}  
        }catch(KoExcept e) {
           System.out.println(e.getMessage());
           continue;
        }catch(Exception e) {
           System.out.println(e.getMessage());
           continue;
        }
     }
     System.out.println("합: " +sum);
   }
}