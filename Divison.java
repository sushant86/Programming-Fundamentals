//wap to ask the user to enter marks in any subject and find the total and percentage.Based on the percentage determine the division
import java.util.*;
class Divison{
	public static void main(String args[]){
	double eng,nep,sci,soc,math;
	Scanner inp=new Scanner(System.in);
	System.out.println("Enter the marks of five subjects");
	eng=inp.nextDouble();
	nep=inp.nextDouble();
	sci=inp.nextDouble();
	soc=inp.nextDouble();
	math=inp.nextDouble();
	double total=(sci+nep+sci+soc+math);
		System.out.println("the total marks is " +total);
		double percentage=(total)/5;
		System.out.println("the percentage is " +percentage);
		if(percentage>=80){
		System.out.println("distinction");
		}
		else if(percentage>=60 && percentage<80){
		System.out.println("first division");
		}
		else if(percentage>=45 && percentage<60){
		System.out.println("second division");
		}
		else if(percentage>=35 && percentage<45){
			System.out.println("third division");
			}
		else{
		System.out.println("Fail");
	}
		}
		}










