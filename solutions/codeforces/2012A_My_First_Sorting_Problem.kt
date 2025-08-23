import java.util.*

fun main() {
    val t: Int
    val sc = Scanner(System.`in`)

    t = sc.nextInt()
    repeat(t) {
        val x = sc.nextInt()
        val y = sc.nextInt()
        
        // Determine the maximum and minimum
        val a = maxOf(x, y)
        val b = minOf(x, y)
        
        // Print the result
        println("$b $a")
    }
}
