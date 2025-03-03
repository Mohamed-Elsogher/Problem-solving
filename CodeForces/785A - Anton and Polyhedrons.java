import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<String,Integer> mp = new HashMap<>();
        mp.put("Tetrahedron", 4);
        mp.put("Cube", 6);
        mp.put("Octahedron", 8);
        mp.put("Dodecahedron", 12);
        mp.put("Icosahedron", 20);
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans += mp.get(sc.next());
        }
        System.out.println(ans);

    }
}
