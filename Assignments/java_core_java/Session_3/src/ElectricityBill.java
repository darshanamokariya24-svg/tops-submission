import java.util.Scanner;
public class ElectricityBill {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		double charge;
		System.out.println("Enter Consumer Name:");
		String name=sc.next();
		
		System.out.println("Enter Units :");
		int  unit=sc.nextInt();
		
		System.out.println("-----------------Electricity Bill ------------------------");
		System.out.println("Cosumer Name:" + name );
		System.out.println("Units Used :" +unit);
		if(unit<=100)
		{
			charge=unit * 3.00;
			System.out.println("Charge :" +charge);
		}
		else if(unit>100 && unit <=250)
		{
			charge = unit * 4.60;
			System.out.println("Charge :" +charge);
		}
		else
		{
			charge=(unit* 6.80);
			System.out.println("Charge :" +charge);
		}
		sc.close();
	}

}
