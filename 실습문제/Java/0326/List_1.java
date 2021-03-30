import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.*;

class Sung implements Comparable<Sung>{
   String name;
   int age;
   public Sung() {
      super();
   }
   public Sung(String name, int age) {
      super();
      this.name = name;//
      this.age = age;
   }
   public String getName() {
      return name;
   }
   public void setName(String name) {
      this.name = name;
   }
   public int getAge() {
      return age;
   }
   public void setAge(int age) {
      this.age = age;
   }
	@Override
	public int compareTo(Sung o) {
		// TODO Auto-generated method stub
	return o.name.compareTo(name);
}

}

public class List_1 {

   public static void main(String[] args) throws IOException {
   
      
      ArrayList<Sung> ss = new  ArrayList<Sung>();
      FileReader fr = new FileReader("C:/JAVA/text.txt");
		BufferedReader br = new BufferedReader(fr);
		while(true) {
			String st = br.readLine();
			if(st==null) break;
			System.out.println(st);
			String name=st.substring(0,3);
			int age= Integer.parseInt((String) st.subSequence(4, 5));
			ss.add(new Sung(name,age));
			
		}
		
		
		
		
      Collections.sort(ss);
      System.out.println("=======lamda=========");
      ss.forEach(s->System.out.println(s.getName()+ "\t" +s.getAge()));
   }

}