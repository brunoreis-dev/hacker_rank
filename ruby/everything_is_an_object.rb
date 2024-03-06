class PrintSelfExample
  def show_self
      puts self
  end
end

object = PrintSelfExample.new
object.show_self
