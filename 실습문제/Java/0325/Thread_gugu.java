package com.tj;
class GoogooDan extends Thread{
	int dan;
	public GoogooDan(int dan) {
		super();
		this.dan=dan;
	}
	@Override
	public void run() {
		if (dan==4)
			try {
				sleep(500);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		for(int i=1; i<=9;i++) {
			System.out.println(dan+"*"+i+"="+(dan*i));
		}
	}
}
public class Thread_gugu {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GoogooDan dg2 = new GoogooDan(2);
		dg2.setPriority(10);
		dg2.start();
		
		GoogooDan dg3 = new GoogooDan(3);
		dg3.setPriority(10);
		dg3.start();
		
		GoogooDan dg4 = new GoogooDan(4);
		dg4.setPriority(10);
		dg4.start();
		
		GoogooDan dg5 = new GoogooDan(5);
		dg5.setPriority(10);
		dg5.start();
	}

}
