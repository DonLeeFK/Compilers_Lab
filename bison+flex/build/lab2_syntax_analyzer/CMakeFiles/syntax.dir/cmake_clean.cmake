file(REMOVE_RECURSE
  "../lib/libsyntax.a"
  "../lib/libsyntax.pdb"
  "CMakeFiles/syntax.dir/syntax_analyzer.c.o"
  "syntax_analyzer.c"
  "syntax_analyzer.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/syntax.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
