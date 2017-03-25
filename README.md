# travis_qmake_gcc_cpp14

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/)

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

 * Use C++17: [travis_qmake_gcc_cpp17](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp17)
 * Add `Bio++`: [travis_qmake_gcc_cpp14_bpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_bpp)
 * Add `Boost`: [travis_qmake_gcc_cpp14_boost](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost)
 * Add `Boost.Test`: [travis_qmake_gcc_cpp14_boost_test](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test)
 * Add `clang` as a second compiler: [travis_qmake_clang_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_gcc_cpp14)
 * Add `codechecker`: [travis_qmake_gcc_cpp14_codechecker](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_codechecker)
 * Add code coverage: [travis_qmake_gcc_cpp14_gcov](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_gcov)
 * Add Coverity Scan: [travis_qmake_gcc_cpp14_coverity](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_coverity)
 * Add `cppcheck`: [travis_qmake_gcc_cpp14_cppcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_cppcheck)
 * Add `FLTK`: [travis_qmake_gcc_cpp14_fltk](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_fltk)
 * Add `gprof`: [travis_qmake_gcc_cpp14_gprof](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_gprof)
 * Add `OCLint`: [travis_qmake_gcc_cpp14_oclint](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_oclint)
 * Add `perf`: [travis_qmake_gcc_cpp14_perf](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_perf)
 * Add `Qt`: [travis_qmake_gcc_cpp14_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt)
 * Add `SDL`: [travis_qmake_gcc_cpp14_sdl](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_sdl)
 * Add `SFML`: [travis_qmake_gcc_cpp14_sfml](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_sfml)
 * Add `Rcpp`: [travis_qmake_gcc_cpp14_rcpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_rcpp)
 * Add `scan-build`: [travis_qmake_gcc_cpp14_scan-build](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_scan-build)
 * Add `Urho3D`: [travis_qmake_gcc_cpp14_urho3d](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_urho3d)
 * Add `Wt`: [travis_qmake_gcc_cpp14_wt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_wt)
 * Travis-dependent compilation: [travis_qmake_gcc_cpp14_tdc](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_tdc)
 * Travis-dependent run: [travis_qmake_gcc_cpp14_tdr](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_tdr)

Builds of similar complexity:

 * Use `clang` instead of `gcc`: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)
 * Use `cmake` instead of `qmake`: [travis_cmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_cmake_gcc_cpp14)

Less complex builds:

 * Use C++98: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)
 * Use C++11: [travis_qmake_gcc_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11)


# Let g++ redirect to g++-5

There are two equivalent ways:

```
  - sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 90
```

and

```
  - sudo unlink /usr/bin/gcc && sudo ln -s /usr/bin/gcc-5 /usr/bin/gcc
  - sudo unlink /usr/bin/g++ && sudo ln -s /usr/bin/g++-5 /usr/bin/g++
```

I prefer the first, as it is shorter.