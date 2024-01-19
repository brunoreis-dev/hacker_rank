## This is a **simulation** of an abstract class provided at user request. ##
class Book
  attr_accessor :title
  attr_accessor :author

  def initialize(title, author)
    @title = title
    @author = author
  end

  def display
    raise 'You must override this method in your implementing class.'
  end
end

class MyBook < Book
  attr_accessor :price
  
  def initialize(title, author, price)
    super(title, author)
    @price = price
  end

  def display
    print("\nTitle: ", @title)
    print("\nAuthor: ", @author)
    print("\nPrice: ", @price) 
  end
end
new_novel = MyBook.new("Livro teste", "Autor Teste", 300)
new_novel.display
