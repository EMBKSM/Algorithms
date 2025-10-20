import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.PriorityQueue

fun main() = with(BufferedReader(InputStreamReader(System.`in`))) {
    var t = readLine().toInt()
    val sb = StringBuffer()
    while (t-- > 0) {
        val N = readLine().toInt()
        val arr = readLine().split(" ").map { it.toInt() }.toIntArray()
        val pq = PriorityQueue<Int>()
        val board = BooleanArray(N + 1) 
        var s = "Yes"
        for (i in arr.indices) {
            if (board[arr[i]]) {
                s = "No"
                break
            }
            while (pq.isNotEmpty() && pq.peek() < arr[i]) {
                val num = pq.poll()
                board[num] = true
            }
            pq.add(arr[i])
        }
        sb.append(s).append("\n")
    }
    print(sb)
}