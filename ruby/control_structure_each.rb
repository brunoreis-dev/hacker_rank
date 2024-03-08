class User
  def update_score
    puts "Score Updated"
  end
end



def scoring(array)
  array.each do |user|
    user.update_score
  end
end

scoring([User.new, User.new, User.new])
