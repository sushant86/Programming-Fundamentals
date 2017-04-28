//Getting input from user
import java.util.Scanner;
class DisplayName{
	public static void main(String args[]){
		String name;
		Scanner inp=new Scanner(System.in);
		System.out.println("Enter your name:");
		name=inp.next();
		System.out.println("your name is:");
		System.out.println(name);
	}
}
