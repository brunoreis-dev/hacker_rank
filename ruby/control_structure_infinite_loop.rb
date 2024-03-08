class NumberVerifier
  def print_number(number)
    puts number
  end

  def greater_than_or_equal_to_ten?(number)
    number >= 10
  end
end

n = 0
verifier = NumberVerifier.new

loop do
  break if verifier.greater_than_or_equal_to_ten?(n)

  n += 1
  verifier.print_number(n)
end
