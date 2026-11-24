import java.util.Scanner;

public class extended_2_Electricity_Bill {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		double charge;
		
		boolean summer=true; 	
		
		System.out.println("Enter Consumer Name:");
		String name=sc.next();
		
		System.out.println("Enter Units :");
		int  unit=sc.nextInt();
		
		System.out.println("Enter H for home.");
		System.out.println("Enter S for Shop.");
		System.out.println("Enter F for Factory.");
		
		System.out.println("Enter Category:");
		char cat=sc.next().charAt(0);
		
		System.out.println("-----------------Electricity Bill ------------------------");
		System.out.println("Cosumer Name:" + name );
		System.out.println("Units Used :" +unit);
		System.out.println("category:" + cat);

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
		
		double total_bill=0;
		switch(cat)
		{
		  case 'H':
		  case 'h':
			  if(cat=='h' || cat=='H')
			  {
				  total_bill =charge + 30;
				  System.out.println("Charge added 30 for Home");
				  System.out.println("Final Bill: "+ total_bill);
				  break;
			  }
		  case 'S':
		  case 's':
			  if(cat=='s' || cat=='S')
			  {
				  total_bill =charge + 90;
				  System.out.println("Charge added 90 for Shop");
				  System.out.println("Final Bill: "+ total_bill);
				  break;
			  }
		  case 'f':
		  case 'F':
			  if(cat=='f' || cat=='F')
			  {
				  total_bill =charge + 250;
				  System.out.println("Charge added 250 for Factory");
				  System.out.println("Final Bill: "+ total_bill);
				  break;
			  }
			  default:
				  System.out.println("Invalid Category.");
				  break;
		}
		
		double surcharge =0 ;
		
		if(summer==true)
		{
			if((cat =='s' || cat=='S') || (cat=='F' || cat=='f') )
			{
				if(unit>=500) {
					surcharge =150;
				}
			}
		}
		total_bill= total_bill + surcharge;
		System.out.println("Peak - load surcharge : 150 ");
		System.out.println("After Charges Bill :" + total_bill);
	}

}
