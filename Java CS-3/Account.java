// 5. Banking System with Method Overriding  //
class Account {
    String accountNumber;
    double balance;

    public Account(String a, double b) {
        accountNumber = a;
        balance = b;
    }

    public void deposit(int amount) {
        balance += amount;
        System.out.println(accountNumber + ": Deposited Rs. " + amount + " || New Balance: Rs. " + balance);
    }

    public void deposit(int amount, String description) {
        balance += amount;
        System.out.println(accountNumber + ": Deposited Rs. " + amount + " (" + description + ") || New Balance: Rs. " + balance);
    }

    public void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println(accountNumber + ": Withdrew Rs. " + amount + " || New Balance: Rs. " + balance);
        } else {
            System.out.println(accountNumber + ": Withdrawal rejected. Insufficient funds.");
        }
    }

    public void calculateInterest() {

    }
}

class SavingsAccount extends Account {
    double interestRate = 0.05; 
    double minBalance = 100.0;  

    public SavingsAccount(String a, double b) {
        super(a, b);
    }

    @Override
    public void withdraw(int amount) {
        if (balance - amount < minBalance) {
            System.out.println(accountNumber + ": Rejected. Must maintain a minimum balance of Rs. " + minBalance);
        } else {
            super.withdraw(amount);
        }
    }

    @Override
    public void calculateInterest() {
        double interest = balance * interestRate;
        balance += interest;
        System.out.println(accountNumber + ": Added interest Rs. " + interest + " || New Balance: Rs. " + balance);
    }
}

class CurrentAccount extends Account {
    double overdraftLimit = 500.0; 

    public CurrentAccount(String a, double b) {
        super(a, b);
    }

    @Override
    public void withdraw(int amount) {
        if (balance - amount < -overdraftLimit) {
            System.out.println(accountNumber + ": Rejected. Exceeds overdraft limit of Rs. " + overdraftLimit);
        } else {
            balance -= amount;
            System.out.println(accountNumber + ": Withdrew Rs. " + amount + " || New Balance: Rs. " + balance);
        }
    }
}

 class AccountMain {
    public static void main(String[] args) {
        
        Account[] accounts = new Account[2];
        accounts[0] = new SavingsAccount("SAV123", 500.0);
        accounts[1] = new CurrentAccount("CUR456", 1200.0);

        System.out.println("--- Processing Transactions ---");
        
        accounts[0].deposit(100);
        accounts[1].deposit(150, "Business Check");

        accounts[0].withdraw(450); 
        accounts[1].withdraw(600); 

        for (Account acc : accounts) {
            acc.calculateInterest(); 
        }
    }
}
