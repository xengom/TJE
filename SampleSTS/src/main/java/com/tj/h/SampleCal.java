package com.tj.h;

public class SampleCal {
private int first;
private int second;
public SampleCal() {
   super();
   // TODO Auto-generated constructor stub
}
public SampleCal(int first, int second) {
   super();
   this.first = first;
   this.second = second;
}
public int getFirst() {
   return first;
}
public void setFirst(int first) {
   this.first = first;
}
public int getSecond() {
   return second;
}
public void setSecond(int second) {
   this.second = second;
}

public void add() {
   System.out.print("덧 셈 :");
   System.out.println(first+"+"+second+"="+(first+second));
}
   
public void multi() {
   System.out.print("곱 셈 :");
   System.out.println(first+"*"+second+"="+(first*second));
}

   

}
