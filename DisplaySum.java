//Getting input from user and disply sum
import java.util.*;
class DisplaySum{
	public static void main(String args[]){
		int Sum,a,b;
		Scanner inp=new Scanner(System.in);
		System.out.println("enter first number;");
		a=inp.nextInt();
		System.out.println("enter second number;");
		b=inp.nextInt();
		Sum=a+b;
		System.out.println("the sum of two number is:");
		System.out.println(Sum);
	}
}

