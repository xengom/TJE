import java.io.*;

public class File_Test {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		FileReader fis = new FileReader("C:/JAVA/text.txt");
		BufferedReader br = new BufferedReader(fis);
		int b;
		while(true) {
			String tp = br.readLine();
			String name = tp.substring(0,3);
			int kor = Integer.parseInt(tp.substring(3,6));
			int eng =Integer.parseInt(tp.substring(6,9));
			int mat =Integer.parseInt(tp.substring(9,12));
			System.out.println(name+"\t"+kor+"\t"+eng+"\t"+mat);
		}
	}

}
