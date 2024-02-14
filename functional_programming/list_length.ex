defmodule Solution do
  def make_array(acc) do
    case IO.gets("") do
      :eof ->
        Enum.reverse(acc)

      value ->
        case value do
          "" -> Enum.reverse(acc)
          _ -> make_array([value | acc])
        end
    end
  end

  def main do
    make_array([])
    |> length()
    |> IO.inspect()
  end
end
