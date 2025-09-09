for _ in range(int(input())):
    n, m = map(int, input().split())
    k = int(input())
    good_indices = list(map(int, input().split()))

    if m == 1:
        print(1)
        break

    def get_shrinked_state(state, index_to_remove):
        low_part = state & ((1 << (index_to_remove - 1)) - 1)
        high_part = state >> index_to_remove
        return low_part | (high_part << (index_to_remove - 1))

    win_states = {1}  
    
    for current_piles in range(2, n + 1):
        is_alice_turn = (n - current_piles) % 2 == 0
        current_win_states = set()
        
        allowed_removals = [i for i in good_indices if i <= current_piles]

        for state in range(1 << current_piles):
            if is_alice_turn:
                can_win = False
                for removal_index in allowed_removals:
                    next_state = get_shrinked_state(state, removal_index)
                    if next_state in win_states:
                        can_win = True
                        break
                if can_win:
                    current_win_states.add(state)
            else:  
                must_lose = False
                for removal_index in allowed_removals:
                    next_state = get_shrinked_state(state, removal_index)
                    if next_state not in win_states:
                        must_lose = True
                        break
                if not must_lose:
                    current_win_states.add(state)
        
        win_states = current_win_states

    total_win_count = len(win_states)
    
    base = 2
    exp=n
    mod = 1_000_000_007
    res = 1
    base %= mod
    while exp > 0:
        if exp % 2 == 1:
            res = (res * base) % mod
        base = (base * base) % mod
        exp //= 2
    total_configurations = res

    result = (total_configurations + total_win_count) % 1_000_000_007
    print(result)


