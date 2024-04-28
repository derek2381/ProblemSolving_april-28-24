// problem link
// https://codeforces.com/problemset/problem/1703/B

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
             int n =sc.nextInt();
             sc.nextLine();
             String str = sc.nextLine();


             Set<Character> ch = new HashSet<>();
             int count = 0;

             for(int i = 0; i < n;i++){
                 if(ch.contains(str.charAt(i)) == true){
                    count++;
                 }else{
                     ch.add(str.charAt(i));
                     count += 2;
                 }
             }

             System.out.println(count);
        }
    }
}
