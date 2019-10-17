file(REMOVE_RECURSE
  "../lib/liblex.a"
  "../lib/liblex.pdb"
  "CMakeFiles/lex.dir/lex.yy.c.o"
  "CMakeFiles/lex.dir/lexical_analyzer.c.o"
  "lex.yy.c"
  "syntax_analyzer.c"
  "syntax_analyzer.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/lex.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
