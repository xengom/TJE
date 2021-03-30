
public class Question6_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [][] a = {{1,2},{3,4},{5,6},{7,8}};
		int sum=0;
		for(int i = 0; i<a.length;i++) {
			for(int j=0;j<2;j++) {
				sum+=a[i][j];
			}
		}
		double avg = (double)sum / (a.length*2);
		double avg1 = (double)sum / 8;
		System.out.println("sumÀº"+sum+"avg´Â"+avg+"8³ª´«°Ç"+avg1);
	}

}
