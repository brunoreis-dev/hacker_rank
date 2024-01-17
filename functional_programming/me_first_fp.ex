defmodule Solution do
  # Enter your code here. Read input from STDIN. Print output to STDOUT
  number_one =
    IO.gets("")
    |> String.trim()
    |> String.to_integer()

  number_two =
    IO.gets("")
    |> String.trim()
    |> String.to_integer()

  IO.inspect(number_one + number_two)
end
