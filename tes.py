def can_survive_and_kill_all_monsters(t, cases):
    result = []
    for _ in range(t):
        n, k = cases[_][0]
        monsters = list(zip(cases[_][1], cases[_][2]))
        monsters.sort(key=lambda x: abs(x[1]))  # Sort monsters based on absolute distance from character
        for monster in monsters:
            distance = monster[1]
            time_to_reach = abs(distance)  # Time for the monster to reach the character
            bullets_needed = (time_to_reach + 1) // 2  # At least half the time, rounded up
            if bullets_needed > k:
                result.append("NO")  # Not enough bullets to kill this monster before it reaches character
                break
            k -= bullets_needed  # Decrease available bullets after killing this monster
        else:
            result.append("YES")  # Able to kill all monsters before any reach character
    return result

# Example usage:
t = int(input())
cases = []
for _ in range(t):
    n_k = tuple(map(int, input().split()))
    a_values = list(map(int, input().split()))
    x_values = list(map(int, input().split()))
    cases.append((n_k, a_values, x_values))

results = can_survive_and_kill_all_monsters(t, cases)
for res in results:
    print(res)
