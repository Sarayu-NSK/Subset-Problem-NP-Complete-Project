# Subset-Problem-NP-Complete-Project

The Subset-sum Problem is one of the easiest to
describe and understand NP-complete problems.
Available algorithms that solve this problem exactly
need an exponential time, thus finding a solution to
this problem is not currently feasible. The current
paper revisits the subset-sum problem and suggests a
new approach to find an approximate solution to this
problem. The proposed algorithm gives a reasonable
solution with a polynomial time-complexity

The Subset-Sum Problem (SSP) is defined as follows:
● Given a set of positive integers S, e.g., {s1, s2, s3, s4, s5, s6},
and a positive integer C.

● This problem is to find one/all subsets of S that sum as close
as possible to, but do not exceed, C .

● For an example, consider the set S={1, 2, 3, 4, 5} and let the
target sum C be 10. The total number of subsets of S in this
case is 25.

● Some of the valid solutions to this problem are the sets {1, 2, 3,
4}, {1, 4, 5}, and {2, 3, 5}.

● In general, we notice that the total number of subsets taken
from a set of n elements is 2n.

● An algorithm that tests all of these possible solution subsets
needs an exponential time. Let the number of inputs, that is
the size of set S, be n.

● Using a computer that can generate and test one subset in one
microsecond we need 0.001 sec to solve an SSP problem of
input size 10.

● However, as this number of inputs grows to 100, we need
4.1016 years on that same machine! This was the main motive
to work on this problem.
