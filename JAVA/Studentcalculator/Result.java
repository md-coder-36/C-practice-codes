public class Result {

    private Student s1;
    private float total = 0;

    Result(Student student) {
        this.s1 = student;
    }

    public float getTotal() {

        System.out.println("Student Id : " + s1.getId());
        System.out.println("Student Name : " + s1.getName());
        for (float i : s1.getMarks()) {
            total += i;
        }
        return total;
    }

    public float getpercentage() {
        float p;
        // p = total / (s1.getMarks().length);
        p = ((total / ((s1.getMarks().length) * 40)) * 100);
        // p = ((total / (160)) * 100);

        // System.out.println("Percentage : " + p + "%");
        return p;
    }
}