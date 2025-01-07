
interface A {
    public void m1(); // in interface method : by default abstract method.
}

interface B extends A { // inherted interface B to A.
    public void m2();
}

class C implements B { // implemented interface by class C.compulsory
    public void m1() {
        System.out.println("Implement m1() in interface A....");
    }

    public void m2() {
        System.out.println("Implement m2() in interface B,and B is extends to A.. ");
    }
}

public class Interface {
    public static void main(String[] args) {
        C c = new C();
        c.m1();
        c.m2();
    }
}

// CRUD : Create Read Update Delete : most of project use main 4 function.
// Give 1 project instruction by inteface.

// interface EmployeeInterface {
// public boolean createEmployee(Employee e);
// insert into emp_table values();

// public boolean deleteEmployee(int id);
// delete * from emp_table where empid = _;

// public void updateEmployee();
// update * from emp_table where __.

// public void getEmployee(int id); select * from emp_table where empid = _ .

// public float calcsalary(int id); select count(*) from emp_table where empid =
// _ and att = p and date between.
