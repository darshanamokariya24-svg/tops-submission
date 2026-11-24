import java.util.Scanner;

public class final_electricty_bill {

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
		
		System.out.println("Did you pay within the due date? (true/false)");
		boolean paidWithInDue = sc.nextBoolean();
		
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
					surcharge = 150;
					total_bill= total_bill + surcharge;
					System.out.println("Peak - load surcharge : 150 ");
					System.out.println("After Charges Bill :" + total_bill);
				}
			}
		}
		double discount = paidWithInDue ? total_bill * 0.05 : 0.0;

		total_bill = total_bill - discount;
	
		System.out.println("Discount: " + discount);
		System.out.println("Final Bill After Discount: " + total_bill);
	
		// 80 units (H, on time),
//		Cosumer Name:darshna
//		Units Used :80
//		category:h
//		Charge :240.0
//		Charge added 30 for Home
//		Final Bill: 270.0
//		Discount: 13.5
//		Final Bill After Discount: 256.5
		
		//180 units (S, summer, late)
//		-----------------Electricity Bill ------------------------
//		Cosumer Name:darshna
//		Units Used :180
//		category:s
//		Charge :827.9999999999999
//		Charge added 90 for Shop
//		Final Bill: 917.9999999999999
//		Discount: 0.0
//		Final Bill After Discount: 917.9999999999999
		
		//600 units (F, summer, on time) 
//		-----------------Electricity Bill ------------------------
//		Cosumer Name:darshna
//		Units Used :600
//		category:f
//		Charge :4080.0
//		Charge added 250 for Factory
//		Final Bill: 4330.0
//		Peak - load surcharge : 150 
//		After Charges Bill :4480.0
//		Discount: 224.0
//		Final Bill After Discount: 4256.0
		
		//100 units (X, on time), 
//		-----------------Electricity Bill ------------------------
//		Cosumer Name:darshna
//		Units Used :100
//		category:x
//		Charge :300.0
//		Invalid Category.
//		Discount: 0.0
//		Final Bill After Discount: 0.0
		
		
	}

}
