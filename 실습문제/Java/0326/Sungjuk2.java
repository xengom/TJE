import java.io.*;
import java.util.*;

class SungA implements Comparable<SungA>{  //DTO
   int ban;
   String name;
   int kor,eng,mat,tot;
   
   public SungA() {
      super();
      }
   
   public SungA(int ban, String name, int kor, int eng, int mat) {
      super();
      this.ban = ban;
      this.name = name;
      this.kor = kor;
      this.eng = eng;
      this.mat = mat;
   }
   public int getBan() {
      return ban;
   }
   public void setBan(int ban) {
      this.ban = ban;
   }
   public String getName() {
      return name;
   }
   public void setName(String name) {
      this.name = name;
   }
   public int getKor() {
      return kor;
   }
   public void setKor(int kor) {
      this.kor = kor;
   }
   public int getEng() {
      return eng;
   }
   public void setEng(int eng) {
      this.eng = eng;
   }
   public int getMat() {
      return mat;
   }
   public void setMat(int mat) {
      this.mat = mat;
   }
   public int getTot() {
      return tot;
   }
   public void setTot(int tot) {
      this.tot = tot;
   }



@Override
public int compareTo(SungA o) {
   if(ban > o.ban) return 1;
   else if (ban < o.ban) return -1;
   else return 0;
   //return 0;
}
   
   
   
}

public class Sungjuk2{

   public static void main(String[] args) throws IOException {
      ArrayList<SungA> alist = new ArrayList<SungA>();
      FileReader fr =new FileReader("c:/JAVA/text.txt");
      BufferedReader br = new BufferedReader(fr);
      while(true)
         {
         String sr=   br.readLine();
           if (sr==null) break;
           int ban = Integer.parseInt(sr.substring(0, 1));
           String name = sr.substring(1,4);
           int kor = Integer.parseInt(sr.substring(4, 6));
           int eng = Integer.parseInt(sr.substring(6, 8));
           int mat = Integer.parseInt(sr.substring(8, 10));
           
           SungA sa = new SungA(ban,name,kor,eng,mat);
         
         alist.add(sa);
         }
     
      Collections.sort(alist);
      
      //���� ���δٴ� ����. ���뿡�ٰ� .
      System.out.println("ã�� ��� �̸��� �Է��ϼ���.");
      Scanner sc = new Scanner(System.in);
      String sname = sc.next();
      
      boolean bb=false;
      
      for(int i=0; i<alist.size(); i++)
      {
       SungA ss=alist.get(i);
       if(ss.getName().equals(sname));
       {
          bb=true;
       }
       
      }
    
         System.out.println("���"+bb);   
         if(bb)
         {
         System.out.println(sname+" �̸��� �����մϴ�.");
         }
         else
         {
         System.out.println(sname+" �̸��� �����ϴ�.");
         }
      
      
      System.out.println("��"+"\t"+"�̸�"+"\t"+"����"+"\t"+"����"+"\t"+"����");
 
      for(SungA aa:alist)
   
      {
        System.out.println(aa.getBan()+"\t"+aa.getName()+"\t"+aa.getKor()+"\t"+aa.getEng()+"\t"+aa.getMat());
   
      }
      
     
     
     
     
     
   }

}



















