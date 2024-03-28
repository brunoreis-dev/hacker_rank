def factorial(n)
  yield(n)
end


factorial(5) do |n|
  if n == 0 || n == 1
      1
  else
    result = 1
    (2..n).each do |i|
        result *= i
    end
    result
  end
end


def factorial_with_login(n)
  if n == 0 || n == 1
    1
  else
    result = 1
    (2..n).each do |i|
        result *= i
    end
    if block_given?
      yield result
    else
      return result
    end
  end
end


factorial_with_login(5) do |result| puts result end
