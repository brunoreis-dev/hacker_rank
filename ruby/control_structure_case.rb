class Hacker
  @return_text = "Hacker!"

  def self.return_text
    @return_text
  end
end

class Submission
  @return_text = "Submission!"

  def self.return_text
    @return_text
  end
end

class TestCase
  @return_text = "TestCase!"

  def self.return_text
    @return_text
  end
end

class Contest
  @return_text = "Contest!"

  def self.return_text
    @return_text
  end
end

class Unknown

end

def identify_class(obj)
  case
      when obj.is_a?(Hacker)
          puts "It's a #{Hacker.return_text}!"
      when obj.is_a?(Submission)
          puts "It's a #{Submission.return_text}!"
      when obj.is_a?(TestCase)
          puts "It's a #{TestCase.return_text}!"
      when obj.is_a?(Contest)
          puts "It's a #{Contest.return_text}!"
      else
          puts "It's an unknown model"
  end
end

identify_class(Hacker.new)
identify_class(Submission.new)
identify_class(TestCase.new)
identify_class(Contest.new)
identify_class(Unknown.new)
