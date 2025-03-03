import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 1 2 3 1 1
        Set<Integer> st = new TreeSet<>();
        for(int i = 0 ; i < n ; i++){
            st.add(sc.nextInt());
        } // 1 2 3
         List<Integer> list = new ArrayList<>(st);
        if( list.size() < 2) {
            System.out.println("NO");
        }
        else {
            System.out.println(list.get(1));
        }

    }
}
