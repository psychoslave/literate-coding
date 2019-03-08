# About literate-coding

This repository is intended to share documentation, good practices, tools and more regarding literate coding.

Note: literate coding is different from [literate programming](https://en.wikipedia.org/wiki/Literate_programming). This are two different practices that might be used independently or in combination.

# Manifesto
Note: this is a work in progress.

Much programming code use many unhabitual vocabulary as part of their prose. Literate coding intend to reduce the use of logogram, ideograms, abbreviations, and so on as much as possible in each existing programming language solely using their included facilites.

# Rational

Most of symbol used can generally be replaced directly with adverb or prepositions. Although literate coding is not about sticking to natural language clauses, it will often produce



# Why
TODO: develop "reading happen more often than writting", "how human read (**not** one character at a time)", "searchability (through `grep` or on the WWW)", "accessibility", "code that can't be read out loud will be more difficult to talk about in pair programming (slashdot? :D)"

# Examples


```C++
auto comparison = strcmp ( name, term ) ;
bool integrity = comparison == 0 ;

if ( integrity == false )
```

```C++
// Although pushed far, a few macro definitions allow to obtain a strict equivalent as follow.
// Note: this is a case where the code keep a token for token match, rather than including conciseness considerations.
autotyped comparison store equivalence of name, term tupled ay
bivalent integrity store how comparison proves indifferentiation ay

if actually integrity proves false then
[…]
```

