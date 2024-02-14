defmodule Solution do
  def make_array(acc) do
    case IO.gets("") do
      :eof ->
        Enum.reverse(acc)

      value ->
        value = String.trim(value)

        case value do
          "" ->
            Enum.reverse(acc)

          _ ->
            value =
              value
              |> String.trim()
              |> String.to_integer()

            make_array([value | acc])
        end
    end
  end

  def main do
    make_array([])
    |> Enum.each(fn n ->
      case n < 0 do
        true -> IO.inspect(n * -1)
        false -> IO.inspect(n)
      end
    end)
  end
end
