fun main() {

    val t = readln()!!.toInt();

    var sumX = 0 ;
    var sumY = 0 ;
    var sumZ = 0 ;

    repeat(t){
        val (x, y, z) = readLine()!!.split(" ").map { it.toInt() }
        sumX += x ;
        sumY += y ;
        sumZ += z ;
    }
    if (sumX==0&&sumY==0&&sumZ==0){
        println("YES")
    }else println("NO")


}
