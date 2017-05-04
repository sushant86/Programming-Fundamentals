//switch cae
import java.util.*;
class SwitchExample{
	public static void main(String args[]){
	char gen;
	Scanner inp=new Scanner(System.in);
	System.out.println("Enter your gender:");
	gen=inp.next().charAt(0);
	switch(gen){
		case 'M':
	System.out.println("you are male");
	break;
		case 'F':
	System.out.println("you are female");
	break;
	default:
	System.out.println("Invalid input");
		}
	}
}