def full_name(first, *rest)
  rest.reduce(first) {|name, word|"#{name} #{word}"}
end


full_name("Bruno", "Macedo", "Reis")
