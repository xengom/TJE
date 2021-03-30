import java.io.*;
public class File_Test {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		FileReader fr = new FileReader("C:/JAVA/text.txt");
		BufferedReader br = new BufferedReader(fr);
		while(true) {
			String st = br.readLine();
			if(st==null) break;
			System.out.println(st);
			String name=st.substring(0,3);
			int age= Integer.parseInt((String) st.subSequence(3, 5));
			System.out.println(name+"\t"+age);
		}
	}

}
