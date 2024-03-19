def skip_animals(animals, skip)
  result = []
  animals.each_with_index do |animal, index|
    result << "#{index}:#{animal}" if index >= skip
  end
  result
end

skip_animals(['leopard', 'bear', 'fox', 'wolf'], 2)
