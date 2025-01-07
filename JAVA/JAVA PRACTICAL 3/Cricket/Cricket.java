import java.util.Scanner;

public class Cricket {
   public String name;
   public int age;

   /*
    * public void setName( String name){
    * this.name = name;
    * }
    * public void setAge( int age){
    * this.age = age;
    * }
    */
   public void setData(String name, int age) {
      this.name = name;
      this.age = age;
   }

   public void setData() {

      Scanner sc = new Scanner(System.in);
      System.out.println("enter the name :-");
      this.name = sc.next(); // Gives String.
      System.out.println("enter the age :-");
      this.age = sc.nextInt(); // Gives string and then convert to Integer.

   }

   public String getName() {
      return name;
   }

   public int getAge() {
      return age;
   }

   public void getData() {
      System.out.println("name :-" + name + "\t " + "age:-" + age);
   }
}