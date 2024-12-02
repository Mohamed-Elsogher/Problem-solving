fun main() {
    val scanner = java.util.Scanner(System.`in`)
    val t = scanner.nextInt()
    val result = StringBuilder()

    repeat(t) {
        val n = scanner.nextInt()
        val arr = IntArray(n) { scanner.nextInt() }
        var Mihai = 0
        var Bianca = 0
        for (j in arr) {
            if (j % 2 == 0) {
                Mihai += j
            } else Bianca += j
        }
        if (Mihai > Bianca) {
            result.append("YES "+" ")
        } else {
            result.append("NO "+" ")
        }
    }
    print(result)
}
