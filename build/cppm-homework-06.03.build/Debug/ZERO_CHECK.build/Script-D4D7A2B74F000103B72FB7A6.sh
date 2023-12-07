#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03
  make -f /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03
  make -f /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03
  make -f /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03
  make -f /Users/a/Desktop/Programming/Netology/cppm-homeworks/cppm-homework_06/cppm-homework-06.03/CMakeScripts/ReRunCMake.make
fi

