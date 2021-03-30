
public class Samp5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [][] name = new String[5][2];
		int [][] a = new int[5][7];
		
		name[0][0]="김길동";
		name[0][1]="010-1234-1234";
		name[1][0]="김싱님";
		name[1][1]="010-2222-1234";
		name[2][0]="이라임";
		name[2][1]="010-3333-1234";
		name[3][0]="박다리";
		name[3][1]="010-4444-1234";
		name[4][0]="박우리";
		name[4][1]="010-5555-1234";
		int i,j;
		System.out.println("이름 \t 전화번호");
		for(i=0;i<name.length;i++) {
			for(j=0;j<2;j++) {
				System.out.println(name[i][j]+"\t");
			}

			System.out.println("");
		}
	}

}
