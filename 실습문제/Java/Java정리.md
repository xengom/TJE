# 자바

## 클래스

변수 + 메소드로 구성됨.

변수에 값을 설정하려면 **객체를** 만들어서 [객체.변수=값]으로 만들어야 함. (객체 지향언어이기 때문에)

클래스명 참조변수명 = new **클래스명();**
ex) score sco = new score();

클래스명()  <- 생성자(함수의 일종), 객체를 초기화시켜준다.(값을 넣어줌)

this <- 전역변수로 만들어줌





## 멤버변수에 데이터 넣기

1. 직접 입력(디폴트 생성자)

   score s = new score();
   s.name = "";
   ...
   직접 데이터를 넣어줌

2. 필드 생성자 

   class 에 필드 생성자 추가

   public score (String name,...){

   super();

   this.name = name; 

   ....

   }

   main 에서 score s = new score("name",...);로 직접 넣어줌

3. setter getter 이용(set = 값 설정, get = 값 반환)

   public void getName(){

   ​	return name

   }

   public void setNmae(String name){

   ​	this.name = name;

   }

   main에서 score s = new score(); 후

   s.setName("이름"); 으로 사용



## 접근 제한

1. public
2. default
3. private

## 키보드 입력

키보드 입력받는 기능이 필요함 메소드->클래스->패키지

java.util.Scanner



## class API

public final class Scanner 
-> final = 상속 불가

public abstract class Calendar
-> abstract = 추상적, 한 개 이상의 메소드가 있다.
*추상 클래스는 객체 생성시 new 명령 사용 못함!



### 메소드 

클래스 내부에서 정의된 함수(객체의 함수)

반환자료형 함수명 (인수1,...){

영역 ->기능

}

#### 추상 메소드(abstract)

반환자료형 함수명 (); <--함수명만 있고 인수, 영역이 없음

**추상 클래스 : 추상 메소드가 1개 이상 존재하면..**
-> new를 이용해서 객체를 생성할 수 없다.



### 오버로딩/오버라이딩

#### Overloading

같은 이름의 메소드를 여러개 가지면서 매개변수의 유형과 개수가 다름
이름은 같은데 기능은 다름.

#### Overriding

상위 클래스가 가지고 있는 메소드를 하위 클래스가 재정의해서 사용



### 인터페이스(추상 메소드로만 구성)

추상 메소드를 상속받으면

