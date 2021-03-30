interface RemoteControl1{
	int MAX_VOLUME = 10;
	int MIN_VOLUME = 0;
	
	void turnOn();
	void turnOff();
	void setVolume(int volume);
	
	default void setMute(boolean mute) {
		if(mute) {
			System.out.println("公澜 贸府");
		}
		else {
			System.out.println("公澜 秦力");
		}
	}
}

