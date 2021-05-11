package com.tj.h;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

public class SampleMain {
	  public static void main(String[] args) {
		//1. XML 경로 파악
		     String configlocation = "classpath:applicationCTX.xml";
		     //2. Abs 인터페이스 통해 저장한 파일을 ctx에 담음
		     AbstractApplicationContext ctx=
		           new GenericXmlApplicationContext(configlocation);
		     //3.getBean을 이용해 ctx에 담겨있는 정보들을 sc객체에 제공
		    SampleScore ss = ctx.getBean("sampleScore",SampleScore.class);
		    ss.print();
	    
	}
}