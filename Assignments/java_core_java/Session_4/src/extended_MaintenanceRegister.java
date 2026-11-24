
public class extended_MaintenanceRegister {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int amount;
		int total = 0;
		
		System.out.println("Society  Maintence Register ");
		System.out.println("Month\tAmount\tTotal");
		
		for(int month = 1; month<=12;month++)
		{
			if(month<=6)
			{
				amount=1800;
			}
			else {
				amount=2000;
			}
			total = total + amount;
			System.out.println(month + "\t" + amount + "\t" + total);
			
		}

        System.out.println("----------------------------");
        System.out.println("Total Maintenance: Rs. " + total);
		

        int arrears = 28000;
        int payment = 2500;
        int months = 0;

        System.out.println("\nArrears Payment Register");

        while (arrears > 0) {

            arrears = arrears - payment;
            months++;

            System.out.println("Month " + months +
                    " Balance: Rs. " + arrears);
        }

        System.out.println("Months Taken: " + months);
        System.out.println("Amount Overpaid: Rs. " + (-arrears));
	}

}
