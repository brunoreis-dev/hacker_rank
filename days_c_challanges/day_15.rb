#!/bin/ruby

require 'json'
require 'stringio'


def parse_and_print(s)
  begin
      integer_value = Integer(s)
      puts integer_value
  rescue ArgumentError, TypeError
      puts 'Bad String'
  end
end

S = gets.chomp

parse_and_print(S)
