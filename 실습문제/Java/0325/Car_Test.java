package com.tj;
class Share {
	int car=5;
	int cnt=0;
	 public synchronized void more_product() {
		car+=1;
		System.out.println("차를 1대 생산하였음.");
		System.out.println("현재 재고 : "+car);
		
		if (car>3) {
			try {
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		notifyAll();
	}
	
	 public synchronized void less_product() {
		car-=1;
		cnt+=1;
		System.out.println("차를 1대 팔았음.");
		System.out.println("현재 재고 : "+car);
		System.out.println("총 판매량 : "+cnt+"\n");
		if (car<=0) {
			try {
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		notifyAll();
	}
}

class More extends Thread {
	Share car;
	public More(Share car) {
		super();
		this.car=car;
	}
	public void run() {
		for(int i=0; i<10; i++) {
			car.more_product();
		}
	}
	
	
}

class Less extends Thread {
	Share car;
	public Less(Share car) {
		super();
		this.car=car;
	}
	public void run() {
		for(int i=0; i<10; i++) {
			car.less_product();
		}
	}
}

public class Car_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Share s = new Share();
		More m = new More(s);
		Less l = new Less(s);
		
		m.start();
		l.start();
		
	}

}
