package com.tj;

class Sample extends Thread{
	@Override
	public void run() {
		System.out.println("������ ������");
	}
}

class Thread_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sample ss = new Sample();
		ss.setPriority(Thread.MAX_PRIORITY);
		ss.start();
	}

}

