// problem link
// https://codeforces.com/problemset/problem/1426/A

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0){
            double n, x;

            n = sc.nextDouble();
            x = sc.nextDouble();

            if(n >= 2)
                n -= 2;
            else
                n -= 1;

            n = Math.ceil(n / x);

            int res = (int) n;

            System.out.println(res+1);
        }
    }
}
