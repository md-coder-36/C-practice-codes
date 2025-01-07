
class Triangle {
    double base_lenth;

    double hight; // by default as a public.

    // Access modifiars...

    // private float hight; ->you can't use diretly this member outside the class.
    // public float hight; ->you can use diretly this member outside the class.
    // protected float hight; ->you can't use diretly this member outside the class.
    // but protected member use directly by child class.

    void Trianglearea() {
        System.out.println("Triangle hight : " + hight);
        System.out.println("Triangle base_lenth : " + base_lenth);
        double area = (base_lenth * hight) / 2;
        System.out.println("The area of tiangle : " + area);
    }

}

class Area {
    public static void main(String[] args) {
        Triangle a1 = new Triangle();

        a1.hight = 10.4;
        a1.base_lenth = 16.5;
        a1.Trianglearea();

        // Triangle a2 = new Triangle();
        // System.out.println("Triangle hight : " + a2.hight);
        // JAVA no give any garbage value, by default initialixe with 0.

    }
}