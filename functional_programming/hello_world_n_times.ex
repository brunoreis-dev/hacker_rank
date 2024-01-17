defmodule Solution do
  def main() do
    IO.gets("")
    |> String.trim()
    |> String.to_integer()
    |> print_hello_word_recursion()
  end

  defp print_hello_word_recursion(recursions_number) when n > 0 do
    IO.puts("Hello World")
    print_hello_word_recursion(recursions_number - 1)
  end

  defp print_hello_word_recursion(recursions_number), do: :ok
end
