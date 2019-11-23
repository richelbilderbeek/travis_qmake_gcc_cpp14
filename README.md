# travis_qmake_gcc_cpp14

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
`master`|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14)
`develop`|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14)

This GitHub is part of:

 * [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial)
 * [the MXE tutorial](https://github.com/richelbilderbeek/mxe_tutorial)
 
The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp17.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp17) Use C++17: [travis_qmake_gcc_cpp17](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp17)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_bpp.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_bpp) Add `Bio++`: [travis_qmake_gcc_cpp14_bpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_bpp)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost) Add `Boost`: [travis_qmake_gcc_cpp14_boost](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_graph.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_graph) Add `Boost.Graph`: [travis_qmake_gcc_cpp14_boost_graph](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_graph)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test) Add `Boost.Test`: [travis_qmake_gcc_cpp14_boost_test](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_xml.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_xml) Use Boost on XML: [travis_qmake_gcc_cpp14_boost_xml](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_xml)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_clang-tidy.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_clang-tidy) Add `Boost`: [travis_qmake_gcc_cpp14_clang-tidy](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_clang-tidy)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_codechecker.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_codechecker) Add CodeChecker: [travis_qmake_gcc_cpp14_codechecker](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_codechecker)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_doxygen.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_doxygen) Add Doxygen: [travis_qmake_gcc_cpp14_doxygen](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_doxygen)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gcov.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gcov) Add code coverage: [travis_qmake_gcc_cpp14_gcov](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_gcov)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_cppcheck.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_cppcheck) Add `cppcheck`: [travis_qmake_gcc_cpp14_cppcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_cppcheck)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_fltk.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_fltk) Add `FLTK`: [travis_qmake_gcc_cpp14_fltk](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_fltk)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gprof.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_gprof) Add `gprof`: [travis_qmake_gcc_cpp14_gprof](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_gprof)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_oclint.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_oclint) Add `OCLint`: [travis_qmake_gcc_cpp14_oclint](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_oclint)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_perf.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_perf) Add `perf`: [travis_qmake_gcc_cpp14_perf](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_perf)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt) Add `Qt`: [travis_qmake_gcc_cpp14_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_r.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_r) Add `R`: [travis_qmake_gcc_cpp14_r](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_r)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_sdl.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_sdl) Add `SDL`: [travis_qmake_gcc_cpp14_sdl](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_sdl)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_sfml.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_sfml) Add `SFML`: [travis_qmake_gcc_cpp14_sfml](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_sfml)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_rcpp.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_rcpp) Add `Rcpp`: [travis_qmake_gcc_cpp14_rcpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_rcpp)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_urho3d.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_urho3d) Add `Urho3D`: [travis_qmake_gcc_cpp14_urho3d](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_urho3d)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_wt.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_wt) Add `Wt`: [travis_qmake_gcc_cpp14_wt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_wt)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_xmlpp.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_xmlpp) Add `xml++`: [travis_qmake_gcc_cpp14_xmlpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_xmlpp)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdc.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdc) Travis-dependent compilation: [travis_qmake_gcc_cpp14_tdc](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_tdc)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdr.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdr) Travis-dependent run: [travis_qmake_gcc_cpp14_tdr](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_tdr)

Builds of similar complexity:

 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14) Use `clang` instead of `gcc`: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_cmake_gcc_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_cmake_gcc_cpp14) Use `cmake` instead of `qmake`: [travis_cmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_cmake_gcc_cpp14)

Less complex builds:

 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98) Use C++98: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)
 * [![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11) Use C++11: [travis_qmake_gcc_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11)
