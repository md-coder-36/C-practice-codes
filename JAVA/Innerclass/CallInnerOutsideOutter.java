class University {

    String uname;

    University(String university) {
        this.uname = university;
    }

    void getUniversity() {
        System.out.println("University name : " + uname);
    }

    class College {

        String cname;

        College(String College) {
            this.cname = College;
        }

        void getCollege() {
            System.out.println("College name : " + cname);
        }

        class Department {

            String dname;

            Department(String Department) {
                this.dname = Department;
            }

            void getDepartment() {
                System.out.println("Department name : " + dname);
            }
        }
    }
}

public class CallInnerOutsideOutter {

    public static void main(String[] args) {

        University u = new University("CVM University");

        University.College adit = u.new College("ADIT");
        University.College gcet = u.new College("GCET");
        University.College mbit = u.new College("MBIT");

        University.College.Department com = adit.new Department("IT/CP/CSD/AI");
        University.College.Department auto = gcet.new Department("Auto Mobile");
        University.College.Department mech = mbit.new Department("Mechanical");

        u.getUniversity();

        adit.getCollege();
        // gcet.getCollege();
        // mbit.getCollege();

        com.getDepartment();
        // auto.getDepartment();
        // mech.getDepartment();

        new University(null).new College(null).new Department(null).getClass();
        new University(null).new College(null).new Department("temp_obj").getDepartment();
    }

}

// University -> college -> Department

// dept'sfunction accessed.
// University.College c = new University("CVM").new College("ADIT");
