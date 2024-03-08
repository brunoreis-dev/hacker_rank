class User
  def initialize(admin)
    @admin = admin
  end

  def is_admin?
    return @admin
  end

  def update_score
    puts "Score Updated"
  end
end

def scoring(array)
  array.each do |user|
    unless user.is_admin?
      user.update_score
    end
  end
end

users = [User.new(true), User.new(false), User.new(true), User.new(false), User.new(false)]
scoring(users)
