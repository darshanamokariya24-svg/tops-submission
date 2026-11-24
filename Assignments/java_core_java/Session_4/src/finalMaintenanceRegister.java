
public class finalMaintenanceRegister {

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
		int amount1;
		int total1 = 0;
		
		System.out.println("Society  Maintence Register ");
		System.out.println("Month\tAmount\tTotal");
		
		for(int month = 1; month<=12;month++)
		{
			if(month<=6)
			{
				amount1=1800;
			}
			else {
				amount1=2000;
			}
			total1 = total1 + amount1;
			System.out.println(month + "\t" + amount1 + "\t" + total1);
			
		}

        System.out.println("----------------------------");
        System.out.println("Total Maintenance: Rs. " + total);
		

        int arrears1 = 28000;
        int payment1 = 2500;
        int months1 = 0;

        System.out.println("\nArrears Payment Register");

        while (arrears1 > 0) {

            arrears1 = arrears1 - payment1;
            months1++;

            System.out.println("Month " + months1 +
                    " Balance: Rs. " + arrears1);
        }

        System.out.println("Months Taken: " + months1);
        System.out.println("Amount Overpaid: Rs. " + (-arrears1));
		
		int totalDemand = 0;

		System.out.println("\nFloor-wise Maintenance Demand");

		for (int floor = 1; floor <= 3; floor++) {

		    for (int flat = 1; flat <= 4; flat++) {

		        int flatNumber = floor * 100 + 100 + flat;

		        // Skip vacant flats ending in 04
		        if (flatNumber % 100 == 4) {
		            continue;
		        }

		        int amount2;

		        if (floor == 3) {
		            amount2= 2200;
		        } else {
		            amount2 = 1800;
		        }

		        totalDemand = totalDemand + amount2;

		        System.out.println("Flat " + flatNumber +
		                " - Rs. " + amount2);

		        // Stop when demand crosses Rs. 15,000
		        if (totalDemand > 15000) {
		            break;
		        }
		    }

		    if (totalDemand > 15000) {
		        break;
		    }
		}

		System.out.println("Total Demand: Rs. " + totalDemand);

		

		// Amount Collection using do-while loop

		int collected = 0;
		int received;

		java.util.Scanner sc = new java.util.Scanner(System.in);

		do {
		    System.out.print("Enter amount received (0 to stop): ");
		    received = sc.nextInt();

		    collected = collected + received;

		    System.out.println("Total Collected: Rs. " + collected);

		} while (received != 0);

		// Calculate pending amount
		int pending = totalDemand - collected;

		System.out.println("Final Total Collected: Rs. " + collected);
		System.out.println("Pending Amount: Rs. " + pending);

	}

}
