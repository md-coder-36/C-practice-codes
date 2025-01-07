class Args {
    public static void main(String args[]) {

        // print arguments
        // int i;
        // for (i = 0; i < args.length; i++) {
        // System.out.println(i + 1 + "'s Args : " + args[i]);
        // }

        // sum of 2 arguments
        // int a = Integer.parseInt(args[0]); // convert String to int D.T by predefine java function.
        // int b = Integer.parseInt(args[1]);
        // System.out.println("The sum is : " + (a + b));

        // sum of All pass args
        int sum = 0;
        for (int i = 0; i < args.length; i++) {
            sum += Integer.parseInt(args[i]);
        }
        System.out.println("All pass args sum : " + sum);
    }
}