
public class MaintenanceRegister {

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
	}

}
