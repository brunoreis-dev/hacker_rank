class Colors
  include Enumerable

  def initialize(*colors)
    @colors = colors
  end

  def each
    @colors.each { |color| yield color }
  end
end



def iterate_colors(colors)
  arr = []
  colors.each do |value|
    arr << value
  end

  arr
end

iterate_colors(Colors.new("red", "green", "blue"))
