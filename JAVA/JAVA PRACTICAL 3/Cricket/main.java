public class main {
    public static void main(String[] args) {

        Match match[] = new Match[5]; // Only create arrayObject.

        for (int i = 0; i < 5; i++) {

            match[i] = new Match(); // Create new object At perticular index of arrayobject.

            match[i].setData();
            match[i].setTestOdi();
            match[i].getData();
            match[i].disPlay();
        }
    }
}
