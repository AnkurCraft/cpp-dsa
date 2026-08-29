# Testing Strategy

A strong DSA repository should test edge cases, not just the happy path.

For each canonical implementation consider:

- empty input
- one element
- duplicate values
- already sorted input
- reverse sorted input
- minimum/maximum integer values
- disconnected graphs
- cycles
- degenerate trees
- invalid operations
- boundary indices

The current repository contains standalone demonstration programs. A future CI layer can compile every canonical `.cpp` and run deterministic tests.
