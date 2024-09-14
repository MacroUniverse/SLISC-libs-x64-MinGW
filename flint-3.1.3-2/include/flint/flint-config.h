/* Define if the compiler supports and should use thread-local storage */
#define FLINT_USES_TLS 1

/* Define if the library should be thread-safe, no matter whether FLINT_USES_TLS is used */
#define FLINT_REENTRANT 0

/* Define if -DCMAKE_BUILD_TYPE=Debug was given, to enable some ASSERT()s */
#define FLINT_WANT_ASSERT 0

/* Define if you cpu_set_t in sched.h */
#define FLINT_USES_CPUSET 0

#define FLINT_USES_PTHREAD 1

#define FLINT_USES_BLAS 1

#define FLINT_USES_FENV 1

#define FLINT_HAVE_FFT_SMALL

#define FLINT_KNOW_STRONG_ORDER 1

/* Just set to some reasonable threshold */
#define FLINT_FFT_SMALL_THRESHOLD 600

/* NOTE: Here we assume this is how it works. */
#if defined(_MSC_VER) || defined(__MINGW32__) || defined(__MINGW64__)
# define HAVE__ALIGNED_MALLOC 1
#else
# define HAVE_ALIGNED_ALLOC 1
#endif

#ifdef _MSC_VER
# if defined(FLINT_BUILD_DLL)
#  define FLINT_DLL __declspec(dllexport)
# else
#  define FLINT_DLL __declspec(dllimport)
# endif
#endif
