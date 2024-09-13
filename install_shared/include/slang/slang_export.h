
#ifndef SLANG_EXPORT_H
#define SLANG_EXPORT_H

#ifdef SLANG_STATIC_DEFINE
#  define SLANG_EXPORT
#  define SLANG_NO_EXPORT
#else
#  ifndef SLANG_EXPORT
#    ifdef slang_slang_EXPORTS
        /* We are building this library */
#      define SLANG_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SLANG_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SLANG_NO_EXPORT
#    define SLANG_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SLANG_DEPRECATED
#  define SLANG_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SLANG_DEPRECATED_EXPORT
#  define SLANG_DEPRECATED_EXPORT SLANG_EXPORT SLANG_DEPRECATED
#endif

#ifndef SLANG_DEPRECATED_NO_EXPORT
#  define SLANG_DEPRECATED_NO_EXPORT SLANG_NO_EXPORT SLANG_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SLANG_NO_DEPRECATED
#    define SLANG_NO_DEPRECATED
#  endif
#endif

#if defined(_MSC_VER) && !defined(__ICL)
  #pragma warning(disable:4251)
  #pragma warning(disable:4275)
#elif defined(__GNUC__) && !defined(__clang__)
  #pragma GCC diagnostic ignored "-Wattributes"
#endif

#endif /* SLANG_EXPORT_H */
