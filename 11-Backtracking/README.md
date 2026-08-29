# Backtracking

Backtracking explores choices and undoes a choice when a branch cannot produce a valid solution.

Template:

```cpp
void solve(State& state) {
    if (isComplete(state)) {
        record(state);
        return;
    }

    for (auto choice : choices(state)) {
        make(choice);
        solve(state);
        undo(choice);
    }
}
```

Core problems:

- subsets
- permutations
- combinations
- N-Queens
- Sudoku
- word search
