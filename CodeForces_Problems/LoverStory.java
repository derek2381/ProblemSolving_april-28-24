// problem link
// https://codeforces.com/problemset/problem/1829/A

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String st = sc.nextLine();
            String str = "codeforces";
            int count = 0;
            for(int i = 0;i < 10;i++ ){
                if(str.charAt(i) != st.charAt(i)){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
