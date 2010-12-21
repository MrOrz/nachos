# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the file system assignment
#    Defines set up assuming multiprogramming and virtual memory done first.
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES =-DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DVM -DUSE_TLB
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine -I../lib
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O)

# bare bones version
# DEFINES =-DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../filesys -I../threads -I../machine
# HFILES = $(THREAD_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(FILESYS_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
bitmap.o: ../lib/bitmap.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/bitmap.h
debug.o: ../lib/debug.cc ../lib/copyright.h ../lib/utility.h \
  ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc
hash.o: ../lib/hash.cc ../lib/copyright.h
libtest.o: ../lib/libtest.cc ../lib/copyright.h ../lib/libtest.h \
  ../lib/bitmap.h ../lib/utility.h ../lib/list.h ../lib/debug.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/list.cc \
  ../lib/hash.h ../lib/hash.cc
list.o: ../lib/list.cc ../lib/copyright.h
sysdep.o: ../lib/sysdep.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  /usr/include/sys/time.h /usr/include/sys/file.h /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h /usr/include/bits/uio.h \
  /usr/include/bits/stat.h /usr/include/sys/socket.h \
  /usr/include/sys/uio.h /usr/include/bits/socket.h \
  /usr/include/bits/sockaddr.h /usr/include/asm/socket.h \
  /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h \
  /usr/include/asm-generic/sockios.h /usr/include/sys/un.h \
  /usr/include/signal.h /usr/include/bits/signum.h \
  /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
interrupt.o: ../machine/interrupt.cc ../lib/copyright.h \
  ../machine/interrupt.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/list.cc \
  ../machine/callback.h ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/thread.h ../machine/machine.h \
  ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/scheduler.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
stats.o: ../machine/stats.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/stats.h
timer.o: ../machine/timer.cc ../lib/copyright.h ../machine/timer.h \
  ../lib/utility.h ../machine/callback.h ../threads/main.h ../lib/debug.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h ../machine/stats.h \
  ../threads/alarm.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
alarm.o: ../threads/alarm.cc ../lib/copyright.h ../threads/alarm.h \
  ../lib/utility.h ../machine/callback.h ../machine/timer.h \
  ../threads/main.h ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h ../machine/stats.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
  ../threads/bedroom.h /usr/local/gcc-3.3.3/include/c++/3.3.3/list \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_list.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/list.tcc
bedroom.o: ../threads/bedroom.cpp ../threads/bedroom.h \
  ../machine/callback.h ../lib/copyright.h ../threads/thread.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/list \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_list.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/list.tcc ../threads/main.h \
  ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc \
  ../machine/interrupt.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
kernel.o: ../threads/kernel.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc \
  ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h ../threads/synchlist.h \
  ../threads/synchlist.cc ../lib/libtest.h ../machine/elevatortest.h
main.o: ../threads/main.cc ../lib/copyright.h ../threads/main.h \
  ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
scheduler.o: ../threads/scheduler.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
  ../userprog/userkernel.h ../threads/kernel.h ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
synch.o: ../threads/synch.cc ../lib/copyright.h ../threads/synch.h \
  ../threads/thread.h ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
  ../lib/list.cc ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h
synchlist.o: ../threads/synchlist.cc ../lib/copyright.h \
  ../threads/synchlist.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/list.cc \
  ../threads/synch.h ../threads/thread.h ../machine/machine.h \
  ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synchlist.cc
thread.o: ../threads/thread.cc ../lib/copyright.h ../threads/thread.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/switch.h \
  ../threads/synch.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
  ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/scheduler.h ../machine/interrupt.h ../machine/callback.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../filesys/synchdisk.h ../machine/disk.h
elevatortest.o: ../machine/elevatortest.cc ../lib/copyright.h \
  ../machine/elevatortest.h ../machine/elevator.h ../lib/utility.h \
  ../machine/callback.h ../lib/list.h ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/list.cc \
  ../threads/synch.h ../threads/thread.h ../machine/machine.h \
  ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../filesys/synchdisk.h ../machine/disk.h
elevator.o: ../machine/elevator.cc ../lib/copyright.h \
  ../machine/elevator.h ../lib/utility.h ../machine/callback.h \
  ../lib/list.h ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc ../lib/list.cc \
  ../threads/kernel.h ../threads/thread.h ../machine/machine.h \
  ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../threads/main.h ../userprog/userkernel.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
addrspace.o: ../userprog/addrspace.cc ../lib/copyright.h \
  ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../bin/noff.h
exception.o: ../userprog/exception.cc ../lib/copyright.h \
  ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../userprog/syscall.h
synchconsole.o: ../userprog/synchconsole.cc ../lib/copyright.h \
  ../userprog/synchconsole.h ../lib/utility.h ../machine/callback.h \
  ../machine/console.h ../threads/synch.h ../threads/thread.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
  ../lib/list.cc ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../filesys/synchdisk.h ../machine/disk.h
userkernel.o: ../userprog/userkernel.cc ../lib/copyright.h \
  ../userprog/synchconsole.h ../lib/utility.h ../machine/callback.h \
  ../machine/console.h ../threads/synch.h ../threads/thread.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
  ../lib/list.cc ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../filesys/synchdisk.h ../machine/disk.h
console.o: ../machine/console.cc ../lib/copyright.h ../machine/console.h \
  ../lib/utility.h ../machine/callback.h ../threads/main.h ../lib/debug.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
machine.o: ../machine/machine.cc ../lib/copyright.h ../machine/machine.h \
  ../lib/utility.h ../machine/translate.h ../threads/main.h \
  ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc \
  ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
mipssim.o: ../machine/mipssim.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../machine/mipssim.h \
  ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/thread.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
  ../lib/list.cc ../machine/interrupt.h ../machine/callback.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
translate.o: ../machine/translate.cc ../lib/copyright.h ../threads/main.h \
  ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h \
  ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
  ../machine/timer.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
synchdisk.o: ../filesys/synchdisk.cc ../lib/copyright.h \
  ../filesys/synchdisk.h ../machine/disk.h ../lib/utility.h \
  ../machine/callback.h ../threads/synch.h ../threads/thread.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
  ../lib/list.cc ../threads/main.h ../userprog/userkernel.h \
  ../threads/kernel.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../threads/alarm.h ../machine/timer.h
disk.o: ../machine/disk.cc ../lib/copyright.h ../machine/disk.h \
  ../lib/utility.h ../machine/callback.h ../threads/main.h ../lib/debug.h \
  ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../threads/synch.h
directory.o: ../filesys/directory.cc ../lib/copyright.h ../lib/utility.h \
  ../filesys/filehdr.h ../machine/disk.h ../machine/callback.h \
  ../lib/bitmap.h ../filesys/directory.h ../filesys/openfile.h \
  /usr/include/stdio.h /usr/include/features.h \
  /usr/include/bits/predefs.h /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/include/string.h /usr/include/xlocale.h
filesys.o: ../filesys/filesys.cc ../lib/copyright.h ../machine/disk.h \
  ../lib/utility.h ../machine/callback.h ../lib/bitmap.h \
  ../filesys/directory.h ../filesys/openfile.h ../filesys/filehdr.h \
  ../filesys/filesys.h ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../filesys/pbitmap.h
openfile.o: ../filesys/openfile.cc ../lib/copyright.h \
  ../filesys/filehdr.h ../machine/disk.h ../lib/utility.h \
  ../machine/callback.h ../lib/bitmap.h ../filesys/openfile.h \
  ../lib/debug.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../threads/scheduler.h \
  ../lib/list.h ../lib/list.cc ../machine/interrupt.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../threads/synch.h
filehdr.o: ../filesys/filehdr.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../threads/main.h ../userprog/userkernel.h ../threads/kernel.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc \
  ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h ../filesys/filehdr.h \
  ../lib/bitmap.h
fstest.o: ../filesys/fstest.cc ../lib/copyright.h ../lib/debug.h \
  ../lib/utility.h ../lib/sysdep.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/iostream.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/backward/backward_warning.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++config.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/os_defines.h \
  /usr/include/features.h /usr/include/bits/predefs.h \
  /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ostream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ios \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/iosfwd \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++locale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/clocale /usr/include/locale.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stddef.h \
  /usr/include/bits/locale.h /usr/include/xlocale.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cctype /usr/include/ctype.h \
  /usr/include/bits/types.h /usr/include/bits/typesizes.h \
  /usr/include/endian.h /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stringfwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/fpos.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/c++io.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdio \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstddef /usr/include/stdio.h \
  /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
  /usr/include/bits/sched.h /usr/include/bits/time.h \
  /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
  /usr/include/unistd.h /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h /usr/include/bits/confname.h \
  /usr/include/getopt.h /usr/local/gcc-3.3.3/include/c++/3.3.3/cwchar \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/ctime /usr/include/bits/wchar.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/functexcept.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception_defines.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/exception \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/char_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstring /usr/include/string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/localefwd.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ios_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/atomicity.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_classes.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/string \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/memory \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algobase.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/climits \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/limits.h \
  /usr/local/gcc-3.3.3/lib/gcc-lib/i386-ubuntu-linux/3.3.3/include/syslimits.h \
  /usr/include/limits.h /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h /usr/include/bits/xopen_lim.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cstdlib /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h /usr/include/sys/select.h \
  /usr/include/bits/select.h /usr/include/bits/sigset.h \
  /usr/include/sys/sysmacros.h /usr/include/alloca.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/new \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_pair.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/type_traits.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_types.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator_base_funcs.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/concept_check.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_alloc.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_threads.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_construct.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_uninitialized.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_raw_storage_iter.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_function.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/algorithm \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_algo.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_heap.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/stl_tempbuf.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_string.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/streambuf \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/streambuf_iterator.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cwctype /usr/include/wctype.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/ctype_inline.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/codecvt.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/codecvt_specializations.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/time_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/i386-ubuntu-linux/bits/messages_members.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/basic_ios.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/ostream.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/locale \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/locale_facets.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cerrno /usr/include/errno.h \
  /usr/include/bits/errno.h /usr/include/linux/errno.h \
  /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/cmath /usr/include/math.h \
  /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
  /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
  /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
  /usr/include/bits/mathcalls.h \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/cmath.tcc \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/limits \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/typeinfo \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/istream \
  /usr/local/gcc-3.3.3/include/c++/3.3.3/bits/istream.tcc \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
  ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
  ../threads/scheduler.h ../lib/list.h ../lib/list.cc \
  ../machine/interrupt.h ../machine/callback.h ../machine/stats.h \
  ../threads/alarm.h ../machine/timer.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
pbitmap.o: ../filesys/pbitmap.cc ../lib/copyright.h ../filesys/pbitmap.h \
  ../lib/bitmap.h ../lib/utility.h ../filesys/openfile.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
