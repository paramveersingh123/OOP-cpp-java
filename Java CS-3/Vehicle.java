// 3. Overriding with super and Runtime Polymorphism //
class Vehicle {
    int rent = 500; 
    String type = "Vehicle";
    public int calculateRent(int days) {
        return rent * days;
    }
}

class Car extends Vehicle {

    public Car() {
        type = "Car";
    }
    @Override
    public int calculateRent(int days) {
        int tax = 200;
        return super.calculateRent(days) + tax;
    }
}

class LuxuryCar extends Vehicle {

    public LuxuryCar() {
        type = "Luxury Car";
    }
    @Override
    public int calculateRent(int days) {
        int luxuryTax = 400;
        return super.calculateRent(days) + (luxuryTax * days);
    }
}

class VehicleMain {
    public static void main(String[] args) {
        int rentalDays = 5;

        Vehicle[] fleet = new Vehicle[3];
        fleet[0] = new Vehicle();
        fleet[1] = new Car();
        fleet[2] = new LuxuryCar();

        System.out.println("Rental cost calculation for " + rentalDays + " days:");
        
        for (Vehicle v : fleet) {
            int rent = v.calculateRent(rentalDays);
            System.out.println(v.type + " Rent: Rs. " + rent);
        }
    }
}
