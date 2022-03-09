import java.util.Scanner;
class Account
{
 int accno;
 String name;
 float amount;
 void insert(int a,String n,float am)
   {
     accno = a;
     name = n;
     amount = am;
   }
 void deposit(float b)
{
  amount = amount + b;
  System.out.println("Amount deposited");
 }
void withdraw(float c)
 {
   if(amount<c)
  {
   System.out.println("Insufficient amount");
 }
else
  {
    amount = amount-c;
    }
}
void checkbal()
{
System.out.println("Amount in the account is:");
  System.out.println(amount);
}
void display()
{
System.out.println("Account number is:"+accno);
System.out.println("name of accountholder:"+name);
System.out.println("Amount in  the account:"+amount);
 }
public static void main(String args[])
{
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter account number");
   int a = sc.nextInt();
   sc.nextLine();
   System.out.println("Enter account holder name");
   String s = sc.nextLine();
   System.out.println("Enter amount");
   float b = sc.nextFloat();
   Account acc = new Account();
   acc.insert(a,s,b);
   System.out.println("Enter amount to be deposit");
   float p = sc.nextFloat();
   acc.deposit(p);
   System.out.println("Enter amount to be withdrawn");
   float q = sc.nextFloat();
   acc.withdraw(q);
   acc.checkbal();
   System.out.println("Account Details are as follows:");
   acc.display();
}
}
  



 
