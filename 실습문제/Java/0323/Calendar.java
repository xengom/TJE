import java.text.DecimalFormat;
import java.text.SimpleDateFormat;
import java.util.Date;
public class Calendar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			DecimalFormat df = new DecimalFormat("\u00A4 #,###");
			double a=433242443543.5;
			System.out.println(df.format(a));
			
			SimpleDateFormat sd = new SimpleDateFormat("yyyy년MM월dd일 HH시mm분");
			Date da = new Date();
			System.out.println(sd.format(da));
	}

}
