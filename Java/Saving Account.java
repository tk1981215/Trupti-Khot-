import java.util.Scanner;

class SavinAccount{
  private static double annualInterestRate;
  private double savingBalance;

  public SavingAccount(double balance){
    savingBalance = balance;
  }

  public static void calculateMonthlyInterest(){
    double monthlyInterest = (savingBalance * annualInterestRate)/12;
    savingBalance += monthlyInterest;
  }

  public void modifyInterestRate(double newRate){
    annualInterestRate = newRate;
  }

  public void display(){
    System.out.println("Balance : " + savingBalance);
  }
}

public class Program{
  public static void main(String[] args){
    SavingAccount saver1 = new SavingAccount(2000);
    SavingAccount saver2 = new SavingAccount(3000);

    saver1.dispaly();
    saver2.display();
    
    saver1.modifyInterestRate(0.04);
    saver2.modifyInterestRate(0.04);
    System.out.println("After 4% Annual Interest Rate");
    saver1.display();
    saver2.display();

    saver1.modifyInterestRate(0.05);
    saver2.modifyInterestRate(0.05);
    System.out.println("After 5% Annual Interest Rate");
    saver1.display();
    saver2.display();
  }
}
