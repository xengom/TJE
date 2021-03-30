import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;

class Score implements Comparable<Score>{
	int ban,kor,eng,mat,tot;
	String name;
	Double avg;
	char hak;
	
	public Score() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Score(int ban, int kor, int eng, int mat, String name) {
		super();
		this.ban = ban;
		this.kor = kor;
		this.eng = eng;
		this.mat = mat;
		this.name = name;
	}
	int sum(int kor, int eng, int mat) {
		
		tot=kor+eng+mat;
		return tot;
	
	}
	double ave(int tot) {

		avg=(double)tot/3;
		return avg;
	}
	
	void sco() {
		if (avg>=60) hak = 'A';
		else if (avg>=50) hak = 'B';
		else if (avg>=40) hak = 'C';
		else if (avg>=30) hak = 'D';
		else hak = 'F';
	}
	@Override
	public int compareTo(Score o) {
		if(ban>o.ban) return 1;
		else if(ban<o.ban) return -1;
		return 0;
	}

	public int getTot() {
		return tot;
	}
	public void setTot(int tot) {
		this.tot = tot;
	}
	public Double getAvg() {
		return avg;
	}
	public void setAvg(Double avg) {
		this.avg = avg;
	}
	public char getHak() {
		return hak;
	}
	public void setHak(char hak) {
		this.hak = hak;
	}
	
	

}

public class SungJuk {

	public static void main(String[] args) throws IOException {
		//반, 이름,국어,영어,수학,총점,평균2자리,학점
		//반별 오름차순, 이름별 내림차순, 파일처리
		Score s1 = new Score();
		ArrayList<Score> ss = new ArrayList<Score>();
		
		DecimalFormat df = new DecimalFormat();
		df = new DecimalFormat("##.##");
		
		FileReader fr = new FileReader("C:/JAVA/text.txt");
		BufferedReader br = new BufferedReader(fr);
		
		System.out.println("반\t이름\t국어\t영어\t수학\t총점\t평균\t학점");
		while(true) {
			String st = br.readLine();
			if(st==null) break;
			int ban= Integer.parseInt((String) st.subSequence(0,1));
			String name =  st.substring(1,4);
			int kor= Integer.parseInt((String) st.subSequence(4,6));
			int eng= Integer.parseInt((String) st.subSequence(6,8));
			int mat= Integer.parseInt((String) st.subSequence(8,10));
			ss.add(new Score(ban,kor,eng,mat,name));
			s1.sum(kor,eng,mat);
			s1.ave(s1.getTot());
			s1.sco();
			ss.add(s1);
			Collections.sort(ss);
			//System.out.println(ban+"\t"+name+"\t"+kor+"\t"+eng+"\t"+mat+"\t"+s.tot+"\t"+df.format(s.avg)+"\t"+s.hak);
			
			ss.forEach(s->System.out.println(ban+"\t"+name+"\t"+kor+"\t"+eng+"\t"+mat+"\t"+s.getTot()+"\t"+s.getAvg()+"\t"+s.hak));
		}
	}

}
