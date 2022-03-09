class Student
{ 
 int roll;
 String name;
 String branch;
 String univ;
  void set(int x,String a,String b,String un)
  {
   roll=x;
   name=a;
   branch=b;
   univ=un; 
 }
void show()
{
  System.out.println("name :"+name);
  System.out.println("rollno :"+roll);
  System.out.println("branch :"+branch);
  System.out.println("name :"+univ);
}

  public static void main(String args[])
  {
     Student stu = new Student();
     int rollno = Integer.parseInt(args[0]);
     stu.set(rollno,args[1],args[2],args[3]);
     stu.show();
  }
}
