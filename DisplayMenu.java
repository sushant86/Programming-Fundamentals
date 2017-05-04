//Wap a menu design program to display the following:
//1.sunay
//2.momday
//3.tuesday
//4.wednesday
//5.thursday
//6.friday
//7.saturday
//then your program should prompt the user to enter his/her choice and display the corresponding day
import java.util.*;
class DisplayMenu{
	public static void main(String args[]){
	System.out.println("********MENU********");
	System.out.println("1.SUNDAY");
	System.out.println("2.MONDAY");
	System.out.println("3.TUESDAY");
	System.out.println("4.WEDNESDAY");
	System.out.println("5.THURSDAY");
	System.out.println("6.FRIDAY");
	System.out.println("7.SATURDAY");
		int day;
		Scanner inp=new Scanner(System.in);
		System.out.println("enter your choice of day");
		day=inp.nextInt();
		switch(day){
		case 1:
		System.out.println("SUNDAY");
		break;
		case 2:
		System.out.println("MONDAY");
		break;
		case 3:
		System.out.println("TUESDAY");
		break;
		case 4:
		System.out.println("WEDNESDAY");
		break;
		case 5:
		System.out.println("THURSDAY");
		break;
		case 6:
		System.out.println("FRIDAY");
		break;
		case 7:
		System.out.println("SATURDAY");
		break;
		default:
		System.out.println("invalid day");
		}
		}
		}




