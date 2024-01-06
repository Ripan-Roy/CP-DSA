// Author: Ripan-Roy
// Created: 2023-12-07

fun main() {
    val tc = readLine()!!.toInt()
    repeat(tc) {
        val input = readLine()!!
        val arr = input.split(" ").map { it.toInt() }.toIntArray()
        var ans = 0
        for (i in arr.indices) {
            ans = ans xor arr[i]
        }
        for (i in arr.indices) {
            if (arr[i] == ans) {
                println(i + 1)
                break
            }
        }
    }
}
