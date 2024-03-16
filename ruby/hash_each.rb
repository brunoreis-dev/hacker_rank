def iter_hash(hash)
  hash.each do |key, value|
    puts key
    puts value
  end
end

users_age = {"Bruno" => 28, "Camila" => 29, "Maui" => 1}

iter_hash(users_age)
