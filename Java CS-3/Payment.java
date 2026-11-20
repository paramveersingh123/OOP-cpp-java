// 10.  E-Commerce Order Processing — Integrated OOP Challenge //
class Payment {
    String customerName;

    public Payment(String c) {
        customerName = c;
    }

    boolean isValid(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid amount: Rs. " + amount);
            return false;
        }
        return true;
    }

    public void processPayment(double amount) {
        processPayment(amount, "N/A");
    }

    public void processPayment(double amount, String ref) {
        if (isValid(amount)) {
            System.out.println("Payment of Rs. " + amount + " for " + customerName + " [Ref: " + ref + "]");
        }
    }
}

class CreditCardPayment extends Payment {
    private String cardNo;

    public CreditCardPayment(String c, String cn) {
        super(c);
        cardNo = cn;
    }

    @Override
    public void processPayment(double amount, String ref) {
        if (isValid(amount)) {
            System.out.println("Summary: " + customerName + " paid Rs. " + amount + " via Card (" + cardNo + ") | Ref: " + ref);
        }
    }
}

class UPIPayment extends Payment {
    private String upiId;

    public UPIPayment(String c, String u) {
        super(c);
        upiId = u;
    }

    @Override
    public void processPayment(double amount, String ref) {
        if (isValid(amount)) {
            System.out.println("Summary: " + customerName + " paid Rs. " + amount + " via UPI (" + upiId + ") | Ref: " + ref);
        }
    }
}

class NetBankingPayment extends Payment {
    private String bank;

    public NetBankingPayment(String c, String b) {
        super(c);
        bank = b;
    }

    @Override
    public void processPayment(double amount, String ref) {
        if (isValid(amount)) {
            System.out.println("Summary: " + customerName + " paid Rs. " + amount + " via " + bank + " | Ref: " + ref);
        }
    }
}

class ECommerceOrderSystem {
    public static void main(String[] args) {
    
        Payment[] payments = {
            new CreditCardPayment("Aarav", "XX-1234"),
            new UPIPayment("Priya", "priya@upi"),
            new NetBankingPayment("Rohan", "HDFC")};

        for (Payment p : payments) {
            p.processPayment(1000, "TXN101"); 
        }

        payments[0].processPayment(500);  
        payments[1].processPayment(-50);  
    }
}

