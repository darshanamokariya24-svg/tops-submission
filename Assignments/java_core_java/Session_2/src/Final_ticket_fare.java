
public class Final_ticket_fare {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String name="John";
		int age=62;
		int distance=340;
		double fare=1.45;
		boolean Is_Senior_Citizen =true;
		double base_fare;
		

		base_fare= distance* fare;
		double reservation_charge=40;
		
		double superfast_charge = (distance > 300) ? 30 :0;
		
		double senior_citizen=(Is_Senior_Citizen == true ) ? base_fare * 0.40 :0;
		
		double gst = base_fare*0.05;
		
		double total_fare= base_fare + reservation_charge + superfast_charge + gst;
		
		double final_fare=  total_fare - senior_citizen;
		
		
		 int castAmount = (int) final_fare;
	      int roundedAmount = (int) Math.round(final_fare);
	        
		System.out.println("Name :" +name);
		System.out.println("Age :" + age);
		System.out.println("Distance :" + distance + "KM");
		System.out.println("Fare Per KM :" + fare);
		System.out.println("Is Senior Citizen :" + Is_Senior_Citizen);
		System.out.println("Base Fare :" + base_fare);
		System.out.println("Reservation Charge :" + reservation_charge);
		System.out.println("Superfast Charge :" + superfast_charge);
		System.out.println("GST :" + gst);
		System.out.println("Senior Citizen Off:" + senior_citizen);
		System.out.println("Total Fare:" + total_fare);
		System.out.println("After Discount Fare:" + final_fare);
		System.out.println("Using (int) cast: " + castAmount);
        System.out.println("Using Math.round(): " + roundedAmount);
		
	}

}
