defmodule ExpSeries do
  defp factorial(0), do: 1
  defp factorial(n), do: Enum.reduce(1..n, 1, &(&1 * &2))

  def calculate_exponential_series(x) do
    0..9
    |> Enum.map(fn n -> :math.pow(x, n) / factorial(n) end)
    |> Enum.sum()
  end

  def process_input() do
    {input, _} = IO.gets("") |> Integer.parse()
    for _ <- 1..input do
      x = IO.gets("") |> String.trim() |> String.to_float()
      result = calculate_exponential_series(x)
      IO.puts :io_lib.format("~.4f", [result])
    end
  end
end

ExpSeries.process_input()
