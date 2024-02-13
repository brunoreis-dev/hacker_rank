defmodule Solution do
  import Integer

  def make_array(acc) do
    case IO.gets("") do
      :eof ->
        Enum.reverse(acc)

      value ->
        value = String.trim(value)

        case value do
          "" -> Enum.reverse(acc)
          _ -> make_array([String.to_integer(value) | acc])
        end
    end
  end

  def main do
    make_array([])
    |> Enum.reduce(fn n, acc ->
      case Integer.is_odd(n) do
        true -> n + acc
        false -> acc
      end
    end)
    |> IO.inspect()
  end
end
