package com.tj;
class Share1{
	int data=0;
	public synchronized void  up() {
		data+=1;
		if(data>=3) {
			try {
				System.out.println("중지");
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		notifyAll();
		System.out.println("1증가"+data);
	}

	
	public synchronized void down() {
		data-=1;
		if(data<1) {
			try {
				System.out.println("중지");
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		notifyAll();
		System.out.println("1감소"+data);
	}
}

class Up extends Thread{
	Share1 data;
	
	public Up(Share1 data) {
		super();
		this.data = data;
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		for(int i = 1; i<=5; i++) {
			data.up();
		}
	}
}

class Down extends Thread{
	Share1 data;
	
	public Down(Share1 data) {
		super();
		this.data = data;
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		for(int i = 1; i<=5; i++) {
			data.down();
		}
	}


}

public class Share_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Share1 s = new Share1();
		Up u = new Up(s);
		Down d = new Down(s);
		u.start();
		d.start();
		
	}

}
