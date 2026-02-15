n := File standardInput readLine asNumber

dp := List clone
dp append(1)
dp append(1)

for(i, 2, n,
    dp append((dp at(i - 1)) + (dp at(i - 2)))
)

(dp at(n)) println