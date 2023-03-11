import java.util.Scanner;

public class A_Is_It_a_Cat {

    public static void main(String args[]) {
        int t, n;
        Scanner scanner = new Scanner(System.in);

        t = scanner.nextInt();

        for (int i = 0 ; i < t ; i++) {
            n = scanner.nextInt();

            scanner.nextLine();

            String s = scanner.nextLine();
            s = s.toLowerCase();

            System.out.println();

            if (s.charAt(0) != 'm' || s.charAt(s.length() - 1) != 'w') {
                System.out.println("NO");
            } else {
                if (isMeow(s)) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }
    public static Boolean isMeow(String s) {
        int flag = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if ((flag == 0 || flag == 1)  && s.charAt(i) == 'm') {
                flag = 1;
            }
            else if ((flag == 1 || flag == 2) && s.charAt(i) == 'e') {
                flag = 2;
            }
            else if ((flag == 2 || flag == 3) && s.charAt(i) == 'o') {
                flag = 3;
            }
            else if ((flag == 3 || flag == 4) && s.charAt(i) == 'w') {
                flag = 4;
            }
            else {
                return false;
            }
        }

        if (flag == 4) {
            return true;
        }

        return false;
    }
}