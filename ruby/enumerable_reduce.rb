def sum_terms(n)
  (1..n).reduce(0) {|sum, term| sum + term**2 + 1}
end

sum_terms(25)

# Implicit
# (1..n).reduce(0, :+)

# Inject
# (1..n).inject(0) {|product, n| product * n }
