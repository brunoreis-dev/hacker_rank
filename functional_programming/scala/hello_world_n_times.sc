object Solution extends App {

  def f(n: Int): Int = {
    if(n > 0) {
      println("Hello World")
      f(n - 1)
    } else 1;
  }


  var n = scala.io.StdIn.readInt
  f(n)
}
