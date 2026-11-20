
public class Extend_TicketFare {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			String name="John";
			int age=62;
			int distance=340;
			double fare=1.45;
			boolean Is_Senior_Citizen = true;
			double base_fare;
			
	
			base_fare= distance* fare;
			double reservation_charge=40;
			
			double superfast_charge = (distance > 300) ? 30 :0;
			
			double gst = base_fare*0.05;
			
			
			System.out.println("Name :" +name);
			System.out.println("Age :" + age);
			System.out.println("Distance :" + distance + "KM");
			System.out.println("Fare Per KM :" + fare);
			System.out.println("Is Senior Citizen :" + Is_Senior_Citizen);
			System.out.println("Base Fare :" + base_fare);
			System.out.println("Reservation Charge :" + reservation_charge);
			System.out.println("Superfast Charge :" + superfast_charge);
			System.out.println("GST :" + gst);
		
			
	}

}
