//program to check whether the nu,mber is positive or negative
import java.util.*;
	class PositiveNegative{
	public static void main(String args[]){
	int num;
	Scanner inp=new Scanner(System.in);
	System.out.println("enter a number;");
	num=inp.nextInt();
	if (num>=0){
	System.out.println("positive");

}
	else{
	System.out.println("negative");
}
}
}