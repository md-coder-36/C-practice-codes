import java.util.*;

// public class prime {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.println("Enter the number");
//         int n = in.nextInt();
        
//         boolean flag = false;
//         for (int i = 2; i < math.sqrt(n); i++) {
//         // for (int i = 2; i < n; i++) {
//             if (n % i == 0) {
//                 System.out.println("number is not prime");
//                 flag = true;
//                 break;
//             }
//         }

//         if(!flag) System.out.println("number is prime");
//     }
// }

// //    37 - prime 2 to 36

// // 1*36
// // 2*18
// // 3*12
// // 4*9
// // 6*6

public class prime {
    
    static int reverse(int n) {

        int reverseNumber = 0;
        for (int i = 0; i < 4; i++) {

           int ld =  
        }
        
        return reverseNumber;
    }
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int number = Integer.parseInt(in.nextLine());
        
        int reverseNumber = reverse(number);
        System.out.println(number + " to reverse " + reverseNumber);

    }

}


// 546
// digit = 6
// 6 * 10 + digit
