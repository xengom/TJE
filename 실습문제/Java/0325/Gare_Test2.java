package com.tj;

import java.util.ArrayList;

class Score{
	String name;
	int kor,eng,mat;
	public Score() {
		super();
	}
	public Score(String name, int kor, int eng, int mat) {
		super();
		this.name = name;
		this.kor = kor;
		this.eng = eng;
		this.mat = mat;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getKor() {
		return kor;
	}
	public void setKor(int kor) {
		this.kor = kor;
	}
	public int getEng() {
		return eng;
	}
	public void setEng(int eng) {
		this.eng = eng;
	}
	public int getMat() {
		return mat;
	}
	public void setMat(int mat) {
		this.mat = mat;
	}
	
}
public class Gare_Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Score> li= new ArrayList<Score>(); 
		li.add(new Score("ȫ�浿",45,56,67));

		li.add(new Score("ȫ�浿",45,56,67));

		li.add(new Score("ȫ�浿",45,56,67));

		li.add(new Score("ȫ�浿",45,56,67));
		for(Score k:li) {
			System.out.println(k.getName()+"\t"+k.getKor()+"\t"+k.getEng()+"\t"+k.getMat()+"\t");

		}
	}

}
