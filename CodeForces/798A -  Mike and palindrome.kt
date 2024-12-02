fun main() {
    val s = readLine()!!
    val n = s.length
    var d = 0

    for (i in 0 until n / 2) {
        if (s[i] != s[n - i - 1]) {
            d++
        }
    }

    if (d == 1 || (d == 0 && n % 2 == 1)) {
        println("YES")
    } else {
        println("NO")
    }
}
