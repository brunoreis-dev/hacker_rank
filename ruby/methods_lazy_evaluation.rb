def is_prime?(number)
  return false if number <= 1
  return true if number <= 3
  return false if number % 2 == 0 || number % 3 == 0

  i = 5
  while i * i <= number
    return false if number % i == 0 || number % (i + 2) == 0
    i += 6
  end

  true
end

def is_palindrome?(number)
  number.to_s == number.to_s.reverse
end

def prime_palindromic?(number)
  is_prime?(number) && is_palindrome?(number)
end

def palindromic_prime_array(array_size)
  (1..Float::INFINITY)
    .lazy
    .select { |x| is_prime?(x) && is_palindrome?(x) }
    .first(array_size)
    .to_a
end

p palindromic_prime_array(10)
