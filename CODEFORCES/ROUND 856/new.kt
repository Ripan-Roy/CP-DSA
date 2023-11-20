fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        var cnt = 0
        var value = x
        while (value <= y - x) {
            cnt++
            value *= 10
        }
        cnt++
        println(cnt)
    }
}
