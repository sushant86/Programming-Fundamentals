//program to check greatest among 2 number
import java.util.*;
	class GreatestNumber{
	public static void main(String args[]){
	int num1,num2;
	Scanner inp=new Scanner(System.in);
	System.out.println("enter 1stnumber;");
	num1=inp.nextInt();
	System.out.println("enter 2nd number;");
	num2=inp.nextInt();
	if (num1>num2){
	System.out.println(num1 +" greatest number is" );

}
	else{
	System.out.println(num2 +" greatest number is");
}
}
}