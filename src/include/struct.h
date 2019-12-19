typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;
typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
typedef signed char gint8;
typedef unsigned char guint8;
typedef signed short gint16;
typedef unsigned short guint16;
typedef signed int gint32;
typedef unsigned int guint32;
typedef signed long gint64;
typedef unsigned long guint64;
typedef signed long gssize;
typedef unsigned long gsize;
typedef gint64 goffset;
typedef signed long gintptr;
typedef unsigned long guintptr;
typedef int GPid;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long int tm_gmtoff;
  const char *tm_zone;
};
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
struct sigevent;
typedef __pid_t pid_t;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;
typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;
typedef float gfloat;
typedef double gdouble;
typedef void* gpointer;
typedef const void *gconstpointer;
typedef gint (*GCompareFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef gint (*GCompareDataFunc) (gconstpointer a,
                                                 gconstpointer b,
       gpointer user_data);
typedef gboolean (*GEqualFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef void (*GDestroyNotify) (gpointer data);
typedef void (*GFunc) (gpointer data,
                                                 gpointer user_data);
typedef guint (*GHashFunc) (gconstpointer key);
typedef void (*GHFunc) (gpointer key,
                                                 gpointer value,
                                                 gpointer user_data);
typedef gpointer (*GCopyFunc) (gconstpointer src,
                                                 gpointer data);
typedef void (*GFreeFunc) (gpointer data);
typedef const gchar * (*GTranslateFunc) (const gchar *str,
       gpointer data);

typedef union _GDoubleIEEE754 GDoubleIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;
union _GFloatIEEE754
{
  gfloat v_float;
  struct {
    guint mantissa : 23;
    guint biased_exponent : 8;
    guint sign : 1;
  } mpn;
};
union _GDoubleIEEE754
{
  gdouble v_double;
  struct {
    guint mantissa_low : 32;
    guint mantissa_high : 20;
    guint biased_exponent : 11;
    guint sign : 1;
  } mpn;
};
typedef struct _GTimeVal GTimeVal ;
struct _GTimeVal
{
  glong tv_sec;
  glong tv_usec;
} ;
typedef gint grefcount;
typedef volatile gint gatomicrefcount;
typedef struct _GBytes GBytes;
typedef struct _GArray GArray;
typedef struct _GByteArray GByteArray;
typedef struct _GPtrArray GPtrArray;
struct _GArray
{
  gchar *data;
  guint len;
};
struct _GByteArray
{
  guint8 *data;
  guint len;
};
struct _GPtrArray
{
  gpointer *pdata;
  guint len;
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef guint32 GQuark;
typedef struct _GError GError;
struct _GError
{
  GQuark domain;
  gint code;
  gchar *message;
};
typedef enum {
  G_USER_DIRECTORY_DESKTOP,
  G_USER_DIRECTORY_DOCUMENTS,
  G_USER_DIRECTORY_DOWNLOAD,
  G_USER_DIRECTORY_MUSIC,
  G_USER_DIRECTORY_PICTURES,
  G_USER_DIRECTORY_PUBLIC_SHARE,
  G_USER_DIRECTORY_TEMPLATES,
  G_USER_DIRECTORY_VIDEOS,
  G_USER_N_DIRECTORIES
} GUserDirectory;
typedef struct _GDebugKey GDebugKey;
struct _GDebugKey
{
  const gchar *key;
  guint value;
};
typedef enum
{
  G_FORMAT_SIZE_DEFAULT = 0,
  G_FORMAT_SIZE_LONG_FORMAT = 1 << 0,
  G_FORMAT_SIZE_IEC_UNITS = 1 << 1,
  G_FORMAT_SIZE_BITS = 1 << 2
} GFormatSizeFlags;
typedef void (*GVoidFunc) (void) ;

typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t ;
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long int __pad2;
  unsigned int __flags;
};
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
 
  short __spins; short __elision;
  __pthread_list_t __list;
 
};
struct __pthread_cond_s
{
  union
  {
    unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  union
  {
    unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
typedef int (*__compar_fn_t) (const void *, const void *);
typedef enum
{
  G_THREAD_ERROR_AGAIN
} GThreadError;
typedef gpointer (*GThreadFunc) (gpointer data);
typedef struct _GThread GThread;
typedef union _GMutex GMutex;
typedef struct _GRecMutex GRecMutex;
typedef struct _GRWLock GRWLock;
typedef struct _GCond GCond;
typedef struct _GPrivate GPrivate;
typedef struct _GOnce GOnce;
union _GMutex
{
  gpointer p;
  guint i[2];
};
struct _GRWLock
{
  gpointer p;
  guint i[2];
};
struct _GCond
{
  gpointer p;
  guint i[2];
};
struct _GRecMutex
{
  gpointer p;
  guint i[2];
};
struct _GPrivate
{
  gpointer p;
  GDestroyNotify notify;
  gpointer future[2];
};
typedef enum
{
  G_ONCE_STATUS_NOTCALLED,
  G_ONCE_STATUS_PROGRESS,
  G_ONCE_STATUS_READY
} GOnceStatus;
struct _GOnce
{
  volatile GOnceStatus status;
  volatile gpointer retval;
};
typedef void GMutexLocker;

typedef void GRecMutexLocker;

typedef void GRWLockWriterLocker;

typedef void GRWLockReaderLocker;

typedef struct _GAsyncQueue GAsyncQueue;
typedef __sig_atomic_t sig_atomic_t;
union sigval
{
  int sival_int;
  void *sival_ptr;
};
typedef union sigval __sigval_t;
typedef struct
  {
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union
      {
 int _pad[((128 / sizeof (int)) - 4)];
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;
 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;
 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {
  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;
  __uint32_t _pkey;
       } _bounds;
   } _sigfault;
 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,
  SI_TKILL,
  SI_SIGIO,
  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,
  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
};
enum
{
  ILL_ILLOPC = 1,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,
  ILL_BADIADDR
};
enum
{
  FPE_INTDIV = 1,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,
  FPE_FLTUNK = 14,
  FPE_CONDTRAP
};
enum
{
  SEGV_MAPERR = 1,
  SEGV_ACCERR,
  SEGV_BNDERR,
  SEGV_PKUERR,
  SEGV_ACCADI,
  SEGV_ADIDERR,
  SEGV_ADIPERR
};
enum
{
  BUS_ADRALN = 1,
  BUS_ADRERR,
  BUS_OBJERR,
  BUS_MCEERR_AR,
  BUS_MCEERR_AO
};
enum
{
  CLD_EXITED = 1,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};
enum
{
  POLL_IN = 1,
  POLL_OUT,
  POLL_MSG,
  POLL_ERR,
  POLL_PRI,
  POLL_HUP
};
typedef __sigval_t sigval_t;
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union
      {
 int _pad[((64 / sizeof (int)) - 4)];
 __pid_t _tid;
 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
enum
{
  SIGEV_SIGNAL = 0,
  SIGEV_NONE,
  SIGEV_THREAD,
  SIGEV_THREAD_ID = 4
};
typedef void (*__sighandler_t) (int);
typedef __sighandler_t sig_t;
struct sigaction
  {
    union
      {
 __sighandler_t sa_handler;
 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer) (void);
  };
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};
struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};
struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};
struct _xmmreg
{
  __uint32_t element[4];
};
struct _fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};
struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};
struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
typedef long long int greg_t;
typedef greg_t gregset_t[23];
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};
struct _libc_xmmreg
{
  __uint32_t element[4];
};
struct _libc_fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
typedef struct _libc_fpstate *fpregset_t;
typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    unsigned long long __reserved1 [8];
} mcontext_t;
typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    unsigned long long int __ssp[4];
  } ucontext_t;
enum
{
  SS_ONSTACK = 1,
  SS_DISABLE
};
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
typedef enum
{
  G_BOOKMARK_FILE_ERROR_INVALID_URI,
  G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  G_BOOKMARK_FILE_ERROR_READ,
  G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  G_BOOKMARK_FILE_ERROR_WRITE,
  G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND
} GBookmarkFileError;
typedef struct _GBookmarkFile GBookmarkFile;
typedef enum {
  G_CHECKSUM_MD5,
  G_CHECKSUM_SHA1,
  G_CHECKSUM_SHA256,
  G_CHECKSUM_SHA512,
  G_CHECKSUM_SHA384
} GChecksumType;
typedef struct _GChecksum GChecksum;
typedef enum
{
  G_CONVERT_ERROR_NO_CONVERSION,
  G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  G_CONVERT_ERROR_FAILED,
  G_CONVERT_ERROR_PARTIAL_INPUT,
  G_CONVERT_ERROR_BAD_URI,
  G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,
  G_CONVERT_ERROR_NO_MEMORY,
  G_CONVERT_ERROR_EMBEDDED_NUL
} GConvertError;
typedef struct _GIConv *GIConv;
typedef struct _GData GData;
typedef void (*GDataForeachFunc) (GQuark key_id,
                                                 gpointer data,
                                                 gpointer user_data);
typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);
typedef gint32 GTime ;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
typedef struct _GDate GDate;
typedef enum
{
  G_DATE_DAY = 0,
  G_DATE_MONTH = 1,
  G_DATE_YEAR = 2
} GDateDMY;
typedef enum
{
  G_DATE_BAD_WEEKDAY = 0,
  G_DATE_MONDAY = 1,
  G_DATE_TUESDAY = 2,
  G_DATE_WEDNESDAY = 3,
  G_DATE_THURSDAY = 4,
  G_DATE_FRIDAY = 5,
  G_DATE_SATURDAY = 6,
  G_DATE_SUNDAY = 7
} GDateWeekday;
typedef enum
{
  G_DATE_BAD_MONTH = 0,
  G_DATE_JANUARY = 1,
  G_DATE_FEBRUARY = 2,
  G_DATE_MARCH = 3,
  G_DATE_APRIL = 4,
  G_DATE_MAY = 5,
  G_DATE_JUNE = 6,
  G_DATE_JULY = 7,
  G_DATE_AUGUST = 8,
  G_DATE_SEPTEMBER = 9,
  G_DATE_OCTOBER = 10,
  G_DATE_NOVEMBER = 11,
  G_DATE_DECEMBER = 12
} GDateMonth;
struct _GDate
{
  guint julian_days : 32;
  guint julian : 1;
  guint dmy : 1;
  guint day : 6;
  guint month : 4;
  guint year : 16;
};
typedef struct _GTimeZone GTimeZone;
typedef enum
{
  G_TIME_TYPE_STANDARD,
  G_TIME_TYPE_DAYLIGHT,
  G_TIME_TYPE_UNIVERSAL
} GTimeType;
typedef gint64 GTimeSpan;
typedef struct _GDateTime GDateTime;
struct dirent
  {
    __ino_t d_ino;
    __off_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
enum
  {
    DT_UNKNOWN = 0,
    DT_FIFO = 1,
    DT_CHR = 2,
    DT_DIR = 4,
    DT_BLK = 6,
    DT_REG = 8,
    DT_LNK = 10,
    DT_SOCK = 12,
    DT_WHT = 14
  };
typedef struct __dirstream DIR;
typedef struct _GDir GDir;
typedef enum
{
  G_FILE_ERROR_EXIST,
  G_FILE_ERROR_ISDIR,
  G_FILE_ERROR_ACCES,
  G_FILE_ERROR_NAMETOOLONG,
  G_FILE_ERROR_NOENT,
  G_FILE_ERROR_NOTDIR,
  G_FILE_ERROR_NXIO,
  G_FILE_ERROR_NODEV,
  G_FILE_ERROR_ROFS,
  G_FILE_ERROR_TXTBSY,
  G_FILE_ERROR_FAULT,
  G_FILE_ERROR_LOOP,
  G_FILE_ERROR_NOSPC,
  G_FILE_ERROR_NOMEM,
  G_FILE_ERROR_MFILE,
  G_FILE_ERROR_NFILE,
  G_FILE_ERROR_BADF,
  G_FILE_ERROR_INVAL,
  G_FILE_ERROR_PIPE,
  G_FILE_ERROR_AGAIN,
  G_FILE_ERROR_INTR,
  G_FILE_ERROR_IO,
  G_FILE_ERROR_PERM,
  G_FILE_ERROR_NOSYS,
  G_FILE_ERROR_FAILED
} GFileError;
typedef enum
{
  G_FILE_TEST_IS_REGULAR = 1 << 0,
  G_FILE_TEST_IS_SYMLINK = 1 << 1,
  G_FILE_TEST_IS_DIR = 1 << 2,
  G_FILE_TEST_IS_EXECUTABLE = 1 << 3,
  G_FILE_TEST_EXISTS = 1 << 4
} GFileTest;
typedef struct _GMemVTable GMemVTable;

struct _GMemVTable {
  gpointer (*malloc) (gsize n_bytes);
  gpointer (*realloc) (gpointer mem,
      gsize n_bytes);
  void (*free) (gpointer mem);
  gpointer (*calloc) (gsize n_blocks,
      gsize n_block_bytes);
  gpointer (*try_malloc) (gsize n_bytes);
  gpointer (*try_realloc) (gpointer mem,
      gsize n_bytes);
};
typedef struct _GNode GNode;
typedef enum
{
  G_TRAVERSE_LEAVES = 1 << 0,
  G_TRAVERSE_NON_LEAVES = 1 << 1,
  G_TRAVERSE_ALL = G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,
  G_TRAVERSE_MASK = 0x03,
  G_TRAVERSE_LEAFS = G_TRAVERSE_LEAVES,
  G_TRAVERSE_NON_LEAFS = G_TRAVERSE_NON_LEAVES
} GTraverseFlags;
typedef enum
{
  G_IN_ORDER,
  G_PRE_ORDER,
  G_POST_ORDER,
  G_LEVEL_ORDER
} GTraverseType;
typedef gboolean (*GNodeTraverseFunc) (GNode *node,
       gpointer data);
typedef void (*GNodeForeachFunc) (GNode *node,
       gpointer data);
struct _GNode
{
  gpointer data;
  GNode *next;
  GNode *prev;
  GNode *parent;
  GNode *children;
};
typedef struct _GList GList;
struct _GList
{
  gpointer data;
  GList *next;
  GList *prev;
};
typedef struct _GHashTable GHashTable;
typedef gboolean (*GHRFunc) (gpointer key,
                               gpointer value,
                               gpointer user_data);
typedef struct _GHashTableIter GHashTableIter;
struct _GHashTableIter
{
  gpointer dummy1;
  gpointer dummy2;
  gpointer dummy3;
  int dummy4;
  gboolean dummy5;
  gpointer dummy6;
};
typedef struct _GHmac GHmac;
typedef struct _GHook GHook;
typedef struct _GHookList GHookList;
typedef gint (*GHookCompareFunc) (GHook *new_hook,
       GHook *sibling);
typedef gboolean (*GHookFindFunc) (GHook *hook,
       gpointer data);
typedef void (*GHookMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef gboolean (*GHookCheckMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef void (*GHookFunc) (gpointer data);
typedef gboolean (*GHookCheckFunc) (gpointer data);
typedef void (*GHookFinalizeFunc) (GHookList *hook_list,
       GHook *hook);
typedef enum
{
  G_HOOK_FLAG_ACTIVE = 1 << 0,
  G_HOOK_FLAG_IN_CALL = 1 << 1,
  G_HOOK_FLAG_MASK = 0x0f
} GHookFlagMask;
struct _GHookList
{
  gulong seq_id;
  guint hook_size : 16;
  guint is_setup : 1;
  GHook *hooks;
  gpointer dummy3;
  GHookFinalizeFunc finalize_hook;
  gpointer dummy[2];
};
struct _GHook
{
  gpointer data;
  GHook *next;
  GHook *prev;
  guint ref_count;
  gulong hook_id;
  guint flags;
  gpointer func;
  GDestroyNotify destroy;
};
typedef struct _GPollFD GPollFD;
typedef gint (*GPollFunc) (GPollFD *ufds,
                                 guint nfsd,
                                 gint timeout_);
struct _GPollFD
{
  gint fd;
  gushort events;
  gushort revents;
};
typedef struct _GSList GSList;
struct _GSList
{
  gpointer data;
  GSList *next;
};
typedef enum
{
  G_IO_IN =1,
  G_IO_OUT =4,
  G_IO_PRI =2,
  G_IO_ERR =8,
  G_IO_HUP =16,
  G_IO_NVAL =32
} GIOCondition;
typedef struct _GMainContext GMainContext;
typedef struct _GMainLoop GMainLoop;
typedef struct _GSource GSource;
typedef struct _GSourcePrivate GSourcePrivate;
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
typedef struct _GSourceFuncs GSourceFuncs;
typedef gboolean (*GSourceFunc) (gpointer user_data);
typedef void (*GChildWatchFunc) (GPid pid,
                                       gint status,
                                       gpointer user_data);
struct _GSource
{
  gpointer callback_data;
  GSourceCallbackFuncs *callback_funcs;
  const GSourceFuncs *source_funcs;
  guint ref_count;
  GMainContext *context;
  gint priority;
  guint flags;
  guint source_id;
  GSList *poll_fds;
  GSource *prev;
  GSource *next;
  char *name;
  GSourcePrivate *priv;
};
struct _GSourceCallbackFuncs
{
  void (*ref) (gpointer cb_data);
  void (*unref) (gpointer cb_data);
  void (*get) (gpointer cb_data,
                 GSource *source,
                 GSourceFunc *func,
                 gpointer *data);
};
typedef void (*GSourceDummyMarshal) (void);
struct _GSourceFuncs
{
  gboolean (*prepare) (GSource *source,
                        gint *timeout_);
  gboolean (*check) (GSource *source);
  gboolean (*dispatch) (GSource *source,
                        GSourceFunc callback,
                        gpointer user_data);
  void (*finalize) (GSource *source);
  GSourceFunc closure_callback;
  GSourceDummyMarshal closure_marshal;
};
typedef void (* GClearHandleFunc) (guint handle_id);
typedef guint32 gunichar;
typedef guint16 gunichar2;
typedef enum
{
  G_UNICODE_CONTROL,
  G_UNICODE_FORMAT,
  G_UNICODE_UNASSIGNED,
  G_UNICODE_PRIVATE_USE,
  G_UNICODE_SURROGATE,
  G_UNICODE_LOWERCASE_LETTER,
  G_UNICODE_MODIFIER_LETTER,
  G_UNICODE_OTHER_LETTER,
  G_UNICODE_TITLECASE_LETTER,
  G_UNICODE_UPPERCASE_LETTER,
  G_UNICODE_SPACING_MARK,
  G_UNICODE_ENCLOSING_MARK,
  G_UNICODE_NON_SPACING_MARK,
  G_UNICODE_DECIMAL_NUMBER,
  G_UNICODE_LETTER_NUMBER,
  G_UNICODE_OTHER_NUMBER,
  G_UNICODE_CONNECT_PUNCTUATION,
  G_UNICODE_DASH_PUNCTUATION,
  G_UNICODE_CLOSE_PUNCTUATION,
  G_UNICODE_FINAL_PUNCTUATION,
  G_UNICODE_INITIAL_PUNCTUATION,
  G_UNICODE_OTHER_PUNCTUATION,
  G_UNICODE_OPEN_PUNCTUATION,
  G_UNICODE_CURRENCY_SYMBOL,
  G_UNICODE_MODIFIER_SYMBOL,
  G_UNICODE_MATH_SYMBOL,
  G_UNICODE_OTHER_SYMBOL,
  G_UNICODE_LINE_SEPARATOR,
  G_UNICODE_PARAGRAPH_SEPARATOR,
  G_UNICODE_SPACE_SEPARATOR
} GUnicodeType;
typedef enum
{
  G_UNICODE_BREAK_MANDATORY,
  G_UNICODE_BREAK_CARRIAGE_RETURN,
  G_UNICODE_BREAK_LINE_FEED,
  G_UNICODE_BREAK_COMBINING_MARK,
  G_UNICODE_BREAK_SURROGATE,
  G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  G_UNICODE_BREAK_INSEPARABLE,
  G_UNICODE_BREAK_NON_BREAKING_GLUE,
  G_UNICODE_BREAK_CONTINGENT,
  G_UNICODE_BREAK_SPACE,
  G_UNICODE_BREAK_AFTER,
  G_UNICODE_BREAK_BEFORE,
  G_UNICODE_BREAK_BEFORE_AND_AFTER,
  G_UNICODE_BREAK_HYPHEN,
  G_UNICODE_BREAK_NON_STARTER,
  G_UNICODE_BREAK_OPEN_PUNCTUATION,
  G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  G_UNICODE_BREAK_QUOTATION,
  G_UNICODE_BREAK_EXCLAMATION,
  G_UNICODE_BREAK_IDEOGRAPHIC,
  G_UNICODE_BREAK_NUMERIC,
  G_UNICODE_BREAK_INFIX_SEPARATOR,
  G_UNICODE_BREAK_SYMBOL,
  G_UNICODE_BREAK_ALPHABETIC,
  G_UNICODE_BREAK_PREFIX,
  G_UNICODE_BREAK_POSTFIX,
  G_UNICODE_BREAK_COMPLEX_CONTEXT,
  G_UNICODE_BREAK_AMBIGUOUS,
  G_UNICODE_BREAK_UNKNOWN,
  G_UNICODE_BREAK_NEXT_LINE,
  G_UNICODE_BREAK_WORD_JOINER,
  G_UNICODE_BREAK_HANGUL_L_JAMO,
  G_UNICODE_BREAK_HANGUL_V_JAMO,
  G_UNICODE_BREAK_HANGUL_T_JAMO,
  G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE,
  G_UNICODE_BREAK_CLOSE_PARANTHESIS,
  G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER,
  G_UNICODE_BREAK_HEBREW_LETTER,
  G_UNICODE_BREAK_REGIONAL_INDICATOR,
  G_UNICODE_BREAK_EMOJI_BASE,
  G_UNICODE_BREAK_EMOJI_MODIFIER,
  G_UNICODE_BREAK_ZERO_WIDTH_JOINER
} GUnicodeBreakType;
typedef enum
{
  G_UNICODE_SCRIPT_INVALID_CODE = -1,
  G_UNICODE_SCRIPT_COMMON = 0,
  G_UNICODE_SCRIPT_INHERITED,
  G_UNICODE_SCRIPT_ARABIC,
  G_UNICODE_SCRIPT_ARMENIAN,
  G_UNICODE_SCRIPT_BENGALI,
  G_UNICODE_SCRIPT_BOPOMOFO,
  G_UNICODE_SCRIPT_CHEROKEE,
  G_UNICODE_SCRIPT_COPTIC,
  G_UNICODE_SCRIPT_CYRILLIC,
  G_UNICODE_SCRIPT_DESERET,
  G_UNICODE_SCRIPT_DEVANAGARI,
  G_UNICODE_SCRIPT_ETHIOPIC,
  G_UNICODE_SCRIPT_GEORGIAN,
  G_UNICODE_SCRIPT_GOTHIC,
  G_UNICODE_SCRIPT_GREEK,
  G_UNICODE_SCRIPT_GUJARATI,
  G_UNICODE_SCRIPT_GURMUKHI,
  G_UNICODE_SCRIPT_HAN,
  G_UNICODE_SCRIPT_HANGUL,
  G_UNICODE_SCRIPT_HEBREW,
  G_UNICODE_SCRIPT_HIRAGANA,
  G_UNICODE_SCRIPT_KANNADA,
  G_UNICODE_SCRIPT_KATAKANA,
  G_UNICODE_SCRIPT_KHMER,
  G_UNICODE_SCRIPT_LAO,
  G_UNICODE_SCRIPT_LATIN,
  G_UNICODE_SCRIPT_MALAYALAM,
  G_UNICODE_SCRIPT_MONGOLIAN,
  G_UNICODE_SCRIPT_MYANMAR,
  G_UNICODE_SCRIPT_OGHAM,
  G_UNICODE_SCRIPT_OLD_ITALIC,
  G_UNICODE_SCRIPT_ORIYA,
  G_UNICODE_SCRIPT_RUNIC,
  G_UNICODE_SCRIPT_SINHALA,
  G_UNICODE_SCRIPT_SYRIAC,
  G_UNICODE_SCRIPT_TAMIL,
  G_UNICODE_SCRIPT_TELUGU,
  G_UNICODE_SCRIPT_THAANA,
  G_UNICODE_SCRIPT_THAI,
  G_UNICODE_SCRIPT_TIBETAN,
  G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL,
  G_UNICODE_SCRIPT_YI,
  G_UNICODE_SCRIPT_TAGALOG,
  G_UNICODE_SCRIPT_HANUNOO,
  G_UNICODE_SCRIPT_BUHID,
  G_UNICODE_SCRIPT_TAGBANWA,
  G_UNICODE_SCRIPT_BRAILLE,
  G_UNICODE_SCRIPT_CYPRIOT,
  G_UNICODE_SCRIPT_LIMBU,
  G_UNICODE_SCRIPT_OSMANYA,
  G_UNICODE_SCRIPT_SHAVIAN,
  G_UNICODE_SCRIPT_LINEAR_B,
  G_UNICODE_SCRIPT_TAI_LE,
  G_UNICODE_SCRIPT_UGARITIC,
  G_UNICODE_SCRIPT_NEW_TAI_LUE,
  G_UNICODE_SCRIPT_BUGINESE,
  G_UNICODE_SCRIPT_GLAGOLITIC,
  G_UNICODE_SCRIPT_TIFINAGH,
  G_UNICODE_SCRIPT_SYLOTI_NAGRI,
  G_UNICODE_SCRIPT_OLD_PERSIAN,
  G_UNICODE_SCRIPT_KHAROSHTHI,
  G_UNICODE_SCRIPT_UNKNOWN,
  G_UNICODE_SCRIPT_BALINESE,
  G_UNICODE_SCRIPT_CUNEIFORM,
  G_UNICODE_SCRIPT_PHOENICIAN,
  G_UNICODE_SCRIPT_PHAGS_PA,
  G_UNICODE_SCRIPT_NKO,
  G_UNICODE_SCRIPT_KAYAH_LI,
  G_UNICODE_SCRIPT_LEPCHA,
  G_UNICODE_SCRIPT_REJANG,
  G_UNICODE_SCRIPT_SUNDANESE,
  G_UNICODE_SCRIPT_SAURASHTRA,
  G_UNICODE_SCRIPT_CHAM,
  G_UNICODE_SCRIPT_OL_CHIKI,
  G_UNICODE_SCRIPT_VAI,
  G_UNICODE_SCRIPT_CARIAN,
  G_UNICODE_SCRIPT_LYCIAN,
  G_UNICODE_SCRIPT_LYDIAN,
  G_UNICODE_SCRIPT_AVESTAN,
  G_UNICODE_SCRIPT_BAMUM,
  G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS,
  G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC,
  G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI,
  G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN,
  G_UNICODE_SCRIPT_JAVANESE,
  G_UNICODE_SCRIPT_KAITHI,
  G_UNICODE_SCRIPT_LISU,
  G_UNICODE_SCRIPT_MEETEI_MAYEK,
  G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN,
  G_UNICODE_SCRIPT_OLD_TURKIC,
  G_UNICODE_SCRIPT_SAMARITAN,
  G_UNICODE_SCRIPT_TAI_THAM,
  G_UNICODE_SCRIPT_TAI_VIET,
  G_UNICODE_SCRIPT_BATAK,
  G_UNICODE_SCRIPT_BRAHMI,
  G_UNICODE_SCRIPT_MANDAIC,
  G_UNICODE_SCRIPT_CHAKMA,
  G_UNICODE_SCRIPT_MEROITIC_CURSIVE,
  G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS,
  G_UNICODE_SCRIPT_MIAO,
  G_UNICODE_SCRIPT_SHARADA,
  G_UNICODE_SCRIPT_SORA_SOMPENG,
  G_UNICODE_SCRIPT_TAKRI,
  G_UNICODE_SCRIPT_BASSA_VAH,
  G_UNICODE_SCRIPT_CAUCASIAN_ALBANIAN,
  G_UNICODE_SCRIPT_DUPLOYAN,
  G_UNICODE_SCRIPT_ELBASAN,
  G_UNICODE_SCRIPT_GRANTHA,
  G_UNICODE_SCRIPT_KHOJKI,
  G_UNICODE_SCRIPT_KHUDAWADI,
  G_UNICODE_SCRIPT_LINEAR_A,
  G_UNICODE_SCRIPT_MAHAJANI,
  G_UNICODE_SCRIPT_MANICHAEAN,
  G_UNICODE_SCRIPT_MENDE_KIKAKUI,
  G_UNICODE_SCRIPT_MODI,
  G_UNICODE_SCRIPT_MRO,
  G_UNICODE_SCRIPT_NABATAEAN,
  G_UNICODE_SCRIPT_OLD_NORTH_ARABIAN,
  G_UNICODE_SCRIPT_OLD_PERMIC,
  G_UNICODE_SCRIPT_PAHAWH_HMONG,
  G_UNICODE_SCRIPT_PALMYRENE,
  G_UNICODE_SCRIPT_PAU_CIN_HAU,
  G_UNICODE_SCRIPT_PSALTER_PAHLAVI,
  G_UNICODE_SCRIPT_SIDDHAM,
  G_UNICODE_SCRIPT_TIRHUTA,
  G_UNICODE_SCRIPT_WARANG_CITI,
  G_UNICODE_SCRIPT_AHOM,
  G_UNICODE_SCRIPT_ANATOLIAN_HIEROGLYPHS,
  G_UNICODE_SCRIPT_HATRAN,
  G_UNICODE_SCRIPT_MULTANI,
  G_UNICODE_SCRIPT_OLD_HUNGARIAN,
  G_UNICODE_SCRIPT_SIGNWRITING,
  G_UNICODE_SCRIPT_ADLAM,
  G_UNICODE_SCRIPT_BHAIKSUKI,
  G_UNICODE_SCRIPT_MARCHEN,
  G_UNICODE_SCRIPT_NEWA,
  G_UNICODE_SCRIPT_OSAGE,
  G_UNICODE_SCRIPT_TANGUT,
  G_UNICODE_SCRIPT_MASARAM_GONDI,
  G_UNICODE_SCRIPT_NUSHU,
  G_UNICODE_SCRIPT_SOYOMBO,
  G_UNICODE_SCRIPT_ZANABAZAR_SQUARE,
  G_UNICODE_SCRIPT_DOGRA,
  G_UNICODE_SCRIPT_GUNJALA_GONDI,
  G_UNICODE_SCRIPT_HANIFI_ROHINGYA,
  G_UNICODE_SCRIPT_MAKASAR,
  G_UNICODE_SCRIPT_MEDEFAIDRIN,
  G_UNICODE_SCRIPT_OLD_SOGDIAN,
  G_UNICODE_SCRIPT_SOGDIAN,
  G_UNICODE_SCRIPT_ELYMAIC,
  G_UNICODE_SCRIPT_NANDINAGARI,
  G_UNICODE_SCRIPT_NYIAKENG_PUACHUE_HMONG,
  G_UNICODE_SCRIPT_WANCHO
} GUnicodeScript;
typedef enum {
  G_NORMALIZE_DEFAULT,
  G_NORMALIZE_NFD = G_NORMALIZE_DEFAULT,
  G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_NFC = G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_ALL,
  G_NORMALIZE_NFKD = G_NORMALIZE_ALL,
  G_NORMALIZE_ALL_COMPOSE,
  G_NORMALIZE_NFKC = G_NORMALIZE_ALL_COMPOSE
} GNormalizeMode;
typedef struct _GString GString;
struct _GString
{
  gchar *str;
  gsize len;
  gsize allocated_len;
};

typedef struct _GIOChannel GIOChannel;
typedef struct _GIOFuncs GIOFuncs;
typedef enum
{
  G_IO_ERROR_NONE,
  G_IO_ERROR_AGAIN,
  G_IO_ERROR_INVAL,
  G_IO_ERROR_UNKNOWN
} GIOError;
typedef enum
{
  G_IO_CHANNEL_ERROR_FBIG,
  G_IO_CHANNEL_ERROR_INVAL,
  G_IO_CHANNEL_ERROR_IO,
  G_IO_CHANNEL_ERROR_ISDIR,
  G_IO_CHANNEL_ERROR_NOSPC,
  G_IO_CHANNEL_ERROR_NXIO,
  G_IO_CHANNEL_ERROR_OVERFLOW,
  G_IO_CHANNEL_ERROR_PIPE,
  G_IO_CHANNEL_ERROR_FAILED
} GIOChannelError;
typedef enum
{
  G_IO_STATUS_ERROR,
  G_IO_STATUS_NORMAL,
  G_IO_STATUS_EOF,
  G_IO_STATUS_AGAIN
} GIOStatus;
typedef enum
{
  G_SEEK_CUR,
  G_SEEK_SET,
  G_SEEK_END
} GSeekType;
typedef enum
{
  G_IO_FLAG_APPEND = 1 << 0,
  G_IO_FLAG_NONBLOCK = 1 << 1,
  G_IO_FLAG_IS_READABLE = 1 << 2,
  G_IO_FLAG_IS_WRITABLE = 1 << 3,
  G_IO_FLAG_IS_WRITEABLE = 1 << 3,
  G_IO_FLAG_IS_SEEKABLE = 1 << 4,
  G_IO_FLAG_MASK = (1 << 5) - 1,
  G_IO_FLAG_GET_MASK = G_IO_FLAG_MASK,
  G_IO_FLAG_SET_MASK = G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK
} GIOFlags;
struct _GIOChannel
{
  gint ref_count;
  GIOFuncs *funcs;
  gchar *encoding;
  GIConv read_cd;
  GIConv write_cd;
  gchar *line_term;
  guint line_term_len;
  gsize buf_size;
  GString *read_buf;
  GString *encoded_read_buf;
  GString *write_buf;
  gchar partial_write_buf[6];
  guint use_buffer : 1;
  guint do_encode : 1;
  guint close_on_unref : 1;
  guint is_readable : 1;
  guint is_writeable : 1;
  guint is_seekable : 1;
  gpointer reserved1;
  gpointer reserved2;
};
typedef gboolean (*GIOFunc) (GIOChannel *source,
        GIOCondition condition,
        gpointer data);
struct _GIOFuncs
{
  GIOStatus (*io_read) (GIOChannel *channel,
             gchar *buf,
      gsize count,
      gsize *bytes_read,
      GError **err);
  GIOStatus (*io_write) (GIOChannel *channel,
      const gchar *buf,
      gsize count,
      gsize *bytes_written,
      GError **err);
  GIOStatus (*io_seek) (GIOChannel *channel,
      gint64 offset,
      GSeekType type,
      GError **err);
  GIOStatus (*io_close) (GIOChannel *channel,
      GError **err);
  GSource* (*io_create_watch) (GIOChannel *channel,
      GIOCondition condition);
  void (*io_free) (GIOChannel *channel);
  GIOStatus (*io_set_flags) (GIOChannel *channel,
                                  GIOFlags flags,
      GError **err);
  GIOFlags (*io_get_flags) (GIOChannel *channel);
};
typedef enum
{
  G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  G_KEY_FILE_ERROR_PARSE,
  G_KEY_FILE_ERROR_NOT_FOUND,
  G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  G_KEY_FILE_ERROR_INVALID_VALUE
} GKeyFileError;
typedef struct _GKeyFile GKeyFile;
typedef enum
{
  G_KEY_FILE_NONE = 0,
  G_KEY_FILE_KEEP_COMMENTS = 1 << 0,
  G_KEY_FILE_KEEP_TRANSLATIONS = 1 << 1
} GKeyFileFlags;
typedef struct _GMappedFile GMappedFile;
typedef enum
{
  G_MARKUP_ERROR_BAD_UTF8,
  G_MARKUP_ERROR_EMPTY,
  G_MARKUP_ERROR_PARSE,
  G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  G_MARKUP_ERROR_INVALID_CONTENT,
  G_MARKUP_ERROR_MISSING_ATTRIBUTE
} GMarkupError;
typedef enum
{
  G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1 << 0,
  G_MARKUP_TREAT_CDATA_AS_TEXT = 1 << 1,
  G_MARKUP_PREFIX_ERROR_POSITION = 1 << 2,
  G_MARKUP_IGNORE_QUALIFIED = 1 << 3
} GMarkupParseFlags;
typedef struct _GMarkupParseContext GMarkupParseContext;
typedef struct _GMarkupParser GMarkupParser;
struct _GMarkupParser
{
  void (*start_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          const gchar **attribute_names,
                          const gchar **attribute_values,
                          gpointer user_data,
                          GError **error);
  void (*end_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          gpointer user_data,
                          GError **error);
  void (*text) (GMarkupParseContext *context,
                          const gchar *text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);
  void (*passthrough) (GMarkupParseContext *context,
                          const gchar *passthrough_text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);
  void (*error) (GMarkupParseContext *context,
                          GError *error,
                          gpointer user_data);
};
typedef enum
{
  G_MARKUP_COLLECT_INVALID,
  G_MARKUP_COLLECT_STRING,
  G_MARKUP_COLLECT_STRDUP,
  G_MARKUP_COLLECT_BOOLEAN,
  G_MARKUP_COLLECT_TRISTATE,
  G_MARKUP_COLLECT_OPTIONAL = (1 << 16)
} GMarkupCollectType;
typedef struct _GVariantType GVariantType;
typedef struct _GVariant GVariant;
typedef enum
{
  G_VARIANT_CLASS_BOOLEAN = 'b',
  G_VARIANT_CLASS_BYTE = 'y',
  G_VARIANT_CLASS_INT16 = 'n',
  G_VARIANT_CLASS_UINT16 = 'q',
  G_VARIANT_CLASS_INT32 = 'i',
  G_VARIANT_CLASS_UINT32 = 'u',
  G_VARIANT_CLASS_INT64 = 'x',
  G_VARIANT_CLASS_UINT64 = 't',
  G_VARIANT_CLASS_HANDLE = 'h',
  G_VARIANT_CLASS_DOUBLE = 'd',
  G_VARIANT_CLASS_STRING = 's',
  G_VARIANT_CLASS_OBJECT_PATH = 'o',
  G_VARIANT_CLASS_SIGNATURE = 'g',
  G_VARIANT_CLASS_VARIANT = 'v',
  G_VARIANT_CLASS_MAYBE = 'm',
  G_VARIANT_CLASS_ARRAY = 'a',
  G_VARIANT_CLASS_TUPLE = '(',
  G_VARIANT_CLASS_DICT_ENTRY = '{'
} GVariantClass;
typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {
  gsize x[16];
};
typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {
  union
  {
    struct {
      gsize partial_magic;
      const GVariantType *type;
      gsize y[14];
    } s;
    gsize x[16];
  } u;
};
typedef enum
{
  G_VARIANT_PARSE_ERROR_FAILED,
  G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED,
  G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE,
  G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED,
  G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END,
  G_VARIANT_PARSE_ERROR_INVALID_CHARACTER,
  G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING,
  G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH,
  G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE,
  G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING,
  G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE,
  G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE,
  G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG,
  G_VARIANT_PARSE_ERROR_TYPE_ERROR,
  G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN,
  G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD,
  G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT,
  G_VARIANT_PARSE_ERROR_VALUE_EXPECTED
} GVariantParseError;
typedef struct _GVariantDict GVariantDict;
struct _GVariantDict {
  union
  {
    struct {
      GVariant *asv;
      gsize partial_magic;
      gsize y[14];
    } s;
    gsize x[16];
  } u;
};
typedef enum
{
  G_LOG_FLAG_RECURSION = 1 << 0,
  G_LOG_FLAG_FATAL = 1 << 1,
  G_LOG_LEVEL_ERROR = 1 << 2,
  G_LOG_LEVEL_CRITICAL = 1 << 3,
  G_LOG_LEVEL_WARNING = 1 << 4,
  G_LOG_LEVEL_MESSAGE = 1 << 5,
  G_LOG_LEVEL_INFO = 1 << 6,
  G_LOG_LEVEL_DEBUG = 1 << 7,
  G_LOG_LEVEL_MASK = ~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL)
} GLogLevelFlags;
typedef void (*GLogFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);
typedef enum
{
  G_LOG_WRITER_HANDLED = 1,
  G_LOG_WRITER_UNHANDLED = 0,
} GLogWriterOutput;
typedef struct _GLogField GLogField;
struct _GLogField
{
  const gchar *key;
  gconstpointer value;
  gssize length;
};
typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gpointer user_data);

typedef void (*GPrintFunc) (const gchar *string);
typedef struct _GOptionContext GOptionContext;
typedef struct _GOptionGroup GOptionGroup;
typedef struct _GOptionEntry GOptionEntry;
typedef enum
{
  G_OPTION_FLAG_NONE = 0,
  G_OPTION_FLAG_HIDDEN = 1 << 0,
  G_OPTION_FLAG_IN_MAIN = 1 << 1,
  G_OPTION_FLAG_REVERSE = 1 << 2,
  G_OPTION_FLAG_NO_ARG = 1 << 3,
  G_OPTION_FLAG_FILENAME = 1 << 4,
  G_OPTION_FLAG_OPTIONAL_ARG = 1 << 5,
  G_OPTION_FLAG_NOALIAS = 1 << 6
} GOptionFlags;
typedef enum
{
  G_OPTION_ARG_NONE,
  G_OPTION_ARG_STRING,
  G_OPTION_ARG_INT,
  G_OPTION_ARG_CALLBACK,
  G_OPTION_ARG_FILENAME,
  G_OPTION_ARG_STRING_ARRAY,
  G_OPTION_ARG_FILENAME_ARRAY,
  G_OPTION_ARG_DOUBLE,
  G_OPTION_ARG_INT64
} GOptionArg;
typedef gboolean (*GOptionArgFunc) (const gchar *option_name,
        const gchar *value,
        gpointer data,
        GError **error);
typedef gboolean (*GOptionParseFunc) (GOptionContext *context,
          GOptionGroup *group,
          gpointer data,
          GError **error);
typedef void (*GOptionErrorFunc) (GOptionContext *context,
      GOptionGroup *group,
      gpointer data,
      GError **error);
typedef enum
{
  G_OPTION_ERROR_UNKNOWN_OPTION,
  G_OPTION_ERROR_BAD_VALUE,
  G_OPTION_ERROR_FAILED
} GOptionError;
struct _GOptionEntry
{
  const gchar *long_name;
  gchar short_name;
  gint flags;
  GOptionArg arg;
  gpointer arg_data;
  const gchar *description;
  const gchar *arg_description;
};
typedef struct _GPatternSpec GPatternSpec;
typedef struct _GQueue GQueue;
struct _GQueue
{
  GList *head;
  GList *tail;
  guint length;
};
typedef struct _GRand GRand;
       
       
typedef char GRefString;
typedef enum
{
  G_REGEX_ERROR_COMPILE,
  G_REGEX_ERROR_OPTIMIZE,
  G_REGEX_ERROR_REPLACE,
  G_REGEX_ERROR_MATCH,
  G_REGEX_ERROR_INTERNAL,
  G_REGEX_ERROR_STRAY_BACKSLASH = 101,
  G_REGEX_ERROR_MISSING_CONTROL_CHAR = 102,
  G_REGEX_ERROR_UNRECOGNIZED_ESCAPE = 103,
  G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER = 104,
  G_REGEX_ERROR_QUANTIFIER_TOO_BIG = 105,
  G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS = 106,
  G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS = 107,
  G_REGEX_ERROR_RANGE_OUT_OF_ORDER = 108,
  G_REGEX_ERROR_NOTHING_TO_REPEAT = 109,
  G_REGEX_ERROR_UNRECOGNIZED_CHARACTER = 112,
  G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS = 113,
  G_REGEX_ERROR_UNMATCHED_PARENTHESIS = 114,
  G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE = 115,
  G_REGEX_ERROR_UNTERMINATED_COMMENT = 118,
  G_REGEX_ERROR_EXPRESSION_TOO_LARGE = 120,
  G_REGEX_ERROR_MEMORY_ERROR = 121,
  G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND = 125,
  G_REGEX_ERROR_MALFORMED_CONDITION = 126,
  G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES = 127,
  G_REGEX_ERROR_ASSERTION_EXPECTED = 128,
  G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME = 130,
  G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED = 131,
  G_REGEX_ERROR_HEX_CODE_TOO_LARGE = 134,
  G_REGEX_ERROR_INVALID_CONDITION = 135,
  G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND = 136,
  G_REGEX_ERROR_INFINITE_LOOP = 140,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR = 142,
  G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME = 143,
  G_REGEX_ERROR_MALFORMED_PROPERTY = 146,
  G_REGEX_ERROR_UNKNOWN_PROPERTY = 147,
  G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG = 148,
  G_REGEX_ERROR_TOO_MANY_SUBPATTERNS = 149,
  G_REGEX_ERROR_INVALID_OCTAL_VALUE = 151,
  G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE = 154,
  G_REGEX_ERROR_DEFINE_REPETION = 155,
  G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS = 156,
  G_REGEX_ERROR_MISSING_BACK_REFERENCE = 157,
  G_REGEX_ERROR_INVALID_RELATIVE_REFERENCE = 158,
  G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_FORBIDDEN = 159,
  G_REGEX_ERROR_UNKNOWN_BACKTRACKING_CONTROL_VERB = 160,
  G_REGEX_ERROR_NUMBER_TOO_BIG = 161,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME = 162,
  G_REGEX_ERROR_MISSING_DIGIT = 163,
  G_REGEX_ERROR_INVALID_DATA_CHARACTER = 164,
  G_REGEX_ERROR_EXTRA_SUBPATTERN_NAME = 165,
  G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_REQUIRED = 166,
  G_REGEX_ERROR_INVALID_CONTROL_CHAR = 168,
  G_REGEX_ERROR_MISSING_NAME = 169,
  G_REGEX_ERROR_NOT_SUPPORTED_IN_CLASS = 171,
  G_REGEX_ERROR_TOO_MANY_FORWARD_REFERENCES = 172,
  G_REGEX_ERROR_NAME_TOO_LONG = 175,
  G_REGEX_ERROR_CHARACTER_VALUE_TOO_LARGE = 176
} GRegexError;
typedef enum
{
  G_REGEX_CASELESS = 1 << 0,
  G_REGEX_MULTILINE = 1 << 1,
  G_REGEX_DOTALL = 1 << 2,
  G_REGEX_EXTENDED = 1 << 3,
  G_REGEX_ANCHORED = 1 << 4,
  G_REGEX_DOLLAR_ENDONLY = 1 << 5,
  G_REGEX_UNGREEDY = 1 << 9,
  G_REGEX_RAW = 1 << 11,
  G_REGEX_NO_AUTO_CAPTURE = 1 << 12,
  G_REGEX_OPTIMIZE = 1 << 13,
  G_REGEX_FIRSTLINE = 1 << 18,
  G_REGEX_DUPNAMES = 1 << 19,
  G_REGEX_NEWLINE_CR = 1 << 20,
  G_REGEX_NEWLINE_LF = 1 << 21,
  G_REGEX_NEWLINE_CRLF = G_REGEX_NEWLINE_CR | G_REGEX_NEWLINE_LF,
  G_REGEX_NEWLINE_ANYCRLF = G_REGEX_NEWLINE_CR | 1 << 22,
  G_REGEX_BSR_ANYCRLF = 1 << 23,
  G_REGEX_JAVASCRIPT_COMPAT = 1 << 25
} GRegexCompileFlags;
typedef enum
{
  G_REGEX_MATCH_ANCHORED = 1 << 4,
  G_REGEX_MATCH_NOTBOL = 1 << 7,
  G_REGEX_MATCH_NOTEOL = 1 << 8,
  G_REGEX_MATCH_NOTEMPTY = 1 << 10,
  G_REGEX_MATCH_PARTIAL = 1 << 15,
  G_REGEX_MATCH_NEWLINE_CR = 1 << 20,
  G_REGEX_MATCH_NEWLINE_LF = 1 << 21,
  G_REGEX_MATCH_NEWLINE_CRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_LF,
  G_REGEX_MATCH_NEWLINE_ANY = 1 << 22,
  G_REGEX_MATCH_NEWLINE_ANYCRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_ANY,
  G_REGEX_MATCH_BSR_ANYCRLF = 1 << 23,
  G_REGEX_MATCH_BSR_ANY = 1 << 24,
  G_REGEX_MATCH_PARTIAL_SOFT = G_REGEX_MATCH_PARTIAL,
  G_REGEX_MATCH_PARTIAL_HARD = 1 << 27,
  G_REGEX_MATCH_NOTEMPTY_ATSTART = 1 << 28
} GRegexMatchFlags;
typedef struct _GRegex GRegex;
typedef struct _GMatchInfo GMatchInfo;
typedef gboolean (*GRegexEvalCallback) (const GMatchInfo *match_info,
       GString *result,
       gpointer user_data);
typedef struct _GScanner GScanner;
typedef struct _GScannerConfig GScannerConfig;
typedef union _GTokenValue GTokenValue;
typedef void (*GScannerMsgFunc) (GScanner *scanner,
       gchar *message,
       gboolean error);
typedef enum
{
  G_ERR_UNKNOWN,
  G_ERR_UNEXP_EOF,
  G_ERR_UNEXP_EOF_IN_STRING,
  G_ERR_UNEXP_EOF_IN_COMMENT,
  G_ERR_NON_DIGIT_IN_CONST,
  G_ERR_DIGIT_RADIX,
  G_ERR_FLOAT_RADIX,
  G_ERR_FLOAT_MALFORMED
} GErrorType;
typedef enum
{
  G_TOKEN_EOF = 0,
  G_TOKEN_LEFT_PAREN = '(',
  G_TOKEN_RIGHT_PAREN = ')',
  G_TOKEN_LEFT_CURLY = '{',
  G_TOKEN_RIGHT_CURLY = '}',
  G_TOKEN_LEFT_BRACE = '[',
  G_TOKEN_RIGHT_BRACE = ']',
  G_TOKEN_EQUAL_SIGN = '=',
  G_TOKEN_COMMA = ',',
  G_TOKEN_NONE = 256,
  G_TOKEN_ERROR,
  G_TOKEN_CHAR,
  G_TOKEN_BINARY,
  G_TOKEN_OCTAL,
  G_TOKEN_INT,
  G_TOKEN_HEX,
  G_TOKEN_FLOAT,
  G_TOKEN_STRING,
  G_TOKEN_SYMBOL,
  G_TOKEN_IDENTIFIER,
  G_TOKEN_IDENTIFIER_NULL,
  G_TOKEN_COMMENT_SINGLE,
  G_TOKEN_COMMENT_MULTI,
  G_TOKEN_LAST
} GTokenType;
union _GTokenValue
{
  gpointer v_symbol;
  gchar *v_identifier;
  gulong v_binary;
  gulong v_octal;
  gulong v_int;
  guint64 v_int64;
  gdouble v_float;
  gulong v_hex;
  gchar *v_string;
  gchar *v_comment;
  guchar v_char;
  guint v_error;
};
struct _GScannerConfig
{
  gchar *cset_skip_characters;
  gchar *cset_identifier_first;
  gchar *cset_identifier_nth;
  gchar *cpair_comment_single;
  guint case_sensitive : 1;
  guint skip_comment_multi : 1;
  guint skip_comment_single : 1;
  guint scan_comment_multi : 1;
  guint scan_identifier : 1;
  guint scan_identifier_1char : 1;
  guint scan_identifier_NULL : 1;
  guint scan_symbols : 1;
  guint scan_binary : 1;
  guint scan_octal : 1;
  guint scan_float : 1;
  guint scan_hex : 1;
  guint scan_hex_dollar : 1;
  guint scan_string_sq : 1;
  guint scan_string_dq : 1;
  guint numbers_2_int : 1;
  guint int_2_float : 1;
  guint identifier_2_string : 1;
  guint char_2_token : 1;
  guint symbol_2_token : 1;
  guint scope_0_fallback : 1;
  guint store_int64 : 1;
  guint padding_dummy;
};
struct _GScanner
{
  gpointer user_data;
  guint max_parse_errors;
  guint parse_errors;
  const gchar *input_name;
  GData *qdata;
  GScannerConfig *config;
  GTokenType token;
  GTokenValue value;
  guint line;
  guint position;
  GTokenType next_token;
  GTokenValue next_value;
  guint next_line;
  guint next_position;
  GHashTable *symbol_table;
  gint input_fd;
  const gchar *text;
  const gchar *text_end;
  gchar *buffer;
  guint scope_id;
  GScannerMsgFunc msg_handler;
};
typedef struct _GSequence GSequence;
typedef struct _GSequenceNode GSequenceIter;
typedef gint (* GSequenceIterCompareFunc) (GSequenceIter *a,
                                           GSequenceIter *b,
                                           gpointer data);
typedef enum
{
  G_SHELL_ERROR_BAD_QUOTING,
  G_SHELL_ERROR_EMPTY_STRING,
  G_SHELL_ERROR_FAILED
} GShellError;
typedef enum {
  G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
  G_SLICE_CONFIG_BYPASS_MAGAZINES,
  G_SLICE_CONFIG_WORKING_SET_MSECS,
  G_SLICE_CONFIG_COLOR_INCREMENT,
  G_SLICE_CONFIG_CHUNK_SIZES,
  G_SLICE_CONFIG_CONTENTION_COUNTER
} GSliceConfig;
typedef enum
{
  G_SPAWN_ERROR_FORK,
  G_SPAWN_ERROR_READ,
  G_SPAWN_ERROR_CHDIR,
  G_SPAWN_ERROR_ACCES,
  G_SPAWN_ERROR_PERM,
  G_SPAWN_ERROR_TOO_BIG,
  G_SPAWN_ERROR_2BIG = G_SPAWN_ERROR_TOO_BIG,
  G_SPAWN_ERROR_NOEXEC,
  G_SPAWN_ERROR_NAMETOOLONG,
  G_SPAWN_ERROR_NOENT,
  G_SPAWN_ERROR_NOMEM,
  G_SPAWN_ERROR_NOTDIR,
  G_SPAWN_ERROR_LOOP,
  G_SPAWN_ERROR_TXTBUSY,
  G_SPAWN_ERROR_IO,
  G_SPAWN_ERROR_NFILE,
  G_SPAWN_ERROR_MFILE,
  G_SPAWN_ERROR_INVAL,
  G_SPAWN_ERROR_ISDIR,
  G_SPAWN_ERROR_LIBBAD,
  G_SPAWN_ERROR_FAILED
} GSpawnError;
typedef void (* GSpawnChildSetupFunc) (gpointer user_data);
typedef enum
{
  G_SPAWN_DEFAULT = 0,
  G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1 << 0,
  G_SPAWN_DO_NOT_REAP_CHILD = 1 << 1,
  G_SPAWN_SEARCH_PATH = 1 << 2,
  G_SPAWN_STDOUT_TO_DEV_NULL = 1 << 3,
  G_SPAWN_STDERR_TO_DEV_NULL = 1 << 4,
  G_SPAWN_CHILD_INHERITS_STDIN = 1 << 5,
  G_SPAWN_FILE_AND_ARGV_ZERO = 1 << 6,
  G_SPAWN_SEARCH_PATH_FROM_ENVP = 1 << 7,
  G_SPAWN_CLOEXEC_PIPES = 1 << 8
} GSpawnFlags;
typedef enum {
  G_ASCII_ALNUM = 1 << 0,
  G_ASCII_ALPHA = 1 << 1,
  G_ASCII_CNTRL = 1 << 2,
  G_ASCII_DIGIT = 1 << 3,
  G_ASCII_GRAPH = 1 << 4,
  G_ASCII_LOWER = 1 << 5,
  G_ASCII_PRINT = 1 << 6,
  G_ASCII_PUNCT = 1 << 7,
  G_ASCII_SPACE = 1 << 8,
  G_ASCII_UPPER = 1 << 9,
  G_ASCII_XDIGIT = 1 << 10
} GAsciiType;
typedef gchar** GStrv;
typedef enum
  {
    G_NUMBER_PARSER_ERROR_INVALID,
    G_NUMBER_PARSER_ERROR_OUT_OF_BOUNDS,
  } GNumberParserError;
typedef struct _GStringChunk GStringChunk;
typedef struct GTestCase GTestCase;
typedef struct GTestSuite GTestSuite;
typedef void (*GTestFunc) (void);
typedef void (*GTestDataFunc) (gconstpointer user_data);
typedef void (*GTestFixtureFunc) (gpointer fixture,
                                  gconstpointer user_data);
typedef enum {
  G_TEST_TRAP_SILENCE_STDOUT = 1 << 7,
  G_TEST_TRAP_SILENCE_STDERR = 1 << 8,
  G_TEST_TRAP_INHERIT_STDIN = 1 << 9
} GTestTrapFlags ;
typedef enum {
  G_TEST_SUBPROCESS_INHERIT_STDIN = 1 << 0,
  G_TEST_SUBPROCESS_INHERIT_STDOUT = 1 << 1,
  G_TEST_SUBPROCESS_INHERIT_STDERR = 1 << 2
} GTestSubprocessFlags;
typedef struct {
  gboolean test_initialized;
  gboolean test_quick;
  gboolean test_perf;
  gboolean test_verbose;
  gboolean test_quiet;
  gboolean test_undefined;
} GTestConfig;
typedef enum {
  G_TEST_RUN_SUCCESS,
  G_TEST_RUN_SKIPPED,
  G_TEST_RUN_FAILURE,
  G_TEST_RUN_INCOMPLETE
} GTestResult;
typedef enum {
  G_TEST_LOG_NONE,
  G_TEST_LOG_ERROR,
  G_TEST_LOG_START_BINARY,
  G_TEST_LOG_LIST_CASE,
  G_TEST_LOG_SKIP_CASE,
  G_TEST_LOG_START_CASE,
  G_TEST_LOG_STOP_CASE,
  G_TEST_LOG_MIN_RESULT,
  G_TEST_LOG_MAX_RESULT,
  G_TEST_LOG_MESSAGE,
  G_TEST_LOG_START_SUITE,
  G_TEST_LOG_STOP_SUITE
} GTestLogType;
typedef struct {
  GTestLogType log_type;
  guint n_strings;
  gchar **strings;
  guint n_nums;
  long double *nums;
} GTestLogMsg;
typedef struct {
  GString *data;
  GSList *msgs;
} GTestLogBuffer;
typedef gboolean (*GTestLogFatalFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);
typedef enum
{
  G_TEST_DIST,
  G_TEST_BUILT
} GTestFileType;
typedef struct _GThreadPool GThreadPool;
struct _GThreadPool
{
  GFunc func;
  gpointer user_data;
  gboolean exclusive;
};
typedef struct _GTimer GTimer;
typedef struct _GTrashStack GTrashStack ;
struct _GTrashStack
{
  GTrashStack *next;
} ;
typedef struct _GTree GTree;
typedef gboolean (*GTraverseFunc) (gpointer key,
                                   gpointer value,
                                   gpointer data);
typedef struct _GAllocator GAllocator;
typedef struct _GMemChunk GMemChunk;
typedef struct _GCache GCache ;
typedef gpointer (*GCacheNewFunc) (gpointer key) ;
typedef gpointer (*GCacheDupFunc) (gpointer value) ;
typedef void (*GCacheDestroyFunc) (gpointer value) ;
typedef struct _GCompletion GCompletion;
typedef gchar* (*GCompletionFunc) (gpointer);
typedef gint (*GCompletionStrncmpFunc) (const gchar *s1,
                                        const gchar *s2,
                                        gsize n);
struct _GCompletion
{
  GList* items;
  GCompletionFunc func;
  gchar* prefix;
  GList* cache;
  GCompletionStrncmpFunc strncmp_func;
};
typedef struct _GRelation GRelation;
typedef struct _GTuples GTuples;
struct _GTuples
{
  guint len;
};
typedef enum
{
  G_THREAD_PRIORITY_LOW,
  G_THREAD_PRIORITY_NORMAL,
  G_THREAD_PRIORITY_HIGH,
  G_THREAD_PRIORITY_URGENT
} GThreadPriority ;
struct _GThread
{
  GThreadFunc func;
  gpointer data;
  gboolean joinable;
  GThreadPriority priority;
};
typedef struct _GThreadFunctions GThreadFunctions ;
struct _GThreadFunctions
{
  GMutex* (*mutex_new) (void);
  void (*mutex_lock) (GMutex *mutex);
  gboolean (*mutex_trylock) (GMutex *mutex);
  void (*mutex_unlock) (GMutex *mutex);
  void (*mutex_free) (GMutex *mutex);
  GCond* (*cond_new) (void);
  void (*cond_signal) (GCond *cond);
  void (*cond_broadcast) (GCond *cond);
  void (*cond_wait) (GCond *cond,
                                   GMutex *mutex);
  gboolean (*cond_timed_wait) (GCond *cond,
                                   GMutex *mutex,
                                   GTimeVal *end_time);
  void (*cond_free) (GCond *cond);
  GPrivate* (*private_new) (GDestroyNotify destructor);
  gpointer (*private_get) (GPrivate *private_key);
  void (*private_set) (GPrivate *private_key,
                                   gpointer data);
  void (*thread_create) (GThreadFunc func,
                                   gpointer data,
                                   gulong stack_size,
                                   gboolean joinable,
                                   gboolean bound,
                                   GThreadPriority priority,
                                   gpointer thread,
                                   GError **error);
  void (*thread_yield) (void);
  void (*thread_join) (gpointer thread);
  void (*thread_exit) (void);
  void (*thread_set_priority)(gpointer thread,
                                   GThreadPriority priority);
  void (*thread_self) (gpointer thread);
  gboolean (*thread_equal) (gpointer thread1,
                                   gpointer thread2);
} ;
struct sched_param
{
  int sched_priority;
};
typedef unsigned long int __cpu_mask;
typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
typedef long int __jmp_buf[8];
enum
{
  PTHREAD_CREATE_JOINABLE,
  PTHREAD_CREATE_DETACHED
};
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
};
enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,
  PTHREAD_EXPLICIT_SCHED
};
enum
{
  PTHREAD_SCOPE_SYSTEM,
  PTHREAD_SCOPE_PROCESS
};
enum
{
  PTHREAD_PROCESS_PRIVATE,
  PTHREAD_PROCESS_SHARED
};
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};
enum
{
  PTHREAD_CANCEL_ENABLE,
  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
  PTHREAD_CANCEL_ASYNCHRONOUS
};
typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t ;
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
struct __jmp_buf_tag;
typedef struct
{
  GMutex *mutex;
  pthread_mutex_t unused;
} GStaticMutex ;
typedef struct _GStaticRecMutex GStaticRecMutex ;
struct _GStaticRecMutex
{
  GStaticMutex mutex;
  guint depth;
  union {
    pthread_t owner;
    gdouble dummy;
  } unused;
} ;
typedef struct _GStaticRWLock GStaticRWLock ;
struct _GStaticRWLock
{
  GStaticMutex mutex;
  GCond *read_cond;
  GCond *write_cond;
  guint read_counter;
  gboolean have_writer;
  guint want_to_read;
  guint want_to_write;
} ;
typedef struct _GStaticPrivate GStaticPrivate ;
struct _GStaticPrivate
{
  guint index;
} ;

typedef GAsyncQueue *GAsyncQueue_autoptr; typedef GList *GAsyncQueue_listautoptr; typedef GSList *GAsyncQueue_slistautoptr; typedef GQueue *GAsyncQueue_queueautoptr;
 
typedef GBookmarkFile *GBookmarkFile_autoptr; typedef GList *GBookmarkFile_listautoptr; typedef GSList *GBookmarkFile_slistautoptr; typedef GQueue *GBookmarkFile_queueautoptr;
 
typedef GBytes *GBytes_autoptr; typedef GList *GBytes_listautoptr; typedef GSList *GBytes_slistautoptr; typedef GQueue *GBytes_queueautoptr;
 
typedef GChecksum *GChecksum_autoptr; typedef GList *GChecksum_listautoptr; typedef GSList *GChecksum_slistautoptr; typedef GQueue *GChecksum_queueautoptr;
 
typedef GDateTime *GDateTime_autoptr; typedef GList *GDateTime_listautoptr; typedef GSList *GDateTime_slistautoptr; typedef GQueue *GDateTime_queueautoptr;
 
typedef GDir *GDir_autoptr; typedef GList *GDir_listautoptr; typedef GSList *GDir_slistautoptr; typedef GQueue *GDir_queueautoptr;
 
typedef GError *GError_autoptr; typedef GList *GError_listautoptr; typedef GSList *GError_slistautoptr; typedef GQueue *GError_queueautoptr;
 
typedef GHashTable *GHashTable_autoptr; typedef GList *GHashTable_listautoptr; typedef GSList *GHashTable_slistautoptr; typedef GQueue *GHashTable_queueautoptr;
 
typedef GHmac *GHmac_autoptr; typedef GList *GHmac_listautoptr; typedef GSList *GHmac_slistautoptr; typedef GQueue *GHmac_queueautoptr;
 
typedef GIOChannel *GIOChannel_autoptr; typedef GList *GIOChannel_listautoptr; typedef GSList *GIOChannel_slistautoptr; typedef GQueue *GIOChannel_queueautoptr;
 
typedef GKeyFile *GKeyFile_autoptr; typedef GList *GKeyFile_listautoptr; typedef GSList *GKeyFile_slistautoptr; typedef GQueue *GKeyFile_queueautoptr;
 
typedef GList *GList_autoptr; typedef GList *GList_listautoptr; typedef GSList *GList_slistautoptr; typedef GQueue *GList_queueautoptr;
 
typedef GArray *GArray_autoptr; typedef GList *GArray_listautoptr; typedef GSList *GArray_slistautoptr; typedef GQueue *GArray_queueautoptr;
 
typedef GPtrArray *GPtrArray_autoptr; typedef GList *GPtrArray_listautoptr; typedef GSList *GPtrArray_slistautoptr; typedef GQueue *GPtrArray_queueautoptr;
 
typedef GByteArray *GByteArray_autoptr; typedef GList *GByteArray_listautoptr; typedef GSList *GByteArray_slistautoptr; typedef GQueue *GByteArray_queueautoptr;
 
typedef GMainContext *GMainContext_autoptr; typedef GList *GMainContext_listautoptr; typedef GSList *GMainContext_slistautoptr; typedef GQueue *GMainContext_queueautoptr;
 
typedef GMainLoop *GMainLoop_autoptr; typedef GList *GMainLoop_listautoptr; typedef GSList *GMainLoop_slistautoptr; typedef GQueue *GMainLoop_queueautoptr;
 
typedef GSource *GSource_autoptr; typedef GList *GSource_listautoptr; typedef GSList *GSource_slistautoptr; typedef GQueue *GSource_queueautoptr;
 
typedef GMappedFile *GMappedFile_autoptr; typedef GList *GMappedFile_listautoptr; typedef GSList *GMappedFile_slistautoptr; typedef GQueue *GMappedFile_queueautoptr;
 
typedef GMarkupParseContext *GMarkupParseContext_autoptr; typedef GList *GMarkupParseContext_listautoptr; typedef GSList *GMarkupParseContext_slistautoptr; typedef GQueue *GMarkupParseContext_queueautoptr;
 
typedef GNode *GNode_autoptr; typedef GList *GNode_listautoptr; typedef GSList *GNode_slistautoptr; typedef GQueue *GNode_queueautoptr;
 
typedef GOptionContext *GOptionContext_autoptr; typedef GList *GOptionContext_listautoptr; typedef GSList *GOptionContext_slistautoptr; typedef GQueue *GOptionContext_queueautoptr;
 
typedef GOptionGroup *GOptionGroup_autoptr; typedef GList *GOptionGroup_listautoptr; typedef GSList *GOptionGroup_slistautoptr; typedef GQueue *GOptionGroup_queueautoptr;
 
typedef GPatternSpec *GPatternSpec_autoptr; typedef GList *GPatternSpec_listautoptr; typedef GSList *GPatternSpec_slistautoptr; typedef GQueue *GPatternSpec_queueautoptr;
 
typedef GQueue *GQueue_autoptr; typedef GList *GQueue_listautoptr; typedef GSList *GQueue_slistautoptr; typedef GQueue *GQueue_queueautoptr;

typedef GRand *GRand_autoptr; typedef GList *GRand_listautoptr; typedef GSList *GRand_slistautoptr; typedef GQueue *GRand_queueautoptr;
 
typedef GRegex *GRegex_autoptr; typedef GList *GRegex_listautoptr; typedef GSList *GRegex_slistautoptr; typedef GQueue *GRegex_queueautoptr;
 
typedef GMatchInfo *GMatchInfo_autoptr; typedef GList *GMatchInfo_listautoptr; typedef GSList *GMatchInfo_slistautoptr; typedef GQueue *GMatchInfo_queueautoptr;
 
typedef GScanner *GScanner_autoptr; typedef GList *GScanner_listautoptr; typedef GSList *GScanner_slistautoptr; typedef GQueue *GScanner_queueautoptr;
 
typedef GSequence *GSequence_autoptr; typedef GList *GSequence_listautoptr; typedef GSList *GSequence_slistautoptr; typedef GQueue *GSequence_queueautoptr;
 
typedef GSList *GSList_autoptr; typedef GList *GSList_listautoptr; typedef GSList *GSList_slistautoptr; typedef GQueue *GSList_queueautoptr;
 
typedef GString *GString_autoptr; typedef GList *GString_listautoptr; typedef GSList *GString_slistautoptr; typedef GQueue *GString_queueautoptr;
 
typedef GStringChunk *GStringChunk_autoptr; typedef GList *GStringChunk_listautoptr; typedef GSList *GStringChunk_slistautoptr; typedef GQueue *GStringChunk_queueautoptr;
 
typedef GThread *GThread_autoptr; typedef GList *GThread_listautoptr; typedef GSList *GThread_slistautoptr; typedef GQueue *GThread_queueautoptr;
 

typedef GMutexLocker *GMutexLocker_autoptr; typedef GList *GMutexLocker_listautoptr; typedef GSList *GMutexLocker_slistautoptr; typedef GQueue *GMutexLocker_queueautoptr;
 
typedef GRecMutexLocker *GRecMutexLocker_autoptr; typedef GList *GRecMutexLocker_listautoptr; typedef GSList *GRecMutexLocker_slistautoptr; typedef GQueue *GRecMutexLocker_queueautoptr;
 
typedef GRWLockWriterLocker *GRWLockWriterLocker_autoptr; typedef GList *GRWLockWriterLocker_listautoptr; typedef GSList *GRWLockWriterLocker_slistautoptr; typedef GQueue *GRWLockWriterLocker_queueautoptr;
 
typedef GRWLockReaderLocker *GRWLockReaderLocker_autoptr; typedef GList *GRWLockReaderLocker_listautoptr; typedef GSList *GRWLockReaderLocker_slistautoptr; typedef GQueue *GRWLockReaderLocker_queueautoptr;

typedef GTimer *GTimer_autoptr; typedef GList *GTimer_listautoptr; typedef GSList *GTimer_slistautoptr; typedef GQueue *GTimer_queueautoptr;
 
typedef GTimeZone *GTimeZone_autoptr; typedef GList *GTimeZone_listautoptr; typedef GSList *GTimeZone_slistautoptr; typedef GQueue *GTimeZone_queueautoptr;
 
typedef GTree *GTree_autoptr; typedef GList *GTree_listautoptr; typedef GSList *GTree_slistautoptr; typedef GQueue *GTree_queueautoptr;
 
typedef GVariant *GVariant_autoptr; typedef GList *GVariant_listautoptr; typedef GSList *GVariant_slistautoptr; typedef GQueue *GVariant_queueautoptr;
 
typedef GVariantBuilder *GVariantBuilder_autoptr; typedef GList *GVariantBuilder_listautoptr; typedef GSList *GVariantBuilder_slistautoptr; typedef GQueue *GVariantBuilder_queueautoptr;
 

typedef GVariantIter *GVariantIter_autoptr; typedef GList *GVariantIter_listautoptr; typedef GSList *GVariantIter_slistautoptr; typedef GQueue *GVariantIter_queueautoptr;
 
typedef GVariantDict *GVariantDict_autoptr; typedef GList *GVariantDict_listautoptr; typedef GSList *GVariantDict_slistautoptr; typedef GQueue *GVariantDict_queueautoptr;
 

typedef GVariantType *GVariantType_autoptr; typedef GList *GVariantType_listautoptr; typedef GSList *GVariantType_slistautoptr; typedef GQueue *GVariantType_queueautoptr;
 
typedef GRefString *GRefString_autoptr; typedef GList *GRefString_listautoptr; typedef GSList *GRefString_slistautoptr; typedef GQueue *GRefString_queueautoptr;
 
typedef gsize GType;
typedef struct _GValue GValue;
typedef union _GTypeCValue GTypeCValue;
typedef struct _GTypePlugin GTypePlugin;
typedef struct _GTypeClass GTypeClass;
typedef struct _GTypeInterface GTypeInterface;
typedef struct _GTypeInstance GTypeInstance;
typedef struct _GTypeInfo GTypeInfo;
typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo;
typedef struct _GInterfaceInfo GInterfaceInfo;
typedef struct _GTypeValueTable GTypeValueTable;
typedef struct _GTypeQuery GTypeQuery;
struct _GTypeClass
{
  GType g_type;
};
struct _GTypeInstance
{
  GTypeClass *g_class;
};
struct _GTypeInterface
{
  GType g_type;
  GType g_instance_type;
};
struct _GTypeQuery
{
  GType type;
  const gchar *type_name;
  guint class_size;
  guint instance_size;
};
typedef enum
{
  G_TYPE_DEBUG_NONE = 0,
  G_TYPE_DEBUG_OBJECTS = 1 << 0,
  G_TYPE_DEBUG_SIGNALS = 1 << 1,
  G_TYPE_DEBUG_INSTANCE_COUNT = 1 << 2,
  G_TYPE_DEBUG_MASK = 0x07
} GTypeDebugFlags ;
typedef void (*GBaseInitFunc) (gpointer g_class);
typedef void (*GBaseFinalizeFunc) (gpointer g_class);
typedef void (*GClassInitFunc) (gpointer g_class,
           gpointer class_data);
typedef void (*GClassFinalizeFunc) (gpointer g_class,
           gpointer class_data);
typedef void (*GInstanceInitFunc) (GTypeInstance *instance,
           gpointer g_class);
typedef void (*GInterfaceInitFunc) (gpointer g_iface,
           gpointer iface_data);
typedef void (*GInterfaceFinalizeFunc) (gpointer g_iface,
           gpointer iface_data);
typedef gboolean (*GTypeClassCacheFunc) (gpointer cache_data,
           GTypeClass *g_class);
typedef void (*GTypeInterfaceCheckFunc) (gpointer check_data,
           gpointer g_iface);
typedef enum
{
  G_TYPE_FLAG_CLASSED = (1 << 0),
  G_TYPE_FLAG_INSTANTIATABLE = (1 << 1),
  G_TYPE_FLAG_DERIVABLE = (1 << 2),
  G_TYPE_FLAG_DEEP_DERIVABLE = (1 << 3)
} GTypeFundamentalFlags;
typedef enum
{
  G_TYPE_FLAG_ABSTRACT = (1 << 4),
  G_TYPE_FLAG_VALUE_ABSTRACT = (1 << 5)
} GTypeFlags;
struct _GTypeInfo
{
  guint16 class_size;
  GBaseInitFunc base_init;
  GBaseFinalizeFunc base_finalize;
  GClassInitFunc class_init;
  GClassFinalizeFunc class_finalize;
  gconstpointer class_data;
  guint16 instance_size;
  guint16 n_preallocs;
  GInstanceInitFunc instance_init;
  const GTypeValueTable *value_table;
};
struct _GTypeFundamentalInfo
{
  GTypeFundamentalFlags type_flags;
};
struct _GInterfaceInfo
{
  GInterfaceInitFunc interface_init;
  GInterfaceFinalizeFunc interface_finalize;
  gpointer interface_data;
};
struct _GTypeValueTable
{
  void (*value_init) (GValue *value);
  void (*value_free) (GValue *value);
  void (*value_copy) (const GValue *src_value,
      GValue *dest_value);
  gpointer (*value_peek_pointer) (const GValue *value);
  const gchar *collect_format;
  gchar* (*collect_value) (GValue *value,
      guint n_collect_values,
      GTypeCValue *collect_values,
      guint collect_flags);
  const gchar *lcopy_format;
  gchar* (*lcopy_value) (const GValue *value,
      guint n_collect_values,
      GTypeCValue *collect_values,
      guint collect_flags);
};
typedef void (*GValueTransform) (const GValue *src_value,
     GValue *dest_value);
struct _GValue
{
  GType g_type;
  union {
    gint v_int;
    guint v_uint;
    glong v_long;
    gulong v_ulong;
    gint64 v_int64;
    guint64 v_uint64;
    gfloat v_float;
    gdouble v_double;
    gpointer v_pointer;
  } data[2];
};
typedef enum
{
  G_PARAM_READABLE = 1 << 0,
  G_PARAM_WRITABLE = 1 << 1,
  G_PARAM_READWRITE = (G_PARAM_READABLE | G_PARAM_WRITABLE),
  G_PARAM_CONSTRUCT = 1 << 2,
  G_PARAM_CONSTRUCT_ONLY = 1 << 3,
  G_PARAM_LAX_VALIDATION = 1 << 4,
  G_PARAM_STATIC_NAME = 1 << 5,
  G_PARAM_PRIVATE = G_PARAM_STATIC_NAME,
  G_PARAM_STATIC_NICK = 1 << 6,
  G_PARAM_STATIC_BLURB = 1 << 7,
  G_PARAM_EXPLICIT_NOTIFY = 1 << 30,
  G_PARAM_DEPRECATED = (gint)(1u << 31)
} GParamFlags;
typedef struct _GParamSpec GParamSpec;
typedef struct _GParamSpecClass GParamSpecClass;
typedef struct _GParameter GParameter ;
typedef struct _GParamSpecPool GParamSpecPool;
struct _GParamSpec
{
  GTypeInstance g_type_instance;
  const gchar *name;
  GParamFlags flags;
  GType value_type;
  GType owner_type;
  gchar *_nick;
  gchar *_blurb;
  GData *qdata;
  guint ref_count;
  guint param_id;
};
struct _GParamSpecClass
{
  GTypeClass g_type_class;
  GType value_type;
  void (*finalize) (GParamSpec *pspec);
  void (*value_set_default) (GParamSpec *pspec,
      GValue *value);
  gboolean (*value_validate) (GParamSpec *pspec,
      GValue *value);
  gint (*values_cmp) (GParamSpec *pspec,
      const GValue *value1,
      const GValue *value2);
  gpointer dummy[4];
};
struct _GParameter
{
  const gchar *name;
  GValue value;
} ;
typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo;
struct _GParamSpecTypeInfo
{
  guint16 instance_size;
  guint16 n_preallocs;
  void (*instance_init) (GParamSpec *pspec);
  GType value_type;
  void (*finalize) (GParamSpec *pspec);
  void (*value_set_default) (GParamSpec *pspec,
      GValue *value);
  gboolean (*value_validate) (GParamSpec *pspec,
      GValue *value);
  gint (*values_cmp) (GParamSpec *pspec,
      const GValue *value1,
      const GValue *value2);
};

typedef struct _GClosure GClosure;
typedef struct _GClosureNotifyData GClosureNotifyData;
typedef void (*GCallback) (void);
typedef void (*GClosureNotify) (gpointer data,
      GClosure *closure);
typedef void (*GClosureMarshal) (GClosure *closure,
      GValue *return_value,
      guint n_param_values,
      const GValue *param_values,
      gpointer invocation_hint,
      gpointer marshal_data);
typedef void (* GVaClosureMarshal) (GClosure *closure,
        GValue *return_value,
        gpointer instance,
        va_list args,
        gpointer marshal_data,
        int n_params,
        GType *param_types);
typedef struct _GCClosure GCClosure;
struct _GClosureNotifyData
{
  gpointer data;
  GClosureNotify notify;
};
struct _GClosure
{
  volatile guint ref_count : 15;
  volatile guint meta_marshal_nouse : 1;
  volatile guint n_guards : 1;
  volatile guint n_fnotifiers : 2;
  volatile guint n_inotifiers : 8;
  volatile guint in_inotify : 1;
  volatile guint floating : 1;
  volatile guint derivative_flag : 1;
  volatile guint in_marshal : 1;
  volatile guint is_invalid : 1;
                  void (*marshal) (GClosure *closure,
         GValue *return_value,
         guint n_param_values,
         const GValue *param_values,
         gpointer invocation_hint,
         gpointer marshal_data);
                    gpointer data;
                  GClosureNotifyData *notifiers;
};
struct _GCClosure
{
  GClosure closure;
  gpointer callback;
};
typedef struct _GSignalQuery GSignalQuery;
typedef struct _GSignalInvocationHint GSignalInvocationHint;
typedef GClosureMarshal GSignalCMarshaller;
typedef GVaClosureMarshal GSignalCVaMarshaller;
typedef gboolean (*GSignalEmissionHook) (GSignalInvocationHint *ihint,
      guint n_param_values,
      const GValue *param_values,
      gpointer data);
typedef gboolean (*GSignalAccumulator) (GSignalInvocationHint *ihint,
      GValue *return_accu,
      const GValue *handler_return,
      gpointer data);
typedef enum
{
  G_SIGNAL_RUN_FIRST = 1 << 0,
  G_SIGNAL_RUN_LAST = 1 << 1,
  G_SIGNAL_RUN_CLEANUP = 1 << 2,
  G_SIGNAL_NO_RECURSE = 1 << 3,
  G_SIGNAL_DETAILED = 1 << 4,
  G_SIGNAL_ACTION = 1 << 5,
  G_SIGNAL_NO_HOOKS = 1 << 6,
  G_SIGNAL_MUST_COLLECT = 1 << 7,
  G_SIGNAL_DEPRECATED = 1 << 8
} GSignalFlags;
typedef enum
{
  G_CONNECT_AFTER = 1 << 0,
  G_CONNECT_SWAPPED = 1 << 1
} GConnectFlags;
typedef enum
{
  G_SIGNAL_MATCH_ID = 1 << 0,
  G_SIGNAL_MATCH_DETAIL = 1 << 1,
  G_SIGNAL_MATCH_CLOSURE = 1 << 2,
  G_SIGNAL_MATCH_FUNC = 1 << 3,
  G_SIGNAL_MATCH_DATA = 1 << 4,
  G_SIGNAL_MATCH_UNBLOCKED = 1 << 5
} GSignalMatchType;
struct _GSignalInvocationHint
{
  guint signal_id;
  GQuark detail;
  GSignalFlags run_type;
};
struct _GSignalQuery
{
  guint signal_id;
  const gchar *signal_name;
  GType itype;
  GSignalFlags signal_flags;
  GType return_type;
  guint n_params;
  const GType *param_types;
};

typedef gpointer (*GBoxedCopyFunc) (gpointer boxed);
typedef void (*GBoxedFreeFunc) (gpointer boxed);
typedef struct _GObject GObject;
typedef struct _GObjectClass GObjectClass;
typedef struct _GObject GInitiallyUnowned;
typedef struct _GObjectClass GInitiallyUnownedClass;
typedef struct _GObjectConstructParam GObjectConstructParam;
typedef void (*GObjectGetPropertyFunc) (GObject *object,
                                         guint property_id,
                                         GValue *value,
                                         GParamSpec *pspec);
typedef void (*GObjectSetPropertyFunc) (GObject *object,
                                         guint property_id,
                                         const GValue *value,
                                         GParamSpec *pspec);
typedef void (*GObjectFinalizeFunc) (GObject *object);
typedef void (*GWeakNotify) (gpointer data,
      GObject *where_the_object_was);
struct _GObject
{
  GTypeInstance g_type_instance;
  volatile guint ref_count;
  GData *qdata;
};
struct _GObjectClass
{
  GTypeClass g_type_class;
  GSList *construct_properties;
  GObject* (*constructor) (GType type,
                                 guint n_construct_properties,
                                 GObjectConstructParam *construct_properties);
  void (*set_property) (GObject *object,
                                         guint property_id,
                                         const GValue *value,
                                         GParamSpec *pspec);
  void (*get_property) (GObject *object,
                                         guint property_id,
                                         GValue *value,
                                         GParamSpec *pspec);
  void (*dispose) (GObject *object);
  void (*finalize) (GObject *object);
  void (*dispatch_properties_changed) (GObject *object,
          guint n_pspecs,
          GParamSpec **pspecs);
  void (*notify) (GObject *object,
      GParamSpec *pspec);
  void (*constructed) (GObject *object);
  gsize flags;
  gpointer pdummy[6];
};
struct _GObjectConstructParam
{
  GParamSpec *pspec;
  GValue *value;
};
typedef void (*GToggleNotify) (gpointer data,
          GObject *object,
          gboolean is_last_ref);
typedef struct {
    union { gpointer p; } priv;
} GWeakRef;
typedef struct _GBinding GBinding;
typedef gboolean (* GBindingTransformFunc) (GBinding *binding,
                                            const GValue *from_value,
                                            GValue *to_value,
                                            gpointer user_data);
typedef enum {
  G_BINDING_DEFAULT = 0,
  G_BINDING_BIDIRECTIONAL = 1 << 0,
  G_BINDING_SYNC_CREATE = 1 << 1,
  G_BINDING_INVERT_BOOLEAN = 1 << 2
} GBindingFlags;
typedef struct _GEnumClass GEnumClass;
typedef struct _GFlagsClass GFlagsClass;
typedef struct _GEnumValue GEnumValue;
typedef struct _GFlagsValue GFlagsValue;
struct _GEnumClass
{
  GTypeClass g_type_class;
  gint minimum;
  gint maximum;
  guint n_values;
  GEnumValue *values;
};
struct _GFlagsClass
{
  GTypeClass g_type_class;
  guint mask;
  guint n_values;
  GFlagsValue *values;
};
struct _GEnumValue
{
  gint value;
  const gchar *value_name;
  const gchar *value_nick;
};
struct _GFlagsValue
{
  guint value;
  const gchar *value_name;
  const gchar *value_nick;
};
typedef struct _GParamSpecChar GParamSpecChar;
typedef struct _GParamSpecUChar GParamSpecUChar;
typedef struct _GParamSpecBoolean GParamSpecBoolean;
typedef struct _GParamSpecInt GParamSpecInt;
typedef struct _GParamSpecUInt GParamSpecUInt;
typedef struct _GParamSpecLong GParamSpecLong;
typedef struct _GParamSpecULong GParamSpecULong;
typedef struct _GParamSpecInt64 GParamSpecInt64;
typedef struct _GParamSpecUInt64 GParamSpecUInt64;
typedef struct _GParamSpecUnichar GParamSpecUnichar;
typedef struct _GParamSpecEnum GParamSpecEnum;
typedef struct _GParamSpecFlags GParamSpecFlags;
typedef struct _GParamSpecFloat GParamSpecFloat;
typedef struct _GParamSpecDouble GParamSpecDouble;
typedef struct _GParamSpecString GParamSpecString;
typedef struct _GParamSpecParam GParamSpecParam;
typedef struct _GParamSpecBoxed GParamSpecBoxed;
typedef struct _GParamSpecPointer GParamSpecPointer;
typedef struct _GParamSpecValueArray GParamSpecValueArray;
typedef struct _GParamSpecObject GParamSpecObject;
typedef struct _GParamSpecOverride GParamSpecOverride;
typedef struct _GParamSpecGType GParamSpecGType;
typedef struct _GParamSpecVariant GParamSpecVariant;
struct _GParamSpecChar
{
  GParamSpec parent_instance;
  gint8 minimum;
  gint8 maximum;
  gint8 default_value;
};
struct _GParamSpecUChar
{
  GParamSpec parent_instance;
  guint8 minimum;
  guint8 maximum;
  guint8 default_value;
};
struct _GParamSpecBoolean
{
  GParamSpec parent_instance;
  gboolean default_value;
};
struct _GParamSpecInt
{
  GParamSpec parent_instance;
  gint minimum;
  gint maximum;
  gint default_value;
};
struct _GParamSpecUInt
{
  GParamSpec parent_instance;
  guint minimum;
  guint maximum;
  guint default_value;
};
struct _GParamSpecLong
{
  GParamSpec parent_instance;
  glong minimum;
  glong maximum;
  glong default_value;
};
struct _GParamSpecULong
{
  GParamSpec parent_instance;
  gulong minimum;
  gulong maximum;
  gulong default_value;
};
struct _GParamSpecInt64
{
  GParamSpec parent_instance;
  gint64 minimum;
  gint64 maximum;
  gint64 default_value;
};
struct _GParamSpecUInt64
{
  GParamSpec parent_instance;
  guint64 minimum;
  guint64 maximum;
  guint64 default_value;
};
struct _GParamSpecUnichar
{
  GParamSpec parent_instance;
  gunichar default_value;
};
struct _GParamSpecEnum
{
  GParamSpec parent_instance;
  GEnumClass *enum_class;
  gint default_value;
};
struct _GParamSpecFlags
{
  GParamSpec parent_instance;
  GFlagsClass *flags_class;
  guint default_value;
};
struct _GParamSpecFloat
{
  GParamSpec parent_instance;
  gfloat minimum;
  gfloat maximum;
  gfloat default_value;
  gfloat epsilon;
};
struct _GParamSpecDouble
{
  GParamSpec parent_instance;
  gdouble minimum;
  gdouble maximum;
  gdouble default_value;
  gdouble epsilon;
};
struct _GParamSpecString
{
  GParamSpec parent_instance;
  gchar *default_value;
  gchar *cset_first;
  gchar *cset_nth;
  gchar substitutor;
  guint null_fold_if_empty : 1;
  guint ensure_non_null : 1;
};
struct _GParamSpecParam
{
  GParamSpec parent_instance;
};
struct _GParamSpecBoxed
{
  GParamSpec parent_instance;
};
struct _GParamSpecPointer
{
  GParamSpec parent_instance;
};
struct _GParamSpecValueArray
{
  GParamSpec parent_instance;
  GParamSpec *element_spec;
  guint fixed_n_elements;
};
struct _GParamSpecObject
{
  GParamSpec parent_instance;
};
struct _GParamSpecOverride
{
  GParamSpec parent_instance;
  GParamSpec *overridden;
};
struct _GParamSpecGType
{
  GParamSpec parent_instance;
  GType is_a_type;
};
struct _GParamSpecVariant
{
  GParamSpec parent_instance;
  GVariantType *type;
  GVariant *default_value;
  gpointer padding[4];
};
typedef struct _GTypeModule GTypeModule;
typedef struct _GTypeModuleClass GTypeModuleClass;
typedef GTypeModule *GTypeModule_autoptr; typedef GList *GTypeModule_listautoptr; typedef GSList *GTypeModule_slistautoptr; typedef GQueue *GTypeModule_queueautoptr;
 
struct _GTypeModule
{
  GObject parent_instance;
  guint use_count;
  GSList *type_infos;
  GSList *interface_infos;
  gchar *name;
};
struct _GTypeModuleClass
{
  GObjectClass parent_class;
  gboolean (* load) (GTypeModule *module);
  void (* unload) (GTypeModule *module);
  void (*reserved1) (void);
  void (*reserved2) (void);
  void (*reserved3) (void);
  void (*reserved4) (void);
};
typedef struct _GTypePluginClass GTypePluginClass;
typedef void (*GTypePluginUse) (GTypePlugin *plugin);
typedef void (*GTypePluginUnuse) (GTypePlugin *plugin);
typedef void (*GTypePluginCompleteTypeInfo) (GTypePlugin *plugin,
         GType g_type,
         GTypeInfo *info,
         GTypeValueTable *value_table);
typedef void (*GTypePluginCompleteInterfaceInfo) (GTypePlugin *plugin,
         GType instance_type,
         GType interface_type,
         GInterfaceInfo *info);
struct _GTypePluginClass
{
  GTypeInterface base_iface;
  GTypePluginUse use_plugin;
  GTypePluginUnuse unuse_plugin;
  GTypePluginCompleteTypeInfo complete_type_info;
  GTypePluginCompleteInterfaceInfo complete_interface_info;
};
typedef struct _GValueArray GValueArray;
struct _GValueArray
{
  guint n_values;
  GValue *values;
  guint n_prealloced;
};
typedef gchar* gchararray;
typedef GClosure *GClosure_autoptr; typedef GList *GClosure_listautoptr; typedef GSList *GClosure_slistautoptr; typedef GQueue *GClosure_queueautoptr;
 
typedef GEnumClass *GEnumClass_autoptr; typedef GList *GEnumClass_listautoptr; typedef GSList *GEnumClass_slistautoptr; typedef GQueue *GEnumClass_queueautoptr;
 
typedef GFlagsClass *GFlagsClass_autoptr; typedef GList *GFlagsClass_listautoptr; typedef GSList *GFlagsClass_slistautoptr; typedef GQueue *GFlagsClass_queueautoptr;
 
typedef GObject *GObject_autoptr; typedef GList *GObject_listautoptr; typedef GSList *GObject_slistautoptr; typedef GQueue *GObject_queueautoptr;
 
typedef GInitiallyUnowned *GInitiallyUnowned_autoptr; typedef GList *GInitiallyUnowned_listautoptr; typedef GSList *GInitiallyUnowned_slistautoptr; typedef GQueue *GInitiallyUnowned_queueautoptr;
 
typedef GParamSpec *GParamSpec_autoptr; typedef GList *GParamSpec_listautoptr; typedef GSList *GParamSpec_slistautoptr; typedef GQueue *GParamSpec_queueautoptr;
 
typedef GTypeClass *GTypeClass_autoptr; typedef GList *GTypeClass_listautoptr; typedef GSList *GTypeClass_slistautoptr; typedef GQueue *GTypeClass_queueautoptr;

typedef enum {
  G_APP_INFO_CREATE_NONE = 0,
  G_APP_INFO_CREATE_NEEDS_TERMINAL = (1 << 0),
  G_APP_INFO_CREATE_SUPPORTS_URIS = (1 << 1),
  G_APP_INFO_CREATE_SUPPORTS_STARTUP_NOTIFICATION = (1 << 2)
} GAppInfoCreateFlags;
typedef enum {
  G_CONVERTER_NO_FLAGS = 0,
  G_CONVERTER_INPUT_AT_END = (1 << 0),
  G_CONVERTER_FLUSH = (1 << 1)
} GConverterFlags;
typedef enum {
  G_CONVERTER_ERROR = 0,
  G_CONVERTER_CONVERTED = 1,
  G_CONVERTER_FINISHED = 2,
  G_CONVERTER_FLUSHED = 3
} GConverterResult;
typedef enum {
  G_DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  G_DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  G_DATA_STREAM_BYTE_ORDER_HOST_ENDIAN
} GDataStreamByteOrder;
typedef enum {
  G_DATA_STREAM_NEWLINE_TYPE_LF,
  G_DATA_STREAM_NEWLINE_TYPE_CR,
  G_DATA_STREAM_NEWLINE_TYPE_CR_LF,
  G_DATA_STREAM_NEWLINE_TYPE_ANY
} GDataStreamNewlineType;
typedef enum {
  G_FILE_ATTRIBUTE_TYPE_INVALID = 0,
  G_FILE_ATTRIBUTE_TYPE_STRING,
  G_FILE_ATTRIBUTE_TYPE_BYTE_STRING,
  G_FILE_ATTRIBUTE_TYPE_BOOLEAN,
  G_FILE_ATTRIBUTE_TYPE_UINT32,
  G_FILE_ATTRIBUTE_TYPE_INT32,
  G_FILE_ATTRIBUTE_TYPE_UINT64,
  G_FILE_ATTRIBUTE_TYPE_INT64,
  G_FILE_ATTRIBUTE_TYPE_OBJECT,
  G_FILE_ATTRIBUTE_TYPE_STRINGV
} GFileAttributeType;
typedef enum {
  G_FILE_ATTRIBUTE_INFO_NONE = 0,
  G_FILE_ATTRIBUTE_INFO_COPY_WITH_FILE = (1 << 0),
  G_FILE_ATTRIBUTE_INFO_COPY_WHEN_MOVED = (1 << 1)
} GFileAttributeInfoFlags;
typedef enum {
  G_FILE_ATTRIBUTE_STATUS_UNSET = 0,
  G_FILE_ATTRIBUTE_STATUS_SET,
  G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING
} GFileAttributeStatus;
typedef enum {
  G_FILE_QUERY_INFO_NONE = 0,
  G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS = (1 << 0)
} GFileQueryInfoFlags;
typedef enum {
  G_FILE_CREATE_NONE = 0,
  G_FILE_CREATE_PRIVATE = (1 << 0),
  G_FILE_CREATE_REPLACE_DESTINATION = (1 << 1)
} GFileCreateFlags;
typedef enum {
  G_FILE_MEASURE_NONE = 0,
  G_FILE_MEASURE_REPORT_ANY_ERROR = (1 << 1),
  G_FILE_MEASURE_APPARENT_SIZE = (1 << 2),
  G_FILE_MEASURE_NO_XDEV = (1 << 3)
} GFileMeasureFlags;
typedef enum {
  G_MOUNT_MOUNT_NONE = 0
} GMountMountFlags;
typedef enum {
  G_MOUNT_UNMOUNT_NONE = 0,
  G_MOUNT_UNMOUNT_FORCE = (1 << 0)
} GMountUnmountFlags;
typedef enum {
  G_DRIVE_START_NONE = 0
} GDriveStartFlags;
typedef enum {
  G_DRIVE_START_STOP_TYPE_UNKNOWN,
  G_DRIVE_START_STOP_TYPE_SHUTDOWN,
  G_DRIVE_START_STOP_TYPE_NETWORK,
  G_DRIVE_START_STOP_TYPE_MULTIDISK,
  G_DRIVE_START_STOP_TYPE_PASSWORD
} GDriveStartStopType;
typedef enum {
  G_FILE_COPY_NONE = 0,
  G_FILE_COPY_OVERWRITE = (1 << 0),
  G_FILE_COPY_BACKUP = (1 << 1),
  G_FILE_COPY_NOFOLLOW_SYMLINKS = (1 << 2),
  G_FILE_COPY_ALL_METADATA = (1 << 3),
  G_FILE_COPY_NO_FALLBACK_FOR_MOVE = (1 << 4),
  G_FILE_COPY_TARGET_DEFAULT_PERMS = (1 << 5)
} GFileCopyFlags;
typedef enum {
  G_FILE_MONITOR_NONE = 0,
  G_FILE_MONITOR_WATCH_MOUNTS = (1 << 0),
  G_FILE_MONITOR_SEND_MOVED = (1 << 1),
  G_FILE_MONITOR_WATCH_HARD_LINKS = (1 << 2),
  G_FILE_MONITOR_WATCH_MOVES = (1 << 3)
} GFileMonitorFlags;
typedef enum {
  G_FILE_TYPE_UNKNOWN = 0,
  G_FILE_TYPE_REGULAR,
  G_FILE_TYPE_DIRECTORY,
  G_FILE_TYPE_SYMBOLIC_LINK,
  G_FILE_TYPE_SPECIAL,
  G_FILE_TYPE_SHORTCUT,
  G_FILE_TYPE_MOUNTABLE
} GFileType;
typedef enum {
  G_FILESYSTEM_PREVIEW_TYPE_IF_ALWAYS = 0,
  G_FILESYSTEM_PREVIEW_TYPE_IF_LOCAL,
  G_FILESYSTEM_PREVIEW_TYPE_NEVER
} GFilesystemPreviewType;
typedef enum {
  G_FILE_MONITOR_EVENT_CHANGED,
  G_FILE_MONITOR_EVENT_CHANGES_DONE_HINT,
  G_FILE_MONITOR_EVENT_DELETED,
  G_FILE_MONITOR_EVENT_CREATED,
  G_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED,
  G_FILE_MONITOR_EVENT_PRE_UNMOUNT,
  G_FILE_MONITOR_EVENT_UNMOUNTED,
  G_FILE_MONITOR_EVENT_MOVED,
  G_FILE_MONITOR_EVENT_RENAMED,
  G_FILE_MONITOR_EVENT_MOVED_IN,
  G_FILE_MONITOR_EVENT_MOVED_OUT
} GFileMonitorEvent;
typedef enum {
  G_IO_ERROR_FAILED,
  G_IO_ERROR_NOT_FOUND,
  G_IO_ERROR_EXISTS,
  G_IO_ERROR_IS_DIRECTORY,
  G_IO_ERROR_NOT_DIRECTORY,
  G_IO_ERROR_NOT_EMPTY,
  G_IO_ERROR_NOT_REGULAR_FILE,
  G_IO_ERROR_NOT_SYMBOLIC_LINK,
  G_IO_ERROR_NOT_MOUNTABLE_FILE,
  G_IO_ERROR_FILENAME_TOO_LONG,
  G_IO_ERROR_INVALID_FILENAME,
  G_IO_ERROR_TOO_MANY_LINKS,
  G_IO_ERROR_NO_SPACE,
  G_IO_ERROR_INVALID_ARGUMENT,
  G_IO_ERROR_PERMISSION_DENIED,
  G_IO_ERROR_NOT_SUPPORTED,
  G_IO_ERROR_NOT_MOUNTED,
  G_IO_ERROR_ALREADY_MOUNTED,
  G_IO_ERROR_CLOSED,
  G_IO_ERROR_CANCELLED,
  G_IO_ERROR_PENDING,
  G_IO_ERROR_READ_ONLY,
  G_IO_ERROR_CANT_CREATE_BACKUP,
  G_IO_ERROR_WRONG_ETAG,
  G_IO_ERROR_TIMED_OUT,
  G_IO_ERROR_WOULD_RECURSE,
  G_IO_ERROR_BUSY,
  G_IO_ERROR_WOULD_BLOCK,
  G_IO_ERROR_HOST_NOT_FOUND,
  G_IO_ERROR_WOULD_MERGE,
  G_IO_ERROR_FAILED_HANDLED,
  G_IO_ERROR_TOO_MANY_OPEN_FILES,
  G_IO_ERROR_NOT_INITIALIZED,
  G_IO_ERROR_ADDRESS_IN_USE,
  G_IO_ERROR_PARTIAL_INPUT,
  G_IO_ERROR_INVALID_DATA,
  G_IO_ERROR_DBUS_ERROR,
  G_IO_ERROR_HOST_UNREACHABLE,
  G_IO_ERROR_NETWORK_UNREACHABLE,
  G_IO_ERROR_CONNECTION_REFUSED,
  G_IO_ERROR_PROXY_FAILED,
  G_IO_ERROR_PROXY_AUTH_FAILED,
  G_IO_ERROR_PROXY_NEED_AUTH,
  G_IO_ERROR_PROXY_NOT_ALLOWED,
  G_IO_ERROR_BROKEN_PIPE,
  G_IO_ERROR_CONNECTION_CLOSED = G_IO_ERROR_BROKEN_PIPE,
  G_IO_ERROR_NOT_CONNECTED,
  G_IO_ERROR_MESSAGE_TOO_LARGE
} GIOErrorEnum;
typedef enum {
  G_ASK_PASSWORD_NEED_PASSWORD = (1 << 0),
  G_ASK_PASSWORD_NEED_USERNAME = (1 << 1),
  G_ASK_PASSWORD_NEED_DOMAIN = (1 << 2),
  G_ASK_PASSWORD_SAVING_SUPPORTED = (1 << 3),
  G_ASK_PASSWORD_ANONYMOUS_SUPPORTED = (1 << 4),
  G_ASK_PASSWORD_TCRYPT = (1 << 5),
} GAskPasswordFlags;
typedef enum {
  G_PASSWORD_SAVE_NEVER,
  G_PASSWORD_SAVE_FOR_SESSION,
  G_PASSWORD_SAVE_PERMANENTLY
} GPasswordSave;
typedef enum {
  G_MOUNT_OPERATION_HANDLED,
  G_MOUNT_OPERATION_ABORTED,
  G_MOUNT_OPERATION_UNHANDLED
} GMountOperationResult;
typedef enum {
  G_OUTPUT_STREAM_SPLICE_NONE = 0,
  G_OUTPUT_STREAM_SPLICE_CLOSE_SOURCE = (1 << 0),
  G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET = (1 << 1)
} GOutputStreamSpliceFlags;
typedef enum {
  G_IO_STREAM_SPLICE_NONE = 0,
  G_IO_STREAM_SPLICE_CLOSE_STREAM1 = (1 << 0),
  G_IO_STREAM_SPLICE_CLOSE_STREAM2 = (1 << 1),
  G_IO_STREAM_SPLICE_WAIT_FOR_BOTH = (1 << 2)
} GIOStreamSpliceFlags;
typedef enum {
  G_EMBLEM_ORIGIN_UNKNOWN,
  G_EMBLEM_ORIGIN_DEVICE,
  G_EMBLEM_ORIGIN_LIVEMETADATA,
  G_EMBLEM_ORIGIN_TAG
} GEmblemOrigin;
typedef enum {
  G_RESOLVER_ERROR_NOT_FOUND,
  G_RESOLVER_ERROR_TEMPORARY_FAILURE,
  G_RESOLVER_ERROR_INTERNAL
} GResolverError;
typedef enum {
  G_RESOLVER_RECORD_SRV = 1,
  G_RESOLVER_RECORD_MX,
  G_RESOLVER_RECORD_TXT,
  G_RESOLVER_RECORD_SOA,
  G_RESOLVER_RECORD_NS
} GResolverRecordType;
typedef enum {
  G_RESOURCE_ERROR_NOT_FOUND,
  G_RESOURCE_ERROR_INTERNAL
} GResourceError;
typedef enum {
  G_RESOURCE_FLAGS_NONE = 0,
  G_RESOURCE_FLAGS_COMPRESSED = (1<<0)
} GResourceFlags;
typedef enum {
  G_RESOURCE_LOOKUP_FLAGS_NONE = 0
} GResourceLookupFlags;
typedef enum {
  G_SOCKET_FAMILY_INVALID,
  G_SOCKET_FAMILY_UNIX = 1,
  G_SOCKET_FAMILY_IPV4 = 2,
  G_SOCKET_FAMILY_IPV6 = 10
} GSocketFamily;
typedef enum
{
  G_SOCKET_TYPE_INVALID,
  G_SOCKET_TYPE_STREAM,
  G_SOCKET_TYPE_DATAGRAM,
  G_SOCKET_TYPE_SEQPACKET
} GSocketType;
typedef enum
{
  G_SOCKET_MSG_NONE,
  G_SOCKET_MSG_OOB = 1,
  G_SOCKET_MSG_PEEK = 2,
  G_SOCKET_MSG_DONTROUTE = 4
} GSocketMsgFlags;
typedef enum {
  G_SOCKET_PROTOCOL_UNKNOWN = -1,
  G_SOCKET_PROTOCOL_DEFAULT = 0,
  G_SOCKET_PROTOCOL_TCP = 6,
  G_SOCKET_PROTOCOL_UDP = 17,
  G_SOCKET_PROTOCOL_SCTP = 132
} GSocketProtocol;
typedef enum {
  G_ZLIB_COMPRESSOR_FORMAT_ZLIB,
  G_ZLIB_COMPRESSOR_FORMAT_GZIP,
  G_ZLIB_COMPRESSOR_FORMAT_RAW
} GZlibCompressorFormat;
typedef enum {
  G_UNIX_SOCKET_ADDRESS_INVALID,
  G_UNIX_SOCKET_ADDRESS_ANONYMOUS,
  G_UNIX_SOCKET_ADDRESS_PATH,
  G_UNIX_SOCKET_ADDRESS_ABSTRACT,
  G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED
} GUnixSocketAddressType;
typedef enum
{
  G_BUS_TYPE_STARTER = -1,
  G_BUS_TYPE_NONE = 0,
  G_BUS_TYPE_SYSTEM = 1,
  G_BUS_TYPE_SESSION = 2
} GBusType;
typedef enum
{
  G_BUS_NAME_OWNER_FLAGS_NONE = 0,
  G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT = (1<<0),
  G_BUS_NAME_OWNER_FLAGS_REPLACE = (1<<1),
  G_BUS_NAME_OWNER_FLAGS_DO_NOT_QUEUE = (1<<2)
} GBusNameOwnerFlags;
typedef enum
{
  G_BUS_NAME_WATCHER_FLAGS_NONE = 0,
  G_BUS_NAME_WATCHER_FLAGS_AUTO_START = (1<<0)
} GBusNameWatcherFlags;
typedef enum
{
  G_DBUS_PROXY_FLAGS_NONE = 0,
  G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES = (1<<0),
  G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS = (1<<1),
  G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START = (1<<2),
  G_DBUS_PROXY_FLAGS_GET_INVALIDATED_PROPERTIES = (1<<3),
  G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START_AT_CONSTRUCTION = (1<<4)
} GDBusProxyFlags;
typedef enum
{
  G_DBUS_ERROR_FAILED,
  G_DBUS_ERROR_NO_MEMORY,
  G_DBUS_ERROR_SERVICE_UNKNOWN,
  G_DBUS_ERROR_NAME_HAS_NO_OWNER,
  G_DBUS_ERROR_NO_REPLY,
  G_DBUS_ERROR_IO_ERROR,
  G_DBUS_ERROR_BAD_ADDRESS,
  G_DBUS_ERROR_NOT_SUPPORTED,
  G_DBUS_ERROR_LIMITS_EXCEEDED,
  G_DBUS_ERROR_ACCESS_DENIED,
  G_DBUS_ERROR_AUTH_FAILED,
  G_DBUS_ERROR_NO_SERVER,
  G_DBUS_ERROR_TIMEOUT,
  G_DBUS_ERROR_NO_NETWORK,
  G_DBUS_ERROR_ADDRESS_IN_USE,
  G_DBUS_ERROR_DISCONNECTED,
  G_DBUS_ERROR_INVALID_ARGS,
  G_DBUS_ERROR_FILE_NOT_FOUND,
  G_DBUS_ERROR_FILE_EXISTS,
  G_DBUS_ERROR_UNKNOWN_METHOD,
  G_DBUS_ERROR_TIMED_OUT,
  G_DBUS_ERROR_MATCH_RULE_NOT_FOUND,
  G_DBUS_ERROR_MATCH_RULE_INVALID,
  G_DBUS_ERROR_SPAWN_EXEC_FAILED,
  G_DBUS_ERROR_SPAWN_FORK_FAILED,
  G_DBUS_ERROR_SPAWN_CHILD_EXITED,
  G_DBUS_ERROR_SPAWN_CHILD_SIGNALED,
  G_DBUS_ERROR_SPAWN_FAILED,
  G_DBUS_ERROR_SPAWN_SETUP_FAILED,
  G_DBUS_ERROR_SPAWN_CONFIG_INVALID,
  G_DBUS_ERROR_SPAWN_SERVICE_INVALID,
  G_DBUS_ERROR_SPAWN_SERVICE_NOT_FOUND,
  G_DBUS_ERROR_SPAWN_PERMISSIONS_INVALID,
  G_DBUS_ERROR_SPAWN_FILE_INVALID,
  G_DBUS_ERROR_SPAWN_NO_MEMORY,
  G_DBUS_ERROR_UNIX_PROCESS_ID_UNKNOWN,
  G_DBUS_ERROR_INVALID_SIGNATURE,
  G_DBUS_ERROR_INVALID_FILE_CONTENT,
  G_DBUS_ERROR_SELINUX_SECURITY_CONTEXT_UNKNOWN,
  G_DBUS_ERROR_ADT_AUDIT_DATA_UNKNOWN,
  G_DBUS_ERROR_OBJECT_PATH_IN_USE,
  G_DBUS_ERROR_UNKNOWN_OBJECT,
  G_DBUS_ERROR_UNKNOWN_INTERFACE,
  G_DBUS_ERROR_UNKNOWN_PROPERTY,
  G_DBUS_ERROR_PROPERTY_READ_ONLY
} GDBusError;
typedef enum {
  G_DBUS_CONNECTION_FLAGS_NONE = 0,
  G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT = (1<<0),
  G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER = (1<<1),
  G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS = (1<<2),
  G_DBUS_CONNECTION_FLAGS_MESSAGE_BUS_CONNECTION = (1<<3),
  G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING = (1<<4)
} GDBusConnectionFlags;
typedef enum {
  G_DBUS_CAPABILITY_FLAGS_NONE = 0,
  G_DBUS_CAPABILITY_FLAGS_UNIX_FD_PASSING = (1<<0)
} GDBusCapabilityFlags;
typedef enum {
  G_DBUS_CALL_FLAGS_NONE = 0,
  G_DBUS_CALL_FLAGS_NO_AUTO_START = (1<<0),
  G_DBUS_CALL_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION = (1<<1)
} GDBusCallFlags;
typedef enum {
  G_DBUS_MESSAGE_TYPE_INVALID,
  G_DBUS_MESSAGE_TYPE_METHOD_CALL,
  G_DBUS_MESSAGE_TYPE_METHOD_RETURN,
  G_DBUS_MESSAGE_TYPE_ERROR,
  G_DBUS_MESSAGE_TYPE_SIGNAL
} GDBusMessageType;
typedef enum {
  G_DBUS_MESSAGE_FLAGS_NONE = 0,
  G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED = (1<<0),
  G_DBUS_MESSAGE_FLAGS_NO_AUTO_START = (1<<1),
  G_DBUS_MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION = (1<<2)
} GDBusMessageFlags;
typedef enum {
  G_DBUS_MESSAGE_HEADER_FIELD_INVALID,
  G_DBUS_MESSAGE_HEADER_FIELD_PATH,
  G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE,
  G_DBUS_MESSAGE_HEADER_FIELD_MEMBER,
  G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME,
  G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL,
  G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION,
  G_DBUS_MESSAGE_HEADER_FIELD_SENDER,
  G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE,
  G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS
} GDBusMessageHeaderField;
typedef enum
{
  G_DBUS_PROPERTY_INFO_FLAGS_NONE = 0,
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE = (1<<0),
  G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE = (1<<1)
} GDBusPropertyInfoFlags;
typedef enum
{
  G_DBUS_SUBTREE_FLAGS_NONE = 0,
  G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES = (1<<0)
} GDBusSubtreeFlags;
typedef enum
{
  G_DBUS_SERVER_FLAGS_NONE = 0,
  G_DBUS_SERVER_FLAGS_RUN_IN_THREAD = (1<<0),
  G_DBUS_SERVER_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS = (1<<1)
} GDBusServerFlags;
typedef enum
{
  G_DBUS_SIGNAL_FLAGS_NONE = 0,
  G_DBUS_SIGNAL_FLAGS_NO_MATCH_RULE = (1<<0),
  G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_NAMESPACE = (1<<1),
  G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_PATH = (1<<2)
} GDBusSignalFlags;
typedef enum
{
  G_DBUS_SEND_MESSAGE_FLAGS_NONE = 0,
  G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL = (1<<0)
} GDBusSendMessageFlags;
typedef enum
{
  G_CREDENTIALS_TYPE_INVALID,
  G_CREDENTIALS_TYPE_LINUX_UCRED,
  G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED,
  G_CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED,
  G_CREDENTIALS_TYPE_SOLARIS_UCRED,
  G_CREDENTIALS_TYPE_NETBSD_UNPCBID
} GCredentialsType;
typedef enum
{
  G_DBUS_MESSAGE_BYTE_ORDER_BIG_ENDIAN = 'B',
  G_DBUS_MESSAGE_BYTE_ORDER_LITTLE_ENDIAN = 'l'
} GDBusMessageByteOrder;
typedef enum
{
  G_APPLICATION_FLAGS_NONE,
  G_APPLICATION_IS_SERVICE = (1 << 0),
  G_APPLICATION_IS_LAUNCHER = (1 << 1),
  G_APPLICATION_HANDLES_OPEN = (1 << 2),
  G_APPLICATION_HANDLES_COMMAND_LINE = (1 << 3),
  G_APPLICATION_SEND_ENVIRONMENT = (1 << 4),
  G_APPLICATION_NON_UNIQUE = (1 << 5),
  G_APPLICATION_CAN_OVERRIDE_APP_ID = (1 << 6),
  G_APPLICATION_ALLOW_REPLACEMENT = (1 << 7),
  G_APPLICATION_REPLACE = (1 << 8)
} GApplicationFlags;
typedef enum {
  G_TLS_ERROR_UNAVAILABLE,
  G_TLS_ERROR_MISC,
  G_TLS_ERROR_BAD_CERTIFICATE,
  G_TLS_ERROR_NOT_TLS,
  G_TLS_ERROR_HANDSHAKE,
  G_TLS_ERROR_CERTIFICATE_REQUIRED,
  G_TLS_ERROR_EOF,
  G_TLS_ERROR_INAPPROPRIATE_FALLBACK
} GTlsError;
typedef enum {
  G_TLS_CERTIFICATE_UNKNOWN_CA = (1 << 0),
  G_TLS_CERTIFICATE_BAD_IDENTITY = (1 << 1),
  G_TLS_CERTIFICATE_NOT_ACTIVATED = (1 << 2),
  G_TLS_CERTIFICATE_EXPIRED = (1 << 3),
  G_TLS_CERTIFICATE_REVOKED = (1 << 4),
  G_TLS_CERTIFICATE_INSECURE = (1 << 5),
  G_TLS_CERTIFICATE_GENERIC_ERROR = (1 << 6),
  G_TLS_CERTIFICATE_VALIDATE_ALL = 0x007f
} GTlsCertificateFlags;
typedef enum {
  G_TLS_AUTHENTICATION_NONE,
  G_TLS_AUTHENTICATION_REQUESTED,
  G_TLS_AUTHENTICATION_REQUIRED
} GTlsAuthenticationMode;
typedef enum {
  G_TLS_REHANDSHAKE_NEVER,
  G_TLS_REHANDSHAKE_SAFELY,
  G_TLS_REHANDSHAKE_UNSAFELY
} GTlsRehandshakeMode ;
typedef enum _GTlsPasswordFlags
{
  G_TLS_PASSWORD_NONE = 0,
  G_TLS_PASSWORD_RETRY = 1 << 1,
  G_TLS_PASSWORD_MANY_TRIES = 1 << 2,
  G_TLS_PASSWORD_FINAL_TRY = 1 << 3
} GTlsPasswordFlags;
typedef enum {
  G_TLS_INTERACTION_UNHANDLED,
  G_TLS_INTERACTION_HANDLED,
  G_TLS_INTERACTION_FAILED
} GTlsInteractionResult;
typedef enum
{
  G_DBUS_INTERFACE_SKELETON_FLAGS_NONE = 0,
  G_DBUS_INTERFACE_SKELETON_FLAGS_HANDLE_METHOD_INVOCATIONS_IN_THREAD = (1<<0)
} GDBusInterfaceSkeletonFlags;
typedef enum
{
  G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_NONE = 0,
  G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_DO_NOT_AUTO_START = (1<<0)
} GDBusObjectManagerClientFlags;
typedef enum {
  G_TLS_DATABASE_VERIFY_NONE = 0
} GTlsDatabaseVerifyFlags;
typedef enum {
  G_TLS_DATABASE_LOOKUP_NONE = 0,
  G_TLS_DATABASE_LOOKUP_KEYPAIR = 1
} GTlsDatabaseLookupFlags;
typedef enum {
  G_TLS_CERTIFICATE_REQUEST_NONE = 0
} GTlsCertificateRequestFlags;
typedef enum {
  G_IO_MODULE_SCOPE_NONE,
  G_IO_MODULE_SCOPE_BLOCK_DUPLICATES
} GIOModuleScopeFlags;
typedef enum {
  G_SOCKET_CLIENT_RESOLVING,
  G_SOCKET_CLIENT_RESOLVED,
  G_SOCKET_CLIENT_CONNECTING,
  G_SOCKET_CLIENT_CONNECTED,
  G_SOCKET_CLIENT_PROXY_NEGOTIATING,
  G_SOCKET_CLIENT_PROXY_NEGOTIATED,
  G_SOCKET_CLIENT_TLS_HANDSHAKING,
  G_SOCKET_CLIENT_TLS_HANDSHAKED,
  G_SOCKET_CLIENT_COMPLETE
} GSocketClientEvent;
typedef enum {
  G_SOCKET_LISTENER_BINDING,
  G_SOCKET_LISTENER_BOUND,
  G_SOCKET_LISTENER_LISTENING,
  G_SOCKET_LISTENER_LISTENED
} GSocketListenerEvent;
typedef enum {
  G_TEST_DBUS_NONE = 0
} GTestDBusFlags;
typedef enum {
  G_SUBPROCESS_FLAGS_NONE = 0,
  G_SUBPROCESS_FLAGS_STDIN_PIPE = (1u << 0),
  G_SUBPROCESS_FLAGS_STDIN_INHERIT = (1u << 1),
  G_SUBPROCESS_FLAGS_STDOUT_PIPE = (1u << 2),
  G_SUBPROCESS_FLAGS_STDOUT_SILENCE = (1u << 3),
  G_SUBPROCESS_FLAGS_STDERR_PIPE = (1u << 4),
  G_SUBPROCESS_FLAGS_STDERR_SILENCE = (1u << 5),
  G_SUBPROCESS_FLAGS_STDERR_MERGE = (1u << 6),
  G_SUBPROCESS_FLAGS_INHERIT_FDS = (1u << 7)
} GSubprocessFlags;
typedef enum {
  G_NOTIFICATION_PRIORITY_NORMAL,
  G_NOTIFICATION_PRIORITY_LOW,
  G_NOTIFICATION_PRIORITY_HIGH,
  G_NOTIFICATION_PRIORITY_URGENT
} GNotificationPriority;
typedef enum {
  G_NETWORK_CONNECTIVITY_LOCAL = 1,
  G_NETWORK_CONNECTIVITY_LIMITED = 2,
  G_NETWORK_CONNECTIVITY_PORTAL = 3,
  G_NETWORK_CONNECTIVITY_FULL = 4
} GNetworkConnectivity;
typedef enum {
  G_POLLABLE_RETURN_FAILED = 0,
  G_POLLABLE_RETURN_OK = 1,
  G_POLLABLE_RETURN_WOULD_BLOCK = -G_IO_ERROR_WOULD_BLOCK
} GPollableReturn;
typedef struct _GAppLaunchContext GAppLaunchContext;
typedef struct _GAppInfo GAppInfo;
typedef struct _GAsyncResult GAsyncResult;
typedef struct _GAsyncInitable GAsyncInitable;
typedef struct _GBufferedInputStream GBufferedInputStream;
typedef struct _GBufferedOutputStream GBufferedOutputStream;
typedef struct _GCancellable GCancellable;
typedef struct _GCharsetConverter GCharsetConverter;
typedef struct _GConverter GConverter;
typedef struct _GConverterInputStream GConverterInputStream;
typedef struct _GConverterOutputStream GConverterOutputStream;
typedef struct _GDatagramBased GDatagramBased;
typedef struct _GDataInputStream GDataInputStream;
typedef struct _GSimplePermission GSimplePermission;
typedef struct _GZlibCompressor GZlibCompressor;
typedef struct _GZlibDecompressor GZlibDecompressor;
typedef struct _GSimpleActionGroup GSimpleActionGroup;
typedef struct _GRemoteActionGroup GRemoteActionGroup;
typedef struct _GDBusActionGroup GDBusActionGroup;
typedef struct _GActionMap GActionMap;
typedef struct _GActionGroup GActionGroup;
typedef struct _GPropertyAction GPropertyAction;
typedef struct _GSimpleAction GSimpleAction;
typedef struct _GAction GAction;
typedef struct _GApplication GApplication;
typedef struct _GApplicationCommandLine GApplicationCommandLine;
typedef struct _GSettingsBackend GSettingsBackend;
typedef struct _GSettings GSettings;
typedef struct _GPermission GPermission;
typedef struct _GMenuModel GMenuModel;
typedef struct _GNotification GNotification;
typedef struct _GDrive GDrive;
typedef struct _GFileEnumerator GFileEnumerator;
typedef struct _GFileMonitor GFileMonitor;
typedef struct _GFilterInputStream GFilterInputStream;
typedef struct _GFilterOutputStream GFilterOutputStream;
typedef struct _GFile GFile;
typedef struct _GFileInfo GFileInfo;
typedef struct _GFileAttributeMatcher GFileAttributeMatcher;
typedef struct _GFileAttributeInfo GFileAttributeInfo;
typedef struct _GFileAttributeInfoList GFileAttributeInfoList;
typedef struct _GFileDescriptorBased GFileDescriptorBased;
typedef struct _GFileInputStream GFileInputStream;
typedef struct _GFileOutputStream GFileOutputStream;
typedef struct _GFileIOStream GFileIOStream;
typedef struct _GFileIcon GFileIcon;
typedef struct _GFilenameCompleter GFilenameCompleter;
typedef struct _GIcon GIcon;
typedef struct _GInetAddress GInetAddress;
typedef struct _GInetAddressMask GInetAddressMask;
typedef struct _GInetSocketAddress GInetSocketAddress;
typedef struct _GNativeSocketAddress GNativeSocketAddress;
typedef struct _GInputStream GInputStream;
typedef struct _GInitable GInitable;
typedef struct _GIOModule GIOModule;
typedef struct _GIOExtensionPoint GIOExtensionPoint;
typedef struct _GIOExtension GIOExtension;
typedef struct _GIOSchedulerJob GIOSchedulerJob;
typedef struct _GIOStreamAdapter GIOStreamAdapter;
typedef struct _GLoadableIcon GLoadableIcon;
typedef struct _GBytesIcon GBytesIcon;
typedef struct _GMemoryInputStream GMemoryInputStream;
typedef struct _GMemoryOutputStream GMemoryOutputStream;
typedef struct _GMount GMount;
typedef struct _GMountOperation GMountOperation;
typedef struct _GNetworkAddress GNetworkAddress;
typedef struct _GNetworkMonitor GNetworkMonitor;
typedef struct _GNetworkService GNetworkService;
typedef struct _GOutputStream GOutputStream;
typedef struct _GIOStream GIOStream;
typedef struct _GSimpleIOStream GSimpleIOStream;
typedef struct _GPollableInputStream GPollableInputStream;
typedef struct _GPollableOutputStream GPollableOutputStream;
typedef struct _GResolver GResolver;
typedef struct _GResource GResource;
typedef struct _GSeekable GSeekable;
typedef struct _GSimpleAsyncResult GSimpleAsyncResult;
typedef struct _GSocket GSocket;
typedef struct _GSocketControlMessage GSocketControlMessage;
typedef struct _GSocketClient GSocketClient;
typedef struct _GSocketConnection GSocketConnection;
typedef struct _GSocketListener GSocketListener;
typedef struct _GSocketService GSocketService;
typedef struct _GSocketAddress GSocketAddress;
typedef struct _GSocketAddressEnumerator GSocketAddressEnumerator;
typedef struct _GSocketConnectable GSocketConnectable;
typedef struct _GSrvTarget GSrvTarget;
typedef struct _GTask GTask;
typedef struct _GTcpConnection GTcpConnection;
typedef struct _GTcpWrapperConnection GTcpWrapperConnection;
typedef struct _GThreadedSocketService GThreadedSocketService;
typedef struct _GDtlsConnection GDtlsConnection;
typedef struct _GDtlsClientConnection GDtlsClientConnection;
typedef struct _GDtlsServerConnection GDtlsServerConnection;
typedef struct _GThemedIcon GThemedIcon;
typedef struct _GTlsCertificate GTlsCertificate;
typedef struct _GTlsClientConnection GTlsClientConnection;
typedef struct _GTlsConnection GTlsConnection;
typedef struct _GTlsDatabase GTlsDatabase;
typedef struct _GTlsFileDatabase GTlsFileDatabase;
typedef struct _GTlsInteraction GTlsInteraction;
typedef struct _GTlsPassword GTlsPassword;
typedef struct _GTlsServerConnection GTlsServerConnection;
typedef struct _GVfs GVfs;
typedef struct _GProxyResolver GProxyResolver;
typedef struct _GProxy GProxy;
typedef struct _GProxyAddress GProxyAddress;
typedef struct _GProxyAddressEnumerator GProxyAddressEnumerator;
typedef struct _GVolume GVolume;
typedef struct _GVolumeMonitor GVolumeMonitor;
typedef void (*GAsyncReadyCallback) (GObject *source_object,
         GAsyncResult *res,
         gpointer user_data);
typedef void (*GFileProgressCallback) (goffset current_num_bytes,
                                       goffset total_num_bytes,
                                       gpointer user_data);
typedef gboolean (* GFileReadMoreCallback) (const char *file_contents,
                                            goffset file_size,
                                            gpointer callback_data);
typedef void (* GFileMeasureProgressCallback) (gboolean reporting,
                                               guint64 current_size,
                                               guint64 num_dirs,
                                               guint64 num_files,
                                               gpointer user_data);
typedef gboolean (*GIOSchedulerJobFunc) (GIOSchedulerJob *job,
      GCancellable *cancellable,
      gpointer user_data);
typedef void (*GSimpleAsyncThreadFunc) (GSimpleAsyncResult *res,
                                        GObject *object,
                                        GCancellable *cancellable);
typedef gboolean (*GSocketSourceFunc) (GSocket *socket,
           GIOCondition condition,
           gpointer user_data);
typedef gboolean (*GDatagramBasedSourceFunc) (GDatagramBased *datagram_based,
                                              GIOCondition condition,
                                              gpointer user_data);
typedef struct _GInputVector GInputVector;
struct _GInputVector {
  gpointer buffer;
  gsize size;
};
typedef struct _GInputMessage GInputMessage;
struct _GInputMessage {
  GSocketAddress **address;
  GInputVector *vectors;
  guint num_vectors;
  gsize bytes_received;
  gint flags;
  GSocketControlMessage ***control_messages;
  guint *num_control_messages;
};
typedef struct _GOutputVector GOutputVector;
struct _GOutputVector {
  gconstpointer buffer;
  gsize size;
};
typedef struct _GOutputMessage GOutputMessage;
struct _GOutputMessage {
  GSocketAddress *address;
  GOutputVector *vectors;
  guint num_vectors;
  guint bytes_sent;
  GSocketControlMessage **control_messages;
  guint num_control_messages;
};
typedef struct _GCredentials GCredentials;
typedef struct _GUnixCredentialsMessage GUnixCredentialsMessage;
typedef struct _GUnixFDList GUnixFDList;
typedef struct _GDBusMessage GDBusMessage;
typedef struct _GDBusConnection GDBusConnection;
typedef struct _GDBusProxy GDBusProxy;
typedef struct _GDBusMethodInvocation GDBusMethodInvocation;
typedef struct _GDBusServer GDBusServer;
typedef struct _GDBusAuthObserver GDBusAuthObserver;
typedef struct _GDBusErrorEntry GDBusErrorEntry;
typedef struct _GDBusInterfaceVTable GDBusInterfaceVTable;
typedef struct _GDBusSubtreeVTable GDBusSubtreeVTable;
typedef struct _GDBusAnnotationInfo GDBusAnnotationInfo;
typedef struct _GDBusArgInfo GDBusArgInfo;
typedef struct _GDBusMethodInfo GDBusMethodInfo;
typedef struct _GDBusSignalInfo GDBusSignalInfo;
typedef struct _GDBusPropertyInfo GDBusPropertyInfo;
typedef struct _GDBusInterfaceInfo GDBusInterfaceInfo;
typedef struct _GDBusNodeInfo GDBusNodeInfo;
typedef gboolean (*GCancellableSourceFunc) (GCancellable *cancellable,
         gpointer user_data);
typedef gboolean (*GPollableSourceFunc) (GObject *pollable_stream,
      gpointer user_data);
typedef struct _GDBusInterface GDBusInterface;
typedef struct _GDBusInterfaceSkeleton GDBusInterfaceSkeleton;
typedef struct _GDBusObject GDBusObject;
typedef struct _GDBusObjectSkeleton GDBusObjectSkeleton;
typedef struct _GDBusObjectProxy GDBusObjectProxy;
typedef struct _GDBusObjectManager GDBusObjectManager;
typedef struct _GDBusObjectManagerClient GDBusObjectManagerClient;
typedef struct _GDBusObjectManagerServer GDBusObjectManagerServer;
typedef GType (*GDBusProxyTypeFunc) (GDBusObjectManagerClient *manager,
                                     const gchar *object_path,
                                     const gchar *interface_name,
                                     gpointer user_data);
typedef struct _GTestDBus GTestDBus;
typedef struct _GSubprocess GSubprocess;
typedef struct _GSubprocessLauncher GSubprocessLauncher;
typedef struct _GActionInterface GActionInterface;
struct _GActionInterface
{
  GTypeInterface g_iface;
  const gchar * (* get_name) (GAction *action);
  const GVariantType * (* get_parameter_type) (GAction *action);
  const GVariantType * (* get_state_type) (GAction *action);
  GVariant * (* get_state_hint) (GAction *action);
  gboolean (* get_enabled) (GAction *action);
  GVariant * (* get_state) (GAction *action);
  void (* change_state) (GAction *action,
                                                 GVariant *value);
  void (* activate) (GAction *action,
                                                 GVariant *parameter);
};
typedef struct _GActionGroupInterface GActionGroupInterface;
struct _GActionGroupInterface
{
  GTypeInterface g_iface;
  gboolean (* has_action) (GActionGroup *action_group,
                                                        const gchar *action_name);
  gchar ** (* list_actions) (GActionGroup *action_group);
  gboolean (* get_action_enabled) (GActionGroup *action_group,
                                                        const gchar *action_name);
  const GVariantType * (* get_action_parameter_type) (GActionGroup *action_group,
                                                        const gchar *action_name);
  const GVariantType * (* get_action_state_type) (GActionGroup *action_group,
                                                        const gchar *action_name);
  GVariant * (* get_action_state_hint) (GActionGroup *action_group,
                                                        const gchar *action_name);
  GVariant * (* get_action_state) (GActionGroup *action_group,
                                                        const gchar *action_name);
  void (* change_action_state) (GActionGroup *action_group,
                                                        const gchar *action_name,
                                                        GVariant *value);
  void (* activate_action) (GActionGroup *action_group,
                                                        const gchar *action_name,
                                                        GVariant *parameter);
  void (* action_added) (GActionGroup *action_group,
                                                        const gchar *action_name);
  void (* action_removed) (GActionGroup *action_group,
                                                        const gchar *action_name);
  void (* action_enabled_changed) (GActionGroup *action_group,
                                                        const gchar *action_name,
                                                        gboolean enabled);
  void (* action_state_changed) (GActionGroup *action_group,
                                                        const gchar *action_name,
                                                        GVariant *state);
  gboolean (* query_action) (GActionGroup *action_group,
                                                        const gchar *action_name,
                                                        gboolean *enabled,
                                                        const GVariantType **parameter_type,
                                                        const GVariantType **state_type,
                                                        GVariant **state_hint,
                                                        GVariant **state);
};
typedef struct _GActionMapInterface GActionMapInterface;
typedef struct _GActionEntry GActionEntry;
struct _GActionMapInterface
{
  GTypeInterface g_iface;
  GAction * (* lookup_action) (GActionMap *action_map,
                               const gchar *action_name);
  void (* add_action) (GActionMap *action_map,
                               GAction *action);
  void (* remove_action) (GActionMap *action_map,
                               const gchar *action_name);
};
struct _GActionEntry
{
  const gchar *name;
  void (* activate) (GSimpleAction *action,
                     GVariant *parameter,
                     gpointer user_data);
  const gchar *parameter_type;
  const gchar *state;
  void (* change_state) (GSimpleAction *action,
                         GVariant *value,
                         gpointer user_data);
  gsize padding[3];
};
typedef struct _GAppLaunchContextClass GAppLaunchContextClass;
typedef struct _GAppLaunchContextPrivate GAppLaunchContextPrivate;
typedef struct _GAppInfoIface GAppInfoIface;
struct _GAppInfoIface
{
  GTypeInterface g_iface;
  GAppInfo * (* dup) (GAppInfo *appinfo);
  gboolean (* equal) (GAppInfo *appinfo1,
                                                 GAppInfo *appinfo2);
  const char * (* get_id) (GAppInfo *appinfo);
  const char * (* get_name) (GAppInfo *appinfo);
  const char * (* get_description) (GAppInfo *appinfo);
  const char * (* get_executable) (GAppInfo *appinfo);
  GIcon * (* get_icon) (GAppInfo *appinfo);
  gboolean (* launch) (GAppInfo *appinfo,
                                                 GList *files,
                                                 GAppLaunchContext *context,
                                                 GError **error);
  gboolean (* supports_uris) (GAppInfo *appinfo);
  gboolean (* supports_files) (GAppInfo *appinfo);
  gboolean (* launch_uris) (GAppInfo *appinfo,
                                                 GList *uris,
                                                 GAppLaunchContext *context,
                                                 GError **error);
  gboolean (* should_show) (GAppInfo *appinfo);
  gboolean (* set_as_default_for_type) (GAppInfo *appinfo,
                                                 const char *content_type,
                                                 GError **error);
  gboolean (* set_as_default_for_extension) (GAppInfo *appinfo,
                                                 const char *extension,
                                                 GError **error);
  gboolean (* add_supports_type) (GAppInfo *appinfo,
                                                 const char *content_type,
                                                 GError **error);
  gboolean (* can_remove_supports_type) (GAppInfo *appinfo);
  gboolean (* remove_supports_type) (GAppInfo *appinfo,
                                                 const char *content_type,
                                                 GError **error);
  gboolean (* can_delete) (GAppInfo *appinfo);
  gboolean (* do_delete) (GAppInfo *appinfo);
  const char * (* get_commandline) (GAppInfo *appinfo);
  const char * (* get_display_name) (GAppInfo *appinfo);
  gboolean (* set_as_last_used_for_type) (GAppInfo *appinfo,
                                                 const char *content_type,
                                                 GError **error);
  const char ** (* get_supported_types) (GAppInfo *appinfo);
  void (* launch_uris_async) (GAppInfo *appinfo,
                                                 GList *uris,
                                                 GAppLaunchContext *context,
                                                 GCancellable *cancellable,
                                                 GAsyncReadyCallback callback,
                                                 gpointer user_data);
  gboolean (* launch_uris_finish) (GAppInfo *appinfo,
                                                 GAsyncResult *result,
                                                 GError **error);
};
struct _GAppLaunchContext
{
  GObject parent_instance;
  GAppLaunchContextPrivate *priv;
};
struct _GAppLaunchContextClass
{
  GObjectClass parent_class;
  char * (* get_display) (GAppLaunchContext *context,
                                    GAppInfo *info,
                                    GList *files);
  char * (* get_startup_notify_id) (GAppLaunchContext *context,
                                    GAppInfo *info,
                                    GList *files);
  void (* launch_failed) (GAppLaunchContext *context,
                                    const char *startup_notify_id);
  void (* launched) (GAppLaunchContext *context,
                                    GAppInfo *info,
                                    GVariant *platform_data);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
};
typedef struct _GAppInfoMonitor GAppInfoMonitor;
typedef struct _GApplicationPrivate GApplicationPrivate;
typedef struct _GApplicationClass GApplicationClass;
struct _GApplication
{
  GObject parent_instance;
  GApplicationPrivate *priv;
};
struct _GApplicationClass
{
  GObjectClass parent_class;
  void (* startup) (GApplication *application);
  void (* activate) (GApplication *application);
  void (* open) (GApplication *application,
                                                     GFile **files,
                                                     gint n_files,
                                                     const gchar *hint);
  int (* command_line) (GApplication *application,
                                                     GApplicationCommandLine *command_line);
  gboolean (* local_command_line) (GApplication *application,
                                                     gchar ***arguments,
                                                     int *exit_status);
  void (* before_emit) (GApplication *application,
                                                     GVariant *platform_data);
  void (* after_emit) (GApplication *application,
                                                     GVariant *platform_data);
  void (* add_platform_data) (GApplication *application,
                                                     GVariantBuilder *builder);
  void (* quit_mainloop) (GApplication *application);
  void (* run_mainloop) (GApplication *application);
  void (* shutdown) (GApplication *application);
  gboolean (* dbus_register) (GApplication *application,
                                                     GDBusConnection *connection,
                                                     const gchar *object_path,
                                                     GError **error);
  void (* dbus_unregister) (GApplication *application,
                                                     GDBusConnection *connection,
                                                     const gchar *object_path);
  gint (* handle_local_options)(GApplication *application,
                                                     GVariantDict *options);
  gboolean (* name_lost) (GApplication *application);
  gpointer padding[7];
};
typedef struct _GApplicationCommandLinePrivate GApplicationCommandLinePrivate;
typedef struct _GApplicationCommandLineClass GApplicationCommandLineClass;
struct _GApplicationCommandLine
{
  GObject parent_instance;
  GApplicationCommandLinePrivate *priv;
};
struct _GApplicationCommandLineClass
{
  GObjectClass parent_class;
  void (* print_literal) (GApplicationCommandLine *cmdline,
                                                 const gchar *message);
  void (* printerr_literal) (GApplicationCommandLine *cmdline,
                                                 const gchar *message);
  GInputStream * (* get_stdin) (GApplicationCommandLine *cmdline);
  gpointer padding[11];
};
typedef struct _GInitableIface GInitableIface;
struct _GInitableIface
{
  GTypeInterface g_iface;
  gboolean (* init) (GInitable *initable,
   GCancellable *cancellable,
   GError **error);
};
typedef struct _GAsyncInitableIface GAsyncInitableIface;
struct _GAsyncInitableIface
{
  GTypeInterface g_iface;
  void (* init_async) (GAsyncInitable *initable,
       int io_priority,
       GCancellable *cancellable,
       GAsyncReadyCallback callback,
       gpointer user_data);
  gboolean (* init_finish) (GAsyncInitable *initable,
       GAsyncResult *res,
       GError **error);
};
typedef struct _GAsyncResultIface GAsyncResultIface;
struct _GAsyncResultIface
{
  GTypeInterface g_iface;
  gpointer (* get_user_data) (GAsyncResult *res);
  GObject * (* get_source_object) (GAsyncResult *res);
  gboolean (* is_tagged) (GAsyncResult *res,
       gpointer source_tag);
};
typedef struct _GInputStreamClass GInputStreamClass;
typedef struct _GInputStreamPrivate GInputStreamPrivate;
struct _GInputStream
{
  GObject parent_instance;
  GInputStreamPrivate *priv;
};
struct _GInputStreamClass
{
  GObjectClass parent_class;
  gssize (* read_fn) (GInputStream *stream,
                             void *buffer,
                             gsize count,
                             GCancellable *cancellable,
                             GError **error);
  gssize (* skip) (GInputStream *stream,
                             gsize count,
                             GCancellable *cancellable,
                             GError **error);
  gboolean (* close_fn) (GInputStream *stream,
                             GCancellable *cancellable,
                             GError **error);
  void (* read_async) (GInputStream *stream,
                             void *buffer,
                             gsize count,
                             int io_priority,
                             GCancellable *cancellable,
                             GAsyncReadyCallback callback,
                             gpointer user_data);
  gssize (* read_finish) (GInputStream *stream,
                             GAsyncResult *result,
                             GError **error);
  void (* skip_async) (GInputStream *stream,
                             gsize count,
                             int io_priority,
                             GCancellable *cancellable,
                             GAsyncReadyCallback callback,
                             gpointer user_data);
  gssize (* skip_finish) (GInputStream *stream,
                             GAsyncResult *result,
                             GError **error);
  void (* close_async) (GInputStream *stream,
                             int io_priority,
                             GCancellable *cancellable,
                             GAsyncReadyCallback callback,
                             gpointer user_data);
  gboolean (* close_finish) (GInputStream *stream,
                             GAsyncResult *result,
                             GError **error);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GFilterInputStreamClass GFilterInputStreamClass;
struct _GFilterInputStream
{
  GInputStream parent_instance;
  GInputStream *base_stream;
};
struct _GFilterInputStreamClass
{
  GInputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
};
typedef struct _GBufferedInputStreamClass GBufferedInputStreamClass;
typedef struct _GBufferedInputStreamPrivate GBufferedInputStreamPrivate;
struct _GBufferedInputStream
{
  GFilterInputStream parent_instance;
  GBufferedInputStreamPrivate *priv;
};
struct _GBufferedInputStreamClass
{
  GFilterInputStreamClass parent_class;
  gssize (* fill) (GBufferedInputStream *stream,
       gssize count,
       GCancellable *cancellable,
       GError **error);
  void (* fill_async) (GBufferedInputStream *stream,
       gssize count,
       int io_priority,
       GCancellable *cancellable,
       GAsyncReadyCallback callback,
       gpointer user_data);
  gssize (* fill_finish) (GBufferedInputStream *stream,
       GAsyncResult *result,
       GError **error);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GOutputStreamClass GOutputStreamClass;
typedef struct _GOutputStreamPrivate GOutputStreamPrivate;
struct _GOutputStream
{
  GObject parent_instance;
  GOutputStreamPrivate *priv;
};
struct _GOutputStreamClass
{
  GObjectClass parent_class;
  gssize (* write_fn) (GOutputStream *stream,
                                 const void *buffer,
                                 gsize count,
                                 GCancellable *cancellable,
                                 GError **error);
  gssize (* splice) (GOutputStream *stream,
                                 GInputStream *source,
                                 GOutputStreamSpliceFlags flags,
                                 GCancellable *cancellable,
                                 GError **error);
  gboolean (* flush) (GOutputStream *stream,
                                 GCancellable *cancellable,
                                 GError **error);
  gboolean (* close_fn) (GOutputStream *stream,
                                 GCancellable *cancellable,
                                 GError **error);
  void (* write_async) (GOutputStream *stream,
                                 const void *buffer,
                                 gsize count,
                                 int io_priority,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
  gssize (* write_finish) (GOutputStream *stream,
                                 GAsyncResult *result,
                                 GError **error);
  void (* splice_async) (GOutputStream *stream,
                                 GInputStream *source,
                                 GOutputStreamSpliceFlags flags,
                                 int io_priority,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
  gssize (* splice_finish) (GOutputStream *stream,
                                 GAsyncResult *result,
                                 GError **error);
  void (* flush_async) (GOutputStream *stream,
                                 int io_priority,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
  gboolean (* flush_finish) (GOutputStream *stream,
                                 GAsyncResult *result,
                                 GError **error);
  void (* close_async) (GOutputStream *stream,
                                 int io_priority,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
  gboolean (* close_finish) (GOutputStream *stream,
                                 GAsyncResult *result,
                                 GError **error);
  gboolean (* writev_fn) (GOutputStream *stream,
                                 const GOutputVector *vectors,
                                 gsize n_vectors,
                                 gsize *bytes_written,
                                 GCancellable *cancellable,
                                 GError **error);
  void (* writev_async) (GOutputStream *stream,
                                 const GOutputVector *vectors,
                                 gsize n_vectors,
                                 int io_priority,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
  gboolean (* writev_finish) (GOutputStream *stream,
                                 GAsyncResult *result,
                                 gsize *bytes_written,
                                 GError **error);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
  void (*_g_reserved8) (void);
};
typedef struct _GFilterOutputStreamClass GFilterOutputStreamClass;
struct _GFilterOutputStream
{
  GOutputStream parent_instance;
  GOutputStream *base_stream;
};
struct _GFilterOutputStreamClass
{
  GOutputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
};
typedef struct _GBufferedOutputStreamClass GBufferedOutputStreamClass;
typedef struct _GBufferedOutputStreamPrivate GBufferedOutputStreamPrivate;
struct _GBufferedOutputStream
{
  GFilterOutputStream parent_instance;
  GBufferedOutputStreamPrivate *priv;
};
struct _GBufferedOutputStreamClass
{
  GFilterOutputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
};
typedef struct _GCancellableClass GCancellableClass;
typedef struct _GCancellablePrivate GCancellablePrivate;
struct _GCancellable
{
  GObject parent_instance;
  GCancellablePrivate *priv;
};
struct _GCancellableClass
{
  GObjectClass parent_class;
  void (* cancelled) (GCancellable *cancellable);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GConverterIface GConverterIface;
struct _GConverterIface
{
  GTypeInterface g_iface;
  GConverterResult (* convert) (GConverter *converter,
    const void *inbuf,
    gsize inbuf_size,
    void *outbuf,
    gsize outbuf_size,
    GConverterFlags flags,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error);
  void (* reset) (GConverter *converter);
};
typedef struct _GCharsetConverterClass GCharsetConverterClass;
struct _GCharsetConverterClass
{
  GObjectClass parent_class;
};
typedef struct _GConverterInputStreamClass GConverterInputStreamClass;
typedef struct _GConverterInputStreamPrivate GConverterInputStreamPrivate;
struct _GConverterInputStream
{
  GFilterInputStream parent_instance;
  GConverterInputStreamPrivate *priv;
};
struct _GConverterInputStreamClass
{
  GFilterInputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GConverterOutputStreamClass GConverterOutputStreamClass;
typedef struct _GConverterOutputStreamPrivate GConverterOutputStreamPrivate;
struct _GConverterOutputStream
{
  GFilterOutputStream parent_instance;
  GConverterOutputStreamPrivate *priv;
};
struct _GConverterOutputStreamClass
{
  GFilterOutputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,
    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,
    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,
    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,
    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,
    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,
    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,
    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,
    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,
    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,
    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,
    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,
    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,
    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG,
    _SC_LEVEL1_ICACHE_SIZE,
    _SC_LEVEL1_ICACHE_ASSOC,
    _SC_LEVEL1_ICACHE_LINESIZE,
    _SC_LEVEL1_DCACHE_SIZE,
    _SC_LEVEL1_DCACHE_ASSOC,
    _SC_LEVEL1_DCACHE_LINESIZE,
    _SC_LEVEL2_CACHE_SIZE,
    _SC_LEVEL2_CACHE_ASSOC,
    _SC_LEVEL2_CACHE_LINESIZE,
    _SC_LEVEL3_CACHE_SIZE,
    _SC_LEVEL3_CACHE_ASSOC,
    _SC_LEVEL3_CACHE_LINESIZE,
    _SC_LEVEL4_CACHE_SIZE,
    _SC_LEVEL4_CACHE_ASSOC,
    _SC_LEVEL4_CACHE_LINESIZE,
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
    _SC_RAW_SOCKETS,
    _SC_V7_ILP32_OFF32,
    _SC_V7_ILP32_OFFBIG,
    _SC_V7_LP64_OFF64,
    _SC_V7_LPBIG_OFFBIG,
    _SC_SS_REPL_MAX,
    _SC_TRACE_EVENT_NAME_MAX,
    _SC_TRACE_NAME_MAX,
    _SC_TRACE_SYS_MAX,
    _SC_TRACE_USER_EVENT_MAX,
    _SC_XOPEN_STREAMS,
    _SC_THREAD_ROBUST_PRIO_INHERIT,
    _SC_THREAD_ROBUST_PRIO_PROTECT
  };
enum
  {
    _CS_PATH,
    _CS_V6_WIDTH_RESTRICTED_ENVS,
    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,
    _CS_V5_WIDTH_RESTRICTED_ENVS,
    _CS_V7_WIDTH_RESTRICTED_ENVS,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LIBS,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
    _CS_V6_ENV,
    _CS_V7_ENV
  };
int getentropy (void *__buffer, size_t __length) ;
typedef struct _GCredentialsClass GCredentialsClass;
typedef struct _GDatagramBasedInterface GDatagramBasedInterface;
struct _GDatagramBasedInterface
{
  GTypeInterface g_iface;
  gint (*receive_messages) (GDatagramBased *datagram_based,
                                         GInputMessage *messages,
                                         guint num_messages,
                                         gint flags,
                                         gint64 timeout,
                                         GCancellable *cancellable,
                                         GError **error);
  gint (*send_messages) (GDatagramBased *datagram_based,
                                         GOutputMessage *messages,
                                         guint num_messages,
                                         gint flags,
                                         gint64 timeout,
                                         GCancellable *cancellable,
                                         GError **error);
  GSource *(*create_source) (GDatagramBased *datagram_based,
                                         GIOCondition condition,
                                         GCancellable *cancellable);
  GIOCondition (*condition_check) (GDatagramBased *datagram_based,
                                         GIOCondition condition);
  gboolean (*condition_wait) (GDatagramBased *datagram_based,
                                         GIOCondition condition,
                                         gint64 timeout,
                                         GCancellable *cancellable,
                                         GError **error);
};
typedef struct _GDataInputStreamClass GDataInputStreamClass;
typedef struct _GDataInputStreamPrivate GDataInputStreamPrivate;
struct _GDataInputStream
{
  GBufferedInputStream parent_instance;
  GDataInputStreamPrivate *priv;
};
struct _GDataInputStreamClass
{
  GBufferedInputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GDataOutputStream GDataOutputStream;
typedef struct _GDataOutputStreamClass GDataOutputStreamClass;
typedef struct _GDataOutputStreamPrivate GDataOutputStreamPrivate;
struct _GDataOutputStream
{
  GFilterOutputStream parent_instance;
  GDataOutputStreamPrivate *priv;
};
struct _GDataOutputStreamClass
{
  GFilterOutputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection *connection,
                                              const gchar *sender,
                                              const gchar *object_path,
                                              const gchar *interface_name,
                                              const gchar *method_name,
                                              GVariant *parameters,
                                              GDBusMethodInvocation *invocation,
                                              gpointer user_data);
typedef GVariant *(*GDBusInterfaceGetPropertyFunc) (GDBusConnection *connection,
                                                    const gchar *sender,
                                                    const gchar *object_path,
                                                    const gchar *interface_name,
                                                    const gchar *property_name,
                                                    GError **error,
                                                    gpointer user_data);
typedef gboolean (*GDBusInterfaceSetPropertyFunc) (GDBusConnection *connection,
                                                    const gchar *sender,
                                                    const gchar *object_path,
                                                    const gchar *interface_name,
                                                    const gchar *property_name,
                                                    GVariant *value,
                                                    GError **error,
                                                    gpointer user_data);
struct _GDBusInterfaceVTable
{
  GDBusInterfaceMethodCallFunc method_call;
  GDBusInterfaceGetPropertyFunc get_property;
  GDBusInterfaceSetPropertyFunc set_property;
  gpointer padding[8];
};
typedef gchar** (*GDBusSubtreeEnumerateFunc) (GDBusConnection *connection,
                                              const gchar *sender,
                                              const gchar *object_path,
                                              gpointer user_data);
typedef GDBusInterfaceInfo ** (*GDBusSubtreeIntrospectFunc) (GDBusConnection *connection,
                                                             const gchar *sender,
                                                             const gchar *object_path,
                                                             const gchar *node,
                                                             gpointer user_data);
typedef const GDBusInterfaceVTable * (*GDBusSubtreeDispatchFunc) (GDBusConnection *connection,
                                                                  const gchar *sender,
                                                                  const gchar *object_path,
                                                                  const gchar *interface_name,
                                                                  const gchar *node,
                                                                  gpointer *out_user_data,
                                                                  gpointer user_data);
struct _GDBusSubtreeVTable
{
  GDBusSubtreeEnumerateFunc enumerate;
  GDBusSubtreeIntrospectFunc introspect;
  GDBusSubtreeDispatchFunc dispatch;
  gpointer padding[8];
};
typedef void (*GDBusSignalCallback) (GDBusConnection *connection,
                                     const gchar *sender_name,
                                     const gchar *object_path,
                                     const gchar *interface_name,
                                     const gchar *signal_name,
                                     GVariant *parameters,
                                     gpointer user_data);
typedef GDBusMessage *(*GDBusMessageFilterFunction) (GDBusConnection *connection,
                                                     GDBusMessage *message,
                                                     gboolean incoming,
                                                     gpointer user_data);
struct _GDBusErrorEntry
{
  gint error_code;
  const gchar *dbus_error_name;
};
struct _GDBusAnnotationInfo
{
  volatile gint ref_count;
  gchar *key;
  gchar *value;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusArgInfo
{
  volatile gint ref_count;
  gchar *name;
  gchar *signature;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusMethodInfo
{
  volatile gint ref_count;
  gchar *name;
  GDBusArgInfo **in_args;
  GDBusArgInfo **out_args;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusSignalInfo
{
  volatile gint ref_count;
  gchar *name;
  GDBusArgInfo **args;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusPropertyInfo
{
  volatile gint ref_count;
  gchar *name;
  gchar *signature;
  GDBusPropertyInfoFlags flags;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusInterfaceInfo
{
  volatile gint ref_count;
  gchar *name;
  GDBusMethodInfo **methods;
  GDBusSignalInfo **signals;
  GDBusPropertyInfo **properties;
  GDBusAnnotationInfo **annotations;
};
struct _GDBusNodeInfo
{
  volatile gint ref_count;
  gchar *path;
  GDBusInterfaceInfo **interfaces;
  GDBusNodeInfo **nodes;
  GDBusAnnotationInfo **annotations;
};
typedef void (*GBusAcquiredCallback) (GDBusConnection *connection,
                                      const gchar *name,
                                      gpointer user_data);
typedef void (*GBusNameAcquiredCallback) (GDBusConnection *connection,
                                          const gchar *name,
                                          gpointer user_data);
typedef void (*GBusNameLostCallback) (GDBusConnection *connection,
                                      const gchar *name,
                                      gpointer user_data);
typedef void (*GBusNameAppearedCallback) (GDBusConnection *connection,
                                          const gchar *name,
                                          const gchar *name_owner,
                                          gpointer user_data);
typedef void (*GBusNameVanishedCallback) (GDBusConnection *connection,
                                          const gchar *name,
                                          gpointer user_data);
typedef struct _GDBusProxyClass GDBusProxyClass;
typedef struct _GDBusProxyPrivate GDBusProxyPrivate;
struct _GDBusProxy
{
  GObject parent_instance;
  GDBusProxyPrivate *priv;
};
struct _GDBusProxyClass
{
  GObjectClass parent_class;
  void (*g_properties_changed) (GDBusProxy *proxy,
                                GVariant *changed_properties,
                                const gchar* const *invalidated_properties);
  void (*g_signal) (GDBusProxy *proxy,
                                const gchar *sender_name,
                                const gchar *signal_name,
                                GVariant *parameters);
  gpointer padding[32];
};
typedef struct _GDriveIface GDriveIface;
struct _GDriveIface
{
  GTypeInterface g_iface;
  void (* changed) (GDrive *drive);
  void (* disconnected) (GDrive *drive);
  void (* eject_button) (GDrive *drive);
  char * (* get_name) (GDrive *drive);
  GIcon * (* get_icon) (GDrive *drive);
  gboolean (* has_volumes) (GDrive *drive);
  GList * (* get_volumes) (GDrive *drive);
  gboolean (* is_media_removable) (GDrive *drive);
  gboolean (* has_media) (GDrive *drive);
  gboolean (* is_media_check_automatic) (GDrive *drive);
  gboolean (* can_eject) (GDrive *drive);
  gboolean (* can_poll_for_media) (GDrive *drive);
  void (* eject) (GDrive *drive,
                                         GMountUnmountFlags flags,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* eject_finish) (GDrive *drive,
                                         GAsyncResult *result,
                                         GError **error);
  void (* poll_for_media) (GDrive *drive,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* poll_for_media_finish) (GDrive *drive,
                                         GAsyncResult *result,
                                         GError **error);
  char * (* get_identifier) (GDrive *drive,
                                         const char *kind);
  char ** (* enumerate_identifiers) (GDrive *drive);
  GDriveStartStopType (* get_start_stop_type) (GDrive *drive);
  gboolean (* can_start) (GDrive *drive);
  gboolean (* can_start_degraded) (GDrive *drive);
  void (* start) (GDrive *drive,
                                         GDriveStartFlags flags,
                                         GMountOperation *mount_operation,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* start_finish) (GDrive *drive,
                                         GAsyncResult *result,
                                         GError **error);
  gboolean (* can_stop) (GDrive *drive);
  void (* stop) (GDrive *drive,
                                         GMountUnmountFlags flags,
                                         GMountOperation *mount_operation,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* stop_finish) (GDrive *drive,
                                         GAsyncResult *result,
                                         GError **error);
  void (* stop_button) (GDrive *drive);
  void (* eject_with_operation) (GDrive *drive,
                                             GMountUnmountFlags flags,
                                             GMountOperation *mount_operation,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* eject_with_operation_finish) (GDrive *drive,
                                             GAsyncResult *result,
                                             GError **error);
  const gchar * (* get_sort_key) (GDrive *drive);
  GIcon * (* get_symbolic_icon) (GDrive *drive);
  gboolean (* is_removable) (GDrive *drive);
};
typedef struct _GDtlsConnectionInterface GDtlsConnectionInterface;
struct _GDtlsConnectionInterface
{
  GTypeInterface g_iface;
  gboolean (*accept_certificate) (GDtlsConnection *connection,
                                  GTlsCertificate *peer_cert,
                                  GTlsCertificateFlags errors);
  gboolean (*handshake) (GDtlsConnection *conn,
                                  GCancellable *cancellable,
                                  GError **error);
  void (*handshake_async) (GDtlsConnection *conn,
                                  int io_priority,
                                  GCancellable *cancellable,
                                  GAsyncReadyCallback callback,
                                  gpointer user_data);
  gboolean (*handshake_finish) (GDtlsConnection *conn,
                                  GAsyncResult *result,
                                  GError **error);
  gboolean (*shutdown) (GDtlsConnection *conn,
                                  gboolean shutdown_read,
                                  gboolean shutdown_write,
                                  GCancellable *cancellable,
                                  GError **error);
  void (*shutdown_async) (GDtlsConnection *conn,
                                  gboolean shutdown_read,
                                  gboolean shutdown_write,
                                  int io_priority,
                                  GCancellable *cancellable,
                                  GAsyncReadyCallback callback,
                                  gpointer user_data);
  gboolean (*shutdown_finish) (GDtlsConnection *conn,
                                  GAsyncResult *result,
                                  GError **error);
  void (*set_advertised_protocols) (GDtlsConnection *conn,
                                           const gchar * const *protocols);
  const gchar *(*get_negotiated_protocol) (GDtlsConnection *conn);
};
typedef struct _GDtlsClientConnectionInterface GDtlsClientConnectionInterface;
struct _GDtlsClientConnectionInterface
{
  GTypeInterface g_iface;
};
typedef struct _GDtlsServerConnectionInterface GDtlsServerConnectionInterface;
struct _GDtlsServerConnectionInterface
{
  GTypeInterface g_iface;
};
typedef struct _GIconIface GIconIface;
struct _GIconIface
{
  GTypeInterface g_iface;
  guint (* hash) (GIcon *icon);
  gboolean (* equal) (GIcon *icon1,
                               GIcon *icon2);
  gboolean (* to_tokens) (GIcon *icon,
          GPtrArray *tokens,
                               gint *out_version);
  GIcon * (* from_tokens) (gchar **tokens,
                               gint num_tokens,
                               gint version,
                               GError **error);
  GVariant * (* serialize) (GIcon *icon);
};
typedef struct _GEmblem GEmblem;
typedef struct _GEmblemClass GEmblemClass;
typedef struct _GEmblemedIcon GEmblemedIcon;
typedef struct _GEmblemedIconClass GEmblemedIconClass;
typedef struct _GEmblemedIconPrivate GEmblemedIconPrivate;
struct _GEmblemedIcon
{
  GObject parent_instance;
  GEmblemedIconPrivate *priv;
};
struct _GEmblemedIconClass
{
  GObjectClass parent_class;
};
struct _GFileAttributeInfo
{
  char *name;
  GFileAttributeType type;
  GFileAttributeInfoFlags flags;
};
struct _GFileAttributeInfoList
{
  GFileAttributeInfo *infos;
  int n_infos;
};
typedef struct _GFileEnumeratorClass GFileEnumeratorClass;
typedef struct _GFileEnumeratorPrivate GFileEnumeratorPrivate;
struct _GFileEnumerator
{
  GObject parent_instance;
  GFileEnumeratorPrivate *priv;
};
struct _GFileEnumeratorClass
{
  GObjectClass parent_class;
  GFileInfo * (* next_file) (GFileEnumerator *enumerator,
                                     GCancellable *cancellable,
                                     GError **error);
  gboolean (* close_fn) (GFileEnumerator *enumerator,
                                     GCancellable *cancellable,
                                     GError **error);
  void (* next_files_async) (GFileEnumerator *enumerator,
                                     int num_files,
                                     int io_priority,
                                     GCancellable *cancellable,
                                     GAsyncReadyCallback callback,
                                     gpointer user_data);
  GList * (* next_files_finish) (GFileEnumerator *enumerator,
                                     GAsyncResult *result,
                                     GError **error);
  void (* close_async) (GFileEnumerator *enumerator,
                                     int io_priority,
                                     GCancellable *cancellable,
                                     GAsyncReadyCallback callback,
                                     gpointer user_data);
  gboolean (* close_finish) (GFileEnumerator *enumerator,
                                     GAsyncResult *result,
                                     GError **error);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
};
typedef struct _GFileIface GFileIface;
struct _GFileIface
{
  GTypeInterface g_iface;
  GFile * (* dup) (GFile *file);
  guint (* hash) (GFile *file);
  gboolean (* equal) (GFile *file1,
                                                       GFile *file2);
  gboolean (* is_native) (GFile *file);
  gboolean (* has_uri_scheme) (GFile *file,
                                                       const char *uri_scheme);
  char * (* get_uri_scheme) (GFile *file);
  char * (* get_basename) (GFile *file);
  char * (* get_path) (GFile *file);
  char * (* get_uri) (GFile *file);
  char * (* get_parse_name) (GFile *file);
  GFile * (* get_parent) (GFile *file);
  gboolean (* prefix_matches) (GFile *prefix,
                                                       GFile *file);
  char * (* get_relative_path) (GFile *parent,
                                                       GFile *descendant);
  GFile * (* resolve_relative_path) (GFile *file,
                                                       const char *relative_path);
  GFile * (* get_child_for_display_name) (GFile *file,
                                                       const char *display_name,
                                                       GError **error);
  GFileEnumerator * (* enumerate_children) (GFile *file,
                                                       const char *attributes,
                                                       GFileQueryInfoFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* enumerate_children_async) (GFile *file,
                                                       const char *attributes,
                                                       GFileQueryInfoFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileEnumerator * (* enumerate_children_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileInfo * (* query_info) (GFile *file,
                                                       const char *attributes,
                                                       GFileQueryInfoFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* query_info_async) (GFile *file,
                                                       const char *attributes,
                                                       GFileQueryInfoFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileInfo * (* query_info_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileInfo * (* query_filesystem_info) (GFile *file,
                                                       const char *attributes,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* query_filesystem_info_async) (GFile *file,
                                                       const char *attributes,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileInfo * (* query_filesystem_info_finish)(GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GMount * (* find_enclosing_mount) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* find_enclosing_mount_async) (GFile *file,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GMount * (* find_enclosing_mount_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFile * (* set_display_name) (GFile *file,
                                                       const char *display_name,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* set_display_name_async) (GFile *file,
                                                       const char *display_name,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFile * (* set_display_name_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileAttributeInfoList * (* query_settable_attributes) (GFile *file,
                                                             GCancellable *cancellable,
                                                             GError **error);
  void (* _query_settable_attributes_async) (void);
  void (* _query_settable_attributes_finish) (void);
  GFileAttributeInfoList * (* query_writable_namespaces) (GFile *file,
                                                             GCancellable *cancellable,
                                                             GError **error);
  void (* _query_writable_namespaces_async) (void);
  void (* _query_writable_namespaces_finish) (void);
  gboolean (* set_attribute) (GFile *file,
                                                       const char *attribute,
                                                       GFileAttributeType type,
                                                       gpointer value_p,
                                                       GFileQueryInfoFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  gboolean (* set_attributes_from_info) (GFile *file,
                                                       GFileInfo *info,
                                                       GFileQueryInfoFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* set_attributes_async) (GFile *file,
                                                       GFileInfo *info,
                                                       GFileQueryInfoFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* set_attributes_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GFileInfo **info,
                                                       GError **error);
  GFileInputStream * (* read_fn) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* read_async) (GFile *file,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileInputStream * (* read_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileOutputStream * (* append_to) (GFile *file,
                                                       GFileCreateFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* append_to_async) (GFile *file,
                                                       GFileCreateFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileOutputStream * (* append_to_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileOutputStream * (* create) (GFile *file,
                                                       GFileCreateFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* create_async) (GFile *file,
                                                       GFileCreateFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileOutputStream * (* create_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileOutputStream * (* replace) (GFile *file,
                                                       const char *etag,
                                                       gboolean make_backup,
                                                       GFileCreateFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* replace_async) (GFile *file,
                                                       const char *etag,
                                                       gboolean make_backup,
                                                       GFileCreateFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileOutputStream * (* replace_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  gboolean (* delete_file) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* delete_file_async) (GFile *file,
             int io_priority,
             GCancellable *cancellable,
             GAsyncReadyCallback callback,
             gpointer user_data);
  gboolean (* delete_file_finish) (GFile *file,
             GAsyncResult *result,
             GError **error);
  gboolean (* trash) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* trash_async) (GFile *file,
             int io_priority,
             GCancellable *cancellable,
             GAsyncReadyCallback callback,
             gpointer user_data);
  gboolean (* trash_finish) (GFile *file,
             GAsyncResult *result,
             GError **error);
  gboolean (* make_directory) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* make_directory_async) (GFile *file,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* make_directory_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  gboolean (* make_symbolic_link) (GFile *file,
                                                       const char *symlink_value,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* _make_symbolic_link_async) (void);
  void (* _make_symbolic_link_finish) (void);
  gboolean (* copy) (GFile *source,
                                                       GFile *destination,
                                                       GFileCopyFlags flags,
                                                       GCancellable *cancellable,
                                                       GFileProgressCallback progress_callback,
                                                       gpointer progress_callback_data,
                                                       GError **error);
  void (* copy_async) (GFile *source,
                                                       GFile *destination,
                                                       GFileCopyFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GFileProgressCallback progress_callback,
                                                       gpointer progress_callback_data,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* copy_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  gboolean (* move) (GFile *source,
                                                       GFile *destination,
                                                       GFileCopyFlags flags,
                                                       GCancellable *cancellable,
                                                       GFileProgressCallback progress_callback,
                                                       gpointer progress_callback_data,
                                                       GError **error);
  void (* _move_async) (void);
  void (* _move_finish) (void);
  void (* mount_mountable) (GFile *file,
                                                       GMountMountFlags flags,
                                                       GMountOperation *mount_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFile * (* mount_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* unmount_mountable) (GFile *file,
                                                       GMountUnmountFlags flags,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* unmount_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* eject_mountable) (GFile *file,
                                                       GMountUnmountFlags flags,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* eject_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* mount_enclosing_volume) (GFile *location,
                                                       GMountMountFlags flags,
                                                       GMountOperation *mount_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* mount_enclosing_volume_finish) (GFile *location,
                                                       GAsyncResult *result,
                                                       GError **error);
  GFileMonitor * (* monitor_dir) (GFile *file,
                                                       GFileMonitorFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  GFileMonitor * (* monitor_file) (GFile *file,
                                                       GFileMonitorFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  GFileIOStream * (* open_readwrite) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* open_readwrite_async) (GFile *file,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileIOStream * (* open_readwrite_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileIOStream * (* create_readwrite) (GFile *file,
             GFileCreateFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* create_readwrite_async) (GFile *file,
             GFileCreateFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileIOStream * (* create_readwrite_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  GFileIOStream * (* replace_readwrite) (GFile *file,
                                                       const char *etag,
                                                       gboolean make_backup,
                                                       GFileCreateFlags flags,
                                                       GCancellable *cancellable,
                                                       GError **error);
  void (* replace_readwrite_async) (GFile *file,
                                                       const char *etag,
                                                       gboolean make_backup,
                                                       GFileCreateFlags flags,
                                                       int io_priority,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  GFileIOStream * (* replace_readwrite_finish) (GFile *file,
                                                       GAsyncResult *res,
                                                       GError **error);
  void (* start_mountable) (GFile *file,
                                                       GDriveStartFlags flags,
                                                       GMountOperation *start_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* start_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* stop_mountable) (GFile *file,
                                                       GMountUnmountFlags flags,
                                                       GMountOperation *mount_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* stop_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  gboolean supports_thread_contexts;
  void (* unmount_mountable_with_operation) (GFile *file,
                                                       GMountUnmountFlags flags,
                                                       GMountOperation *mount_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* unmount_mountable_with_operation_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* eject_mountable_with_operation) (GFile *file,
                                                       GMountUnmountFlags flags,
                                                       GMountOperation *mount_operation,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* eject_mountable_with_operation_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  void (* poll_mountable) (GFile *file,
                                                       GCancellable *cancellable,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* poll_mountable_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       GError **error);
  gboolean (* measure_disk_usage) (GFile *file,
                                                       GFileMeasureFlags flags,
                                                       GCancellable *cancellable,
                                                       GFileMeasureProgressCallback progress_callback,
                                                       gpointer progress_data,
                                                       guint64 *disk_usage,
                                                       guint64 *num_dirs,
                                                       guint64 *num_files,
                                                       GError **error);
  void (* measure_disk_usage_async) (GFile *file,
                                                       GFileMeasureFlags flags,
                                                       gint io_priority,
                                                       GCancellable *cancellable,
                                                       GFileMeasureProgressCallback progress_callback,
                                                       gpointer progress_data,
                                                       GAsyncReadyCallback callback,
                                                       gpointer user_data);
  gboolean (* measure_disk_usage_finish) (GFile *file,
                                                       GAsyncResult *result,
                                                       guint64 *disk_usage,
                                                       guint64 *num_dirs,
                                                       guint64 *num_files,
                                                       GError **error);
};
typedef struct _GFileIconClass GFileIconClass;
typedef struct _GFileInfoClass GFileInfoClass;
typedef struct _GFileInputStreamClass GFileInputStreamClass;
typedef struct _GFileInputStreamPrivate GFileInputStreamPrivate;
struct _GFileInputStream
{
  GInputStream parent_instance;
  GFileInputStreamPrivate *priv;
};
struct _GFileInputStreamClass
{
  GInputStreamClass parent_class;
  goffset (* tell) (GFileInputStream *stream);
  gboolean (* can_seek) (GFileInputStream *stream);
  gboolean (* seek) (GFileInputStream *stream,
                                     goffset offset,
                                     GSeekType type,
                                     GCancellable *cancellable,
                                     GError **error);
  GFileInfo * (* query_info) (GFileInputStream *stream,
                                     const char *attributes,
                                     GCancellable *cancellable,
                                     GError **error);
  void (* query_info_async) (GFileInputStream *stream,
                                     const char *attributes,
                                     int io_priority,
                                     GCancellable *cancellable,
                                     GAsyncReadyCallback callback,
                                     gpointer user_data);
  GFileInfo * (* query_info_finish) (GFileInputStream *stream,
                                     GAsyncResult *result,
                                     GError **error);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GIOStreamPrivate GIOStreamPrivate;
typedef struct _GIOStreamClass GIOStreamClass;
struct _GIOStream
{
  GObject parent_instance;
  GIOStreamPrivate *priv;
};
struct _GIOStreamClass
{
  GObjectClass parent_class;
  GInputStream * (*get_input_stream) (GIOStream *stream);
  GOutputStream * (*get_output_stream) (GIOStream *stream);
  gboolean (* close_fn) (GIOStream *stream,
                             GCancellable *cancellable,
                             GError **error);
  void (* close_async) (GIOStream *stream,
                             int io_priority,
                             GCancellable *cancellable,
                             GAsyncReadyCallback callback,
                             gpointer user_data);
  gboolean (* close_finish) (GIOStream *stream,
                             GAsyncResult *result,
                             GError **error);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
  void (*_g_reserved8) (void);
  void (*_g_reserved9) (void);
  void (*_g_reserved10) (void);
};
typedef struct _GFileIOStreamClass GFileIOStreamClass;
typedef struct _GFileIOStreamPrivate GFileIOStreamPrivate;
struct _GFileIOStream
{
  GIOStream parent_instance;
  GFileIOStreamPrivate *priv;
};
struct _GFileIOStreamClass
{
  GIOStreamClass parent_class;
  goffset (* tell) (GFileIOStream *stream);
  gboolean (* can_seek) (GFileIOStream *stream);
  gboolean (* seek) (GFileIOStream *stream,
                                     goffset offset,
                                     GSeekType type,
                                     GCancellable *cancellable,
                                     GError **error);
  gboolean (* can_truncate) (GFileIOStream *stream);
  gboolean (* truncate_fn) (GFileIOStream *stream,
                                     goffset size,
                                     GCancellable *cancellable,
                                     GError **error);
  GFileInfo * (* query_info) (GFileIOStream *stream,
                                     const char *attributes,
                                     GCancellable *cancellable,
                                     GError **error);
  void (* query_info_async) (GFileIOStream *stream,
                                     const char *attributes,
                                     int io_priority,
                                     GCancellable *cancellable,
                                     GAsyncReadyCallback callback,
                                     gpointer user_data);
  GFileInfo * (* query_info_finish) (GFileIOStream *stream,
                                     GAsyncResult *result,
                                     GError **error);
  char * (* get_etag) (GFileIOStream *stream);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GFileMonitorClass GFileMonitorClass;
typedef struct _GFileMonitorPrivate GFileMonitorPrivate;
struct _GFileMonitor
{
  GObject parent_instance;
  GFileMonitorPrivate *priv;
};
struct _GFileMonitorClass
{
  GObjectClass parent_class;
  void (* changed) (GFileMonitor *monitor,
                        GFile *file,
                        GFile *other_file,
                        GFileMonitorEvent event_type);
  gboolean (* cancel) (GFileMonitor *monitor);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GFilenameCompleterClass GFilenameCompleterClass;
struct _GFilenameCompleterClass
{
  GObjectClass parent_class;
  void (* got_completion_data) (GFilenameCompleter *filename_completer);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
};
typedef struct _GFileOutputStreamClass GFileOutputStreamClass;
typedef struct _GFileOutputStreamPrivate GFileOutputStreamPrivate;
struct _GFileOutputStream
{
  GOutputStream parent_instance;
  GFileOutputStreamPrivate *priv;
};
struct _GFileOutputStreamClass
{
  GOutputStreamClass parent_class;
  goffset (* tell) (GFileOutputStream *stream);
  gboolean (* can_seek) (GFileOutputStream *stream);
  gboolean (* seek) (GFileOutputStream *stream,
                                     goffset offset,
                                     GSeekType type,
                                     GCancellable *cancellable,
                                     GError **error);
  gboolean (* can_truncate) (GFileOutputStream *stream);
  gboolean (* truncate_fn) (GFileOutputStream *stream,
                                     goffset size,
                                     GCancellable *cancellable,
                                     GError **error);
  GFileInfo * (* query_info) (GFileOutputStream *stream,
                                     const char *attributes,
                                     GCancellable *cancellable,
                                     GError **error);
  void (* query_info_async) (GFileOutputStream *stream,
                                     const char *attributes,
                                     int io_priority,
                                     GCancellable *cancellable,
                                     GAsyncReadyCallback callback,
                                     gpointer user_data);
  GFileInfo * (* query_info_finish) (GFileOutputStream *stream,
                                     GAsyncResult *result,
                                     GError **error);
  char * (* get_etag) (GFileOutputStream *stream);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GInetAddressClass GInetAddressClass;
typedef struct _GInetAddressPrivate GInetAddressPrivate;
struct _GInetAddress
{
  GObject parent_instance;
  GInetAddressPrivate *priv;
};
struct _GInetAddressClass
{
  GObjectClass parent_class;
  gchar * (*to_string) (GInetAddress *address);
  const guint8 * (*to_bytes) (GInetAddress *address);
};
typedef struct _GInetAddressMaskClass GInetAddressMaskClass;
typedef struct _GInetAddressMaskPrivate GInetAddressMaskPrivate;
struct _GInetAddressMask
{
  GObject parent_instance;
  GInetAddressMaskPrivate *priv;
};
struct _GInetAddressMaskClass
{
  GObjectClass parent_class;
};
typedef struct _GSocketAddressClass GSocketAddressClass;
struct _GSocketAddress
{
  GObject parent_instance;
};
struct _GSocketAddressClass
{
  GObjectClass parent_class;
  GSocketFamily (*get_family) (GSocketAddress *address);
  gssize (*get_native_size) (GSocketAddress *address);
  gboolean (*to_native) (GSocketAddress *address,
                                     gpointer dest,
                                     gsize destlen,
         GError **error);
};
typedef struct _GInetSocketAddressClass GInetSocketAddressClass;
typedef struct _GInetSocketAddressPrivate GInetSocketAddressPrivate;
struct _GInetSocketAddress
{
  GSocketAddress parent_instance;
  GInetSocketAddressPrivate *priv;
};
struct _GInetSocketAddressClass
{
  GSocketAddressClass parent_class;
};
typedef enum
{
  G_MODULE_BIND_LAZY = 1 << 0,
  G_MODULE_BIND_LOCAL = 1 << 1,
  G_MODULE_BIND_MASK = 0x03
} GModuleFlags;
typedef struct _GModule GModule;
typedef const gchar* (*GModuleCheckInit) (GModule *module);
typedef void (*GModuleUnload) (GModule *module);
typedef struct _GIOModuleScope GIOModuleScope;
typedef struct _GIOModuleClass GIOModuleClass;
typedef struct _GLoadableIconIface GLoadableIconIface;
struct _GLoadableIconIface
{
  GTypeInterface g_iface;
  GInputStream * (* load) (GLoadableIcon *icon,
                                  int size,
                                  char **type,
                                  GCancellable *cancellable,
                                  GError **error);
  void (* load_async) (GLoadableIcon *icon,
                                  int size,
                                  GCancellable *cancellable,
                                  GAsyncReadyCallback callback,
                                  gpointer user_data);
  GInputStream * (* load_finish) (GLoadableIcon *icon,
                                  GAsyncResult *res,
                                  char **type,
                                  GError **error);
};
typedef struct _GMemoryInputStreamClass GMemoryInputStreamClass;
typedef struct _GMemoryInputStreamPrivate GMemoryInputStreamPrivate;
struct _GMemoryInputStream
{
  GInputStream parent_instance;
  GMemoryInputStreamPrivate *priv;
};
struct _GMemoryInputStreamClass
{
  GInputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GMemoryOutputStreamClass GMemoryOutputStreamClass;
typedef struct _GMemoryOutputStreamPrivate GMemoryOutputStreamPrivate;
struct _GMemoryOutputStream
{
  GOutputStream parent_instance;
  GMemoryOutputStreamPrivate *priv;
};
struct _GMemoryOutputStreamClass
{
  GOutputStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef gpointer (* GReallocFunc) (gpointer data,
                                   gsize size);
typedef struct _GMountIface GMountIface;
struct _GMountIface
{
  GTypeInterface g_iface;
  void (* changed) (GMount *mount);
  void (* unmounted) (GMount *mount);
  GFile * (* get_root) (GMount *mount);
  char * (* get_name) (GMount *mount);
  GIcon * (* get_icon) (GMount *mount);
  char * (* get_uuid) (GMount *mount);
  GVolume * (* get_volume) (GMount *mount);
  GDrive * (* get_drive) (GMount *mount);
  gboolean (* can_unmount) (GMount *mount);
  gboolean (* can_eject) (GMount *mount);
  void (* unmount) (GMount *mount,
                                             GMountUnmountFlags flags,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* unmount_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  void (* eject) (GMount *mount,
                                             GMountUnmountFlags flags,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* eject_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  void (* remount) (GMount *mount,
                                             GMountMountFlags flags,
                                             GMountOperation *mount_operation,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* remount_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  void (* guess_content_type) (GMount *mount,
                                             gboolean force_rescan,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gchar ** (* guess_content_type_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  gchar ** (* guess_content_type_sync) (GMount *mount,
                                             gboolean force_rescan,
                                             GCancellable *cancellable,
                                             GError **error);
  void (* pre_unmount) (GMount *mount);
  void (* unmount_with_operation) (GMount *mount,
                                             GMountUnmountFlags flags,
                                             GMountOperation *mount_operation,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* unmount_with_operation_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  void (* eject_with_operation) (GMount *mount,
                                             GMountUnmountFlags flags,
                                             GMountOperation *mount_operation,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* eject_with_operation_finish) (GMount *mount,
                                             GAsyncResult *result,
                                             GError **error);
  GFile * (* get_default_location) (GMount *mount);
  const gchar * (* get_sort_key) (GMount *mount);
  GIcon * (* get_symbolic_icon) (GMount *mount);
};
typedef struct _GMountOperationClass GMountOperationClass;
typedef struct _GMountOperationPrivate GMountOperationPrivate;
struct _GMountOperation
{
  GObject parent_instance;
  GMountOperationPrivate *priv;
};
struct _GMountOperationClass
{
  GObjectClass parent_class;
  void (* ask_password) (GMountOperation *op,
    const char *message,
    const char *default_user,
    const char *default_domain,
    GAskPasswordFlags flags);
  void (* ask_question) (GMountOperation *op,
    const char *message,
    const char *choices[]);
  void (* reply) (GMountOperation *op,
    GMountOperationResult result);
  void (* aborted) (GMountOperation *op);
  void (* show_processes) (GMountOperation *op,
                           const gchar *message,
                           GArray *processes,
                           const gchar *choices[]);
  void (* show_unmount_progress) (GMountOperation *op,
                                  const gchar *message,
                                  gint64 time_left,
                                  gint64 bytes_left);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
  void (*_g_reserved8) (void);
  void (*_g_reserved9) (void);
};
typedef struct _GNativeSocketAddressClass GNativeSocketAddressClass;
typedef struct _GNativeSocketAddressPrivate GNativeSocketAddressPrivate;
struct _GNativeSocketAddress
{
  GSocketAddress parent_instance;
  GNativeSocketAddressPrivate *priv;
};
struct _GNativeSocketAddressClass
{
  GSocketAddressClass parent_class;
};
typedef struct _GVolumeMonitorClass GVolumeMonitorClass;
struct _GVolumeMonitor
{
  GObject parent_instance;
  gpointer priv;
};
struct _GVolumeMonitorClass
{
  GObjectClass parent_class;
  void (* volume_added) (GVolumeMonitor *volume_monitor,
                                      GVolume *volume);
  void (* volume_removed) (GVolumeMonitor *volume_monitor,
                                      GVolume *volume);
  void (* volume_changed) (GVolumeMonitor *volume_monitor,
                                      GVolume *volume);
  void (* mount_added) (GVolumeMonitor *volume_monitor,
                                      GMount *mount);
  void (* mount_removed) (GVolumeMonitor *volume_monitor,
                                      GMount *mount);
  void (* mount_pre_unmount) (GVolumeMonitor *volume_monitor,
                                      GMount *mount);
  void (* mount_changed) (GVolumeMonitor *volume_monitor,
                                      GMount *mount);
  void (* drive_connected) (GVolumeMonitor *volume_monitor,
                                      GDrive *drive);
  void (* drive_disconnected) (GVolumeMonitor *volume_monitor,
                                      GDrive *drive);
  void (* drive_changed) (GVolumeMonitor *volume_monitor,
                                      GDrive *drive);
  gboolean (* is_supported) (void);
  GList * (* get_connected_drives) (GVolumeMonitor *volume_monitor);
  GList * (* get_volumes) (GVolumeMonitor *volume_monitor);
  GList * (* get_mounts) (GVolumeMonitor *volume_monitor);
  GVolume * (* get_volume_for_uuid) (GVolumeMonitor *volume_monitor,
                                      const char *uuid);
  GMount * (* get_mount_for_uuid) (GVolumeMonitor *volume_monitor,
                                      const char *uuid);
  GVolume * (* adopt_orphan_mount) (GMount *mount,
                                      GVolumeMonitor *volume_monitor);
  void (* drive_eject_button) (GVolumeMonitor *volume_monitor,
                                      GDrive *drive);
  void (* drive_stop_button) (GVolumeMonitor *volume_monitor,
                                     GDrive *drive);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
};
typedef struct _GNativeVolumeMonitor GNativeVolumeMonitor;
typedef struct _GNativeVolumeMonitorClass GNativeVolumeMonitorClass;
struct _GNativeVolumeMonitor
{
  GVolumeMonitor parent_instance;
};
struct _GNativeVolumeMonitorClass
{
  GVolumeMonitorClass parent_class;
  GMount * (* get_mount_for_mount_path) (const char *mount_path,
                                         GCancellable *cancellable);
};
typedef struct _GNetworkAddressClass GNetworkAddressClass;
typedef struct _GNetworkAddressPrivate GNetworkAddressPrivate;
struct _GNetworkAddress
{
  GObject parent_instance;
  GNetworkAddressPrivate *priv;
};
struct _GNetworkAddressClass
{
  GObjectClass parent_class;
};
typedef struct _GNetworkMonitorInterface GNetworkMonitorInterface;
struct _GNetworkMonitorInterface {
  GTypeInterface g_iface;
  void (*network_changed) (GNetworkMonitor *monitor,
    gboolean network_available);
  gboolean (*can_reach) (GNetworkMonitor *monitor,
    GSocketConnectable *connectable,
    GCancellable *cancellable,
    GError **error);
  void (*can_reach_async) (GNetworkMonitor *monitor,
    GSocketConnectable *connectable,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);
  gboolean (*can_reach_finish) (GNetworkMonitor *monitor,
    GAsyncResult *result,
    GError **error);
};
typedef struct _GNetworkServiceClass GNetworkServiceClass;
typedef struct _GNetworkServicePrivate GNetworkServicePrivate;
struct _GNetworkService
{
  GObject parent_instance;
  GNetworkServicePrivate *priv;
};
struct _GNetworkServiceClass
{
  GObjectClass parent_class;
};
typedef struct _GPermissionPrivate GPermissionPrivate;
typedef struct _GPermissionClass GPermissionClass;
struct _GPermission
{
  GObject parent_instance;
  GPermissionPrivate *priv;
};
struct _GPermissionClass {
  GObjectClass parent_class;
  gboolean (*acquire) (GPermission *permission,
                              GCancellable *cancellable,
                              GError **error);
  void (*acquire_async) (GPermission *permission,
                              GCancellable *cancellable,
                              GAsyncReadyCallback callback,
                              gpointer user_data);
  gboolean (*acquire_finish) (GPermission *permission,
                              GAsyncResult *result,
                              GError **error);
  gboolean (*release) (GPermission *permission,
                              GCancellable *cancellable,
                              GError **error);
  void (*release_async) (GPermission *permission,
                              GCancellable *cancellable,
                              GAsyncReadyCallback callback,
                              gpointer user_data);
  gboolean (*release_finish) (GPermission *permission,
                              GAsyncResult *result,
                              GError **error);
  gpointer reserved[16];
};
typedef struct _GPollableInputStreamInterface GPollableInputStreamInterface;
struct _GPollableInputStreamInterface
{
  GTypeInterface g_iface;
  gboolean (*can_poll) (GPollableInputStream *stream);
  gboolean (*is_readable) (GPollableInputStream *stream);
  GSource * (*create_source) (GPollableInputStream *stream,
        GCancellable *cancellable);
  gssize (*read_nonblocking) (GPollableInputStream *stream,
        void *buffer,
        gsize count,
        GError **error);
};
typedef struct _GPollableOutputStreamInterface GPollableOutputStreamInterface;
struct _GPollableOutputStreamInterface
{
  GTypeInterface g_iface;
  gboolean (*can_poll) (GPollableOutputStream *stream);
  gboolean (*is_writable) (GPollableOutputStream *stream);
  GSource * (*create_source) (GPollableOutputStream *stream,
         GCancellable *cancellable);
  gssize (*write_nonblocking) (GPollableOutputStream *stream,
         const void *buffer,
         gsize count,
         GError **error);
  GPollableReturn (*writev_nonblocking) (GPollableOutputStream *stream,
      const GOutputVector *vectors,
      gsize n_vectors,
      gsize *bytes_written,
      GError **error);
};
typedef struct _GProxyInterface GProxyInterface;
struct _GProxyInterface
{
  GTypeInterface g_iface;
  GIOStream * (* connect) (GProxy *proxy,
         GIOStream *connection,
         GProxyAddress *proxy_address,
         GCancellable *cancellable,
         GError **error);
  void (* connect_async) (GProxy *proxy,
         GIOStream *connection,
         GProxyAddress *proxy_address,
         GCancellable *cancellable,
         GAsyncReadyCallback callback,
         gpointer user_data);
  GIOStream * (* connect_finish) (GProxy *proxy,
         GAsyncResult *result,
         GError **error);
  gboolean (* supports_hostname) (GProxy *proxy);
};
typedef struct _GProxyAddressClass GProxyAddressClass;
typedef struct _GProxyAddressPrivate GProxyAddressPrivate;
struct _GProxyAddress
{
  GInetSocketAddress parent_instance;
  GProxyAddressPrivate *priv;
};
struct _GProxyAddressClass
{
  GInetSocketAddressClass parent_class;
};
typedef struct _GSocketAddressEnumeratorClass GSocketAddressEnumeratorClass;
struct _GSocketAddressEnumerator
{
  GObject parent_instance;
};
struct _GSocketAddressEnumeratorClass
{
  GObjectClass parent_class;
  GSocketAddress * (* next) (GSocketAddressEnumerator *enumerator,
        GCancellable *cancellable,
        GError **error);
  void (* next_async) (GSocketAddressEnumerator *enumerator,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);
  GSocketAddress * (* next_finish) (GSocketAddressEnumerator *enumerator,
        GAsyncResult *result,
        GError **error);
};
typedef struct _GProxyAddressEnumeratorClass GProxyAddressEnumeratorClass;
typedef struct _GProxyAddressEnumeratorPrivate GProxyAddressEnumeratorPrivate;
struct _GProxyAddressEnumerator
{
  GSocketAddressEnumerator parent_instance;
  GProxyAddressEnumeratorPrivate *priv;
};
struct _GProxyAddressEnumeratorClass
{
  GSocketAddressEnumeratorClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
};
typedef struct _GProxyResolverInterface GProxyResolverInterface;
struct _GProxyResolverInterface {
  GTypeInterface g_iface;
  gboolean (* is_supported) (GProxyResolver *resolver);
  gchar ** (* lookup) (GProxyResolver *resolver,
         const gchar *uri,
         GCancellable *cancellable,
         GError **error);
  void (* lookup_async) (GProxyResolver *resolver,
         const gchar *uri,
         GCancellable *cancellable,
         GAsyncReadyCallback callback,
         gpointer user_data);
  gchar ** (* lookup_finish) (GProxyResolver *resolver,
         GAsyncResult *result,
         GError **error);
};
typedef struct _GResolverPrivate GResolverPrivate;
typedef struct _GResolverClass GResolverClass;
struct _GResolver {
  GObject parent_instance;
  GResolverPrivate *priv;
};
typedef enum {
  G_RESOLVER_NAME_LOOKUP_FLAGS_DEFAULT = 0,
  G_RESOLVER_NAME_LOOKUP_FLAGS_IPV4_ONLY = 1 << 0,
  G_RESOLVER_NAME_LOOKUP_FLAGS_IPV6_ONLY = 1 << 1,
} GResolverNameLookupFlags;
struct _GResolverClass {
  GObjectClass parent_class;
  void ( *reload) (GResolver *resolver);
  GList * ( *lookup_by_name) (GResolver *resolver,
                                                const gchar *hostname,
                                                GCancellable *cancellable,
                                                GError **error);
  void ( *lookup_by_name_async) (GResolver *resolver,
                                                const gchar *hostname,
                                                GCancellable *cancellable,
                                                GAsyncReadyCallback callback,
                                                gpointer user_data);
  GList * ( *lookup_by_name_finish) (GResolver *resolver,
                                                GAsyncResult *result,
                                                GError **error);
  gchar * ( *lookup_by_address) (GResolver *resolver,
                                                GInetAddress *address,
                                                GCancellable *cancellable,
                                                GError **error);
  void ( *lookup_by_address_async) (GResolver *resolver,
                                                GInetAddress *address,
                                                GCancellable *cancellable,
                                                GAsyncReadyCallback callback,
                                                gpointer user_data);
  gchar * ( *lookup_by_address_finish) (GResolver *resolver,
                                                GAsyncResult *result,
                                                GError **error);
  GList * ( *lookup_service) (GResolver *resolver,
                                                const gchar *rrname,
                                                GCancellable *cancellable,
                                                GError **error);
  void ( *lookup_service_async) (GResolver *resolver,
                                                const gchar *rrname,
                                                GCancellable *cancellable,
                                                GAsyncReadyCallback callback,
                                                gpointer user_data);
  GList * ( *lookup_service_finish) (GResolver *resolver,
                                                GAsyncResult *result,
                                                GError **error);
  GList * ( *lookup_records) (GResolver *resolver,
                                                const gchar *rrname,
                                                GResolverRecordType record_type,
                                                GCancellable *cancellable,
                                                GError **error);
  void ( *lookup_records_async) (GResolver *resolver,
                                                const gchar *rrname,
                                                GResolverRecordType record_type,
                                                GCancellable *cancellable,
                                                GAsyncReadyCallback callback,
                                                gpointer user_data);
  GList * ( *lookup_records_finish) (GResolver *resolver,
                                                GAsyncResult *result,
                                                GError **error);
  void ( *lookup_by_name_with_flags_async) (GResolver *resolver,
                                                const gchar *hostname,
                                                GResolverNameLookupFlags flags,
                                                GCancellable *cancellable,
                                                GAsyncReadyCallback callback,
                                                gpointer user_data);
  GList * ( *lookup_by_name_with_flags_finish) (GResolver *resolver,
                                                GAsyncResult *result,
                                                GError **error);
  GList * ( *lookup_by_name_with_flags) (GResolver *resolver,
                                                const gchar *hostname,
                                                GResolverNameLookupFlags flags,
                                                GCancellable *cancellable,
                                                GError **error);
};
typedef struct _GStaticResource GStaticResource;
struct _GStaticResource {
  const guint8 *data;
  gsize data_len;
  GResource *resource;
  GStaticResource *next;
  gpointer padding;
};
typedef struct _GSeekableIface GSeekableIface;
struct _GSeekableIface
{
  GTypeInterface g_iface;
  goffset (* tell) (GSeekable *seekable);
  gboolean (* can_seek) (GSeekable *seekable);
  gboolean (* seek) (GSeekable *seekable,
      goffset offset,
      GSeekType type,
      GCancellable *cancellable,
      GError **error);
  gboolean (* can_truncate) (GSeekable *seekable);
  gboolean (* truncate_fn) (GSeekable *seekable,
      goffset offset,
      GCancellable *cancellable,
      GError **error);
};
typedef struct _GSettingsSchemaSource GSettingsSchemaSource;
typedef struct _GSettingsSchema GSettingsSchema;
typedef struct _GSettingsSchemaKey GSettingsSchemaKey;
typedef struct _GSettingsPrivate GSettingsPrivate;
typedef struct _GSettingsClass GSettingsClass;
struct _GSettingsClass
{
  GObjectClass parent_class;
  void (*writable_changed) (GSettings *settings,
                                        const gchar *key);
  void (*changed) (GSettings *settings,
                                        const gchar *key);
  gboolean (*writable_change_event) (GSettings *settings,
                                        GQuark key);
  gboolean (*change_event) (GSettings *settings,
                                        const GQuark *keys,
                                        gint n_keys);
  gpointer padding[20];
};
struct _GSettings
{
  GObject parent_instance;
  GSettingsPrivate *priv;
};
typedef GVariant * (*GSettingsBindSetMapping) (const GValue *value,
                                                                         const GVariantType *expected_type,
                                                                         gpointer user_data);
typedef gboolean (*GSettingsBindGetMapping) (GValue *value,
                                                                         GVariant *variant,
                                                                         gpointer user_data);
typedef gboolean (*GSettingsGetMapping) (GVariant *value,
                                                                         gpointer *result,
                                                                         gpointer user_data);
typedef enum
{
  G_SETTINGS_BIND_DEFAULT,
  G_SETTINGS_BIND_GET = (1<<0),
  G_SETTINGS_BIND_SET = (1<<1),
  G_SETTINGS_BIND_NO_SENSITIVITY = (1<<2),
  G_SETTINGS_BIND_GET_NO_CHANGES = (1<<3),
  G_SETTINGS_BIND_INVERT_BOOLEAN = (1<<4)
} GSettingsBindFlags;
typedef struct _GSimpleActionGroupPrivate GSimpleActionGroupPrivate;
typedef struct _GSimpleActionGroupClass GSimpleActionGroupClass;
struct _GSimpleActionGroup
{
  GObject parent_instance;
  GSimpleActionGroupPrivate *priv;
};
struct _GSimpleActionGroupClass
{
  GObjectClass parent_class;
  gpointer padding[12];
};
typedef struct _GSimpleAsyncResultClass GSimpleAsyncResultClass;
typedef struct _GSocketClientPrivate GSocketClientPrivate;
typedef struct _GSocketClientClass GSocketClientClass;
struct _GSocketClientClass
{
  GObjectClass parent_class;
  void (* event) (GSocketClient *client,
    GSocketClientEvent event,
    GSocketConnectable *connectable,
    GIOStream *connection);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
};
struct _GSocketClient
{
  GObject parent_instance;
  GSocketClientPrivate *priv;
};
typedef struct _GSocketConnectableIface GSocketConnectableIface;
struct _GSocketConnectableIface
{
  GTypeInterface g_iface;
  GSocketAddressEnumerator * (* enumerate) (GSocketConnectable *connectable);
  GSocketAddressEnumerator * (* proxy_enumerate) (GSocketConnectable *connectable);
  gchar * (* to_string) (GSocketConnectable *connectable);
};
typedef struct _GSocketPrivate GSocketPrivate;
typedef struct _GSocketClass GSocketClass;
struct _GSocketClass
{
  GObjectClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
  void (*_g_reserved7) (void);
  void (*_g_reserved8) (void);
  void (*_g_reserved9) (void);
  void (*_g_reserved10) (void);
};
struct _GSocket
{
  GObject parent_instance;
  GSocketPrivate *priv;
};
typedef struct _GSocketConnectionPrivate GSocketConnectionPrivate;
typedef struct _GSocketConnectionClass GSocketConnectionClass;
struct _GSocketConnectionClass
{
  GIOStreamClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
};
struct _GSocketConnection
{
  GIOStream parent_instance;
  GSocketConnectionPrivate *priv;
};
typedef struct _GSocketControlMessagePrivate GSocketControlMessagePrivate;
typedef struct _GSocketControlMessageClass GSocketControlMessageClass;
struct _GSocketControlMessageClass
{
  GObjectClass parent_class;
  gsize (* get_size) (GSocketControlMessage *message);
  int (* get_level) (GSocketControlMessage *message);
  int (* get_type) (GSocketControlMessage *message);
  void (* serialize) (GSocketControlMessage *message,
     gpointer data);
  GSocketControlMessage *(* deserialize) (int level,
       int type,
       gsize size,
       gpointer data);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
struct _GSocketControlMessage
{
  GObject parent_instance;
  GSocketControlMessagePrivate *priv;
};
typedef struct _GSocketListenerPrivate GSocketListenerPrivate;
typedef struct _GSocketListenerClass GSocketListenerClass;
struct _GSocketListenerClass
{
  GObjectClass parent_class;
  void (* changed) (GSocketListener *listener);
  void (* event) (GSocketListener *listener,
                  GSocketListenerEvent event,
                  GSocket *socket);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
};
struct _GSocketListener
{
  GObject parent_instance;
  GSocketListenerPrivate *priv;
};
typedef struct _GSocketServicePrivate GSocketServicePrivate;
typedef struct _GSocketServiceClass GSocketServiceClass;
struct _GSocketServiceClass
{
  GSocketListenerClass parent_class;
  gboolean (* incoming) (GSocketService *service,
                         GSocketConnection *connection,
    GObject *source_object);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
};
struct _GSocketService
{
  GSocketListener parent_instance;
  GSocketServicePrivate *priv;
};
typedef struct _GSimpleProxyResolver GSimpleProxyResolver;
typedef struct _GSimpleProxyResolverPrivate GSimpleProxyResolverPrivate;
typedef struct _GSimpleProxyResolverClass GSimpleProxyResolverClass;
struct _GSimpleProxyResolver
{
  GObject parent_instance;
  GSimpleProxyResolverPrivate *priv;
};
struct _GSimpleProxyResolverClass
{
  GObjectClass parent_class;
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
typedef struct _GTaskClass GTaskClass;
typedef void (*GTaskThreadFunc) (GTask *task,
                                           gpointer source_object,
                                           gpointer task_data,
                                           GCancellable *cancellable);
typedef struct _GTcpConnectionPrivate GTcpConnectionPrivate;
typedef struct _GTcpConnectionClass GTcpConnectionClass;
struct _GTcpConnectionClass
{
  GSocketConnectionClass parent_class;
};
struct _GTcpConnection
{
  GSocketConnection parent_instance;
  GTcpConnectionPrivate *priv;
};
typedef struct _GTcpWrapperConnectionPrivate GTcpWrapperConnectionPrivate;
typedef struct _GTcpWrapperConnectionClass GTcpWrapperConnectionClass;
struct _GTcpWrapperConnectionClass
{
  GTcpConnectionClass parent_class;
};
struct _GTcpWrapperConnection
{
  GTcpConnection parent_instance;
  GTcpWrapperConnectionPrivate *priv;
};
typedef struct _GThemedIconClass GThemedIconClass;
typedef struct _GThreadedSocketServicePrivate GThreadedSocketServicePrivate;
typedef struct _GThreadedSocketServiceClass GThreadedSocketServiceClass;
struct _GThreadedSocketServiceClass
{
  GSocketServiceClass parent_class;
  gboolean (* run) (GThreadedSocketService *service,
                    GSocketConnection *connection,
                    GObject *source_object);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
};
struct _GThreadedSocketService
{
  GSocketService parent_instance;
  GThreadedSocketServicePrivate *priv;
};
typedef struct _GTlsBackend GTlsBackend;
typedef struct _GTlsBackendInterface GTlsBackendInterface;
struct _GTlsBackendInterface
{
  GTypeInterface g_iface;
  gboolean ( *supports_tls) (GTlsBackend *backend);
  GType ( *get_certificate_type) (void);
  GType ( *get_client_connection_type) (void);
  GType ( *get_server_connection_type) (void);
  GType ( *get_file_database_type) (void);
  GTlsDatabase * ( *get_default_database) (GTlsBackend *backend);
  gboolean ( *supports_dtls) (GTlsBackend *backend);
  GType ( *get_dtls_client_connection_type) (void);
  GType ( *get_dtls_server_connection_type) (void);
};
typedef struct _GTlsCertificateClass GTlsCertificateClass;
typedef struct _GTlsCertificatePrivate GTlsCertificatePrivate;
struct _GTlsCertificate {
  GObject parent_instance;
  GTlsCertificatePrivate *priv;
};
struct _GTlsCertificateClass
{
  GObjectClass parent_class;
  GTlsCertificateFlags (* verify) (GTlsCertificate *cert,
        GSocketConnectable *identity,
        GTlsCertificate *trusted_ca);
  gpointer padding[8];
};
typedef struct _GTlsConnectionClass GTlsConnectionClass;
typedef struct _GTlsConnectionPrivate GTlsConnectionPrivate;
struct _GTlsConnection {
  GIOStream parent_instance;
  GTlsConnectionPrivate *priv;
};
struct _GTlsConnectionClass
{
  GIOStreamClass parent_class;
  gboolean ( *accept_certificate) (GTlsConnection *connection,
         GTlsCertificate *peer_cert,
         GTlsCertificateFlags errors);
  gboolean ( *handshake ) (GTlsConnection *conn,
      GCancellable *cancellable,
      GError **error);
  void ( *handshake_async ) (GTlsConnection *conn,
      int io_priority,
      GCancellable *cancellable,
      GAsyncReadyCallback callback,
      gpointer user_data);
  gboolean ( *handshake_finish ) (GTlsConnection *conn,
      GAsyncResult *result,
      GError **error);
  gpointer padding[8];
};
typedef struct _GTlsClientConnectionInterface GTlsClientConnectionInterface;
struct _GTlsClientConnectionInterface
{
  GTypeInterface g_iface;
  void ( *copy_session_state ) (GTlsClientConnection *conn,
                                        GTlsClientConnection *source);
};
typedef struct _GTlsDatabaseClass GTlsDatabaseClass;
typedef struct _GTlsDatabasePrivate GTlsDatabasePrivate;
struct _GTlsDatabase
{
  GObject parent_instance;
  GTlsDatabasePrivate *priv;
};
struct _GTlsDatabaseClass
{
  GObjectClass parent_class;
  GTlsCertificateFlags (*verify_chain) (GTlsDatabase *self,
                                                                 GTlsCertificate *chain,
                                                                 const gchar *purpose,
                                                                 GSocketConnectable *identity,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseVerifyFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GError **error);
  void (*verify_chain_async) (GTlsDatabase *self,
                                                                 GTlsCertificate *chain,
                                                                 const gchar *purpose,
                                                                 GSocketConnectable *identity,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseVerifyFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GAsyncReadyCallback callback,
                                                                 gpointer user_data);
  GTlsCertificateFlags (*verify_chain_finish) (GTlsDatabase *self,
                                                                 GAsyncResult *result,
                                                                 GError **error);
  gchar* (*create_certificate_handle) (GTlsDatabase *self,
                                                                 GTlsCertificate *certificate);
  GTlsCertificate* (*lookup_certificate_for_handle) (GTlsDatabase *self,
                                                                 const gchar *handle,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GError **error);
  void (*lookup_certificate_for_handle_async) (GTlsDatabase *self,
                                                                 const gchar *handle,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GAsyncReadyCallback callback,
                                                                 gpointer user_data);
  GTlsCertificate* (*lookup_certificate_for_handle_finish) (GTlsDatabase *self,
                                                                 GAsyncResult *result,
                                                                 GError **error);
  GTlsCertificate* (*lookup_certificate_issuer) (GTlsDatabase *self,
                                                                 GTlsCertificate *certificate,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GError **error);
  void (*lookup_certificate_issuer_async) (GTlsDatabase *self,
                                                                 GTlsCertificate *certificate,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GAsyncReadyCallback callback,
                                                                 gpointer user_data);
  GTlsCertificate* (*lookup_certificate_issuer_finish) (GTlsDatabase *self,
                                                                 GAsyncResult *result,
                                                                 GError **error);
  GList* (*lookup_certificates_issued_by) (GTlsDatabase *self,
                                                                 GByteArray *issuer_raw_dn,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GError **error);
  void (*lookup_certificates_issued_by_async) (GTlsDatabase *self,
                                                                 GByteArray *issuer_raw_dn,
                                                                 GTlsInteraction *interaction,
                                                                 GTlsDatabaseLookupFlags flags,
                                                                 GCancellable *cancellable,
                                                                 GAsyncReadyCallback callback,
                                                                 gpointer user_data);
  GList* (*lookup_certificates_issued_by_finish) (GTlsDatabase *self,
                                                                 GAsyncResult *result,
                                                                 GError **error);
  gpointer padding[16];
};
typedef struct _GTlsFileDatabaseInterface GTlsFileDatabaseInterface;
struct _GTlsFileDatabaseInterface
{
  GTypeInterface g_iface;
  gpointer padding[8];
};
typedef struct _GTlsInteractionClass GTlsInteractionClass;
typedef struct _GTlsInteractionPrivate GTlsInteractionPrivate;
struct _GTlsInteraction
{
  GObject parent_instance;
  GTlsInteractionPrivate *priv;
};
struct _GTlsInteractionClass
{
  GObjectClass parent_class;
  GTlsInteractionResult (* ask_password) (GTlsInteraction *interaction,
                                                  GTlsPassword *password,
                                                  GCancellable *cancellable,
                                                  GError **error);
  void (* ask_password_async) (GTlsInteraction *interaction,
                                                  GTlsPassword *password,
                                                  GCancellable *cancellable,
                                                  GAsyncReadyCallback callback,
                                                  gpointer user_data);
  GTlsInteractionResult (* ask_password_finish) (GTlsInteraction *interaction,
                                                  GAsyncResult *result,
                                                  GError **error);
  GTlsInteractionResult (* request_certificate) (GTlsInteraction *interaction,
                                                         GTlsConnection *connection,
                                                         GTlsCertificateRequestFlags flags,
                                                         GCancellable *cancellable,
                                                         GError **error);
  void (* request_certificate_async) (GTlsInteraction *interaction,
                                                         GTlsConnection *connection,
                                                         GTlsCertificateRequestFlags flags,
                                                         GCancellable *cancellable,
                                                         GAsyncReadyCallback callback,
                                                         gpointer user_data);
  GTlsInteractionResult (* request_certificate_finish) (GTlsInteraction *interaction,
                                                         GAsyncResult *result,
                                                         GError **error);
  gpointer padding[21];
};
typedef struct _GTlsServerConnectionInterface GTlsServerConnectionInterface;
struct _GTlsServerConnectionInterface
{
  GTypeInterface g_iface;
};
typedef struct _GTlsPasswordClass GTlsPasswordClass;
typedef struct _GTlsPasswordPrivate GTlsPasswordPrivate;
struct _GTlsPassword
{
  GObject parent_instance;
  GTlsPasswordPrivate *priv;
};
struct _GTlsPasswordClass
{
  GObjectClass parent_class;
  const guchar * ( *get_value) (GTlsPassword *password,
                                              gsize *length);
  void ( *set_value) (GTlsPassword *password,
                                              guchar *value,
                                              gssize length,
                                              GDestroyNotify destroy);
  const gchar* ( *get_default_warning) (GTlsPassword *password);
  gpointer padding[4];
};
typedef GFile * (* GVfsFileLookupFunc) (GVfs *vfs,
                                        const char *identifier,
                                        gpointer user_data);
typedef struct _GVfsClass GVfsClass;
struct _GVfs
{
  GObject parent_instance;
};
struct _GVfsClass
{
  GObjectClass parent_class;
  gboolean (* is_active) (GVfs *vfs);
  GFile * (* get_file_for_path) (GVfs *vfs,
                                                       const char *path);
  GFile * (* get_file_for_uri) (GVfs *vfs,
                                                       const char *uri);
  const gchar * const * (* get_supported_uri_schemes) (GVfs *vfs);
  GFile * (* parse_name) (GVfs *vfs,
                                                       const char *parse_name);
  void (* local_file_add_info) (GVfs *vfs,
             const char *filename,
             guint64 device,
             GFileAttributeMatcher *attribute_matcher,
             GFileInfo *info,
             GCancellable *cancellable,
             gpointer *extra_data,
             GDestroyNotify *free_extra_data);
  void (* add_writable_namespaces) (GVfs *vfs,
             GFileAttributeInfoList *list);
  gboolean (* local_file_set_attributes) (GVfs *vfs,
             const char *filename,
             GFileInfo *info,
                                                       GFileQueryInfoFlags flags,
                                                       GCancellable *cancellable,
             GError **error);
  void (* local_file_removed) (GVfs *vfs,
             const char *filename);
  void (* local_file_moved) (GVfs *vfs,
             const char *source,
             const char *dest);
  GIcon * (* deserialize_icon) (GVfs *vfs,
                                                       GVariant *value);
  void (*_g_reserved1) (void);
  void (*_g_reserved2) (void);
  void (*_g_reserved3) (void);
  void (*_g_reserved4) (void);
  void (*_g_reserved5) (void);
  void (*_g_reserved6) (void);
};
typedef struct _GVolumeIface GVolumeIface;
struct _GVolumeIface
{
  GTypeInterface g_iface;
  void (* changed) (GVolume *volume);
  void (* removed) (GVolume *volume);
  char * (* get_name) (GVolume *volume);
  GIcon * (* get_icon) (GVolume *volume);
  char * (* get_uuid) (GVolume *volume);
  GDrive * (* get_drive) (GVolume *volume);
  GMount * (* get_mount) (GVolume *volume);
  gboolean (* can_mount) (GVolume *volume);
  gboolean (* can_eject) (GVolume *volume);
  void (* mount_fn) (GVolume *volume,
                                         GMountMountFlags flags,
                                         GMountOperation *mount_operation,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* mount_finish) (GVolume *volume,
                                         GAsyncResult *result,
                                         GError **error);
  void (* eject) (GVolume *volume,
                                         GMountUnmountFlags flags,
                                         GCancellable *cancellable,
                                         GAsyncReadyCallback callback,
                                         gpointer user_data);
  gboolean (* eject_finish) (GVolume *volume,
                                         GAsyncResult *result,
                                         GError **error);
  char * (* get_identifier) (GVolume *volume,
                                         const char *kind);
  char ** (* enumerate_identifiers) (GVolume *volume);
  gboolean (* should_automount) (GVolume *volume);
  GFile * (* get_activation_root) (GVolume *volume);
  void (* eject_with_operation) (GVolume *volume,
                                             GMountUnmountFlags flags,
                                             GMountOperation *mount_operation,
                                             GCancellable *cancellable,
                                             GAsyncReadyCallback callback,
                                             gpointer user_data);
  gboolean (* eject_with_operation_finish) (GVolume *volume,
                                             GAsyncResult *result,
                                             GError **error);
  const gchar * (* get_sort_key) (GVolume *volume);
  GIcon * (* get_symbolic_icon) (GVolume *volume);
};
typedef struct _GZlibCompressorClass GZlibCompressorClass;
struct _GZlibCompressorClass
{
  GObjectClass parent_class;
};
typedef struct _GZlibDecompressorClass GZlibDecompressorClass;
struct _GZlibDecompressorClass
{
  GObjectClass parent_class;
};
typedef struct _GDBusInterfaceIface GDBusInterfaceIface;
struct _GDBusInterfaceIface
{
  GTypeInterface parent_iface;
  GDBusInterfaceInfo *(*get_info) (GDBusInterface *interface_);
  GDBusObject *(*get_object) (GDBusInterface *interface_);
  void (*set_object) (GDBusInterface *interface_,
                                       GDBusObject *object);
  GDBusObject *(*dup_object) (GDBusInterface *interface_);
};
typedef struct _GDBusInterfaceSkeletonClass GDBusInterfaceSkeletonClass;
typedef struct _GDBusInterfaceSkeletonPrivate GDBusInterfaceSkeletonPrivate;
struct _GDBusInterfaceSkeleton
{
  GObject parent_instance;
  GDBusInterfaceSkeletonPrivate *priv;
};
struct _GDBusInterfaceSkeletonClass
{
  GObjectClass parent_class;
  GDBusInterfaceInfo *(*get_info) (GDBusInterfaceSkeleton *interface_);
  GDBusInterfaceVTable *(*get_vtable) (GDBusInterfaceSkeleton *interface_);
  GVariant *(*get_properties) (GDBusInterfaceSkeleton *interface_);
  void (*flush) (GDBusInterfaceSkeleton *interface_);
  gpointer vfunc_padding[8];
  gboolean (*g_authorize_method) (GDBusInterfaceSkeleton *interface_,
                                  GDBusMethodInvocation *invocation);
  gpointer signal_padding[8];
};
typedef struct _GDBusObjectIface GDBusObjectIface;
struct _GDBusObjectIface
{
  GTypeInterface parent_iface;
  const gchar *(*get_object_path) (GDBusObject *object);
  GList *(*get_interfaces) (GDBusObject *object);
  GDBusInterface *(*get_interface) (GDBusObject *object,
                                       const gchar *interface_name);
  void (*interface_added) (GDBusObject *object,
                             GDBusInterface *interface_);
  void (*interface_removed) (GDBusObject *object,
                             GDBusInterface *interface_);
};
typedef struct _GDBusObjectSkeletonClass GDBusObjectSkeletonClass;
typedef struct _GDBusObjectSkeletonPrivate GDBusObjectSkeletonPrivate;
struct _GDBusObjectSkeleton
{
  GObject parent_instance;
  GDBusObjectSkeletonPrivate *priv;
};
struct _GDBusObjectSkeletonClass
{
  GObjectClass parent_class;
  gboolean (*authorize_method) (GDBusObjectSkeleton *object,
                                GDBusInterfaceSkeleton *interface_,
                                GDBusMethodInvocation *invocation);
  gpointer padding[8];
};
typedef struct _GDBusObjectProxyClass GDBusObjectProxyClass;
typedef struct _GDBusObjectProxyPrivate GDBusObjectProxyPrivate;
struct _GDBusObjectProxy
{
  GObject parent_instance;
  GDBusObjectProxyPrivate *priv;
};
struct _GDBusObjectProxyClass
{
  GObjectClass parent_class;
  gpointer padding[8];
};
typedef struct _GDBusObjectManagerIface GDBusObjectManagerIface;
struct _GDBusObjectManagerIface
{
  GTypeInterface parent_iface;
  const gchar *(*get_object_path) (GDBusObjectManager *manager);
  GList *(*get_objects) (GDBusObjectManager *manager);
  GDBusObject *(*get_object) (GDBusObjectManager *manager,
                                       const gchar *object_path);
  GDBusInterface *(*get_interface) (GDBusObjectManager *manager,
                                       const gchar *object_path,
                                       const gchar *interface_name);
  void (*object_added) (GDBusObjectManager *manager,
                                           GDBusObject *object);
  void (*object_removed) (GDBusObjectManager *manager,
                                           GDBusObject *object);
  void (*interface_added) (GDBusObjectManager *manager,
                                           GDBusObject *object,
                                           GDBusInterface *interface_);
  void (*interface_removed) (GDBusObjectManager *manager,
                                           GDBusObject *object,
                                           GDBusInterface *interface_);
};
typedef struct _GDBusObjectManagerClientClass GDBusObjectManagerClientClass;
typedef struct _GDBusObjectManagerClientPrivate GDBusObjectManagerClientPrivate;
struct _GDBusObjectManagerClient
{
  GObject parent_instance;
  GDBusObjectManagerClientPrivate *priv;
};
struct _GDBusObjectManagerClientClass
{
  GObjectClass parent_class;
  void (*interface_proxy_signal) (GDBusObjectManagerClient *manager,
                                                 GDBusObjectProxy *object_proxy,
                                                 GDBusProxy *interface_proxy,
                                                 const gchar *sender_name,
                                                 const gchar *signal_name,
                                                 GVariant *parameters);
  void (*interface_proxy_properties_changed) (GDBusObjectManagerClient *manager,
                                                 GDBusObjectProxy *object_proxy,
                                                 GDBusProxy *interface_proxy,
                                                 GVariant *changed_properties,
                                                 const gchar* const *invalidated_properties);
  gpointer padding[8];
};
typedef struct _GDBusObjectManagerServerClass GDBusObjectManagerServerClass;
typedef struct _GDBusObjectManagerServerPrivate GDBusObjectManagerServerPrivate;
struct _GDBusObjectManagerServer
{
  GObject parent_instance;
  GDBusObjectManagerServerPrivate *priv;
};
struct _GDBusObjectManagerServerClass
{
  GObjectClass parent_class;
  gpointer padding[8];
};
typedef struct _GRemoteActionGroupInterface GRemoteActionGroupInterface;
struct _GRemoteActionGroupInterface
{
  GTypeInterface g_iface;
  void (* activate_action_full) (GRemoteActionGroup *remote,
                                     const gchar *action_name,
                                     GVariant *parameter,
                                     GVariant *platform_data);
  void (* change_action_state_full) (GRemoteActionGroup *remote,
                                     const gchar *action_name,
                                     GVariant *value,
                                     GVariant *platform_data);
};
typedef struct _GMenuModelPrivate GMenuModelPrivate;
typedef struct _GMenuModelClass GMenuModelClass;
typedef struct _GMenuAttributeIterPrivate GMenuAttributeIterPrivate;
typedef struct _GMenuAttributeIterClass GMenuAttributeIterClass;
typedef struct _GMenuAttributeIter GMenuAttributeIter;
typedef struct _GMenuLinkIterPrivate GMenuLinkIterPrivate;
typedef struct _GMenuLinkIterClass GMenuLinkIterClass;
typedef struct _GMenuLinkIter GMenuLinkIter;
struct _GMenuModel
{
  GObject parent_instance;
  GMenuModelPrivate *priv;
};
struct _GMenuModelClass
{
  GObjectClass parent_class;
  gboolean (*is_mutable) (GMenuModel *model);
  gint (*get_n_items) (GMenuModel *model);
  void (*get_item_attributes) (GMenuModel *model,
                                                             gint item_index,
                                                             GHashTable **attributes);
  GMenuAttributeIter * (*iterate_item_attributes) (GMenuModel *model,
                                                             gint item_index);
  GVariant * (*get_item_attribute_value) (GMenuModel *model,
                                                             gint item_index,
                                                             const gchar *attribute,
                                                             const GVariantType *expected_type);
  void (*get_item_links) (GMenuModel *model,
                                                             gint item_index,
                                                             GHashTable **links);
  GMenuLinkIter * (*iterate_item_links) (GMenuModel *model,
                                                             gint item_index);
  GMenuModel * (*get_item_link) (GMenuModel *model,
                                                             gint item_index,
                                                             const gchar *link);
};
struct _GMenuAttributeIter
{
  GObject parent_instance;
  GMenuAttributeIterPrivate *priv;
};
struct _GMenuAttributeIterClass
{
  GObjectClass parent_class;
  gboolean (*get_next) (GMenuAttributeIter *iter,
                             const gchar **out_name,
                             GVariant **value);
};
struct _GMenuLinkIter
{
  GObject parent_instance;
  GMenuLinkIterPrivate *priv;
};
struct _GMenuLinkIterClass
{
  GObjectClass parent_class;
  gboolean (*get_next) (GMenuLinkIter *iter,
                             const gchar **out_link,
                             GMenuModel **value);
};
typedef struct _GMenuItem GMenuItem;
typedef struct _GMenu GMenu;
typedef struct _GDBusMenuModel GDBusMenuModel;
 typedef struct _GListModel GListModel; typedef struct _GListModelInterface GListModelInterface; typedef GListModel *GListModel_autoptr; typedef GList *GListModel_listautoptr; typedef GSList *GListModel_slistautoptr; typedef GQueue *GListModel_queueautoptr;
 
struct _GListModelInterface
{
  GTypeInterface g_iface;
  GType (* get_item_type) (GListModel *list);
  guint (* get_n_items) (GListModel *list);
  gpointer (* get_item) (GListModel *list,
                                 guint position);
};
 typedef struct _GListStore GListStore; typedef struct { GObjectClass parent_class; } GListStoreClass; typedef GListStore *GListStore_autoptr; typedef GList *GListStore_listautoptr; typedef GSList *GListStore_slistautoptr; typedef GQueue *GListStore_queueautoptr;
 

typedef GAction *GAction_autoptr; typedef GList *GAction_listautoptr; typedef GSList *GAction_slistautoptr; typedef GQueue *GAction_queueautoptr;
 
typedef GActionMap *GActionMap_autoptr; typedef GList *GActionMap_listautoptr; typedef GSList *GActionMap_slistautoptr; typedef GQueue *GActionMap_queueautoptr;
 
typedef GAppInfo *GAppInfo_autoptr; typedef GList *GAppInfo_listautoptr; typedef GSList *GAppInfo_slistautoptr; typedef GQueue *GAppInfo_queueautoptr;
 
typedef GAppLaunchContext *GAppLaunchContext_autoptr; typedef GList *GAppLaunchContext_listautoptr; typedef GSList *GAppLaunchContext_slistautoptr; typedef GQueue *GAppLaunchContext_queueautoptr;
 
typedef GAppInfoMonitor *GAppInfoMonitor_autoptr; typedef GList *GAppInfoMonitor_listautoptr; typedef GSList *GAppInfoMonitor_slistautoptr; typedef GQueue *GAppInfoMonitor_queueautoptr;
 
typedef GApplicationCommandLine *GApplicationCommandLine_autoptr; typedef GList *GApplicationCommandLine_listautoptr; typedef GSList *GApplicationCommandLine_slistautoptr; typedef GQueue *GApplicationCommandLine_queueautoptr;
 
typedef GApplication *GApplication_autoptr; typedef GList *GApplication_listautoptr; typedef GSList *GApplication_slistautoptr; typedef GQueue *GApplication_queueautoptr;
 
typedef GAsyncInitable *GAsyncInitable_autoptr; typedef GList *GAsyncInitable_listautoptr; typedef GSList *GAsyncInitable_slistautoptr; typedef GQueue *GAsyncInitable_queueautoptr;
 
typedef GAsyncResult *GAsyncResult_autoptr; typedef GList *GAsyncResult_listautoptr; typedef GSList *GAsyncResult_slistautoptr; typedef GQueue *GAsyncResult_queueautoptr;
 
typedef GBufferedInputStream *GBufferedInputStream_autoptr; typedef GList *GBufferedInputStream_listautoptr; typedef GSList *GBufferedInputStream_slistautoptr; typedef GQueue *GBufferedInputStream_queueautoptr;
 
typedef GBufferedOutputStream *GBufferedOutputStream_autoptr; typedef GList *GBufferedOutputStream_listautoptr; typedef GSList *GBufferedOutputStream_slistautoptr; typedef GQueue *GBufferedOutputStream_queueautoptr;
 
typedef GBytesIcon *GBytesIcon_autoptr; typedef GList *GBytesIcon_listautoptr; typedef GSList *GBytesIcon_slistautoptr; typedef GQueue *GBytesIcon_queueautoptr;
 
typedef GCancellable *GCancellable_autoptr; typedef GList *GCancellable_listautoptr; typedef GSList *GCancellable_slistautoptr; typedef GQueue *GCancellable_queueautoptr;
 
typedef GCharsetConverter *GCharsetConverter_autoptr; typedef GList *GCharsetConverter_listautoptr; typedef GSList *GCharsetConverter_slistautoptr; typedef GQueue *GCharsetConverter_queueautoptr;
 
typedef GConverter *GConverter_autoptr; typedef GList *GConverter_listautoptr; typedef GSList *GConverter_slistautoptr; typedef GQueue *GConverter_queueautoptr;
 
typedef GConverterInputStream *GConverterInputStream_autoptr; typedef GList *GConverterInputStream_listautoptr; typedef GSList *GConverterInputStream_slistautoptr; typedef GQueue *GConverterInputStream_queueautoptr;
 
typedef GConverterOutputStream *GConverterOutputStream_autoptr; typedef GList *GConverterOutputStream_listautoptr; typedef GSList *GConverterOutputStream_slistautoptr; typedef GQueue *GConverterOutputStream_queueautoptr;
 
typedef GCredentials *GCredentials_autoptr; typedef GList *GCredentials_listautoptr; typedef GSList *GCredentials_slistautoptr; typedef GQueue *GCredentials_queueautoptr;
 
typedef GDatagramBased *GDatagramBased_autoptr; typedef GList *GDatagramBased_listautoptr; typedef GSList *GDatagramBased_slistautoptr; typedef GQueue *GDatagramBased_queueautoptr;
 
typedef GDataInputStream *GDataInputStream_autoptr; typedef GList *GDataInputStream_listautoptr; typedef GSList *GDataInputStream_slistautoptr; typedef GQueue *GDataInputStream_queueautoptr;
 
typedef GDataOutputStream *GDataOutputStream_autoptr; typedef GList *GDataOutputStream_listautoptr; typedef GSList *GDataOutputStream_slistautoptr; typedef GQueue *GDataOutputStream_queueautoptr;
 
typedef GDBusActionGroup *GDBusActionGroup_autoptr; typedef GList *GDBusActionGroup_listautoptr; typedef GSList *GDBusActionGroup_slistautoptr; typedef GQueue *GDBusActionGroup_queueautoptr;
 
typedef GDBusAuthObserver *GDBusAuthObserver_autoptr; typedef GList *GDBusAuthObserver_listautoptr; typedef GSList *GDBusAuthObserver_slistautoptr; typedef GQueue *GDBusAuthObserver_queueautoptr;
 
typedef GDBusConnection *GDBusConnection_autoptr; typedef GList *GDBusConnection_listautoptr; typedef GSList *GDBusConnection_slistautoptr; typedef GQueue *GDBusConnection_queueautoptr;
 
typedef GDBusInterface *GDBusInterface_autoptr; typedef GList *GDBusInterface_listautoptr; typedef GSList *GDBusInterface_slistautoptr; typedef GQueue *GDBusInterface_queueautoptr;
 
typedef GDBusInterfaceSkeleton *GDBusInterfaceSkeleton_autoptr; typedef GList *GDBusInterfaceSkeleton_listautoptr; typedef GSList *GDBusInterfaceSkeleton_slistautoptr; typedef GQueue *GDBusInterfaceSkeleton_queueautoptr;
 
typedef GDBusMenuModel *GDBusMenuModel_autoptr; typedef GList *GDBusMenuModel_listautoptr; typedef GSList *GDBusMenuModel_slistautoptr; typedef GQueue *GDBusMenuModel_queueautoptr;
 
typedef GDBusMessage *GDBusMessage_autoptr; typedef GList *GDBusMessage_listautoptr; typedef GSList *GDBusMessage_slistautoptr; typedef GQueue *GDBusMessage_queueautoptr;
 
typedef GDBusMethodInvocation *GDBusMethodInvocation_autoptr; typedef GList *GDBusMethodInvocation_listautoptr; typedef GSList *GDBusMethodInvocation_slistautoptr; typedef GQueue *GDBusMethodInvocation_queueautoptr;
 
typedef GDBusNodeInfo *GDBusNodeInfo_autoptr; typedef GList *GDBusNodeInfo_listautoptr; typedef GSList *GDBusNodeInfo_slistautoptr; typedef GQueue *GDBusNodeInfo_queueautoptr;
 
typedef GDBusObject *GDBusObject_autoptr; typedef GList *GDBusObject_listautoptr; typedef GSList *GDBusObject_slistautoptr; typedef GQueue *GDBusObject_queueautoptr;
 
typedef GDBusObjectManagerClient *GDBusObjectManagerClient_autoptr; typedef GList *GDBusObjectManagerClient_listautoptr; typedef GSList *GDBusObjectManagerClient_slistautoptr; typedef GQueue *GDBusObjectManagerClient_queueautoptr;
 
typedef GDBusObjectManager *GDBusObjectManager_autoptr; typedef GList *GDBusObjectManager_listautoptr; typedef GSList *GDBusObjectManager_slistautoptr; typedef GQueue *GDBusObjectManager_queueautoptr;
 
typedef GDBusObjectManagerServer *GDBusObjectManagerServer_autoptr; typedef GList *GDBusObjectManagerServer_listautoptr; typedef GSList *GDBusObjectManagerServer_slistautoptr; typedef GQueue *GDBusObjectManagerServer_queueautoptr;
 
typedef GDBusObjectProxy *GDBusObjectProxy_autoptr; typedef GList *GDBusObjectProxy_listautoptr; typedef GSList *GDBusObjectProxy_slistautoptr; typedef GQueue *GDBusObjectProxy_queueautoptr;
 
typedef GDBusObjectSkeleton *GDBusObjectSkeleton_autoptr; typedef GList *GDBusObjectSkeleton_listautoptr; typedef GSList *GDBusObjectSkeleton_slistautoptr; typedef GQueue *GDBusObjectSkeleton_queueautoptr;
 
typedef GDBusProxy *GDBusProxy_autoptr; typedef GList *GDBusProxy_listautoptr; typedef GSList *GDBusProxy_slistautoptr; typedef GQueue *GDBusProxy_queueautoptr;
 
typedef GDBusServer *GDBusServer_autoptr; typedef GList *GDBusServer_listautoptr; typedef GSList *GDBusServer_slistautoptr; typedef GQueue *GDBusServer_queueautoptr;
 
typedef GDrive *GDrive_autoptr; typedef GList *GDrive_listautoptr; typedef GSList *GDrive_slistautoptr; typedef GQueue *GDrive_queueautoptr;
 
typedef GEmblemedIcon *GEmblemedIcon_autoptr; typedef GList *GEmblemedIcon_listautoptr; typedef GSList *GEmblemedIcon_slistautoptr; typedef GQueue *GEmblemedIcon_queueautoptr;
 
typedef GEmblem *GEmblem_autoptr; typedef GList *GEmblem_listautoptr; typedef GSList *GEmblem_slistautoptr; typedef GQueue *GEmblem_queueautoptr;
 
typedef GFileEnumerator *GFileEnumerator_autoptr; typedef GList *GFileEnumerator_listautoptr; typedef GSList *GFileEnumerator_slistautoptr; typedef GQueue *GFileEnumerator_queueautoptr;
 
typedef GFile *GFile_autoptr; typedef GList *GFile_listautoptr; typedef GSList *GFile_slistautoptr; typedef GQueue *GFile_queueautoptr;
 
typedef GFileAttributeInfoList *GFileAttributeInfoList_autoptr; typedef GList *GFileAttributeInfoList_listautoptr; typedef GSList *GFileAttributeInfoList_slistautoptr; typedef GQueue *GFileAttributeInfoList_queueautoptr;
 
typedef GFileIcon *GFileIcon_autoptr; typedef GList *GFileIcon_listautoptr; typedef GSList *GFileIcon_slistautoptr; typedef GQueue *GFileIcon_queueautoptr;
 
typedef GFileInfo *GFileInfo_autoptr; typedef GList *GFileInfo_listautoptr; typedef GSList *GFileInfo_slistautoptr; typedef GQueue *GFileInfo_queueautoptr;
 
typedef GFileInputStream *GFileInputStream_autoptr; typedef GList *GFileInputStream_listautoptr; typedef GSList *GFileInputStream_slistautoptr; typedef GQueue *GFileInputStream_queueautoptr;
 
typedef GFileIOStream *GFileIOStream_autoptr; typedef GList *GFileIOStream_listautoptr; typedef GSList *GFileIOStream_slistautoptr; typedef GQueue *GFileIOStream_queueautoptr;
 
typedef GFileMonitor *GFileMonitor_autoptr; typedef GList *GFileMonitor_listautoptr; typedef GSList *GFileMonitor_slistautoptr; typedef GQueue *GFileMonitor_queueautoptr;
 
typedef GFilenameCompleter *GFilenameCompleter_autoptr; typedef GList *GFilenameCompleter_listautoptr; typedef GSList *GFilenameCompleter_slistautoptr; typedef GQueue *GFilenameCompleter_queueautoptr;
 
typedef GFileOutputStream *GFileOutputStream_autoptr; typedef GList *GFileOutputStream_listautoptr; typedef GSList *GFileOutputStream_slistautoptr; typedef GQueue *GFileOutputStream_queueautoptr;
 
typedef GFilterInputStream *GFilterInputStream_autoptr; typedef GList *GFilterInputStream_listautoptr; typedef GSList *GFilterInputStream_slistautoptr; typedef GQueue *GFilterInputStream_queueautoptr;
 
typedef GFilterOutputStream *GFilterOutputStream_autoptr; typedef GList *GFilterOutputStream_listautoptr; typedef GSList *GFilterOutputStream_slistautoptr; typedef GQueue *GFilterOutputStream_queueautoptr;
 
typedef GIcon *GIcon_autoptr; typedef GList *GIcon_listautoptr; typedef GSList *GIcon_slistautoptr; typedef GQueue *GIcon_queueautoptr;
 
typedef GInetAddress *GInetAddress_autoptr; typedef GList *GInetAddress_listautoptr; typedef GSList *GInetAddress_slistautoptr; typedef GQueue *GInetAddress_queueautoptr;
 
typedef GInetAddressMask *GInetAddressMask_autoptr; typedef GList *GInetAddressMask_listautoptr; typedef GSList *GInetAddressMask_slistautoptr; typedef GQueue *GInetAddressMask_queueautoptr;
 
typedef GInetSocketAddress *GInetSocketAddress_autoptr; typedef GList *GInetSocketAddress_listautoptr; typedef GSList *GInetSocketAddress_slistautoptr; typedef GQueue *GInetSocketAddress_queueautoptr;
 
typedef GInitable *GInitable_autoptr; typedef GList *GInitable_listautoptr; typedef GSList *GInitable_slistautoptr; typedef GQueue *GInitable_queueautoptr;
 
typedef GInputStream *GInputStream_autoptr; typedef GList *GInputStream_listautoptr; typedef GSList *GInputStream_slistautoptr; typedef GQueue *GInputStream_queueautoptr;
 
typedef GIOModule *GIOModule_autoptr; typedef GList *GIOModule_listautoptr; typedef GSList *GIOModule_slistautoptr; typedef GQueue *GIOModule_queueautoptr;
 
typedef GIOStream *GIOStream_autoptr; typedef GList *GIOStream_listautoptr; typedef GSList *GIOStream_slistautoptr; typedef GQueue *GIOStream_queueautoptr;
 
typedef GLoadableIcon *GLoadableIcon_autoptr; typedef GList *GLoadableIcon_listautoptr; typedef GSList *GLoadableIcon_slistautoptr; typedef GQueue *GLoadableIcon_queueautoptr;
 
typedef GMemoryInputStream *GMemoryInputStream_autoptr; typedef GList *GMemoryInputStream_listautoptr; typedef GSList *GMemoryInputStream_slistautoptr; typedef GQueue *GMemoryInputStream_queueautoptr;
 
typedef GMemoryOutputStream *GMemoryOutputStream_autoptr; typedef GList *GMemoryOutputStream_listautoptr; typedef GSList *GMemoryOutputStream_slistautoptr; typedef GQueue *GMemoryOutputStream_queueautoptr;
 
typedef GMenu *GMenu_autoptr; typedef GList *GMenu_listautoptr; typedef GSList *GMenu_slistautoptr; typedef GQueue *GMenu_queueautoptr;
 
typedef GMenuItem *GMenuItem_autoptr; typedef GList *GMenuItem_listautoptr; typedef GSList *GMenuItem_slistautoptr; typedef GQueue *GMenuItem_queueautoptr;
 
typedef GMenuModel *GMenuModel_autoptr; typedef GList *GMenuModel_listautoptr; typedef GSList *GMenuModel_slistautoptr; typedef GQueue *GMenuModel_queueautoptr;
 
typedef GMenuAttributeIter *GMenuAttributeIter_autoptr; typedef GList *GMenuAttributeIter_listautoptr; typedef GSList *GMenuAttributeIter_slistautoptr; typedef GQueue *GMenuAttributeIter_queueautoptr;
 
typedef GMenuLinkIter *GMenuLinkIter_autoptr; typedef GList *GMenuLinkIter_listautoptr; typedef GSList *GMenuLinkIter_slistautoptr; typedef GQueue *GMenuLinkIter_queueautoptr;
 
typedef GMount *GMount_autoptr; typedef GList *GMount_listautoptr; typedef GSList *GMount_slistautoptr; typedef GQueue *GMount_queueautoptr;
 
typedef GMountOperation *GMountOperation_autoptr; typedef GList *GMountOperation_listautoptr; typedef GSList *GMountOperation_slistautoptr; typedef GQueue *GMountOperation_queueautoptr;
 
typedef GNativeVolumeMonitor *GNativeVolumeMonitor_autoptr; typedef GList *GNativeVolumeMonitor_listautoptr; typedef GSList *GNativeVolumeMonitor_slistautoptr; typedef GQueue *GNativeVolumeMonitor_queueautoptr;
 
typedef GNetworkAddress *GNetworkAddress_autoptr; typedef GList *GNetworkAddress_listautoptr; typedef GSList *GNetworkAddress_slistautoptr; typedef GQueue *GNetworkAddress_queueautoptr;
 
typedef GNetworkMonitor *GNetworkMonitor_autoptr; typedef GList *GNetworkMonitor_listautoptr; typedef GSList *GNetworkMonitor_slistautoptr; typedef GQueue *GNetworkMonitor_queueautoptr;
 
typedef GNetworkService *GNetworkService_autoptr; typedef GList *GNetworkService_listautoptr; typedef GSList *GNetworkService_slistautoptr; typedef GQueue *GNetworkService_queueautoptr;
 
typedef GNotification *GNotification_autoptr; typedef GList *GNotification_listautoptr; typedef GSList *GNotification_slistautoptr; typedef GQueue *GNotification_queueautoptr;
 
typedef GOutputStream *GOutputStream_autoptr; typedef GList *GOutputStream_listautoptr; typedef GSList *GOutputStream_slistautoptr; typedef GQueue *GOutputStream_queueautoptr;
 
typedef GPermission *GPermission_autoptr; typedef GList *GPermission_listautoptr; typedef GSList *GPermission_slistautoptr; typedef GQueue *GPermission_queueautoptr;
 
typedef GPollableInputStream *GPollableInputStream_autoptr; typedef GList *GPollableInputStream_listautoptr; typedef GSList *GPollableInputStream_slistautoptr; typedef GQueue *GPollableInputStream_queueautoptr;
 
typedef GPollableOutputStream *GPollableOutputStream_autoptr; typedef GList *GPollableOutputStream_listautoptr; typedef GSList *GPollableOutputStream_slistautoptr; typedef GQueue *GPollableOutputStream_queueautoptr;
 
typedef GPropertyAction *GPropertyAction_autoptr; typedef GList *GPropertyAction_listautoptr; typedef GSList *GPropertyAction_slistautoptr; typedef GQueue *GPropertyAction_queueautoptr;
 
typedef GProxyAddressEnumerator *GProxyAddressEnumerator_autoptr; typedef GList *GProxyAddressEnumerator_listautoptr; typedef GSList *GProxyAddressEnumerator_slistautoptr; typedef GQueue *GProxyAddressEnumerator_queueautoptr;
 
typedef GProxyAddress *GProxyAddress_autoptr; typedef GList *GProxyAddress_listautoptr; typedef GSList *GProxyAddress_slistautoptr; typedef GQueue *GProxyAddress_queueautoptr;
 
typedef GProxy *GProxy_autoptr; typedef GList *GProxy_listautoptr; typedef GSList *GProxy_slistautoptr; typedef GQueue *GProxy_queueautoptr;
 
typedef GProxyResolver *GProxyResolver_autoptr; typedef GList *GProxyResolver_listautoptr; typedef GSList *GProxyResolver_slistautoptr; typedef GQueue *GProxyResolver_queueautoptr;
 
typedef GRemoteActionGroup *GRemoteActionGroup_autoptr; typedef GList *GRemoteActionGroup_listautoptr; typedef GSList *GRemoteActionGroup_slistautoptr; typedef GQueue *GRemoteActionGroup_queueautoptr;
 
typedef GResolver *GResolver_autoptr; typedef GList *GResolver_listautoptr; typedef GSList *GResolver_slistautoptr; typedef GQueue *GResolver_queueautoptr;
 
typedef GResource *GResource_autoptr; typedef GList *GResource_listautoptr; typedef GSList *GResource_slistautoptr; typedef GQueue *GResource_queueautoptr;
 
typedef GSeekable *GSeekable_autoptr; typedef GList *GSeekable_listautoptr; typedef GSList *GSeekable_slistautoptr; typedef GQueue *GSeekable_queueautoptr;
 
typedef GSettingsBackend *GSettingsBackend_autoptr; typedef GList *GSettingsBackend_listautoptr; typedef GSList *GSettingsBackend_slistautoptr; typedef GQueue *GSettingsBackend_queueautoptr;
 
typedef GSettingsSchema *GSettingsSchema_autoptr; typedef GList *GSettingsSchema_listautoptr; typedef GSList *GSettingsSchema_slistautoptr; typedef GQueue *GSettingsSchema_queueautoptr;
 
typedef GSettingsSchemaKey *GSettingsSchemaKey_autoptr; typedef GList *GSettingsSchemaKey_listautoptr; typedef GSList *GSettingsSchemaKey_slistautoptr; typedef GQueue *GSettingsSchemaKey_queueautoptr;
 
typedef GSettingsSchemaSource *GSettingsSchemaSource_autoptr; typedef GList *GSettingsSchemaSource_listautoptr; typedef GSList *GSettingsSchemaSource_slistautoptr; typedef GQueue *GSettingsSchemaSource_queueautoptr;
 
typedef GSettings *GSettings_autoptr; typedef GList *GSettings_listautoptr; typedef GSList *GSettings_slistautoptr; typedef GQueue *GSettings_queueautoptr;
 
typedef GSimpleActionGroup *GSimpleActionGroup_autoptr; typedef GList *GSimpleActionGroup_listautoptr; typedef GSList *GSimpleActionGroup_slistautoptr; typedef GQueue *GSimpleActionGroup_queueautoptr;
 
typedef GSimpleAction *GSimpleAction_autoptr; typedef GList *GSimpleAction_listautoptr; typedef GSList *GSimpleAction_slistautoptr; typedef GQueue *GSimpleAction_queueautoptr;
 
typedef GSimpleAsyncResult *GSimpleAsyncResult_autoptr; typedef GList *GSimpleAsyncResult_listautoptr; typedef GSList *GSimpleAsyncResult_slistautoptr; typedef GQueue *GSimpleAsyncResult_queueautoptr;
 
typedef GSimplePermission *GSimplePermission_autoptr; typedef GList *GSimplePermission_listautoptr; typedef GSList *GSimplePermission_slistautoptr; typedef GQueue *GSimplePermission_queueautoptr;
 
typedef GSimpleProxyResolver *GSimpleProxyResolver_autoptr; typedef GList *GSimpleProxyResolver_listautoptr; typedef GSList *GSimpleProxyResolver_slistautoptr; typedef GQueue *GSimpleProxyResolver_queueautoptr;
 
typedef GSocketAddressEnumerator *GSocketAddressEnumerator_autoptr; typedef GList *GSocketAddressEnumerator_listautoptr; typedef GSList *GSocketAddressEnumerator_slistautoptr; typedef GQueue *GSocketAddressEnumerator_queueautoptr;
 
typedef GSocketAddress *GSocketAddress_autoptr; typedef GList *GSocketAddress_listautoptr; typedef GSList *GSocketAddress_slistautoptr; typedef GQueue *GSocketAddress_queueautoptr;
 
typedef GSocketClient *GSocketClient_autoptr; typedef GList *GSocketClient_listautoptr; typedef GSList *GSocketClient_slistautoptr; typedef GQueue *GSocketClient_queueautoptr;
 
typedef GSocketConnectable *GSocketConnectable_autoptr; typedef GList *GSocketConnectable_listautoptr; typedef GSList *GSocketConnectable_slistautoptr; typedef GQueue *GSocketConnectable_queueautoptr;
 
typedef GSocketConnection *GSocketConnection_autoptr; typedef GList *GSocketConnection_listautoptr; typedef GSList *GSocketConnection_slistautoptr; typedef GQueue *GSocketConnection_queueautoptr;
 
typedef GSocketControlMessage *GSocketControlMessage_autoptr; typedef GList *GSocketControlMessage_listautoptr; typedef GSList *GSocketControlMessage_slistautoptr; typedef GQueue *GSocketControlMessage_queueautoptr;
 
typedef GSocket *GSocket_autoptr; typedef GList *GSocket_listautoptr; typedef GSList *GSocket_slistautoptr; typedef GQueue *GSocket_queueautoptr;
 
typedef GSocketListener *GSocketListener_autoptr; typedef GList *GSocketListener_listautoptr; typedef GSList *GSocketListener_slistautoptr; typedef GQueue *GSocketListener_queueautoptr;
 
typedef GSocketService *GSocketService_autoptr; typedef GList *GSocketService_listautoptr; typedef GSList *GSocketService_slistautoptr; typedef GQueue *GSocketService_queueautoptr;
 
typedef GSubprocess *GSubprocess_autoptr; typedef GList *GSubprocess_listautoptr; typedef GSList *GSubprocess_slistautoptr; typedef GQueue *GSubprocess_queueautoptr;
 
typedef GSubprocessLauncher *GSubprocessLauncher_autoptr; typedef GList *GSubprocessLauncher_listautoptr; typedef GSList *GSubprocessLauncher_slistautoptr; typedef GQueue *GSubprocessLauncher_queueautoptr;
 
typedef GTask *GTask_autoptr; typedef GList *GTask_listautoptr; typedef GSList *GTask_slistautoptr; typedef GQueue *GTask_queueautoptr;
 
typedef GTcpConnection *GTcpConnection_autoptr; typedef GList *GTcpConnection_listautoptr; typedef GSList *GTcpConnection_slistautoptr; typedef GQueue *GTcpConnection_queueautoptr;
 
typedef GTcpWrapperConnection *GTcpWrapperConnection_autoptr; typedef GList *GTcpWrapperConnection_listautoptr; typedef GSList *GTcpWrapperConnection_slistautoptr; typedef GQueue *GTcpWrapperConnection_queueautoptr;
 
typedef GTestDBus *GTestDBus_autoptr; typedef GList *GTestDBus_listautoptr; typedef GSList *GTestDBus_slistautoptr; typedef GQueue *GTestDBus_queueautoptr;
 
typedef GThemedIcon *GThemedIcon_autoptr; typedef GList *GThemedIcon_listautoptr; typedef GSList *GThemedIcon_slistautoptr; typedef GQueue *GThemedIcon_queueautoptr;
 
typedef GThreadedSocketService *GThreadedSocketService_autoptr; typedef GList *GThreadedSocketService_listautoptr; typedef GSList *GThreadedSocketService_slistautoptr; typedef GQueue *GThreadedSocketService_queueautoptr;
 
typedef GTlsBackend *GTlsBackend_autoptr; typedef GList *GTlsBackend_listautoptr; typedef GSList *GTlsBackend_slistautoptr; typedef GQueue *GTlsBackend_queueautoptr;
 
typedef GTlsCertificate *GTlsCertificate_autoptr; typedef GList *GTlsCertificate_listautoptr; typedef GSList *GTlsCertificate_slistautoptr; typedef GQueue *GTlsCertificate_queueautoptr;
 
typedef GTlsClientConnection *GTlsClientConnection_autoptr; typedef GList *GTlsClientConnection_listautoptr; typedef GSList *GTlsClientConnection_slistautoptr; typedef GQueue *GTlsClientConnection_queueautoptr;
 
typedef GTlsConnection *GTlsConnection_autoptr; typedef GList *GTlsConnection_listautoptr; typedef GSList *GTlsConnection_slistautoptr; typedef GQueue *GTlsConnection_queueautoptr;
 
typedef GTlsDatabase *GTlsDatabase_autoptr; typedef GList *GTlsDatabase_listautoptr; typedef GSList *GTlsDatabase_slistautoptr; typedef GQueue *GTlsDatabase_queueautoptr;
 
typedef GTlsFileDatabase *GTlsFileDatabase_autoptr; typedef GList *GTlsFileDatabase_listautoptr; typedef GSList *GTlsFileDatabase_slistautoptr; typedef GQueue *GTlsFileDatabase_queueautoptr;
 
typedef GTlsInteraction *GTlsInteraction_autoptr; typedef GList *GTlsInteraction_listautoptr; typedef GSList *GTlsInteraction_slistautoptr; typedef GQueue *GTlsInteraction_queueautoptr;
 
typedef GTlsPassword *GTlsPassword_autoptr; typedef GList *GTlsPassword_listautoptr; typedef GSList *GTlsPassword_slistautoptr; typedef GQueue *GTlsPassword_queueautoptr;
 
typedef GTlsServerConnection *GTlsServerConnection_autoptr; typedef GList *GTlsServerConnection_listautoptr; typedef GSList *GTlsServerConnection_slistautoptr; typedef GQueue *GTlsServerConnection_queueautoptr;
 
typedef GVfs *GVfs_autoptr; typedef GList *GVfs_listautoptr; typedef GSList *GVfs_slistautoptr; typedef GQueue *GVfs_queueautoptr;
 
typedef GVolume *GVolume_autoptr; typedef GList *GVolume_listautoptr; typedef GSList *GVolume_slistautoptr; typedef GQueue *GVolume_queueautoptr;
 
typedef GVolumeMonitor *GVolumeMonitor_autoptr; typedef GList *GVolumeMonitor_listautoptr; typedef GSList *GVolumeMonitor_slistautoptr; typedef GQueue *GVolumeMonitor_queueautoptr;
 
typedef GZlibCompressor *GZlibCompressor_autoptr; typedef GList *GZlibCompressor_listautoptr; typedef GSList *GZlibCompressor_slistautoptr; typedef GQueue *GZlibCompressor_queueautoptr;
 
typedef GZlibDecompressor *GZlibDecompressor_autoptr; typedef GList *GZlibDecompressor_listautoptr; typedef GSList *GZlibDecompressor_slistautoptr; typedef GQueue *GZlibDecompressor_queueautoptr;
 
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef int hb_bool_t;
typedef uint32_t hb_codepoint_t;
typedef int32_t hb_position_t;
typedef uint32_t hb_mask_t;
typedef union _hb_var_int_t {
  uint32_t u32;
  int32_t i32;
  uint16_t u16[2];
  int16_t i16[2];
  uint8_t u8[4];
  int8_t i8[4];
} hb_var_int_t;
typedef uint32_t hb_tag_t;
typedef enum {
  HB_DIRECTION_INVALID = 0,
  HB_DIRECTION_LTR = 4,
  HB_DIRECTION_RTL,
  HB_DIRECTION_TTB,
  HB_DIRECTION_BTT
} hb_direction_t;
typedef const struct hb_language_impl_t *hb_language_t;
typedef enum
{
          HB_SCRIPT_COMMON = ((hb_tag_t)((((uint32_t)('Z')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('y')&0xFF))),
          HB_SCRIPT_INHERITED = ((hb_tag_t)((((uint32_t)('Z')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_UNKNOWN = ((hb_tag_t)((((uint32_t)('Z')&0xFF)<<24)|(((uint32_t)('z')&0xFF)<<16)|(((uint32_t)('z')&0xFF)<<8)|((uint32_t)('z')&0xFF))),
          HB_SCRIPT_ARABIC = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_ARMENIAN = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('n')&0xFF))),
          HB_SCRIPT_BENGALI = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_CYRILLIC = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('l')&0xFF))),
          HB_SCRIPT_DEVANAGARI = ((hb_tag_t)((((uint32_t)('D')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('v')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_GEORGIAN = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_GREEK = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('e')&0xFF)<<8)|((uint32_t)('k')&0xFF))),
          HB_SCRIPT_GUJARATI = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('j')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_GURMUKHI = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_HANGUL = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_HAN = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_HEBREW = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('b')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_HIRAGANA = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_KANNADA = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('n')&0xFF)<<16)|(((uint32_t)('d')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_KATAKANA = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_LAO = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_LATIN = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('t')&0xFF)<<8)|((uint32_t)('n')&0xFF))),
          HB_SCRIPT_MALAYALAM = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_ORIYA = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_TAMIL = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('l')&0xFF))),
          HB_SCRIPT_TELUGU = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_THAI = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_TIBETAN = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('b')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_BOPOMOFO = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('p')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_BRAILLE = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_CANADIAN_SYLLABICS = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('s')&0xFF))),
          HB_SCRIPT_CHEROKEE = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('e')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_ETHIOPIC = ((hb_tag_t)((((uint32_t)('E')&0xFF)<<24)|(((uint32_t)('t')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_KHMER = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_MONGOLIAN = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_MYANMAR = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_OGHAM = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_RUNIC = ((hb_tag_t)((((uint32_t)('R')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_SINHALA = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_SYRIAC = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('c')&0xFF))),
          HB_SCRIPT_THAANA = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_YI = ((hb_tag_t)((((uint32_t)('Y')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('i')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_DESERET = ((hb_tag_t)((((uint32_t)('D')&0xFF)<<24)|(((uint32_t)('s')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_GOTHIC = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('t')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_OLD_ITALIC = ((hb_tag_t)((((uint32_t)('I')&0xFF)<<24)|(((uint32_t)('t')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('l')&0xFF))),
          HB_SCRIPT_BUHID = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_HANUNOO = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_TAGALOG = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_TAGBANWA = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_CYPRIOT = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('p')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_LIMBU = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_LINEAR_B = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_OSMANYA = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('s')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_SHAVIAN = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('w')&0xFF))),
          HB_SCRIPT_TAI_LE = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('e')&0xFF))),
          HB_SCRIPT_UGARITIC = ((hb_tag_t)((((uint32_t)('U')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_BUGINESE = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_COPTIC = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('p')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_GLAGOLITIC = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_KHAROSHTHI = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_NEW_TAI_LUE = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_OLD_PERSIAN = ((hb_tag_t)((((uint32_t)('X')&0xFF)<<24)|(((uint32_t)('p')&0xFF)<<16)|(((uint32_t)('e')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_SYLOTI_NAGRI = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_TIFINAGH = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('f')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_BALINESE = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_CUNEIFORM = ((hb_tag_t)((((uint32_t)('X')&0xFF)<<24)|(((uint32_t)('s')&0xFF)<<16)|(((uint32_t)('u')&0xFF)<<8)|((uint32_t)('x')&0xFF))),
          HB_SCRIPT_NKO = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('k')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_PHAGS_PA = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_PHOENICIAN = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('x')&0xFF))),
          HB_SCRIPT_CARIAN = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_CHAM = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_KAYAH_LI = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_LEPCHA = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('p')&0xFF)<<8)|((uint32_t)('c')&0xFF))),
          HB_SCRIPT_LYCIAN = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('c')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_LYDIAN = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('y')&0xFF)<<16)|(((uint32_t)('d')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_OL_CHIKI = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('c')&0xFF)<<8)|((uint32_t)('k')&0xFF))),
          HB_SCRIPT_REJANG = ((hb_tag_t)((((uint32_t)('R')&0xFF)<<24)|(((uint32_t)('j')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_SAURASHTRA = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('u')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_SUNDANESE = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_VAI = ((hb_tag_t)((((uint32_t)('V')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('i')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_AVESTAN = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('v')&0xFF)<<16)|(((uint32_t)('s')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_BAMUM = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_EGYPTIAN_HIEROGLYPHS = ((hb_tag_t)((((uint32_t)('E')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('p')&0xFF))),
          HB_SCRIPT_IMPERIAL_ARAMAIC = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_INSCRIPTIONAL_PAHLAVI = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_INSCRIPTIONAL_PARTHIAN = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('t')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_JAVANESE = ((hb_tag_t)((((uint32_t)('J')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('v')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_KAITHI = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('t')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_LISU = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('s')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_MEETEI_MAYEK = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('t')&0xFF)<<16)|(((uint32_t)('e')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_OLD_SOUTH_ARABIAN = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_OLD_TURKIC = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('k')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_SAMARITAN = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('m')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_TAI_THAM = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_TAI_VIET = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('v')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_BATAK = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('t')&0xFF)<<8)|((uint32_t)('k')&0xFF))),
          HB_SCRIPT_BRAHMI = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_MANDAIC = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_CHAKMA = ((hb_tag_t)((((uint32_t)('C')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('k')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_MEROITIC_CURSIVE = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('c')&0xFF))),
          HB_SCRIPT_MEROITIC_HIEROGLYPHS = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_MIAO = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_SHARADA = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_SORA_SOMPENG = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_TAKRI = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('k')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_BASSA_VAH = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('s')&0xFF)<<8)|((uint32_t)('s')&0xFF))),
          HB_SCRIPT_CAUCASIAN_ALBANIAN = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_DUPLOYAN = ((hb_tag_t)((((uint32_t)('D')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('p')&0xFF)<<8)|((uint32_t)('l')&0xFF))),
          HB_SCRIPT_ELBASAN = ((hb_tag_t)((((uint32_t)('E')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('b')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_GRANTHA = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('n')&0xFF))),
          HB_SCRIPT_KHOJKI = ((hb_tag_t)((((uint32_t)('K')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('j')&0xFF))),
          HB_SCRIPT_KHUDAWADI = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_LINEAR_A = ((hb_tag_t)((((uint32_t)('L')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_MAHAJANI = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('j')&0xFF))),
          HB_SCRIPT_MANICHAEAN = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_MENDE_KIKAKUI = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_MODI = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('d')&0xFF)<<8)|((uint32_t)('i')&0xFF))),
          HB_SCRIPT_MRO = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('r')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_NABATAEAN = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('b')&0xFF)<<16)|(((uint32_t)('a')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_OLD_NORTH_ARABIAN = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_OLD_PERMIC = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_PAHAWH_HMONG = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('m')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_PALMYRENE = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_PAU_CIN_HAU = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('u')&0xFF)<<8)|((uint32_t)('c')&0xFF))),
          HB_SCRIPT_PSALTER_PAHLAVI = ((hb_tag_t)((((uint32_t)('P')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('p')&0xFF))),
          HB_SCRIPT_SIDDHAM = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('d')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_TIRHUTA = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('i')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('h')&0xFF))),
          HB_SCRIPT_WARANG_CITI = ((hb_tag_t)((((uint32_t)('W')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_AHOM = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('o')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_ANATOLIAN_HIEROGLYPHS = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('u')&0xFF)<<8)|((uint32_t)('w')&0xFF))),
          HB_SCRIPT_HATRAN = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('t')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_MULTANI = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('t')&0xFF))),
          HB_SCRIPT_OLD_HUNGARIAN = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('u')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_SIGNWRITING = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('g')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('w')&0xFF))),
          HB_SCRIPT_ADLAM = ((hb_tag_t)((((uint32_t)('A')&0xFF)<<24)|(((uint32_t)('d')&0xFF)<<16)|(((uint32_t)('l')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_BHAIKSUKI = ((hb_tag_t)((((uint32_t)('B')&0xFF)<<24)|(((uint32_t)('h')&0xFF)<<16)|(((uint32_t)('k')&0xFF)<<8)|((uint32_t)('s')&0xFF))),
          HB_SCRIPT_MARCHEN = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('r')&0xFF)<<8)|((uint32_t)('c')&0xFF))),
          HB_SCRIPT_OSAGE = ((hb_tag_t)((((uint32_t)('O')&0xFF)<<24)|(((uint32_t)('s')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('e')&0xFF))),
          HB_SCRIPT_TANGUT = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_NEWA = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('w')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_MASARAM_GONDI = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_NUSHU = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('s')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('u')&0xFF))),
          HB_SCRIPT_SOYOMBO = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_ZANABAZAR_SQUARE = ((hb_tag_t)((((uint32_t)('Z')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('b')&0xFF))),
          HB_SCRIPT_DOGRA = ((hb_tag_t)((((uint32_t)('D')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('r')&0xFF))),
          HB_SCRIPT_GUNJALA_GONDI = ((hb_tag_t)((((uint32_t)('G')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_HANIFI_ROHINGYA = ((hb_tag_t)((((uint32_t)('R')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('g')&0xFF))),
          HB_SCRIPT_MAKASAR = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('k')&0xFF)<<8)|((uint32_t)('a')&0xFF))),
          HB_SCRIPT_MEDEFAIDRIN = ((hb_tag_t)((((uint32_t)('M')&0xFF)<<24)|(((uint32_t)('e')&0xFF)<<16)|(((uint32_t)('d')&0xFF)<<8)|((uint32_t)('f')&0xFF))),
          HB_SCRIPT_OLD_SOGDIAN = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
          HB_SCRIPT_SOGDIAN = ((hb_tag_t)((((uint32_t)('S')&0xFF)<<24)|(((uint32_t)('o')&0xFF)<<16)|(((uint32_t)('g')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_ELYMAIC = ((hb_tag_t)((((uint32_t)('E')&0xFF)<<24)|(((uint32_t)('l')&0xFF)<<16)|(((uint32_t)('y')&0xFF)<<8)|((uint32_t)('m')&0xFF))),
          HB_SCRIPT_NANDINAGARI = ((hb_tag_t)((((uint32_t)('N')&0xFF)<<24)|(((uint32_t)('a')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('d')&0xFF))),
          HB_SCRIPT_NYIAKENG_PUACHUE_HMONG = ((hb_tag_t)((((uint32_t)('H')&0xFF)<<24)|(((uint32_t)('m')&0xFF)<<16)|(((uint32_t)('n')&0xFF)<<8)|((uint32_t)('p')&0xFF))),
          HB_SCRIPT_WANCHO = ((hb_tag_t)((((uint32_t)('W')&0xFF)<<24)|(((uint32_t)('c')&0xFF)<<16)|(((uint32_t)('h')&0xFF)<<8)|((uint32_t)('o')&0xFF))),
  HB_SCRIPT_INVALID = ((hb_tag_t)((((uint32_t)(0)&0xFF)<<24)|(((uint32_t)(0)&0xFF)<<16)|(((uint32_t)(0)&0xFF)<<8)|((uint32_t)(0)&0xFF))),
  _HB_SCRIPT_MAX_VALUE = ((hb_tag_t)((((uint32_t)(0x7f)&0xFF)<<24)|(((uint32_t)(0xff)&0xFF)<<16)|(((uint32_t)(0xff)&0xFF)<<8)|((uint32_t)(0xff)&0xFF))),
  _HB_SCRIPT_MAX_VALUE_SIGNED = ((hb_tag_t)((((uint32_t)(0x7f)&0xFF)<<24)|(((uint32_t)(0xff)&0xFF)<<16)|(((uint32_t)(0xff)&0xFF)<<8)|((uint32_t)(0xff)&0xFF)))
} hb_script_t;
typedef struct hb_user_data_key_t {
  char unused;
} hb_user_data_key_t;
typedef void (*hb_destroy_func_t) (void *user_data);
typedef struct hb_feature_t {
  hb_tag_t tag;
  uint32_t value;
  unsigned int start;
  unsigned int end;
} hb_feature_t;
typedef struct hb_variation_t {
  hb_tag_t tag;
  float value;
} hb_variation_t;
typedef uint32_t hb_color_t;
typedef enum {
  HB_MEMORY_MODE_DUPLICATE,
  HB_MEMORY_MODE_READONLY,
  HB_MEMORY_MODE_WRITABLE,
  HB_MEMORY_MODE_READONLY_MAY_MAKE_WRITABLE
} hb_memory_mode_t;
typedef struct hb_blob_t hb_blob_t;
typedef enum
{
  HB_UNICODE_GENERAL_CATEGORY_CONTROL,
  HB_UNICODE_GENERAL_CATEGORY_FORMAT,
  HB_UNICODE_GENERAL_CATEGORY_UNASSIGNED,
  HB_UNICODE_GENERAL_CATEGORY_PRIVATE_USE,
  HB_UNICODE_GENERAL_CATEGORY_SURROGATE,
  HB_UNICODE_GENERAL_CATEGORY_LOWERCASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_MODIFIER_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_TITLECASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_UPPERCASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_SPACING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_ENCLOSING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_NON_SPACING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_DECIMAL_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_LETTER_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_CONNECT_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_DASH_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_CLOSE_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_FINAL_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_INITIAL_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_OPEN_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_CURRENCY_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_MODIFIER_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_MATH_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_LINE_SEPARATOR,
  HB_UNICODE_GENERAL_CATEGORY_PARAGRAPH_SEPARATOR,
  HB_UNICODE_GENERAL_CATEGORY_SPACE_SEPARATOR
} hb_unicode_general_category_t;
typedef enum
{
  HB_UNICODE_COMBINING_CLASS_NOT_REORDERED = 0,
  HB_UNICODE_COMBINING_CLASS_OVERLAY = 1,
  HB_UNICODE_COMBINING_CLASS_NUKTA = 7,
  HB_UNICODE_COMBINING_CLASS_KANA_VOICING = 8,
  HB_UNICODE_COMBINING_CLASS_VIRAMA = 9,
  HB_UNICODE_COMBINING_CLASS_CCC10 = 10,
  HB_UNICODE_COMBINING_CLASS_CCC11 = 11,
  HB_UNICODE_COMBINING_CLASS_CCC12 = 12,
  HB_UNICODE_COMBINING_CLASS_CCC13 = 13,
  HB_UNICODE_COMBINING_CLASS_CCC14 = 14,
  HB_UNICODE_COMBINING_CLASS_CCC15 = 15,
  HB_UNICODE_COMBINING_CLASS_CCC16 = 16,
  HB_UNICODE_COMBINING_CLASS_CCC17 = 17,
  HB_UNICODE_COMBINING_CLASS_CCC18 = 18,
  HB_UNICODE_COMBINING_CLASS_CCC19 = 19,
  HB_UNICODE_COMBINING_CLASS_CCC20 = 20,
  HB_UNICODE_COMBINING_CLASS_CCC21 = 21,
  HB_UNICODE_COMBINING_CLASS_CCC22 = 22,
  HB_UNICODE_COMBINING_CLASS_CCC23 = 23,
  HB_UNICODE_COMBINING_CLASS_CCC24 = 24,
  HB_UNICODE_COMBINING_CLASS_CCC25 = 25,
  HB_UNICODE_COMBINING_CLASS_CCC26 = 26,
  HB_UNICODE_COMBINING_CLASS_CCC27 = 27,
  HB_UNICODE_COMBINING_CLASS_CCC28 = 28,
  HB_UNICODE_COMBINING_CLASS_CCC29 = 29,
  HB_UNICODE_COMBINING_CLASS_CCC30 = 30,
  HB_UNICODE_COMBINING_CLASS_CCC31 = 31,
  HB_UNICODE_COMBINING_CLASS_CCC32 = 32,
  HB_UNICODE_COMBINING_CLASS_CCC33 = 33,
  HB_UNICODE_COMBINING_CLASS_CCC34 = 34,
  HB_UNICODE_COMBINING_CLASS_CCC35 = 35,
  HB_UNICODE_COMBINING_CLASS_CCC36 = 36,
  HB_UNICODE_COMBINING_CLASS_CCC84 = 84,
  HB_UNICODE_COMBINING_CLASS_CCC91 = 91,
  HB_UNICODE_COMBINING_CLASS_CCC103 = 103,
  HB_UNICODE_COMBINING_CLASS_CCC107 = 107,
  HB_UNICODE_COMBINING_CLASS_CCC118 = 118,
  HB_UNICODE_COMBINING_CLASS_CCC122 = 122,
  HB_UNICODE_COMBINING_CLASS_CCC129 = 129,
  HB_UNICODE_COMBINING_CLASS_CCC130 = 130,
  HB_UNICODE_COMBINING_CLASS_CCC133 = 132,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW_LEFT = 200,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW = 202,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE = 214,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE_RIGHT = 216,
  HB_UNICODE_COMBINING_CLASS_BELOW_LEFT = 218,
  HB_UNICODE_COMBINING_CLASS_BELOW = 220,
  HB_UNICODE_COMBINING_CLASS_BELOW_RIGHT = 222,
  HB_UNICODE_COMBINING_CLASS_LEFT = 224,
  HB_UNICODE_COMBINING_CLASS_RIGHT = 226,
  HB_UNICODE_COMBINING_CLASS_ABOVE_LEFT = 228,
  HB_UNICODE_COMBINING_CLASS_ABOVE = 230,
  HB_UNICODE_COMBINING_CLASS_ABOVE_RIGHT = 232,
  HB_UNICODE_COMBINING_CLASS_DOUBLE_BELOW = 233,
  HB_UNICODE_COMBINING_CLASS_DOUBLE_ABOVE = 234,
  HB_UNICODE_COMBINING_CLASS_IOTA_SUBSCRIPT = 240,
  HB_UNICODE_COMBINING_CLASS_INVALID = 255
} hb_unicode_combining_class_t;
typedef struct hb_unicode_funcs_t hb_unicode_funcs_t;
typedef hb_unicode_combining_class_t (*hb_unicode_combining_class_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_unicode_general_category_t (*hb_unicode_general_category_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_codepoint_t (*hb_unicode_mirroring_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_script_t (*hb_unicode_script_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_bool_t (*hb_unicode_compose_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t a,
           hb_codepoint_t b,
           hb_codepoint_t *ab,
           void *user_data);
typedef hb_bool_t (*hb_unicode_decompose_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t ab,
           hb_codepoint_t *a,
           hb_codepoint_t *b,
           void *user_data);
typedef struct hb_set_t hb_set_t;
typedef struct hb_face_t hb_face_t;
typedef hb_blob_t * (*hb_reference_table_func_t) (hb_face_t *face, hb_tag_t tag, void *user_data);
typedef struct hb_font_t hb_font_t;
typedef struct hb_font_funcs_t hb_font_funcs_t;
typedef struct hb_font_extents_t
{
  hb_position_t ascender;
  hb_position_t descender;
  hb_position_t line_gap;
  hb_position_t reserved9;
  hb_position_t reserved8;
  hb_position_t reserved7;
  hb_position_t reserved6;
  hb_position_t reserved5;
  hb_position_t reserved4;
  hb_position_t reserved3;
  hb_position_t reserved2;
  hb_position_t reserved1;
} hb_font_extents_t;
typedef struct hb_glyph_extents_t
{
  hb_position_t x_bearing;
  hb_position_t y_bearing;
  hb_position_t width;
  hb_position_t height;
} hb_glyph_extents_t;
typedef hb_bool_t (*hb_font_get_font_extents_func_t) (hb_font_t *font, void *font_data,
             hb_font_extents_t *extents,
             void *user_data);
typedef hb_font_get_font_extents_func_t hb_font_get_font_h_extents_func_t;
typedef hb_font_get_font_extents_func_t hb_font_get_font_v_extents_func_t;
typedef hb_bool_t (*hb_font_get_nominal_glyph_func_t) (hb_font_t *font, void *font_data,
             hb_codepoint_t unicode,
             hb_codepoint_t *glyph,
             void *user_data);
typedef hb_bool_t (*hb_font_get_variation_glyph_func_t) (hb_font_t *font, void *font_data,
        hb_codepoint_t unicode, hb_codepoint_t variation_selector,
        hb_codepoint_t *glyph,
        void *user_data);
typedef unsigned int (*hb_font_get_nominal_glyphs_func_t) (hb_font_t *font, void *font_data,
          unsigned int count,
          const hb_codepoint_t *first_unicode,
          unsigned int unicode_stride,
          hb_codepoint_t *first_glyph,
          unsigned int glyph_stride,
          void *user_data);
typedef hb_position_t (*hb_font_get_glyph_advance_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t glyph,
          void *user_data);
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_h_advance_func_t;
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_v_advance_func_t;
typedef void (*hb_font_get_glyph_advances_func_t) (hb_font_t* font, void* font_data,
         unsigned int count,
         const hb_codepoint_t *first_glyph,
         unsigned glyph_stride,
         hb_position_t *first_advance,
         unsigned advance_stride,
         void *user_data);
typedef hb_font_get_glyph_advances_func_t hb_font_get_glyph_h_advances_func_t;
typedef hb_font_get_glyph_advances_func_t hb_font_get_glyph_v_advances_func_t;
typedef hb_bool_t (*hb_font_get_glyph_origin_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t glyph,
            hb_position_t *x, hb_position_t *y,
            void *user_data);
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_h_origin_func_t;
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_v_origin_func_t;
typedef hb_position_t (*hb_font_get_glyph_kerning_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t first_glyph, hb_codepoint_t second_glyph,
          void *user_data);
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_h_kerning_func_t;
typedef hb_bool_t (*hb_font_get_glyph_extents_func_t) (hb_font_t *font, void *font_data,
             hb_codepoint_t glyph,
             hb_glyph_extents_t *extents,
             void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_contour_point_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t glyph, unsigned int point_index,
            hb_position_t *x, hb_position_t *y,
            void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_name_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t glyph,
          char *name, unsigned int size,
          void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_from_name_func_t) (hb_font_t *font, void *font_data,
        const char *name, int len,
        hb_codepoint_t *glyph,
        void *user_data);
typedef struct hb_glyph_info_t
{
  hb_codepoint_t codepoint;
  hb_mask_t mask;
  uint32_t cluster;
  hb_var_int_t var1;
  hb_var_int_t var2;
} hb_glyph_info_t;
typedef enum {
  HB_GLYPH_FLAG_UNSAFE_TO_BREAK = 0x00000001,
  HB_GLYPH_FLAG_DEFINED = 0x00000001
} hb_glyph_flags_t;
typedef struct hb_glyph_position_t {
  hb_position_t x_advance;
  hb_position_t y_advance;
  hb_position_t x_offset;
  hb_position_t y_offset;
  hb_var_int_t var;
} hb_glyph_position_t;
typedef struct hb_segment_properties_t {
  hb_direction_t direction;
  hb_script_t script;
  hb_language_t language;
  void *reserved1;
  void *reserved2;
} hb_segment_properties_t;
typedef struct hb_buffer_t hb_buffer_t;
typedef enum {
  HB_BUFFER_CONTENT_TYPE_INVALID = 0,
  HB_BUFFER_CONTENT_TYPE_UNICODE,
  HB_BUFFER_CONTENT_TYPE_GLYPHS
} hb_buffer_content_type_t;
typedef enum {
  HB_BUFFER_FLAG_DEFAULT = 0x00000000u,
  HB_BUFFER_FLAG_BOT = 0x00000001u,
  HB_BUFFER_FLAG_EOT = 0x00000002u,
  HB_BUFFER_FLAG_PRESERVE_DEFAULT_IGNORABLES = 0x00000004u,
  HB_BUFFER_FLAG_REMOVE_DEFAULT_IGNORABLES = 0x00000008u,
  HB_BUFFER_FLAG_DO_NOT_INSERT_DOTTED_CIRCLE = 0x00000010u
} hb_buffer_flags_t;
typedef enum {
  HB_BUFFER_CLUSTER_LEVEL_MONOTONE_GRAPHEMES = 0,
  HB_BUFFER_CLUSTER_LEVEL_MONOTONE_CHARACTERS = 1,
  HB_BUFFER_CLUSTER_LEVEL_CHARACTERS = 2,
  HB_BUFFER_CLUSTER_LEVEL_DEFAULT = HB_BUFFER_CLUSTER_LEVEL_MONOTONE_GRAPHEMES
} hb_buffer_cluster_level_t;
typedef enum {
  HB_BUFFER_SERIALIZE_FLAG_DEFAULT = 0x00000000u,
  HB_BUFFER_SERIALIZE_FLAG_NO_CLUSTERS = 0x00000001u,
  HB_BUFFER_SERIALIZE_FLAG_NO_POSITIONS = 0x00000002u,
  HB_BUFFER_SERIALIZE_FLAG_NO_GLYPH_NAMES = 0x00000004u,
  HB_BUFFER_SERIALIZE_FLAG_GLYPH_EXTENTS = 0x00000008u,
  HB_BUFFER_SERIALIZE_FLAG_GLYPH_FLAGS = 0x00000010u,
  HB_BUFFER_SERIALIZE_FLAG_NO_ADVANCES = 0x00000020u
} hb_buffer_serialize_flags_t;
typedef enum {
  HB_BUFFER_SERIALIZE_FORMAT_TEXT = ((hb_tag_t)((((uint32_t)('T')&0xFF)<<24)|(((uint32_t)('E')&0xFF)<<16)|(((uint32_t)('X')&0xFF)<<8)|((uint32_t)('T')&0xFF))),
  HB_BUFFER_SERIALIZE_FORMAT_JSON = ((hb_tag_t)((((uint32_t)('J')&0xFF)<<24)|(((uint32_t)('S')&0xFF)<<16)|(((uint32_t)('O')&0xFF)<<8)|((uint32_t)('N')&0xFF))),
  HB_BUFFER_SERIALIZE_FORMAT_INVALID = ((hb_tag_t)((((uint32_t)(0)&0xFF)<<24)|(((uint32_t)(0)&0xFF)<<16)|(((uint32_t)(0)&0xFF)<<8)|((uint32_t)(0)&0xFF)))
} hb_buffer_serialize_format_t;
typedef enum {
  HB_BUFFER_DIFF_FLAG_EQUAL = 0x0000,
  HB_BUFFER_DIFF_FLAG_CONTENT_TYPE_MISMATCH = 0x0001,
  HB_BUFFER_DIFF_FLAG_LENGTH_MISMATCH = 0x0002,
  HB_BUFFER_DIFF_FLAG_NOTDEF_PRESENT = 0x0004,
  HB_BUFFER_DIFF_FLAG_DOTTED_CIRCLE_PRESENT = 0x0008,
  HB_BUFFER_DIFF_FLAG_CODEPOINT_MISMATCH = 0x0010,
  HB_BUFFER_DIFF_FLAG_CLUSTER_MISMATCH = 0x0020,
  HB_BUFFER_DIFF_FLAG_GLYPH_FLAGS_MISMATCH = 0x0040,
  HB_BUFFER_DIFF_FLAG_POSITION_MISMATCH = 0x0080
} hb_buffer_diff_flags_t;
typedef hb_bool_t (*hb_buffer_message_func_t) (hb_buffer_t *buffer,
        hb_font_t *font,
        const char *message,
        void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t unicode, hb_codepoint_t variation_selector,
            hb_codepoint_t *glyph,
            void *user_data);
typedef unsigned int (*hb_unicode_eastasian_width_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef unsigned int (*hb_unicode_decompose_compatibility_func_t) (hb_unicode_funcs_t *ufuncs,
            hb_codepoint_t u,
            hb_codepoint_t *decomposed,
            void *user_data);
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_v_kerning_func_t;
typedef struct hb_map_t hb_map_t;
typedef struct hb_shape_plan_t hb_shape_plan_t;
typedef struct _PangoCoverage PangoCoverage;
typedef enum {
  PANGO_COVERAGE_NONE,
  PANGO_COVERAGE_FALLBACK,
  PANGO_COVERAGE_APPROXIMATE,
  PANGO_COVERAGE_EXACT
} PangoCoverageLevel;
typedef struct _PangoLogAttr PangoLogAttr;
typedef struct _PangoEngineLang PangoEngineLang;
typedef struct _PangoEngineShape PangoEngineShape;
typedef struct _PangoFont PangoFont;
typedef struct _PangoFontMap PangoFontMap;
typedef struct _PangoRectangle PangoRectangle;
typedef guint32 PangoGlyph;
struct _PangoRectangle
{
  int x;
  int y;
  int width;
  int height;
};
typedef enum {
  PANGO_GRAVITY_SOUTH,
  PANGO_GRAVITY_EAST,
  PANGO_GRAVITY_NORTH,
  PANGO_GRAVITY_WEST,
  PANGO_GRAVITY_AUTO
} PangoGravity;
typedef enum {
  PANGO_GRAVITY_HINT_NATURAL,
  PANGO_GRAVITY_HINT_STRONG,
  PANGO_GRAVITY_HINT_LINE
} PangoGravityHint;
typedef struct _PangoMatrix PangoMatrix;
struct _PangoMatrix
{
  double xx;
  double xy;
  double yx;
  double yy;
  double x0;
  double y0;
};
typedef struct _PangoScriptIter PangoScriptIter;
typedef enum {
      PANGO_SCRIPT_INVALID_CODE = -1,
      PANGO_SCRIPT_COMMON = 0,
      PANGO_SCRIPT_INHERITED,
      PANGO_SCRIPT_ARABIC,
      PANGO_SCRIPT_ARMENIAN,
      PANGO_SCRIPT_BENGALI,
      PANGO_SCRIPT_BOPOMOFO,
      PANGO_SCRIPT_CHEROKEE,
      PANGO_SCRIPT_COPTIC,
      PANGO_SCRIPT_CYRILLIC,
      PANGO_SCRIPT_DESERET,
      PANGO_SCRIPT_DEVANAGARI,
      PANGO_SCRIPT_ETHIOPIC,
      PANGO_SCRIPT_GEORGIAN,
      PANGO_SCRIPT_GOTHIC,
      PANGO_SCRIPT_GREEK,
      PANGO_SCRIPT_GUJARATI,
      PANGO_SCRIPT_GURMUKHI,
      PANGO_SCRIPT_HAN,
      PANGO_SCRIPT_HANGUL,
      PANGO_SCRIPT_HEBREW,
      PANGO_SCRIPT_HIRAGANA,
      PANGO_SCRIPT_KANNADA,
      PANGO_SCRIPT_KATAKANA,
      PANGO_SCRIPT_KHMER,
      PANGO_SCRIPT_LAO,
      PANGO_SCRIPT_LATIN,
      PANGO_SCRIPT_MALAYALAM,
      PANGO_SCRIPT_MONGOLIAN,
      PANGO_SCRIPT_MYANMAR,
      PANGO_SCRIPT_OGHAM,
      PANGO_SCRIPT_OLD_ITALIC,
      PANGO_SCRIPT_ORIYA,
      PANGO_SCRIPT_RUNIC,
      PANGO_SCRIPT_SINHALA,
      PANGO_SCRIPT_SYRIAC,
      PANGO_SCRIPT_TAMIL,
      PANGO_SCRIPT_TELUGU,
      PANGO_SCRIPT_THAANA,
      PANGO_SCRIPT_THAI,
      PANGO_SCRIPT_TIBETAN,
      PANGO_SCRIPT_CANADIAN_ABORIGINAL,
      PANGO_SCRIPT_YI,
      PANGO_SCRIPT_TAGALOG,
      PANGO_SCRIPT_HANUNOO,
      PANGO_SCRIPT_BUHID,
      PANGO_SCRIPT_TAGBANWA,
      PANGO_SCRIPT_BRAILLE,
      PANGO_SCRIPT_CYPRIOT,
      PANGO_SCRIPT_LIMBU,
      PANGO_SCRIPT_OSMANYA,
      PANGO_SCRIPT_SHAVIAN,
      PANGO_SCRIPT_LINEAR_B,
      PANGO_SCRIPT_TAI_LE,
      PANGO_SCRIPT_UGARITIC,
      PANGO_SCRIPT_NEW_TAI_LUE,
      PANGO_SCRIPT_BUGINESE,
      PANGO_SCRIPT_GLAGOLITIC,
      PANGO_SCRIPT_TIFINAGH,
      PANGO_SCRIPT_SYLOTI_NAGRI,
      PANGO_SCRIPT_OLD_PERSIAN,
      PANGO_SCRIPT_KHAROSHTHI,
      PANGO_SCRIPT_UNKNOWN,
      PANGO_SCRIPT_BALINESE,
      PANGO_SCRIPT_CUNEIFORM,
      PANGO_SCRIPT_PHOENICIAN,
      PANGO_SCRIPT_PHAGS_PA,
      PANGO_SCRIPT_NKO,
      PANGO_SCRIPT_KAYAH_LI,
      PANGO_SCRIPT_LEPCHA,
      PANGO_SCRIPT_REJANG,
      PANGO_SCRIPT_SUNDANESE,
      PANGO_SCRIPT_SAURASHTRA,
      PANGO_SCRIPT_CHAM,
      PANGO_SCRIPT_OL_CHIKI,
      PANGO_SCRIPT_VAI,
      PANGO_SCRIPT_CARIAN,
      PANGO_SCRIPT_LYCIAN,
      PANGO_SCRIPT_LYDIAN,
      PANGO_SCRIPT_BATAK,
      PANGO_SCRIPT_BRAHMI,
      PANGO_SCRIPT_MANDAIC,
      PANGO_SCRIPT_CHAKMA,
      PANGO_SCRIPT_MEROITIC_CURSIVE,
      PANGO_SCRIPT_MEROITIC_HIEROGLYPHS,
      PANGO_SCRIPT_MIAO,
      PANGO_SCRIPT_SHARADA,
      PANGO_SCRIPT_SORA_SOMPENG,
      PANGO_SCRIPT_TAKRI,
      PANGO_SCRIPT_BASSA_VAH,
      PANGO_SCRIPT_CAUCASIAN_ALBANIAN,
      PANGO_SCRIPT_DUPLOYAN,
      PANGO_SCRIPT_ELBASAN,
      PANGO_SCRIPT_GRANTHA,
      PANGO_SCRIPT_KHOJKI,
      PANGO_SCRIPT_KHUDAWADI,
      PANGO_SCRIPT_LINEAR_A,
      PANGO_SCRIPT_MAHAJANI,
      PANGO_SCRIPT_MANICHAEAN,
      PANGO_SCRIPT_MENDE_KIKAKUI,
      PANGO_SCRIPT_MODI,
      PANGO_SCRIPT_MRO,
      PANGO_SCRIPT_NABATAEAN,
      PANGO_SCRIPT_OLD_NORTH_ARABIAN,
      PANGO_SCRIPT_OLD_PERMIC,
      PANGO_SCRIPT_PAHAWH_HMONG,
      PANGO_SCRIPT_PALMYRENE,
      PANGO_SCRIPT_PAU_CIN_HAU,
      PANGO_SCRIPT_PSALTER_PAHLAVI,
      PANGO_SCRIPT_SIDDHAM,
      PANGO_SCRIPT_TIRHUTA,
      PANGO_SCRIPT_WARANG_CITI,
      PANGO_SCRIPT_AHOM,
      PANGO_SCRIPT_ANATOLIAN_HIEROGLYPHS,
      PANGO_SCRIPT_HATRAN,
      PANGO_SCRIPT_MULTANI,
      PANGO_SCRIPT_OLD_HUNGARIAN,
      PANGO_SCRIPT_SIGNWRITING
} PangoScript;
typedef struct _PangoLanguage PangoLanguage;
typedef enum {
  PANGO_DIRECTION_LTR,
  PANGO_DIRECTION_RTL,
  PANGO_DIRECTION_TTB_LTR,
  PANGO_DIRECTION_TTB_RTL,
  PANGO_DIRECTION_WEAK_LTR,
  PANGO_DIRECTION_WEAK_RTL,
  PANGO_DIRECTION_NEUTRAL
} PangoDirection;
typedef enum {
  PANGO_BIDI_TYPE_L,
  PANGO_BIDI_TYPE_LRE,
  PANGO_BIDI_TYPE_LRO,
  PANGO_BIDI_TYPE_R,
  PANGO_BIDI_TYPE_AL,
  PANGO_BIDI_TYPE_RLE,
  PANGO_BIDI_TYPE_RLO,
  PANGO_BIDI_TYPE_PDF,
  PANGO_BIDI_TYPE_EN,
  PANGO_BIDI_TYPE_ES,
  PANGO_BIDI_TYPE_ET,
  PANGO_BIDI_TYPE_AN,
  PANGO_BIDI_TYPE_CS,
  PANGO_BIDI_TYPE_NSM,
  PANGO_BIDI_TYPE_BN,
  PANGO_BIDI_TYPE_B,
  PANGO_BIDI_TYPE_S,
  PANGO_BIDI_TYPE_WS,
  PANGO_BIDI_TYPE_ON
} PangoBidiType;
typedef struct _PangoFontDescription PangoFontDescription;
typedef struct _PangoFontMetrics PangoFontMetrics;
typedef enum {
  PANGO_STYLE_NORMAL,
  PANGO_STYLE_OBLIQUE,
  PANGO_STYLE_ITALIC
} PangoStyle;
typedef enum {
  PANGO_VARIANT_NORMAL,
  PANGO_VARIANT_SMALL_CAPS
} PangoVariant;
typedef enum {
  PANGO_WEIGHT_THIN = 100,
  PANGO_WEIGHT_ULTRALIGHT = 200,
  PANGO_WEIGHT_LIGHT = 300,
  PANGO_WEIGHT_SEMILIGHT = 350,
  PANGO_WEIGHT_BOOK = 380,
  PANGO_WEIGHT_NORMAL = 400,
  PANGO_WEIGHT_MEDIUM = 500,
  PANGO_WEIGHT_SEMIBOLD = 600,
  PANGO_WEIGHT_BOLD = 700,
  PANGO_WEIGHT_ULTRABOLD = 800,
  PANGO_WEIGHT_HEAVY = 900,
  PANGO_WEIGHT_ULTRAHEAVY = 1000
} PangoWeight;
typedef enum {
  PANGO_STRETCH_ULTRA_CONDENSED,
  PANGO_STRETCH_EXTRA_CONDENSED,
  PANGO_STRETCH_CONDENSED,
  PANGO_STRETCH_SEMI_CONDENSED,
  PANGO_STRETCH_NORMAL,
  PANGO_STRETCH_SEMI_EXPANDED,
  PANGO_STRETCH_EXPANDED,
  PANGO_STRETCH_EXTRA_EXPANDED,
  PANGO_STRETCH_ULTRA_EXPANDED
} PangoStretch;
typedef enum {
  PANGO_FONT_MASK_FAMILY = 1 << 0,
  PANGO_FONT_MASK_STYLE = 1 << 1,
  PANGO_FONT_MASK_VARIANT = 1 << 2,
  PANGO_FONT_MASK_WEIGHT = 1 << 3,
  PANGO_FONT_MASK_STRETCH = 1 << 4,
  PANGO_FONT_MASK_SIZE = 1 << 5,
  PANGO_FONT_MASK_GRAVITY = 1 << 6,
  PANGO_FONT_MASK_VARIATIONS = 1 << 7,
} PangoFontMask;
struct _PangoFontMetrics
{
  guint ref_count;
  int ascent;
  int descent;
  int height;
  int approximate_char_width;
  int approximate_digit_width;
  int underline_position;
  int underline_thickness;
  int strikethrough_position;
  int strikethrough_thickness;
};
typedef struct _PangoFontFace PangoFontFace;
typedef struct _PangoFontFamily PangoFontFamily;
typedef struct _PangoFontFamilyClass PangoFontFamilyClass;
struct _PangoFontFamily
{
  GObject parent_instance;
};
struct _PangoFontFamilyClass
{
  GObjectClass parent_class;
  void (*list_faces) (PangoFontFamily *family,
                            PangoFontFace ***faces,
                            int *n_faces);
  const char * (*get_name) (PangoFontFamily *family);
  gboolean (*is_monospace) (PangoFontFamily *family);
  gboolean (*is_variable) (PangoFontFamily *family);
  void (*_pango_reserved2) (void);
  void (*_pango_reserved3) (void);
};
typedef struct _PangoFontFaceClass PangoFontFaceClass;
struct _PangoFontFace
{
  GObject parent_instance;
};
struct _PangoFontFaceClass
{
  GObjectClass parent_class;
  const char * (*get_face_name) (PangoFontFace *face);
  PangoFontDescription * (*describe) (PangoFontFace *face);
  void (*list_sizes) (PangoFontFace *face,
                                            int **sizes,
                                            int *n_sizes);
  gboolean (*is_synthesized) (PangoFontFace *face);
  void (*_pango_reserved3) (void);
  void (*_pango_reserved4) (void);
};
struct _PangoFont
{
  GObject parent_instance;
};
typedef struct _PangoFontClass PangoFontClass;
struct _PangoFontClass
{
  GObjectClass parent_class;
  PangoFontDescription *(*describe) (PangoFont *font);
  PangoCoverage * (*get_coverage) (PangoFont *font,
                                               PangoLanguage *language);
  void (*get_glyph_extents) (PangoFont *font,
                                               PangoGlyph glyph,
                                               PangoRectangle *ink_rect,
                                               PangoRectangle *logical_rect);
  PangoFontMetrics * (*get_metrics) (PangoFont *font,
                                               PangoLanguage *language);
  PangoFontMap * (*get_font_map) (PangoFont *font);
  PangoFontDescription *(*describe_absolute) (PangoFont *font);
  void (*get_features) (PangoFont *font,
                                               hb_feature_t *features,
                                               guint len,
                                               guint *num_features);
  hb_font_t * (*create_hb_font) (PangoFont *font);
};
typedef struct _PangoColor PangoColor;
struct _PangoColor
{
  guint16 red;
  guint16 green;
  guint16 blue;
};
typedef struct _PangoAttribute PangoAttribute;
typedef struct _PangoAttrClass PangoAttrClass;
typedef struct _PangoAttrString PangoAttrString;
typedef struct _PangoAttrLanguage PangoAttrLanguage;
typedef struct _PangoAttrInt PangoAttrInt;
typedef struct _PangoAttrSize PangoAttrSize;
typedef struct _PangoAttrFloat PangoAttrFloat;
typedef struct _PangoAttrColor PangoAttrColor;
typedef struct _PangoAttrFontDesc PangoAttrFontDesc;
typedef struct _PangoAttrShape PangoAttrShape;
typedef struct _PangoAttrFontFeatures PangoAttrFontFeatures;
typedef struct _PangoAttrList PangoAttrList;
typedef struct _PangoAttrIterator PangoAttrIterator;
typedef enum
{
  PANGO_ATTR_INVALID,
  PANGO_ATTR_LANGUAGE,
  PANGO_ATTR_FAMILY,
  PANGO_ATTR_STYLE,
  PANGO_ATTR_WEIGHT,
  PANGO_ATTR_VARIANT,
  PANGO_ATTR_STRETCH,
  PANGO_ATTR_SIZE,
  PANGO_ATTR_FONT_DESC,
  PANGO_ATTR_FOREGROUND,
  PANGO_ATTR_BACKGROUND,
  PANGO_ATTR_UNDERLINE,
  PANGO_ATTR_STRIKETHROUGH,
  PANGO_ATTR_RISE,
  PANGO_ATTR_SHAPE,
  PANGO_ATTR_SCALE,
  PANGO_ATTR_FALLBACK,
  PANGO_ATTR_LETTER_SPACING,
  PANGO_ATTR_UNDERLINE_COLOR,
  PANGO_ATTR_STRIKETHROUGH_COLOR,
  PANGO_ATTR_ABSOLUTE_SIZE,
  PANGO_ATTR_GRAVITY,
  PANGO_ATTR_GRAVITY_HINT,
  PANGO_ATTR_FONT_FEATURES,
  PANGO_ATTR_FOREGROUND_ALPHA,
  PANGO_ATTR_BACKGROUND_ALPHA,
  PANGO_ATTR_ALLOW_BREAKS,
  PANGO_ATTR_SHOW,
  PANGO_ATTR_INSERT_HYPHENS,
} PangoAttrType;
typedef enum {
  PANGO_UNDERLINE_NONE,
  PANGO_UNDERLINE_SINGLE,
  PANGO_UNDERLINE_DOUBLE,
  PANGO_UNDERLINE_LOW,
  PANGO_UNDERLINE_ERROR
} PangoUnderline;
struct _PangoAttribute
{
  const PangoAttrClass *klass;
  guint start_index;
  guint end_index;
};
typedef gboolean (*PangoAttrFilterFunc) (PangoAttribute *attribute,
      gpointer user_data);
typedef gpointer (*PangoAttrDataCopyFunc) (gconstpointer user_data);
struct _PangoAttrClass
{
  PangoAttrType type;
  PangoAttribute * (*copy) (const PangoAttribute *attr);
  void (*destroy) (PangoAttribute *attr);
  gboolean (*equal) (const PangoAttribute *attr1, const PangoAttribute *attr2);
};
struct _PangoAttrString
{
  PangoAttribute attr;
  char *value;
};
struct _PangoAttrLanguage
{
  PangoAttribute attr;
  PangoLanguage *value;
};
struct _PangoAttrInt
{
  PangoAttribute attr;
  int value;
};
struct _PangoAttrFloat
{
  PangoAttribute attr;
  double value;
};
struct _PangoAttrColor
{
  PangoAttribute attr;
  PangoColor color;
};
struct _PangoAttrSize
{
  PangoAttribute attr;
  int size;
  guint absolute : 1;
};
struct _PangoAttrShape
{
  PangoAttribute attr;
  PangoRectangle ink_rect;
  PangoRectangle logical_rect;
  gpointer data;
  PangoAttrDataCopyFunc copy_func;
  GDestroyNotify destroy_func;
};
struct _PangoAttrFontDesc
{
  PangoAttribute attr;
  PangoFontDescription *desc;
};
struct _PangoAttrFontFeatures
{
  PangoAttribute attr;
  gchar *features;
};
typedef enum {
  PANGO_SHOW_NONE = 0,
  PANGO_SHOW_SPACES = 1 << 0,
  PANGO_SHOW_LINE_BREAKS = 1 << 1,
  PANGO_SHOW_IGNORABLES = 1 << 2
} PangoShowFlags;
typedef struct _PangoAnalysis PangoAnalysis;
typedef struct _PangoItem PangoItem;
struct _PangoAnalysis
{
  PangoEngineShape *shape_engine;
  PangoEngineLang *lang_engine;
  PangoFont *font;
  guint8 level;
  guint8 gravity;
  guint8 flags;
  guint8 script;
  PangoLanguage *language;
  GSList *extra_attrs;
};
struct _PangoItem
{
  gint offset;
  gint length;
  gint num_chars;
  PangoAnalysis analysis;
};
struct _PangoLogAttr
{
  guint is_line_break : 1;
  guint is_mandatory_break : 1;
  guint is_char_break : 1;
  guint is_white : 1;
  guint is_cursor_position : 1;
  guint is_word_start : 1;
  guint is_word_end : 1;
  guint is_sentence_boundary : 1;
  guint is_sentence_start : 1;
  guint is_sentence_end : 1;
  guint backspace_deletes_character : 1;
  guint is_expandable_space : 1;
  guint is_word_boundary : 1;
};
typedef struct _PangoFontset PangoFontset;
typedef struct _PangoFontsetClass PangoFontsetClass;
typedef gboolean (*PangoFontsetForeachFunc) (PangoFontset *fontset,
          PangoFont *font,
          gpointer user_data);
struct _PangoFontset
{
  GObject parent_instance;
};
struct _PangoFontsetClass
{
  GObjectClass parent_class;
  PangoFont * (*get_font) (PangoFontset *fontset,
                                     guint wc);
  PangoFontMetrics *(*get_metrics) (PangoFontset *fontset);
  PangoLanguage * (*get_language) (PangoFontset *fontset);
  void (*foreach) (PangoFontset *fontset,
                                     PangoFontsetForeachFunc func,
                                     gpointer data);
  void (*_pango_reserved1) (void);
  void (*_pango_reserved2) (void);
  void (*_pango_reserved3) (void);
  void (*_pango_reserved4) (void);
};
typedef struct _PangoFontsetSimple PangoFontsetSimple;
typedef struct _PangoFontsetSimpleClass PangoFontsetSimpleClass;
typedef struct _PangoFontMapClass PangoFontMapClass;
typedef struct _PangoContext PangoContext;
struct _PangoFontMap
{
  GObject parent_instance;
};
struct _PangoFontMapClass
{
  GObjectClass parent_class;
  PangoFont * (*load_font) (PangoFontMap *fontmap,
                                  PangoContext *context,
                                  const PangoFontDescription *desc);
  void (*list_families) (PangoFontMap *fontmap,
                                  PangoFontFamily ***families,
                                  int *n_families);
  PangoFontset *(*load_fontset) (PangoFontMap *fontmap,
                                  PangoContext *context,
                                  const PangoFontDescription *desc,
                                  PangoLanguage *language);
  const char *shape_engine_type;
  guint (*get_serial) (PangoFontMap *fontmap);
  void (*changed) (PangoFontMap *fontmap);
  void (*_pango_reserved1) (void);
  void (*_pango_reserved2) (void);
};
typedef struct _PangoContextClass PangoContextClass;
typedef struct _PangoGlyphGeometry PangoGlyphGeometry;
typedef struct _PangoGlyphVisAttr PangoGlyphVisAttr;
typedef struct _PangoGlyphInfo PangoGlyphInfo;
typedef struct _PangoGlyphString PangoGlyphString;
typedef gint32 PangoGlyphUnit;
struct _PangoGlyphGeometry
{
  PangoGlyphUnit width;
  PangoGlyphUnit x_offset;
  PangoGlyphUnit y_offset;
};
struct _PangoGlyphVisAttr
{
  guint is_cluster_start : 1;
};
struct _PangoGlyphInfo
{
  PangoGlyph glyph;
  PangoGlyphGeometry geometry;
  PangoGlyphVisAttr attr;
};
struct _PangoGlyphString {
  gint num_glyphs;
  PangoGlyphInfo *glyphs;
  gint *log_clusters;
  gint space;
};
typedef enum {
  PANGO_SHAPE_NONE = 0,
  PANGO_SHAPE_ROUND_POSITIONS = 1 << 0,
} PangoShapeFlags;
typedef struct _PangoEngine PangoEngine;
typedef struct _PangoEngineClass PangoEngineClass;
struct _PangoEngine
{
  GObject parent_instance;
};
struct _PangoEngineClass
{
  GObjectClass parent_class;
};
typedef struct _PangoEngineLangClass PangoEngineLangClass;
struct _PangoEngineLang
{
  PangoEngine parent_instance;
};
struct _PangoEngineLangClass
{
  PangoEngineClass parent_class;
  void (*script_break) (PangoEngineLang *engine,
   const char *text,
   int len,
   PangoAnalysis *analysis,
   PangoLogAttr *attrs,
   int attrs_len);
};
typedef struct _PangoEngineShapeClass PangoEngineShapeClass;
struct _PangoEngineShape
{
  PangoEngine parent_instance;
};
struct _PangoEngineShapeClass
{
  PangoEngineClass parent_class;
  void (*script_shape) (PangoEngineShape *engine,
   PangoFont *font,
   const char *item_text,
   unsigned int item_length,
   const PangoAnalysis *analysis,
   PangoGlyphString *glyphs,
   const char *paragraph_text,
   unsigned int paragraph_length);
  PangoCoverageLevel (*covers) (PangoEngineShape *engine,
      PangoFont *font,
      PangoLanguage *language,
      gunichar wc);
};
typedef struct _PangoEngineInfo PangoEngineInfo;
typedef struct _PangoEngineScriptInfo PangoEngineScriptInfo;
struct _PangoEngineScriptInfo
{
  PangoScript script;
  const gchar *langs;
};
struct _PangoEngineInfo
{
  const gchar *id;
  const gchar *engine_type;
  const gchar *render_type;
  PangoEngineScriptInfo *scripts;
  gint n_scripts;
};
typedef struct _PangoGlyphItem PangoGlyphItem;
struct _PangoGlyphItem
{
  PangoItem *item;
  PangoGlyphString *glyphs;
};
typedef struct _PangoGlyphItemIter PangoGlyphItemIter;
struct _PangoGlyphItemIter
{
  PangoGlyphItem *glyph_item;
  const gchar *text;
  int start_glyph;
  int start_index;
  int start_char;
  int end_glyph;
  int end_index;
  int end_char;
};
typedef struct _PangoTabArray PangoTabArray;
typedef enum
{
  PANGO_TAB_LEFT
} PangoTabAlign;
typedef struct _PangoLayout PangoLayout;
typedef struct _PangoLayoutClass PangoLayoutClass;
typedef struct _PangoLayoutLine PangoLayoutLine;
typedef PangoGlyphItem PangoLayoutRun;
typedef enum {
  PANGO_ALIGN_LEFT,
  PANGO_ALIGN_CENTER,
  PANGO_ALIGN_RIGHT
} PangoAlignment;
typedef enum {
  PANGO_WRAP_WORD,
  PANGO_WRAP_CHAR,
  PANGO_WRAP_WORD_CHAR
} PangoWrapMode;
typedef enum {
  PANGO_ELLIPSIZE_NONE,
  PANGO_ELLIPSIZE_START,
  PANGO_ELLIPSIZE_MIDDLE,
  PANGO_ELLIPSIZE_END
} PangoEllipsizeMode;
struct _PangoLayoutLine
{
  PangoLayout *layout;
  gint start_index;
  gint length;
  GSList *runs;
  guint is_paragraph_start : 1;
  guint resolved_dir : 3;
};
typedef struct _PangoLayoutIter PangoLayoutIter;
typedef struct _PangoRenderer PangoRenderer;
typedef struct _PangoRendererClass PangoRendererClass;
typedef struct _PangoRendererPrivate PangoRendererPrivate;
typedef enum
{
  PANGO_RENDER_PART_FOREGROUND,
  PANGO_RENDER_PART_BACKGROUND,
  PANGO_RENDER_PART_UNDERLINE,
  PANGO_RENDER_PART_STRIKETHROUGH
} PangoRenderPart;
struct _PangoRenderer
{
  GObject parent_instance;
  PangoUnderline underline;
  gboolean strikethrough;
  int active_count;
  PangoMatrix *matrix;
  PangoRendererPrivate *priv;
};
struct _PangoRendererClass
{
  GObjectClass parent_class;
  void (*draw_glyphs) (PangoRenderer *renderer,
                                PangoFont *font,
                                PangoGlyphString *glyphs,
                                int x,
                                int y);
  void (*draw_rectangle) (PangoRenderer *renderer,
                                PangoRenderPart part,
                                int x,
                                int y,
                                int width,
                                int height);
  void (*draw_error_underline) (PangoRenderer *renderer,
                                int x,
                                int y,
                                int width,
                                int height);
  void (*draw_shape) (PangoRenderer *renderer,
                                PangoAttrShape *attr,
                                int x,
                                int y);
  void (*draw_trapezoid) (PangoRenderer *renderer,
                                PangoRenderPart part,
                                double y1_,
                                double x11,
                                double x21,
                                double y2,
                                double x12,
                                double x22);
  void (*draw_glyph) (PangoRenderer *renderer,
                                PangoFont *font,
                                PangoGlyph glyph,
                                double x,
                                double y);
  void (*part_changed) (PangoRenderer *renderer,
                                PangoRenderPart part);
  void (*begin) (PangoRenderer *renderer);
  void (*end) (PangoRenderer *renderer);
  void (*prepare_run) (PangoRenderer *renderer,
                                PangoLayoutRun *run);
  void (*draw_glyph_item) (PangoRenderer *renderer,
                                const char *text,
                                PangoGlyphItem *glyph_item,
                                int x,
                                int y);
  void (*_pango_reserved2) (void);
  void (*_pango_reserved3) (void);
  void (*_pango_reserved4) (void);
};
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __fpos_t fpos_t;
typedef int cairo_bool_t;
typedef struct _cairo cairo_t;
typedef struct _cairo_surface cairo_surface_t;
typedef struct _cairo_device cairo_device_t;
typedef struct _cairo_matrix {
    double xx; double yx;
    double xy; double yy;
    double x0; double y0;
} cairo_matrix_t;
typedef struct _cairo_pattern cairo_pattern_t;
typedef void (*cairo_destroy_func_t) (void *data);
typedef struct _cairo_user_data_key {
    int unused;
} cairo_user_data_key_t;
typedef enum _cairo_status {
    CAIRO_STATUS_SUCCESS = 0,
    CAIRO_STATUS_NO_MEMORY,
    CAIRO_STATUS_INVALID_RESTORE,
    CAIRO_STATUS_INVALID_POP_GROUP,
    CAIRO_STATUS_NO_CURRENT_POINT,
    CAIRO_STATUS_INVALID_MATRIX,
    CAIRO_STATUS_INVALID_STATUS,
    CAIRO_STATUS_NULL_POINTER,
    CAIRO_STATUS_INVALID_STRING,
    CAIRO_STATUS_INVALID_PATH_DATA,
    CAIRO_STATUS_READ_ERROR,
    CAIRO_STATUS_WRITE_ERROR,
    CAIRO_STATUS_SURFACE_FINISHED,
    CAIRO_STATUS_SURFACE_TYPE_MISMATCH,
    CAIRO_STATUS_PATTERN_TYPE_MISMATCH,
    CAIRO_STATUS_INVALID_CONTENT,
    CAIRO_STATUS_INVALID_FORMAT,
    CAIRO_STATUS_INVALID_VISUAL,
    CAIRO_STATUS_FILE_NOT_FOUND,
    CAIRO_STATUS_INVALID_DASH,
    CAIRO_STATUS_INVALID_DSC_COMMENT,
    CAIRO_STATUS_INVALID_INDEX,
    CAIRO_STATUS_CLIP_NOT_REPRESENTABLE,
    CAIRO_STATUS_TEMP_FILE_ERROR,
    CAIRO_STATUS_INVALID_STRIDE,
    CAIRO_STATUS_FONT_TYPE_MISMATCH,
    CAIRO_STATUS_USER_FONT_IMMUTABLE,
    CAIRO_STATUS_USER_FONT_ERROR,
    CAIRO_STATUS_NEGATIVE_COUNT,
    CAIRO_STATUS_INVALID_CLUSTERS,
    CAIRO_STATUS_INVALID_SLANT,
    CAIRO_STATUS_INVALID_WEIGHT,
    CAIRO_STATUS_INVALID_SIZE,
    CAIRO_STATUS_USER_FONT_NOT_IMPLEMENTED,
    CAIRO_STATUS_DEVICE_TYPE_MISMATCH,
    CAIRO_STATUS_DEVICE_ERROR,
    CAIRO_STATUS_INVALID_MESH_CONSTRUCTION,
    CAIRO_STATUS_DEVICE_FINISHED,
    CAIRO_STATUS_JBIG2_GLOBAL_MISSING,
    CAIRO_STATUS_PNG_ERROR,
    CAIRO_STATUS_FREETYPE_ERROR,
    CAIRO_STATUS_WIN32_GDI_ERROR,
    CAIRO_STATUS_TAG_ERROR,
    CAIRO_STATUS_LAST_STATUS
} cairo_status_t;
typedef enum _cairo_content {
    CAIRO_CONTENT_COLOR = 0x1000,
    CAIRO_CONTENT_ALPHA = 0x2000,
    CAIRO_CONTENT_COLOR_ALPHA = 0x3000
} cairo_content_t;
typedef enum _cairo_format {
    CAIRO_FORMAT_INVALID = -1,
    CAIRO_FORMAT_ARGB32 = 0,
    CAIRO_FORMAT_RGB24 = 1,
    CAIRO_FORMAT_A8 = 2,
    CAIRO_FORMAT_A1 = 3,
    CAIRO_FORMAT_RGB16_565 = 4,
    CAIRO_FORMAT_RGB30 = 5
} cairo_format_t;
typedef cairo_status_t (*cairo_write_func_t) (void *closure,
           const unsigned char *data,
           unsigned int length);
typedef cairo_status_t (*cairo_read_func_t) (void *closure,
          unsigned char *data,
          unsigned int length);
typedef struct _cairo_rectangle_int {
    int x, y;
    int width, height;
} cairo_rectangle_int_t;

typedef enum _cairo_operator {
    CAIRO_OPERATOR_CLEAR,
    CAIRO_OPERATOR_SOURCE,
    CAIRO_OPERATOR_OVER,
    CAIRO_OPERATOR_IN,
    CAIRO_OPERATOR_OUT,
    CAIRO_OPERATOR_ATOP,
    CAIRO_OPERATOR_DEST,
    CAIRO_OPERATOR_DEST_OVER,
    CAIRO_OPERATOR_DEST_IN,
    CAIRO_OPERATOR_DEST_OUT,
    CAIRO_OPERATOR_DEST_ATOP,
    CAIRO_OPERATOR_XOR,
    CAIRO_OPERATOR_ADD,
    CAIRO_OPERATOR_SATURATE,
    CAIRO_OPERATOR_MULTIPLY,
    CAIRO_OPERATOR_SCREEN,
    CAIRO_OPERATOR_OVERLAY,
    CAIRO_OPERATOR_DARKEN,
    CAIRO_OPERATOR_LIGHTEN,
    CAIRO_OPERATOR_COLOR_DODGE,
    CAIRO_OPERATOR_COLOR_BURN,
    CAIRO_OPERATOR_HARD_LIGHT,
    CAIRO_OPERATOR_SOFT_LIGHT,
    CAIRO_OPERATOR_DIFFERENCE,
    CAIRO_OPERATOR_EXCLUSION,
    CAIRO_OPERATOR_HSL_HUE,
    CAIRO_OPERATOR_HSL_SATURATION,
    CAIRO_OPERATOR_HSL_COLOR,
    CAIRO_OPERATOR_HSL_LUMINOSITY
} cairo_operator_t;

typedef enum _cairo_antialias {
    CAIRO_ANTIALIAS_DEFAULT,
    CAIRO_ANTIALIAS_NONE,
    CAIRO_ANTIALIAS_GRAY,
    CAIRO_ANTIALIAS_SUBPIXEL,
    CAIRO_ANTIALIAS_FAST,
    CAIRO_ANTIALIAS_GOOD,
    CAIRO_ANTIALIAS_BEST
} cairo_antialias_t;

typedef enum _cairo_fill_rule {
    CAIRO_FILL_RULE_WINDING,
    CAIRO_FILL_RULE_EVEN_ODD
} cairo_fill_rule_t;

typedef enum _cairo_line_cap {
    CAIRO_LINE_CAP_BUTT,
    CAIRO_LINE_CAP_ROUND,
    CAIRO_LINE_CAP_SQUARE
} cairo_line_cap_t;

typedef enum _cairo_line_join {
    CAIRO_LINE_JOIN_MITER,
    CAIRO_LINE_JOIN_ROUND,
    CAIRO_LINE_JOIN_BEVEL
} cairo_line_join_t;
typedef struct _cairo_rectangle {
    double x, y, width, height;
} cairo_rectangle_t;
typedef struct _cairo_rectangle_list {
    cairo_status_t status;
    cairo_rectangle_t *rectangles;
    int num_rectangles;
} cairo_rectangle_list_t;

typedef struct _cairo_scaled_font cairo_scaled_font_t;
typedef struct _cairo_font_face cairo_font_face_t;
typedef struct {
    unsigned long index;
    double x;
    double y;
} cairo_glyph_t;

typedef struct {
    int num_bytes;
    int num_glyphs;
} cairo_text_cluster_t;
 
typedef enum _cairo_text_cluster_flags {
    CAIRO_TEXT_CLUSTER_FLAG_BACKWARD = 0x00000001
} cairo_text_cluster_flags_t;
typedef struct {
    double x_bearing;
    double y_bearing;
    double width;
    double height;
    double x_advance;
    double y_advance;
} cairo_text_extents_t;
typedef struct {
    double ascent;
    double descent;
    double height;
    double max_x_advance;
    double max_y_advance;
} cairo_font_extents_t;
typedef enum _cairo_font_slant {
    CAIRO_FONT_SLANT_NORMAL,
    CAIRO_FONT_SLANT_ITALIC,
    CAIRO_FONT_SLANT_OBLIQUE
} cairo_font_slant_t;
typedef enum _cairo_font_weight {
    CAIRO_FONT_WEIGHT_NORMAL,
    CAIRO_FONT_WEIGHT_BOLD
} cairo_font_weight_t;
typedef enum _cairo_subpixel_order {
    CAIRO_SUBPIXEL_ORDER_DEFAULT,
    CAIRO_SUBPIXEL_ORDER_RGB,
    CAIRO_SUBPIXEL_ORDER_BGR,
    CAIRO_SUBPIXEL_ORDER_VRGB,
    CAIRO_SUBPIXEL_ORDER_VBGR
} cairo_subpixel_order_t;
typedef enum _cairo_hint_style {
    CAIRO_HINT_STYLE_DEFAULT,
    CAIRO_HINT_STYLE_NONE,
    CAIRO_HINT_STYLE_SLIGHT,
    CAIRO_HINT_STYLE_MEDIUM,
    CAIRO_HINT_STYLE_FULL
} cairo_hint_style_t;
typedef enum _cairo_hint_metrics {
    CAIRO_HINT_METRICS_DEFAULT,
    CAIRO_HINT_METRICS_OFF,
    CAIRO_HINT_METRICS_ON
} cairo_hint_metrics_t;
typedef struct _cairo_font_options cairo_font_options_t;
 
typedef enum _cairo_font_type {
    CAIRO_FONT_TYPE_TOY,
    CAIRO_FONT_TYPE_FT,
    CAIRO_FONT_TYPE_WIN32,
    CAIRO_FONT_TYPE_QUARTZ,
    CAIRO_FONT_TYPE_USER
} cairo_font_type_t;

typedef cairo_status_t (*cairo_user_scaled_font_init_func_t) (cairo_scaled_font_t *scaled_font,
             cairo_t *cr,
             cairo_font_extents_t *extents);
typedef cairo_status_t (*cairo_user_scaled_font_render_glyph_func_t) (cairo_scaled_font_t *scaled_font,
              unsigned long glyph,
              cairo_t *cr,
              cairo_text_extents_t *extents);
typedef cairo_status_t (*cairo_user_scaled_font_text_to_glyphs_func_t) (cairo_scaled_font_t *scaled_font,
         const char *utf8,
         int utf8_len,
         cairo_glyph_t **glyphs,
         int *num_glyphs,
         cairo_text_cluster_t **clusters,
         int *num_clusters,
         cairo_text_cluster_flags_t *cluster_flags);
typedef cairo_status_t (*cairo_user_scaled_font_unicode_to_glyph_func_t) (cairo_scaled_font_t *scaled_font,
           unsigned long unicode,
           unsigned long *glyph_index);
typedef enum _cairo_path_data_type {
    CAIRO_PATH_MOVE_TO,
    CAIRO_PATH_LINE_TO,
    CAIRO_PATH_CURVE_TO,
    CAIRO_PATH_CLOSE_PATH
} cairo_path_data_type_t;
typedef union _cairo_path_data_t cairo_path_data_t;
union _cairo_path_data_t {
    struct {
 cairo_path_data_type_t type;
 int length;
    } header;
    struct {
 double x, y;
    } point;
};
typedef struct cairo_path {
    cairo_status_t status;
    cairo_path_data_t *data;
    int num_data;
} cairo_path_t;

typedef enum _cairo_device_type {
    CAIRO_DEVICE_TYPE_DRM,
    CAIRO_DEVICE_TYPE_GL,
    CAIRO_DEVICE_TYPE_SCRIPT,
    CAIRO_DEVICE_TYPE_XCB,
    CAIRO_DEVICE_TYPE_XLIB,
    CAIRO_DEVICE_TYPE_XML,
    CAIRO_DEVICE_TYPE_COGL,
    CAIRO_DEVICE_TYPE_WIN32,
    CAIRO_DEVICE_TYPE_INVALID = -1
} cairo_device_type_t;

typedef enum {
 CAIRO_SURFACE_OBSERVER_NORMAL = 0,
 CAIRO_SURFACE_OBSERVER_RECORD_OPERATIONS = 0x1
} cairo_surface_observer_mode_t;

typedef void (*cairo_surface_observer_callback_t) (cairo_surface_t *observer,
         cairo_surface_t *target,
         void *data);
 
typedef enum _cairo_surface_type {
    CAIRO_SURFACE_TYPE_IMAGE,
    CAIRO_SURFACE_TYPE_PDF,
    CAIRO_SURFACE_TYPE_PS,
    CAIRO_SURFACE_TYPE_XLIB,
    CAIRO_SURFACE_TYPE_XCB,
    CAIRO_SURFACE_TYPE_GLITZ,
    CAIRO_SURFACE_TYPE_QUARTZ,
    CAIRO_SURFACE_TYPE_WIN32,
    CAIRO_SURFACE_TYPE_BEOS,
    CAIRO_SURFACE_TYPE_DIRECTFB,
    CAIRO_SURFACE_TYPE_SVG,
    CAIRO_SURFACE_TYPE_OS2,
    CAIRO_SURFACE_TYPE_WIN32_PRINTING,
    CAIRO_SURFACE_TYPE_QUARTZ_IMAGE,
    CAIRO_SURFACE_TYPE_SCRIPT,
    CAIRO_SURFACE_TYPE_QT,
    CAIRO_SURFACE_TYPE_RECORDING,
    CAIRO_SURFACE_TYPE_VG,
    CAIRO_SURFACE_TYPE_GL,
    CAIRO_SURFACE_TYPE_DRM,
    CAIRO_SURFACE_TYPE_TEE,
    CAIRO_SURFACE_TYPE_XML,
    CAIRO_SURFACE_TYPE_SKIA,
    CAIRO_SURFACE_TYPE_SUBSURFACE,
    CAIRO_SURFACE_TYPE_COGL
} cairo_surface_type_t;

typedef cairo_surface_t *
(*cairo_raster_source_acquire_func_t) (cairo_pattern_t *pattern,
           void *callback_data,
           cairo_surface_t *target,
           const cairo_rectangle_int_t *extents);
typedef void
(*cairo_raster_source_release_func_t) (cairo_pattern_t *pattern,
           void *callback_data,
           cairo_surface_t *surface);
typedef cairo_status_t
(*cairo_raster_source_snapshot_func_t) (cairo_pattern_t *pattern,
     void *callback_data);
typedef cairo_status_t
(*cairo_raster_source_copy_func_t) (cairo_pattern_t *pattern,
        void *callback_data,
        const cairo_pattern_t *other);
typedef void
(*cairo_raster_source_finish_func_t) (cairo_pattern_t *pattern,
          void *callback_data);

typedef enum _cairo_pattern_type {
    CAIRO_PATTERN_TYPE_SOLID,
    CAIRO_PATTERN_TYPE_SURFACE,
    CAIRO_PATTERN_TYPE_LINEAR,
    CAIRO_PATTERN_TYPE_RADIAL,
    CAIRO_PATTERN_TYPE_MESH,
    CAIRO_PATTERN_TYPE_RASTER_SOURCE
} cairo_pattern_type_t;

typedef enum _cairo_extend {
    CAIRO_EXTEND_NONE,
    CAIRO_EXTEND_REPEAT,
    CAIRO_EXTEND_REFLECT,
    CAIRO_EXTEND_PAD
} cairo_extend_t;

typedef enum _cairo_filter {
    CAIRO_FILTER_FAST,
    CAIRO_FILTER_GOOD,
    CAIRO_FILTER_BEST,
    CAIRO_FILTER_NEAREST,
    CAIRO_FILTER_BILINEAR,
    CAIRO_FILTER_GAUSSIAN
} cairo_filter_t;
 
typedef struct _cairo_region cairo_region_t;
typedef enum _cairo_region_overlap {
    CAIRO_REGION_OVERLAP_IN,
    CAIRO_REGION_OVERLAP_OUT,
    CAIRO_REGION_OVERLAP_PART
} cairo_region_overlap_t;

typedef struct _GdkPoint GdkPoint;
typedef cairo_rectangle_int_t GdkRectangle;
typedef struct _GdkAtom *GdkAtom;
typedef struct _GdkColor GdkColor;
typedef struct _GdkRGBA GdkRGBA;
typedef struct _GdkCursor GdkCursor;
typedef struct _GdkVisual GdkVisual;
typedef struct _GdkDevice GdkDevice;
typedef struct _GdkDragContext GdkDragContext;
typedef struct _GdkDisplayManager GdkDisplayManager;
typedef struct _GdkDeviceManager GdkDeviceManager;
typedef struct _GdkDisplay GdkDisplay;
typedef struct _GdkScreen GdkScreen;
typedef struct _GdkWindow GdkWindow;
typedef struct _GdkKeymap GdkKeymap;
typedef struct _GdkAppLaunchContext GdkAppLaunchContext;
typedef struct _GdkSeat GdkSeat;
typedef struct _GdkGLContext GdkGLContext;
typedef enum
{
  GDK_LSB_FIRST,
  GDK_MSB_FIRST
} GdkByteOrder;
typedef enum
{
  GDK_SHIFT_MASK = 1 << 0,
  GDK_LOCK_MASK = 1 << 1,
  GDK_CONTROL_MASK = 1 << 2,
  GDK_MOD1_MASK = 1 << 3,
  GDK_MOD2_MASK = 1 << 4,
  GDK_MOD3_MASK = 1 << 5,
  GDK_MOD4_MASK = 1 << 6,
  GDK_MOD5_MASK = 1 << 7,
  GDK_BUTTON1_MASK = 1 << 8,
  GDK_BUTTON2_MASK = 1 << 9,
  GDK_BUTTON3_MASK = 1 << 10,
  GDK_BUTTON4_MASK = 1 << 11,
  GDK_BUTTON5_MASK = 1 << 12,
  GDK_MODIFIER_RESERVED_13_MASK = 1 << 13,
  GDK_MODIFIER_RESERVED_14_MASK = 1 << 14,
  GDK_MODIFIER_RESERVED_15_MASK = 1 << 15,
  GDK_MODIFIER_RESERVED_16_MASK = 1 << 16,
  GDK_MODIFIER_RESERVED_17_MASK = 1 << 17,
  GDK_MODIFIER_RESERVED_18_MASK = 1 << 18,
  GDK_MODIFIER_RESERVED_19_MASK = 1 << 19,
  GDK_MODIFIER_RESERVED_20_MASK = 1 << 20,
  GDK_MODIFIER_RESERVED_21_MASK = 1 << 21,
  GDK_MODIFIER_RESERVED_22_MASK = 1 << 22,
  GDK_MODIFIER_RESERVED_23_MASK = 1 << 23,
  GDK_MODIFIER_RESERVED_24_MASK = 1 << 24,
  GDK_MODIFIER_RESERVED_25_MASK = 1 << 25,
  GDK_SUPER_MASK = 1 << 26,
  GDK_HYPER_MASK = 1 << 27,
  GDK_META_MASK = 1 << 28,
  GDK_MODIFIER_RESERVED_29_MASK = 1 << 29,
  GDK_RELEASE_MASK = 1 << 30,
  GDK_MODIFIER_MASK = 0x5c001fff
} GdkModifierType;
typedef enum
{
  GDK_MODIFIER_INTENT_PRIMARY_ACCELERATOR,
  GDK_MODIFIER_INTENT_CONTEXT_MENU,
  GDK_MODIFIER_INTENT_EXTEND_SELECTION,
  GDK_MODIFIER_INTENT_MODIFY_SELECTION,
  GDK_MODIFIER_INTENT_NO_TEXT_INPUT,
  GDK_MODIFIER_INTENT_SHIFT_GROUP,
  GDK_MODIFIER_INTENT_DEFAULT_MOD_MASK,
} GdkModifierIntent;
typedef enum
{
  GDK_OK = 0,
  GDK_ERROR = -1,
  GDK_ERROR_PARAM = -2,
  GDK_ERROR_FILE = -3,
  GDK_ERROR_MEM = -4
} GdkStatus;
typedef enum
{
  GDK_GRAB_SUCCESS = 0,
  GDK_GRAB_ALREADY_GRABBED = 1,
  GDK_GRAB_INVALID_TIME = 2,
  GDK_GRAB_NOT_VIEWABLE = 3,
  GDK_GRAB_FROZEN = 4,
  GDK_GRAB_FAILED = 5
} GdkGrabStatus;
typedef enum
{
  GDK_OWNERSHIP_NONE,
  GDK_OWNERSHIP_WINDOW,
  GDK_OWNERSHIP_APPLICATION
} GdkGrabOwnership;
typedef enum
{
  GDK_EXPOSURE_MASK = 1 << 1,
  GDK_POINTER_MOTION_MASK = 1 << 2,
  GDK_POINTER_MOTION_HINT_MASK = 1 << 3,
  GDK_BUTTON_MOTION_MASK = 1 << 4,
  GDK_BUTTON1_MOTION_MASK = 1 << 5,
  GDK_BUTTON2_MOTION_MASK = 1 << 6,
  GDK_BUTTON3_MOTION_MASK = 1 << 7,
  GDK_BUTTON_PRESS_MASK = 1 << 8,
  GDK_BUTTON_RELEASE_MASK = 1 << 9,
  GDK_KEY_PRESS_MASK = 1 << 10,
  GDK_KEY_RELEASE_MASK = 1 << 11,
  GDK_ENTER_NOTIFY_MASK = 1 << 12,
  GDK_LEAVE_NOTIFY_MASK = 1 << 13,
  GDK_FOCUS_CHANGE_MASK = 1 << 14,
  GDK_STRUCTURE_MASK = 1 << 15,
  GDK_PROPERTY_CHANGE_MASK = 1 << 16,
  GDK_VISIBILITY_NOTIFY_MASK = 1 << 17,
  GDK_PROXIMITY_IN_MASK = 1 << 18,
  GDK_PROXIMITY_OUT_MASK = 1 << 19,
  GDK_SUBSTRUCTURE_MASK = 1 << 20,
  GDK_SCROLL_MASK = 1 << 21,
  GDK_TOUCH_MASK = 1 << 22,
  GDK_SMOOTH_SCROLL_MASK = 1 << 23,
  GDK_TOUCHPAD_GESTURE_MASK = 1 << 24,
  GDK_TABLET_PAD_MASK = 1 << 25,
  GDK_ALL_EVENTS_MASK = 0x3FFFFFE
} GdkEventMask;
struct _GdkPoint
{
  gint x;
  gint y;
};
typedef enum {
  GDK_GL_ERROR_NOT_AVAILABLE,
  GDK_GL_ERROR_UNSUPPORTED_FORMAT,
  GDK_GL_ERROR_UNSUPPORTED_PROFILE
} GdkGLError;
typedef enum
{
  GDK_WINDOW_TYPE_HINT_NORMAL,
  GDK_WINDOW_TYPE_HINT_DIALOG,
  GDK_WINDOW_TYPE_HINT_MENU,
  GDK_WINDOW_TYPE_HINT_TOOLBAR,
  GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,
  GDK_WINDOW_TYPE_HINT_UTILITY,
  GDK_WINDOW_TYPE_HINT_DOCK,
  GDK_WINDOW_TYPE_HINT_DESKTOP,
  GDK_WINDOW_TYPE_HINT_DROPDOWN_MENU,
  GDK_WINDOW_TYPE_HINT_POPUP_MENU,
  GDK_WINDOW_TYPE_HINT_TOOLTIP,
  GDK_WINDOW_TYPE_HINT_NOTIFICATION,
  GDK_WINDOW_TYPE_HINT_COMBO,
  GDK_WINDOW_TYPE_HINT_DND
} GdkWindowTypeHint;
typedef enum
{
  GDK_AXIS_IGNORE,
  GDK_AXIS_X,
  GDK_AXIS_Y,
  GDK_AXIS_PRESSURE,
  GDK_AXIS_XTILT,
  GDK_AXIS_YTILT,
  GDK_AXIS_WHEEL,
  GDK_AXIS_DISTANCE,
  GDK_AXIS_ROTATION,
  GDK_AXIS_SLIDER,
  GDK_AXIS_LAST
} GdkAxisUse;
typedef enum
{
  GDK_AXIS_FLAG_X = 1 << GDK_AXIS_X,
  GDK_AXIS_FLAG_Y = 1 << GDK_AXIS_Y,
  GDK_AXIS_FLAG_PRESSURE = 1 << GDK_AXIS_PRESSURE,
  GDK_AXIS_FLAG_XTILT = 1 << GDK_AXIS_XTILT,
  GDK_AXIS_FLAG_YTILT = 1 << GDK_AXIS_YTILT,
  GDK_AXIS_FLAG_WHEEL = 1 << GDK_AXIS_WHEEL,
  GDK_AXIS_FLAG_DISTANCE = 1 << GDK_AXIS_DISTANCE,
  GDK_AXIS_FLAG_ROTATION = 1 << GDK_AXIS_ROTATION,
  GDK_AXIS_FLAG_SLIDER = 1 << GDK_AXIS_SLIDER,
} GdkAxisFlags;
typedef struct _GdkTimeCoord GdkTimeCoord;
typedef enum
{
  GDK_SOURCE_MOUSE,
  GDK_SOURCE_PEN,
  GDK_SOURCE_ERASER,
  GDK_SOURCE_CURSOR,
  GDK_SOURCE_KEYBOARD,
  GDK_SOURCE_TOUCHSCREEN,
  GDK_SOURCE_TOUCHPAD,
  GDK_SOURCE_TRACKPOINT,
  GDK_SOURCE_TABLET_PAD
} GdkInputSource;
typedef enum
{
  GDK_MODE_DISABLED,
  GDK_MODE_SCREEN,
  GDK_MODE_WINDOW
} GdkInputMode;
typedef enum {
  GDK_DEVICE_TYPE_MASTER,
  GDK_DEVICE_TYPE_SLAVE,
  GDK_DEVICE_TYPE_FLOATING
} GdkDeviceType;
struct _GdkTimeCoord
{
  guint32 time;
  gdouble axes[128];
};
typedef enum
{
  GDK_ACTION_DEFAULT = 1 << 0,
  GDK_ACTION_COPY = 1 << 1,
  GDK_ACTION_MOVE = 1 << 2,
  GDK_ACTION_LINK = 1 << 3,
  GDK_ACTION_PRIVATE = 1 << 4,
  GDK_ACTION_ASK = 1 << 5
} GdkDragAction;
typedef enum {
  GDK_DRAG_CANCEL_NO_TARGET,
  GDK_DRAG_CANCEL_USER_CANCELLED,
  GDK_DRAG_CANCEL_ERROR
} GdkDragCancelReason;
typedef enum
{
  GDK_DRAG_PROTO_NONE = 0,
  GDK_DRAG_PROTO_MOTIF,
  GDK_DRAG_PROTO_XDND,
  GDK_DRAG_PROTO_ROOTWIN,
  GDK_DRAG_PROTO_WIN32_DROPFILES,
  GDK_DRAG_PROTO_OLE2,
  GDK_DRAG_PROTO_LOCAL,
  GDK_DRAG_PROTO_WAYLAND
} GdkDragProtocol;
typedef struct _GdkDeviceTool GdkDeviceTool;
typedef enum {
  GDK_DEVICE_TOOL_TYPE_UNKNOWN,
  GDK_DEVICE_TOOL_TYPE_PEN,
  GDK_DEVICE_TOOL_TYPE_ERASER,
  GDK_DEVICE_TOOL_TYPE_BRUSH,
  GDK_DEVICE_TOOL_TYPE_PENCIL,
  GDK_DEVICE_TOOL_TYPE_AIRBRUSH,
  GDK_DEVICE_TOOL_TYPE_MOUSE,
  GDK_DEVICE_TOOL_TYPE_LENS,
} GdkDeviceToolType;
typedef struct _GdkEventAny GdkEventAny;
typedef struct _GdkEventExpose GdkEventExpose;
typedef struct _GdkEventVisibility GdkEventVisibility;
typedef struct _GdkEventMotion GdkEventMotion;
typedef struct _GdkEventButton GdkEventButton;
typedef struct _GdkEventTouch GdkEventTouch;
typedef struct _GdkEventScroll GdkEventScroll;
typedef struct _GdkEventKey GdkEventKey;
typedef struct _GdkEventFocus GdkEventFocus;
typedef struct _GdkEventCrossing GdkEventCrossing;
typedef struct _GdkEventConfigure GdkEventConfigure;
typedef struct _GdkEventProperty GdkEventProperty;
typedef struct _GdkEventSelection GdkEventSelection;
typedef struct _GdkEventOwnerChange GdkEventOwnerChange;
typedef struct _GdkEventProximity GdkEventProximity;
typedef struct _GdkEventDND GdkEventDND;
typedef struct _GdkEventWindowState GdkEventWindowState;
typedef struct _GdkEventSetting GdkEventSetting;
typedef struct _GdkEventGrabBroken GdkEventGrabBroken;
typedef struct _GdkEventTouchpadSwipe GdkEventTouchpadSwipe;
typedef struct _GdkEventTouchpadPinch GdkEventTouchpadPinch;
typedef struct _GdkEventPadButton GdkEventPadButton;
typedef struct _GdkEventPadAxis GdkEventPadAxis;
typedef struct _GdkEventPadGroupMode GdkEventPadGroupMode;
typedef struct _GdkEventSequence GdkEventSequence;
typedef union _GdkEvent GdkEvent;
typedef void (*GdkEventFunc) (GdkEvent *event,
         gpointer data);
typedef void GdkXEvent;
typedef enum {
  GDK_FILTER_CONTINUE,
  GDK_FILTER_TRANSLATE,
  GDK_FILTER_REMOVE
} GdkFilterReturn;
typedef GdkFilterReturn (*GdkFilterFunc) (GdkXEvent *xevent,
       GdkEvent *event,
       gpointer data);
typedef enum
{
  GDK_NOTHING = -1,
  GDK_DELETE = 0,
  GDK_DESTROY = 1,
  GDK_EXPOSE = 2,
  GDK_MOTION_NOTIFY = 3,
  GDK_BUTTON_PRESS = 4,
  GDK_2BUTTON_PRESS = 5,
  GDK_DOUBLE_BUTTON_PRESS = GDK_2BUTTON_PRESS,
  GDK_3BUTTON_PRESS = 6,
  GDK_TRIPLE_BUTTON_PRESS = GDK_3BUTTON_PRESS,
  GDK_BUTTON_RELEASE = 7,
  GDK_KEY_PRESS = 8,
  GDK_KEY_RELEASE = 9,
  GDK_ENTER_NOTIFY = 10,
  GDK_LEAVE_NOTIFY = 11,
  GDK_FOCUS_CHANGE = 12,
  GDK_CONFIGURE = 13,
  GDK_MAP = 14,
  GDK_UNMAP = 15,
  GDK_PROPERTY_NOTIFY = 16,
  GDK_SELECTION_CLEAR = 17,
  GDK_SELECTION_REQUEST = 18,
  GDK_SELECTION_NOTIFY = 19,
  GDK_PROXIMITY_IN = 20,
  GDK_PROXIMITY_OUT = 21,
  GDK_DRAG_ENTER = 22,
  GDK_DRAG_LEAVE = 23,
  GDK_DRAG_MOTION = 24,
  GDK_DRAG_STATUS = 25,
  GDK_DROP_START = 26,
  GDK_DROP_FINISHED = 27,
  GDK_CLIENT_EVENT = 28,
  GDK_VISIBILITY_NOTIFY = 29,
  GDK_SCROLL = 31,
  GDK_WINDOW_STATE = 32,
  GDK_SETTING = 33,
  GDK_OWNER_CHANGE = 34,
  GDK_GRAB_BROKEN = 35,
  GDK_DAMAGE = 36,
  GDK_TOUCH_BEGIN = 37,
  GDK_TOUCH_UPDATE = 38,
  GDK_TOUCH_END = 39,
  GDK_TOUCH_CANCEL = 40,
  GDK_TOUCHPAD_SWIPE = 41,
  GDK_TOUCHPAD_PINCH = 42,
  GDK_PAD_BUTTON_PRESS = 43,
  GDK_PAD_BUTTON_RELEASE = 44,
  GDK_PAD_RING = 45,
  GDK_PAD_STRIP = 46,
  GDK_PAD_GROUP_MODE = 47,
  GDK_EVENT_LAST
} GdkEventType;
typedef enum
{
  GDK_VISIBILITY_UNOBSCURED,
  GDK_VISIBILITY_PARTIAL,
  GDK_VISIBILITY_FULLY_OBSCURED
} GdkVisibilityState;
typedef enum
{
  GDK_TOUCHPAD_GESTURE_PHASE_BEGIN,
  GDK_TOUCHPAD_GESTURE_PHASE_UPDATE,
  GDK_TOUCHPAD_GESTURE_PHASE_END,
  GDK_TOUCHPAD_GESTURE_PHASE_CANCEL
} GdkTouchpadGesturePhase;
typedef enum
{
  GDK_SCROLL_UP,
  GDK_SCROLL_DOWN,
  GDK_SCROLL_LEFT,
  GDK_SCROLL_RIGHT,
  GDK_SCROLL_SMOOTH
} GdkScrollDirection;
typedef enum
{
  GDK_NOTIFY_ANCESTOR = 0,
  GDK_NOTIFY_VIRTUAL = 1,
  GDK_NOTIFY_INFERIOR = 2,
  GDK_NOTIFY_NONLINEAR = 3,
  GDK_NOTIFY_NONLINEAR_VIRTUAL = 4,
  GDK_NOTIFY_UNKNOWN = 5
} GdkNotifyType;
typedef enum
{
  GDK_CROSSING_NORMAL,
  GDK_CROSSING_GRAB,
  GDK_CROSSING_UNGRAB,
  GDK_CROSSING_GTK_GRAB,
  GDK_CROSSING_GTK_UNGRAB,
  GDK_CROSSING_STATE_CHANGED,
  GDK_CROSSING_TOUCH_BEGIN,
  GDK_CROSSING_TOUCH_END,
  GDK_CROSSING_DEVICE_SWITCH
} GdkCrossingMode;
typedef enum
{
  GDK_PROPERTY_NEW_VALUE,
  GDK_PROPERTY_DELETE
} GdkPropertyState;
typedef enum
{
  GDK_WINDOW_STATE_WITHDRAWN = 1 << 0,
  GDK_WINDOW_STATE_ICONIFIED = 1 << 1,
  GDK_WINDOW_STATE_MAXIMIZED = 1 << 2,
  GDK_WINDOW_STATE_STICKY = 1 << 3,
  GDK_WINDOW_STATE_FULLSCREEN = 1 << 4,
  GDK_WINDOW_STATE_ABOVE = 1 << 5,
  GDK_WINDOW_STATE_BELOW = 1 << 6,
  GDK_WINDOW_STATE_FOCUSED = 1 << 7,
  GDK_WINDOW_STATE_TILED = 1 << 8,
  GDK_WINDOW_STATE_TOP_TILED = 1 << 9,
  GDK_WINDOW_STATE_TOP_RESIZABLE = 1 << 10,
  GDK_WINDOW_STATE_RIGHT_TILED = 1 << 11,
  GDK_WINDOW_STATE_RIGHT_RESIZABLE = 1 << 12,
  GDK_WINDOW_STATE_BOTTOM_TILED = 1 << 13,
  GDK_WINDOW_STATE_BOTTOM_RESIZABLE = 1 << 14,
  GDK_WINDOW_STATE_LEFT_TILED = 1 << 15,
  GDK_WINDOW_STATE_LEFT_RESIZABLE = 1 << 16
} GdkWindowState;
typedef enum
{
  GDK_SETTING_ACTION_NEW,
  GDK_SETTING_ACTION_CHANGED,
  GDK_SETTING_ACTION_DELETED
} GdkSettingAction;
typedef enum
{
  GDK_OWNER_CHANGE_NEW_OWNER,
  GDK_OWNER_CHANGE_DESTROY,
  GDK_OWNER_CHANGE_CLOSE
} GdkOwnerChange;
struct _GdkEventAny
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
};
struct _GdkEventExpose
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkRectangle area;
  cairo_region_t *region;
  gint count;
};
struct _GdkEventVisibility
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkVisibilityState state;
};
struct _GdkEventMotion
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble *axes;
  guint state;
  gint16 is_hint;
  GdkDevice *device;
  gdouble x_root, y_root;
};
struct _GdkEventButton
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble *axes;
  guint state;
  guint button;
  GdkDevice *device;
  gdouble x_root, y_root;
};
struct _GdkEventTouch
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble *axes;
  guint state;
  GdkEventSequence *sequence;
  gboolean emulating_pointer;
  GdkDevice *device;
  gdouble x_root, y_root;
};
struct _GdkEventScroll
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  gdouble x;
  gdouble y;
  guint state;
  GdkScrollDirection direction;
  GdkDevice *device;
  gdouble x_root, y_root;
  gdouble delta_x;
  gdouble delta_y;
  guint is_stop : 1;
};
struct _GdkEventKey
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  guint state;
  guint keyval;
  gint length;
  gchar *string;
  guint16 hardware_keycode;
  guint8 group;
  guint is_modifier : 1;
};
struct _GdkEventCrossing
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkWindow *subwindow;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble x_root;
  gdouble y_root;
  GdkCrossingMode mode;
  GdkNotifyType detail;
  gboolean focus;
  guint state;
};
struct _GdkEventFocus
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  gint16 in;
};
struct _GdkEventConfigure
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  gint x, y;
  gint width;
  gint height;
};
struct _GdkEventProperty
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkAtom atom;
  guint32 time;
  guint state;
};
struct _GdkEventSelection
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkAtom selection;
  GdkAtom target;
  GdkAtom property;
  guint32 time;
  GdkWindow *requestor;
};
struct _GdkEventOwnerChange
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkWindow *owner;
  GdkOwnerChange reason;
  GdkAtom selection;
  guint32 time;
  guint32 selection_time;
};
struct _GdkEventProximity
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  GdkDevice *device;
};
struct _GdkEventSetting
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkSettingAction action;
  char *name;
};
struct _GdkEventWindowState
{
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkWindowState changed_mask;
  GdkWindowState new_window_state;
};
struct _GdkEventGrabBroken {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  gboolean keyboard;
  gboolean implicit;
  GdkWindow *grab_window;
};
struct _GdkEventDND {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  GdkDragContext *context;
  guint32 time;
  gshort x_root, y_root;
};
struct _GdkEventTouchpadSwipe {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  gint8 phase;
  gint8 n_fingers;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble dx;
  gdouble dy;
  gdouble x_root, y_root;
  guint state;
};
struct _GdkEventTouchpadPinch {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  gint8 phase;
  gint8 n_fingers;
  guint32 time;
  gdouble x;
  gdouble y;
  gdouble dx;
  gdouble dy;
  gdouble angle_delta;
  gdouble scale;
  gdouble x_root, y_root;
  guint state;
};
struct _GdkEventPadButton {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  guint group;
  guint button;
  guint mode;
};
struct _GdkEventPadAxis {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  guint group;
  guint index;
  guint mode;
  gdouble value;
};
struct _GdkEventPadGroupMode {
  GdkEventType type;
  GdkWindow *window;
  gint8 send_event;
  guint32 time;
  guint group;
  guint mode;
};
union _GdkEvent
{
  GdkEventType type;
  GdkEventAny any;
  GdkEventExpose expose;
  GdkEventVisibility visibility;
  GdkEventMotion motion;
  GdkEventButton button;
  GdkEventTouch touch;
  GdkEventScroll scroll;
  GdkEventKey key;
  GdkEventCrossing crossing;
  GdkEventFocus focus_change;
  GdkEventConfigure configure;
  GdkEventProperty property;
  GdkEventSelection selection;
  GdkEventOwnerChange owner_change;
  GdkEventProximity proximity;
  GdkEventDND dnd;
  GdkEventWindowState window_state;
  GdkEventSetting setting;
  GdkEventGrabBroken grab_broken;
  GdkEventTouchpadSwipe touchpad_swipe;
  GdkEventTouchpadPinch touchpad_pinch;
  GdkEventPadButton pad_button;
  GdkEventPadAxis pad_axis;
  GdkEventPadGroupMode pad_group_mode;
};
typedef struct _GdkDrawingContext GdkDrawingContext;
typedef struct _GdkDrawingContextClass GdkDrawingContextClass;
typedef struct _GdkFrameTimings GdkFrameTimings;
typedef struct _GdkFrameClock GdkFrameClock;
typedef struct _GdkFrameClockPrivate GdkFrameClockPrivate;
typedef struct _GdkFrameClockClass GdkFrameClockClass;
typedef enum {
  GDK_FRAME_CLOCK_PHASE_NONE = 0,
  GDK_FRAME_CLOCK_PHASE_FLUSH_EVENTS = 1 << 0,
  GDK_FRAME_CLOCK_PHASE_BEFORE_PAINT = 1 << 1,
  GDK_FRAME_CLOCK_PHASE_UPDATE = 1 << 2,
  GDK_FRAME_CLOCK_PHASE_LAYOUT = 1 << 3,
  GDK_FRAME_CLOCK_PHASE_PAINT = 1 << 4,
  GDK_FRAME_CLOCK_PHASE_RESUME_EVENTS = 1 << 5,
  GDK_FRAME_CLOCK_PHASE_AFTER_PAINT = 1 << 6
} GdkFrameClockPhase;
typedef struct _GdkGeometry GdkGeometry;
typedef struct _GdkWindowAttr GdkWindowAttr;
typedef struct _GdkWindowRedirect GdkWindowRedirect;
typedef enum
{
  GDK_INPUT_OUTPUT,
  GDK_INPUT_ONLY
} GdkWindowWindowClass;
typedef enum
{
  GDK_WINDOW_ROOT,
  GDK_WINDOW_TOPLEVEL,
  GDK_WINDOW_CHILD,
  GDK_WINDOW_TEMP,
  GDK_WINDOW_FOREIGN,
  GDK_WINDOW_OFFSCREEN,
  GDK_WINDOW_SUBSURFACE
} GdkWindowType;
typedef enum
{
  GDK_WA_TITLE = 1 << 1,
  GDK_WA_X = 1 << 2,
  GDK_WA_Y = 1 << 3,
  GDK_WA_CURSOR = 1 << 4,
  GDK_WA_VISUAL = 1 << 5,
  GDK_WA_WMCLASS = 1 << 6,
  GDK_WA_NOREDIR = 1 << 7,
  GDK_WA_TYPE_HINT = 1 << 8
} GdkWindowAttributesType;
typedef enum
{
  GDK_HINT_POS = 1 << 0,
  GDK_HINT_MIN_SIZE = 1 << 1,
  GDK_HINT_MAX_SIZE = 1 << 2,
  GDK_HINT_BASE_SIZE = 1 << 3,
  GDK_HINT_ASPECT = 1 << 4,
  GDK_HINT_RESIZE_INC = 1 << 5,
  GDK_HINT_WIN_GRAVITY = 1 << 6,
  GDK_HINT_USER_POS = 1 << 7,
  GDK_HINT_USER_SIZE = 1 << 8
} GdkWindowHints;
typedef enum
{
  GDK_DECOR_ALL = 1 << 0,
  GDK_DECOR_BORDER = 1 << 1,
  GDK_DECOR_RESIZEH = 1 << 2,
  GDK_DECOR_TITLE = 1 << 3,
  GDK_DECOR_MENU = 1 << 4,
  GDK_DECOR_MINIMIZE = 1 << 5,
  GDK_DECOR_MAXIMIZE = 1 << 6
} GdkWMDecoration;
typedef enum
{
  GDK_FUNC_ALL = 1 << 0,
  GDK_FUNC_RESIZE = 1 << 1,
  GDK_FUNC_MOVE = 1 << 2,
  GDK_FUNC_MINIMIZE = 1 << 3,
  GDK_FUNC_MAXIMIZE = 1 << 4,
  GDK_FUNC_CLOSE = 1 << 5
} GdkWMFunction;
typedef enum
{
  GDK_GRAVITY_NORTH_WEST = 1,
  GDK_GRAVITY_NORTH,
  GDK_GRAVITY_NORTH_EAST,
  GDK_GRAVITY_WEST,
  GDK_GRAVITY_CENTER,
  GDK_GRAVITY_EAST,
  GDK_GRAVITY_SOUTH_WEST,
  GDK_GRAVITY_SOUTH,
  GDK_GRAVITY_SOUTH_EAST,
  GDK_GRAVITY_STATIC
} GdkGravity;
typedef enum
{
  GDK_ANCHOR_FLIP_X = 1 << 0,
  GDK_ANCHOR_FLIP_Y = 1 << 1,
  GDK_ANCHOR_SLIDE_X = 1 << 2,
  GDK_ANCHOR_SLIDE_Y = 1 << 3,
  GDK_ANCHOR_RESIZE_X = 1 << 4,
  GDK_ANCHOR_RESIZE_Y = 1 << 5,
  GDK_ANCHOR_FLIP = GDK_ANCHOR_FLIP_X | GDK_ANCHOR_FLIP_Y,
  GDK_ANCHOR_SLIDE = GDK_ANCHOR_SLIDE_X | GDK_ANCHOR_SLIDE_Y,
  GDK_ANCHOR_RESIZE = GDK_ANCHOR_RESIZE_X | GDK_ANCHOR_RESIZE_Y
} GdkAnchorHints;
typedef enum
{
  GDK_WINDOW_EDGE_NORTH_WEST,
  GDK_WINDOW_EDGE_NORTH,
  GDK_WINDOW_EDGE_NORTH_EAST,
  GDK_WINDOW_EDGE_WEST,
  GDK_WINDOW_EDGE_EAST,
  GDK_WINDOW_EDGE_SOUTH_WEST,
  GDK_WINDOW_EDGE_SOUTH,
  GDK_WINDOW_EDGE_SOUTH_EAST
} GdkWindowEdge;
typedef enum
{
  GDK_FULLSCREEN_ON_CURRENT_MONITOR,
  GDK_FULLSCREEN_ON_ALL_MONITORS
} GdkFullscreenMode;
struct _GdkWindowAttr
{
  gchar *title;
  gint event_mask;
  gint x, y;
  gint width;
  gint height;
  GdkWindowWindowClass wclass;
  GdkVisual *visual;
  GdkWindowType window_type;
  GdkCursor *cursor;
  gchar *wmclass_name;
  gchar *wmclass_class;
  gboolean override_redirect;
  GdkWindowTypeHint type_hint;
};
struct _GdkGeometry
{
  gint min_width;
  gint min_height;
  gint max_width;
  gint max_height;
  gint base_width;
  gint base_height;
  gint width_inc;
  gint height_inc;
  gdouble min_aspect;
  gdouble max_aspect;
  GdkGravity win_gravity;
};
typedef struct _GdkWindowClass GdkWindowClass;
struct _GdkWindowClass
{
  GObjectClass parent_class;
  GdkWindow * (* pick_embedded_child) (GdkWindow *window,
                                             gdouble x,
                                             gdouble y);
  void (* to_embedder) (GdkWindow *window,
                                             gdouble offscreen_x,
                                             gdouble offscreen_y,
                                             gdouble *embedder_x,
                                             gdouble *embedder_y);
  void (* from_embedder) (GdkWindow *window,
                                             gdouble embedder_x,
                                             gdouble embedder_y,
                                             gdouble *offscreen_x,
                                             gdouble *offscreen_y);
  cairo_surface_t * (* create_surface) (GdkWindow *window,
                                             gint width,
                                             gint height);
  void (*_gdk_reserved1) (void);
  void (*_gdk_reserved2) (void);
  void (*_gdk_reserved3) (void);
  void (*_gdk_reserved4) (void);
  void (*_gdk_reserved5) (void);
  void (*_gdk_reserved6) (void);
  void (*_gdk_reserved7) (void);
  void (*_gdk_reserved8) (void);
};
typedef void (*GdkWindowInvalidateHandlerFunc) (GdkWindow *window,
       cairo_region_t *region);
typedef gboolean (*GdkWindowChildFunc) (GdkWindow *window,
                                                 gpointer user_data);
typedef enum {
  GDK_SEAT_CAPABILITY_NONE = 0,
  GDK_SEAT_CAPABILITY_POINTER = 1 << 0,
  GDK_SEAT_CAPABILITY_TOUCH = 1 << 1,
  GDK_SEAT_CAPABILITY_TABLET_STYLUS = 1 << 2,
  GDK_SEAT_CAPABILITY_KEYBOARD = 1 << 3,
  GDK_SEAT_CAPABILITY_ALL_POINTING = (GDK_SEAT_CAPABILITY_POINTER | GDK_SEAT_CAPABILITY_TOUCH | GDK_SEAT_CAPABILITY_TABLET_STYLUS),
  GDK_SEAT_CAPABILITY_ALL = (GDK_SEAT_CAPABILITY_ALL_POINTING | GDK_SEAT_CAPABILITY_KEYBOARD)
} GdkSeatCapabilities;
typedef void (* GdkSeatGrabPrepareFunc) (GdkSeat *seat,
                                         GdkWindow *window,
                                         gpointer user_data);
struct _GdkSeat
{
  GObject parent_instance;
};
typedef struct _GdkMonitor GdkMonitor;
typedef struct _GdkMonitorClass GdkMonitorClass;
typedef enum {
  GDK_SUBPIXEL_LAYOUT_UNKNOWN,
  GDK_SUBPIXEL_LAYOUT_NONE,
  GDK_SUBPIXEL_LAYOUT_HORIZONTAL_RGB,
  GDK_SUBPIXEL_LAYOUT_HORIZONTAL_BGR,
  GDK_SUBPIXEL_LAYOUT_VERTICAL_RGB,
  GDK_SUBPIXEL_LAYOUT_VERTICAL_BGR
} GdkSubpixelLayout;
struct _GdkColor
{
  guint32 pixel;
  guint16 red;
  guint16 green;
  guint16 blue;
};
struct _GdkRGBA
{
  gdouble red;
  gdouble green;
  gdouble blue;
  gdouble alpha;
};
typedef enum
{
        GDK_PIXBUF_ALPHA_BILEVEL,
        GDK_PIXBUF_ALPHA_FULL
} GdkPixbufAlphaMode;
typedef enum {
 GDK_COLORSPACE_RGB
} GdkColorspace;
typedef struct _GdkPixbuf GdkPixbuf;
typedef void (* GdkPixbufDestroyNotify) (guchar *pixels, gpointer data);
typedef enum {
        GDK_PIXBUF_ERROR_CORRUPT_IMAGE,
        GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,
        GDK_PIXBUF_ERROR_BAD_OPTION,
        GDK_PIXBUF_ERROR_UNKNOWN_TYPE,
        GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,
        GDK_PIXBUF_ERROR_FAILED,
        GDK_PIXBUF_ERROR_INCOMPLETE_ANIMATION
} GdkPixbufError;
typedef gboolean (*GdkPixbufSaveFunc) (const gchar *buf,
      gsize count,
      GError **error,
      gpointer data);
typedef enum {
 GDK_INTERP_NEAREST,
 GDK_INTERP_TILES,
 GDK_INTERP_BILINEAR,
 GDK_INTERP_HYPER
} GdkInterpType;
typedef enum {
 GDK_PIXBUF_ROTATE_NONE = 0,
 GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE = 90,
 GDK_PIXBUF_ROTATE_UPSIDEDOWN = 180,
 GDK_PIXBUF_ROTATE_CLOCKWISE = 270
} GdkPixbufRotation;
typedef struct _GdkPixbufAnimation GdkPixbufAnimation;
typedef struct _GdkPixbufAnimationIter GdkPixbufAnimationIter;
typedef struct _GdkPixbufSimpleAnim GdkPixbufSimpleAnim;
typedef struct _GdkPixbufSimpleAnimClass GdkPixbufSimpleAnimClass;
typedef struct _GdkPixbufFormat GdkPixbufFormat;
typedef struct _GdkPixbufLoader GdkPixbufLoader;
struct _GdkPixbufLoader
{
  GObject parent_instance;
  gpointer priv;
};
typedef struct _GdkPixbufLoaderClass GdkPixbufLoaderClass;
struct _GdkPixbufLoaderClass
{
  GObjectClass parent_class;
  void (*size_prepared) (GdkPixbufLoader *loader,
         int width,
         int height);
  void (*area_prepared) (GdkPixbufLoader *loader);
  void (*area_updated) (GdkPixbufLoader *loader,
                              int x,
                              int y,
         int width,
         int height);
  void (*closed) (GdkPixbufLoader *loader);
};
typedef GdkPixbuf *GdkPixbuf_autoptr; typedef GList *GdkPixbuf_listautoptr; typedef GSList *GdkPixbuf_slistautoptr; typedef GQueue *GdkPixbuf_queueautoptr;
 
typedef GdkPixbufAnimation *GdkPixbufAnimation_autoptr; typedef GList *GdkPixbufAnimation_listautoptr; typedef GSList *GdkPixbufAnimation_slistautoptr; typedef GQueue *GdkPixbufAnimation_queueautoptr;
 
typedef GdkPixbufAnimationIter *GdkPixbufAnimationIter_autoptr; typedef GList *GdkPixbufAnimationIter_listautoptr; typedef GSList *GdkPixbufAnimationIter_slistautoptr; typedef GQueue *GdkPixbufAnimationIter_queueautoptr;
 
typedef GdkPixbufLoader *GdkPixbufLoader_autoptr; typedef GList *GdkPixbufLoader_listautoptr; typedef GSList *GdkPixbufLoader_slistautoptr; typedef GQueue *GdkPixbufLoader_queueautoptr;
 
typedef GdkPixbufSimpleAnim *GdkPixbufSimpleAnim_autoptr; typedef GList *GdkPixbufSimpleAnim_listautoptr; typedef GSList *GdkPixbufSimpleAnim_slistautoptr; typedef GQueue *GdkPixbufSimpleAnim_queueautoptr;
 
typedef struct _PangoCairoFont PangoCairoFont;
typedef struct _PangoCairoFontMap PangoCairoFontMap;
typedef void (* PangoCairoShapeRendererFunc) (cairo_t *cr,
           PangoAttrShape *attr,
           gboolean do_path,
           gpointer data);
typedef enum
{
  GDK_X_CURSOR = 0,
  GDK_ARROW = 2,
  GDK_BASED_ARROW_DOWN = 4,
  GDK_BASED_ARROW_UP = 6,
  GDK_BOAT = 8,
  GDK_BOGOSITY = 10,
  GDK_BOTTOM_LEFT_CORNER = 12,
  GDK_BOTTOM_RIGHT_CORNER = 14,
  GDK_BOTTOM_SIDE = 16,
  GDK_BOTTOM_TEE = 18,
  GDK_BOX_SPIRAL = 20,
  GDK_CENTER_PTR = 22,
  GDK_CIRCLE = 24,
  GDK_CLOCK = 26,
  GDK_COFFEE_MUG = 28,
  GDK_CROSS = 30,
  GDK_CROSS_REVERSE = 32,
  GDK_CROSSHAIR = 34,
  GDK_DIAMOND_CROSS = 36,
  GDK_DOT = 38,
  GDK_DOTBOX = 40,
  GDK_DOUBLE_ARROW = 42,
  GDK_DRAFT_LARGE = 44,
  GDK_DRAFT_SMALL = 46,
  GDK_DRAPED_BOX = 48,
  GDK_EXCHANGE = 50,
  GDK_FLEUR = 52,
  GDK_GOBBLER = 54,
  GDK_GUMBY = 56,
  GDK_HAND1 = 58,
  GDK_HAND2 = 60,
  GDK_HEART = 62,
  GDK_ICON = 64,
  GDK_IRON_CROSS = 66,
  GDK_LEFT_PTR = 68,
  GDK_LEFT_SIDE = 70,
  GDK_LEFT_TEE = 72,
  GDK_LEFTBUTTON = 74,
  GDK_LL_ANGLE = 76,
  GDK_LR_ANGLE = 78,
  GDK_MAN = 80,
  GDK_MIDDLEBUTTON = 82,
  GDK_MOUSE = 84,
  GDK_PENCIL = 86,
  GDK_PIRATE = 88,
  GDK_PLUS = 90,
  GDK_QUESTION_ARROW = 92,
  GDK_RIGHT_PTR = 94,
  GDK_RIGHT_SIDE = 96,
  GDK_RIGHT_TEE = 98,
  GDK_RIGHTBUTTON = 100,
  GDK_RTL_LOGO = 102,
  GDK_SAILBOAT = 104,
  GDK_SB_DOWN_ARROW = 106,
  GDK_SB_H_DOUBLE_ARROW = 108,
  GDK_SB_LEFT_ARROW = 110,
  GDK_SB_RIGHT_ARROW = 112,
  GDK_SB_UP_ARROW = 114,
  GDK_SB_V_DOUBLE_ARROW = 116,
  GDK_SHUTTLE = 118,
  GDK_SIZING = 120,
  GDK_SPIDER = 122,
  GDK_SPRAYCAN = 124,
  GDK_STAR = 126,
  GDK_TARGET = 128,
  GDK_TCROSS = 130,
  GDK_TOP_LEFT_ARROW = 132,
  GDK_TOP_LEFT_CORNER = 134,
  GDK_TOP_RIGHT_CORNER = 136,
  GDK_TOP_SIDE = 138,
  GDK_TOP_TEE = 140,
  GDK_TREK = 142,
  GDK_UL_ANGLE = 144,
  GDK_UMBRELLA = 146,
  GDK_UR_ANGLE = 148,
  GDK_WATCH = 150,
  GDK_XTERM = 152,
  GDK_LAST_CURSOR,
  GDK_BLANK_CURSOR = -2,
  GDK_CURSOR_IS_PIXMAP = -1
} GdkCursorType;
typedef struct _GdkDevicePad GdkDevicePad;
typedef struct _GdkDevicePadInterface GdkDevicePadInterface;
typedef enum {
  GDK_DEVICE_PAD_FEATURE_BUTTON,
  GDK_DEVICE_PAD_FEATURE_RING,
  GDK_DEVICE_PAD_FEATURE_STRIP
} GdkDevicePadFeature;
typedef struct _GdkKeymapKey GdkKeymapKey;
struct _GdkKeymapKey
{
  guint keycode;
  gint group;
  gint level;
};
typedef enum
{
  GDK_PROP_MODE_REPLACE,
  GDK_PROP_MODE_PREPEND,
  GDK_PROP_MODE_APPEND
} GdkPropMode;
typedef enum
{
  GDK_VISUAL_STATIC_GRAY,
  GDK_VISUAL_GRAYSCALE,
  GDK_VISUAL_STATIC_COLOR,
  GDK_VISUAL_PSEUDO_COLOR,
  GDK_VISUAL_TRUE_COLOR,
  GDK_VISUAL_DIRECT_COLOR
} GdkVisualType;
typedef GdkAppLaunchContext *GdkAppLaunchContext_autoptr; typedef GList *GdkAppLaunchContext_listautoptr; typedef GSList *GdkAppLaunchContext_slistautoptr; typedef GQueue *GdkAppLaunchContext_queueautoptr;
 
typedef GdkCursor *GdkCursor_autoptr; typedef GList *GdkCursor_listautoptr; typedef GSList *GdkCursor_slistautoptr; typedef GQueue *GdkCursor_queueautoptr;
 
typedef GdkDevice *GdkDevice_autoptr; typedef GList *GdkDevice_listautoptr; typedef GSList *GdkDevice_slistautoptr; typedef GQueue *GdkDevice_queueautoptr;
 
typedef GdkDeviceManager *GdkDeviceManager_autoptr; typedef GList *GdkDeviceManager_listautoptr; typedef GSList *GdkDeviceManager_slistautoptr; typedef GQueue *GdkDeviceManager_queueautoptr;
 
typedef GdkDisplay *GdkDisplay_autoptr; typedef GList *GdkDisplay_listautoptr; typedef GSList *GdkDisplay_slistautoptr; typedef GQueue *GdkDisplay_queueautoptr;
 
typedef GdkDisplayManager *GdkDisplayManager_autoptr; typedef GList *GdkDisplayManager_listautoptr; typedef GSList *GdkDisplayManager_slistautoptr; typedef GQueue *GdkDisplayManager_queueautoptr;
 
typedef GdkDragContext *GdkDragContext_autoptr; typedef GList *GdkDragContext_listautoptr; typedef GSList *GdkDragContext_slistautoptr; typedef GQueue *GdkDragContext_queueautoptr;
 
typedef GdkFrameClock *GdkFrameClock_autoptr; typedef GList *GdkFrameClock_listautoptr; typedef GSList *GdkFrameClock_slistautoptr; typedef GQueue *GdkFrameClock_queueautoptr;
 
typedef GdkGLContext *GdkGLContext_autoptr; typedef GList *GdkGLContext_listautoptr; typedef GSList *GdkGLContext_slistautoptr; typedef GQueue *GdkGLContext_queueautoptr;
 
typedef GdkKeymap *GdkKeymap_autoptr; typedef GList *GdkKeymap_listautoptr; typedef GSList *GdkKeymap_slistautoptr; typedef GQueue *GdkKeymap_queueautoptr;
 
typedef GdkScreen *GdkScreen_autoptr; typedef GList *GdkScreen_listautoptr; typedef GSList *GdkScreen_slistautoptr; typedef GQueue *GdkScreen_queueautoptr;
 
typedef GdkVisual *GdkVisual_autoptr; typedef GList *GdkVisual_listautoptr; typedef GSList *GdkVisual_slistautoptr; typedef GQueue *GdkVisual_queueautoptr;
 
typedef GdkWindow *GdkWindow_autoptr; typedef GList *GdkWindow_listautoptr; typedef GSList *GdkWindow_slistautoptr; typedef GQueue *GdkWindow_queueautoptr;
 
typedef GdkEvent *GdkEvent_autoptr; typedef GList *GdkEvent_listautoptr; typedef GSList *GdkEvent_slistautoptr; typedef GQueue *GdkEvent_queueautoptr;
 
typedef GdkFrameTimings *GdkFrameTimings_autoptr; typedef GList *GdkFrameTimings_listautoptr; typedef GSList *GdkFrameTimings_slistautoptr; typedef GQueue *GdkFrameTimings_queueautoptr;
 
typedef GdkRGBA *GdkRGBA_autoptr; typedef GList *GdkRGBA_listautoptr; typedef GSList *GdkRGBA_slistautoptr; typedef GQueue *GdkRGBA_queueautoptr;
 
typedef enum
{
  GTK_ALIGN_FILL,
  GTK_ALIGN_START,
  GTK_ALIGN_END,
  GTK_ALIGN_CENTER,
  GTK_ALIGN_BASELINE
} GtkAlign;
typedef enum
{
  GTK_ARROW_UP,
  GTK_ARROW_DOWN,
  GTK_ARROW_LEFT,
  GTK_ARROW_RIGHT,
  GTK_ARROW_NONE
} GtkArrowType;
typedef enum
{
  GTK_BASELINE_POSITION_TOP,
  GTK_BASELINE_POSITION_CENTER,
  GTK_BASELINE_POSITION_BOTTOM
} GtkBaselinePosition;
typedef enum
{
  GTK_DELETE_CHARS,
  GTK_DELETE_WORD_ENDS,
  GTK_DELETE_WORDS,
  GTK_DELETE_DISPLAY_LINES,
  GTK_DELETE_DISPLAY_LINE_ENDS,
  GTK_DELETE_PARAGRAPH_ENDS,
  GTK_DELETE_PARAGRAPHS,
  GTK_DELETE_WHITESPACE
} GtkDeleteType;
typedef enum
{
  GTK_DIR_TAB_FORWARD,
  GTK_DIR_TAB_BACKWARD,
  GTK_DIR_UP,
  GTK_DIR_DOWN,
  GTK_DIR_LEFT,
  GTK_DIR_RIGHT
} GtkDirectionType;
typedef enum
{
  GTK_ICON_SIZE_INVALID,
  GTK_ICON_SIZE_MENU,
  GTK_ICON_SIZE_SMALL_TOOLBAR,
  GTK_ICON_SIZE_LARGE_TOOLBAR,
  GTK_ICON_SIZE_BUTTON,
  GTK_ICON_SIZE_DND,
  GTK_ICON_SIZE_DIALOG
} GtkIconSize;
typedef enum
{
  GTK_SENSITIVITY_AUTO,
  GTK_SENSITIVITY_ON,
  GTK_SENSITIVITY_OFF
} GtkSensitivityType;
typedef enum
{
  GTK_TEXT_DIR_NONE,
  GTK_TEXT_DIR_LTR,
  GTK_TEXT_DIR_RTL
} GtkTextDirection;
typedef enum
{
  GTK_JUSTIFY_LEFT,
  GTK_JUSTIFY_RIGHT,
  GTK_JUSTIFY_CENTER,
  GTK_JUSTIFY_FILL
} GtkJustification;
typedef enum
{
  GTK_MENU_DIR_PARENT,
  GTK_MENU_DIR_CHILD,
  GTK_MENU_DIR_NEXT,
  GTK_MENU_DIR_PREV
} GtkMenuDirectionType;
typedef enum
{
  GTK_MESSAGE_INFO,
  GTK_MESSAGE_WARNING,
  GTK_MESSAGE_QUESTION,
  GTK_MESSAGE_ERROR,
  GTK_MESSAGE_OTHER
} GtkMessageType;
typedef enum
{
  GTK_MOVEMENT_LOGICAL_POSITIONS,
  GTK_MOVEMENT_VISUAL_POSITIONS,
  GTK_MOVEMENT_WORDS,
  GTK_MOVEMENT_DISPLAY_LINES,
  GTK_MOVEMENT_DISPLAY_LINE_ENDS,
  GTK_MOVEMENT_PARAGRAPHS,
  GTK_MOVEMENT_PARAGRAPH_ENDS,
  GTK_MOVEMENT_PAGES,
  GTK_MOVEMENT_BUFFER_ENDS,
  GTK_MOVEMENT_HORIZONTAL_PAGES
} GtkMovementStep;
typedef enum
{
  GTK_SCROLL_STEPS,
  GTK_SCROLL_PAGES,
  GTK_SCROLL_ENDS,
  GTK_SCROLL_HORIZONTAL_STEPS,
  GTK_SCROLL_HORIZONTAL_PAGES,
  GTK_SCROLL_HORIZONTAL_ENDS
} GtkScrollStep;
typedef enum
{
  GTK_ORIENTATION_HORIZONTAL,
  GTK_ORIENTATION_VERTICAL
} GtkOrientation;
typedef enum
{
  GTK_PACK_START,
  GTK_PACK_END
} GtkPackType;
typedef enum
{
  GTK_POS_LEFT,
  GTK_POS_RIGHT,
  GTK_POS_TOP,
  GTK_POS_BOTTOM
} GtkPositionType;
typedef enum
{
  GTK_RELIEF_NORMAL,
  GTK_RELIEF_HALF,
  GTK_RELIEF_NONE
} GtkReliefStyle;
typedef enum
{
  GTK_SCROLL_NONE,
  GTK_SCROLL_JUMP,
  GTK_SCROLL_STEP_BACKWARD,
  GTK_SCROLL_STEP_FORWARD,
  GTK_SCROLL_PAGE_BACKWARD,
  GTK_SCROLL_PAGE_FORWARD,
  GTK_SCROLL_STEP_UP,
  GTK_SCROLL_STEP_DOWN,
  GTK_SCROLL_PAGE_UP,
  GTK_SCROLL_PAGE_DOWN,
  GTK_SCROLL_STEP_LEFT,
  GTK_SCROLL_STEP_RIGHT,
  GTK_SCROLL_PAGE_LEFT,
  GTK_SCROLL_PAGE_RIGHT,
  GTK_SCROLL_START,
  GTK_SCROLL_END
} GtkScrollType;
typedef enum
{
  GTK_SELECTION_NONE,
  GTK_SELECTION_SINGLE,
  GTK_SELECTION_BROWSE,
  GTK_SELECTION_MULTIPLE
} GtkSelectionMode;
typedef enum
{
  GTK_SHADOW_NONE,
  GTK_SHADOW_IN,
  GTK_SHADOW_OUT,
  GTK_SHADOW_ETCHED_IN,
  GTK_SHADOW_ETCHED_OUT
} GtkShadowType;
typedef enum
{
  GTK_STATE_NORMAL,
  GTK_STATE_ACTIVE,
  GTK_STATE_PRELIGHT,
  GTK_STATE_SELECTED,
  GTK_STATE_INSENSITIVE,
  GTK_STATE_INCONSISTENT,
  GTK_STATE_FOCUSED
} GtkStateType;
typedef enum
{
  GTK_TOOLBAR_ICONS,
  GTK_TOOLBAR_TEXT,
  GTK_TOOLBAR_BOTH,
  GTK_TOOLBAR_BOTH_HORIZ
} GtkToolbarStyle;
typedef enum
{
  GTK_WRAP_NONE,
  GTK_WRAP_CHAR,
  GTK_WRAP_WORD,
  GTK_WRAP_WORD_CHAR
} GtkWrapMode;
typedef enum
{
  GTK_SORT_ASCENDING,
  GTK_SORT_DESCENDING
} GtkSortType;
typedef enum
{
  GTK_IM_PREEDIT_NOTHING,
  GTK_IM_PREEDIT_CALLBACK,
  GTK_IM_PREEDIT_NONE
} GtkIMPreeditStyle;
typedef enum
{
  GTK_IM_STATUS_NOTHING,
  GTK_IM_STATUS_CALLBACK,
  GTK_IM_STATUS_NONE
} GtkIMStatusStyle;
typedef enum
{
  GTK_PACK_DIRECTION_LTR,
  GTK_PACK_DIRECTION_RTL,
  GTK_PACK_DIRECTION_TTB,
  GTK_PACK_DIRECTION_BTT
} GtkPackDirection;
typedef enum
{
  GTK_PRINT_PAGES_ALL,
  GTK_PRINT_PAGES_CURRENT,
  GTK_PRINT_PAGES_RANGES,
  GTK_PRINT_PAGES_SELECTION
} GtkPrintPages;
typedef enum
{
  GTK_PAGE_SET_ALL,
  GTK_PAGE_SET_EVEN,
  GTK_PAGE_SET_ODD
} GtkPageSet;
typedef enum
{
  GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
  GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
  GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
  GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
  GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
  GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
  GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
  GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT
} GtkNumberUpLayout;
typedef enum
{
  GTK_PAGE_ORIENTATION_PORTRAIT,
  GTK_PAGE_ORIENTATION_LANDSCAPE,
  GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT,
  GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE
} GtkPageOrientation;
typedef enum
{
  GTK_PRINT_QUALITY_LOW,
  GTK_PRINT_QUALITY_NORMAL,
  GTK_PRINT_QUALITY_HIGH,
  GTK_PRINT_QUALITY_DRAFT
} GtkPrintQuality;
typedef enum
{
  GTK_PRINT_DUPLEX_SIMPLEX,
  GTK_PRINT_DUPLEX_HORIZONTAL,
  GTK_PRINT_DUPLEX_VERTICAL
} GtkPrintDuplex;
typedef enum
{
  GTK_UNIT_NONE,
  GTK_UNIT_POINTS,
  GTK_UNIT_INCH,
  GTK_UNIT_MM
} GtkUnit;
typedef enum
{
  GTK_TREE_VIEW_GRID_LINES_NONE,
  GTK_TREE_VIEW_GRID_LINES_HORIZONTAL,
  GTK_TREE_VIEW_GRID_LINES_VERTICAL,
  GTK_TREE_VIEW_GRID_LINES_BOTH
} GtkTreeViewGridLines;
typedef enum
{
  GTK_DRAG_RESULT_SUCCESS,
  GTK_DRAG_RESULT_NO_TARGET,
  GTK_DRAG_RESULT_USER_CANCELLED,
  GTK_DRAG_RESULT_TIMEOUT_EXPIRED,
  GTK_DRAG_RESULT_GRAB_BROKEN,
  GTK_DRAG_RESULT_ERROR
} GtkDragResult;
typedef enum {
  GTK_SIZE_GROUP_NONE,
  GTK_SIZE_GROUP_HORIZONTAL,
  GTK_SIZE_GROUP_VERTICAL,
  GTK_SIZE_GROUP_BOTH
} GtkSizeGroupMode;
typedef enum
{
  GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH = 0,
  GTK_SIZE_REQUEST_WIDTH_FOR_HEIGHT,
  GTK_SIZE_REQUEST_CONSTANT_SIZE
} GtkSizeRequestMode;
typedef enum
{
  GTK_SCROLL_MINIMUM = 0,
  GTK_SCROLL_NATURAL
} GtkScrollablePolicy;
typedef enum
{
  GTK_STATE_FLAG_NORMAL = 0,
  GTK_STATE_FLAG_ACTIVE = 1 << 0,
  GTK_STATE_FLAG_PRELIGHT = 1 << 1,
  GTK_STATE_FLAG_SELECTED = 1 << 2,
  GTK_STATE_FLAG_INSENSITIVE = 1 << 3,
  GTK_STATE_FLAG_INCONSISTENT = 1 << 4,
  GTK_STATE_FLAG_FOCUSED = 1 << 5,
  GTK_STATE_FLAG_BACKDROP = 1 << 6,
  GTK_STATE_FLAG_DIR_LTR = 1 << 7,
  GTK_STATE_FLAG_DIR_RTL = 1 << 8,
  GTK_STATE_FLAG_LINK = 1 << 9,
  GTK_STATE_FLAG_VISITED = 1 << 10,
  GTK_STATE_FLAG_CHECKED = 1 << 11,
  GTK_STATE_FLAG_DROP_ACTIVE = 1 << 12
} GtkStateFlags;
typedef enum {
  GTK_REGION_EVEN = 1 << 0,
  GTK_REGION_ODD = 1 << 1,
  GTK_REGION_FIRST = 1 << 2,
  GTK_REGION_LAST = 1 << 3,
  GTK_REGION_ONLY = 1 << 4,
  GTK_REGION_SORTED = 1 << 5
} GtkRegionFlags;
typedef enum {
  GTK_JUNCTION_NONE = 0,
  GTK_JUNCTION_CORNER_TOPLEFT = 1 << 0,
  GTK_JUNCTION_CORNER_TOPRIGHT = 1 << 1,
  GTK_JUNCTION_CORNER_BOTTOMLEFT = 1 << 2,
  GTK_JUNCTION_CORNER_BOTTOMRIGHT = 1 << 3,
  GTK_JUNCTION_TOP = (GTK_JUNCTION_CORNER_TOPLEFT | GTK_JUNCTION_CORNER_TOPRIGHT),
  GTK_JUNCTION_BOTTOM = (GTK_JUNCTION_CORNER_BOTTOMLEFT | GTK_JUNCTION_CORNER_BOTTOMRIGHT),
  GTK_JUNCTION_LEFT = (GTK_JUNCTION_CORNER_TOPLEFT | GTK_JUNCTION_CORNER_BOTTOMLEFT),
  GTK_JUNCTION_RIGHT = (GTK_JUNCTION_CORNER_TOPRIGHT | GTK_JUNCTION_CORNER_BOTTOMRIGHT)
} GtkJunctionSides;
typedef enum {
  GTK_BORDER_STYLE_NONE,
  GTK_BORDER_STYLE_SOLID,
  GTK_BORDER_STYLE_INSET,
  GTK_BORDER_STYLE_OUTSET,
  GTK_BORDER_STYLE_HIDDEN,
  GTK_BORDER_STYLE_DOTTED,
  GTK_BORDER_STYLE_DASHED,
  GTK_BORDER_STYLE_DOUBLE,
  GTK_BORDER_STYLE_GROOVE,
  GTK_BORDER_STYLE_RIDGE
} GtkBorderStyle;
typedef enum {
  GTK_LEVEL_BAR_MODE_CONTINUOUS,
  GTK_LEVEL_BAR_MODE_DISCRETE
} GtkLevelBarMode;
typedef enum
{
  GTK_INPUT_PURPOSE_FREE_FORM,
  GTK_INPUT_PURPOSE_ALPHA,
  GTK_INPUT_PURPOSE_DIGITS,
  GTK_INPUT_PURPOSE_NUMBER,
  GTK_INPUT_PURPOSE_PHONE,
  GTK_INPUT_PURPOSE_URL,
  GTK_INPUT_PURPOSE_EMAIL,
  GTK_INPUT_PURPOSE_NAME,
  GTK_INPUT_PURPOSE_PASSWORD,
  GTK_INPUT_PURPOSE_PIN
} GtkInputPurpose;
typedef enum
{
  GTK_INPUT_HINT_NONE = 0,
  GTK_INPUT_HINT_SPELLCHECK = 1 << 0,
  GTK_INPUT_HINT_NO_SPELLCHECK = 1 << 1,
  GTK_INPUT_HINT_WORD_COMPLETION = 1 << 2,
  GTK_INPUT_HINT_LOWERCASE = 1 << 3,
  GTK_INPUT_HINT_UPPERCASE_CHARS = 1 << 4,
  GTK_INPUT_HINT_UPPERCASE_WORDS = 1 << 5,
  GTK_INPUT_HINT_UPPERCASE_SENTENCES = 1 << 6,
  GTK_INPUT_HINT_INHIBIT_OSK = 1 << 7,
  GTK_INPUT_HINT_VERTICAL_WRITING = 1 << 8,
  GTK_INPUT_HINT_EMOJI = 1 << 9,
  GTK_INPUT_HINT_NO_EMOJI = 1 << 10
} GtkInputHints;
typedef enum
{
  GTK_PHASE_NONE,
  GTK_PHASE_CAPTURE,
  GTK_PHASE_BUBBLE,
  GTK_PHASE_TARGET
} GtkPropagationPhase;
typedef enum
{
  GTK_EVENT_SEQUENCE_NONE,
  GTK_EVENT_SEQUENCE_CLAIMED,
  GTK_EVENT_SEQUENCE_DENIED
} GtkEventSequenceState;
typedef enum
{
  GTK_PAN_DIRECTION_LEFT,
  GTK_PAN_DIRECTION_RIGHT,
  GTK_PAN_DIRECTION_UP,
  GTK_PAN_DIRECTION_DOWN
} GtkPanDirection;
typedef enum
{
  GTK_POPOVER_CONSTRAINT_NONE,
  GTK_POPOVER_CONSTRAINT_WINDOW
} GtkPopoverConstraint;
typedef enum
{
  GTK_ACCEL_VISIBLE = 1 << 0,
  GTK_ACCEL_LOCKED = 1 << 1,
  GTK_ACCEL_MASK = 0x07
} GtkAccelFlags;
typedef struct _GtkAccelGroup GtkAccelGroup;
typedef struct _GtkAccelGroupClass GtkAccelGroupClass;
typedef struct _GtkAccelGroupPrivate GtkAccelGroupPrivate;
typedef struct _GtkAccelKey GtkAccelKey;
typedef struct _GtkAccelGroupEntry GtkAccelGroupEntry;
typedef gboolean (*GtkAccelGroupActivate) (GtkAccelGroup *accel_group,
        GObject *acceleratable,
        guint keyval,
        GdkModifierType modifier);
typedef gboolean (*GtkAccelGroupFindFunc) (GtkAccelKey *key,
        GClosure *closure,
        gpointer data);
struct _GtkAccelGroup
{
  GObject parent;
  GtkAccelGroupPrivate *priv;
};
struct _GtkAccelGroupClass
{
  GObjectClass parent_class;
  void (*accel_changed) (GtkAccelGroup *accel_group,
     guint keyval,
     GdkModifierType modifier,
     GClosure *accel_closure);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkAccelKey
{
  guint accel_key;
  GdkModifierType accel_mods;
  guint accel_flags : 16;
};

struct _GtkAccelGroupEntry
{
  GtkAccelKey key;
  GClosure *closure;
  GQuark accel_path_quark;
};
typedef GtkAccelGroup *GtkAccelGroup_autoptr; typedef GList *GtkAccelGroup_listautoptr; typedef GSList *GtkAccelGroup_slistautoptr; typedef GQueue *GtkAccelGroup_queueautoptr;
 
typedef struct _GtkBorder GtkBorder;
struct _GtkBorder
{
  gint16 left;
  gint16 right;
  gint16 top;
  gint16 bottom;
};
typedef GtkBorder *GtkBorder_autoptr; typedef GList *GtkBorder_listautoptr; typedef GSList *GtkBorder_slistautoptr; typedef GQueue *GtkBorder_queueautoptr;
 
typedef struct _GtkAdjustment GtkAdjustment;
typedef struct _GtkBuilder GtkBuilder;
typedef struct _GtkClipboard GtkClipboard;
typedef struct _GtkIconSet GtkIconSet;
typedef struct _GtkIconSource GtkIconSource;
typedef struct _GtkRcStyle GtkRcStyle;
typedef struct _GtkRequisition GtkRequisition;
typedef struct _GtkSelectionData GtkSelectionData;
typedef struct _GtkSettings GtkSettings;
typedef struct _GtkStyle GtkStyle;
typedef struct _GtkStyleContext GtkStyleContext;
typedef struct _GtkTooltip GtkTooltip;
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkWidgetPath GtkWidgetPath;
typedef struct _GtkWindow GtkWindow;
typedef gboolean (*GtkRcPropertyParser) (const GParamSpec *pspec,
                                         const GString *rc_string,
                                         GValue *property_value);
typedef void (*GtkBuilderConnectFunc) (GtkBuilder *builder,
           GObject *object,
           const gchar *signal_name,
           const gchar *handler_name,
           GObject *connect_object,
           GConnectFlags flags,
           gpointer user_data);
typedef enum
{
  ATK_STATE_INVALID,
  ATK_STATE_ACTIVE,
  ATK_STATE_ARMED,
  ATK_STATE_BUSY,
  ATK_STATE_CHECKED,
  ATK_STATE_DEFUNCT,
  ATK_STATE_EDITABLE,
  ATK_STATE_ENABLED,
  ATK_STATE_EXPANDABLE,
  ATK_STATE_EXPANDED,
  ATK_STATE_FOCUSABLE,
  ATK_STATE_FOCUSED,
  ATK_STATE_HORIZONTAL,
  ATK_STATE_ICONIFIED,
  ATK_STATE_MODAL,
  ATK_STATE_MULTI_LINE,
  ATK_STATE_MULTISELECTABLE,
  ATK_STATE_OPAQUE,
  ATK_STATE_PRESSED,
  ATK_STATE_RESIZABLE,
  ATK_STATE_SELECTABLE,
  ATK_STATE_SELECTED,
  ATK_STATE_SENSITIVE,
  ATK_STATE_SHOWING,
  ATK_STATE_SINGLE_LINE,
  ATK_STATE_STALE,
  ATK_STATE_TRANSIENT,
  ATK_STATE_VERTICAL,
  ATK_STATE_VISIBLE,
  ATK_STATE_MANAGES_DESCENDANTS,
  ATK_STATE_INDETERMINATE,
  ATK_STATE_TRUNCATED,
  ATK_STATE_REQUIRED,
  ATK_STATE_INVALID_ENTRY,
  ATK_STATE_SUPPORTS_AUTOCOMPLETION,
  ATK_STATE_SELECTABLE_TEXT,
  ATK_STATE_DEFAULT,
  ATK_STATE_ANIMATED,
  ATK_STATE_VISITED,
  ATK_STATE_CHECKABLE,
  ATK_STATE_HAS_POPUP,
  ATK_STATE_HAS_TOOLTIP,
  ATK_STATE_READ_ONLY,
  ATK_STATE_LAST_DEFINED
} AtkStateType;
typedef guint64 AtkState;
typedef enum
{
  ATK_RELATION_NULL = 0,
  ATK_RELATION_CONTROLLED_BY,
  ATK_RELATION_CONTROLLER_FOR,
  ATK_RELATION_LABEL_FOR,
  ATK_RELATION_LABELLED_BY,
  ATK_RELATION_MEMBER_OF,
  ATK_RELATION_NODE_CHILD_OF,
  ATK_RELATION_FLOWS_TO,
  ATK_RELATION_FLOWS_FROM,
  ATK_RELATION_SUBWINDOW_OF,
  ATK_RELATION_EMBEDS,
  ATK_RELATION_EMBEDDED_BY,
  ATK_RELATION_POPUP_FOR,
  ATK_RELATION_PARENT_WINDOW_OF,
  ATK_RELATION_DESCRIBED_BY,
  ATK_RELATION_DESCRIPTION_FOR,
  ATK_RELATION_NODE_PARENT_OF,
  ATK_RELATION_DETAILS,
  ATK_RELATION_DETAILS_FOR,
  ATK_RELATION_ERROR_MESSAGE,
  ATK_RELATION_ERROR_FOR,
  ATK_RELATION_LAST_DEFINED
} AtkRelationType;
typedef enum
{
  ATK_ROLE_INVALID = 0,
  ATK_ROLE_ACCEL_LABEL,
  ATK_ROLE_ALERT,
  ATK_ROLE_ANIMATION,
  ATK_ROLE_ARROW,
  ATK_ROLE_CALENDAR,
  ATK_ROLE_CANVAS,
  ATK_ROLE_CHECK_BOX,
  ATK_ROLE_CHECK_MENU_ITEM,
  ATK_ROLE_COLOR_CHOOSER,
  ATK_ROLE_COLUMN_HEADER,
  ATK_ROLE_COMBO_BOX,
  ATK_ROLE_DATE_EDITOR,
  ATK_ROLE_DESKTOP_ICON,
  ATK_ROLE_DESKTOP_FRAME,
  ATK_ROLE_DIAL,
  ATK_ROLE_DIALOG,
  ATK_ROLE_DIRECTORY_PANE,
  ATK_ROLE_DRAWING_AREA,
  ATK_ROLE_FILE_CHOOSER,
  ATK_ROLE_FILLER,
  ATK_ROLE_FONT_CHOOSER,
  ATK_ROLE_FRAME,
  ATK_ROLE_GLASS_PANE,
  ATK_ROLE_HTML_CONTAINER,
  ATK_ROLE_ICON,
  ATK_ROLE_IMAGE,
  ATK_ROLE_INTERNAL_FRAME,
  ATK_ROLE_LABEL,
  ATK_ROLE_LAYERED_PANE,
  ATK_ROLE_LIST,
  ATK_ROLE_LIST_ITEM,
  ATK_ROLE_MENU,
  ATK_ROLE_MENU_BAR,
  ATK_ROLE_MENU_ITEM,
  ATK_ROLE_OPTION_PANE,
  ATK_ROLE_PAGE_TAB,
  ATK_ROLE_PAGE_TAB_LIST,
  ATK_ROLE_PANEL,
  ATK_ROLE_PASSWORD_TEXT,
  ATK_ROLE_POPUP_MENU,
  ATK_ROLE_PROGRESS_BAR,
  ATK_ROLE_PUSH_BUTTON,
  ATK_ROLE_RADIO_BUTTON,
  ATK_ROLE_RADIO_MENU_ITEM,
  ATK_ROLE_ROOT_PANE,
  ATK_ROLE_ROW_HEADER,
  ATK_ROLE_SCROLL_BAR,
  ATK_ROLE_SCROLL_PANE,
  ATK_ROLE_SEPARATOR,
  ATK_ROLE_SLIDER,
  ATK_ROLE_SPLIT_PANE,
  ATK_ROLE_SPIN_BUTTON,
  ATK_ROLE_STATUSBAR,
  ATK_ROLE_TABLE,
  ATK_ROLE_TABLE_CELL,
  ATK_ROLE_TABLE_COLUMN_HEADER,
  ATK_ROLE_TABLE_ROW_HEADER,
  ATK_ROLE_TEAR_OFF_MENU_ITEM,
  ATK_ROLE_TERMINAL,
  ATK_ROLE_TEXT,
  ATK_ROLE_TOGGLE_BUTTON,
  ATK_ROLE_TOOL_BAR,
  ATK_ROLE_TOOL_TIP,
  ATK_ROLE_TREE,
  ATK_ROLE_TREE_TABLE,
  ATK_ROLE_UNKNOWN,
  ATK_ROLE_VIEWPORT,
  ATK_ROLE_WINDOW,
  ATK_ROLE_HEADER,
  ATK_ROLE_FOOTER,
  ATK_ROLE_PARAGRAPH,
  ATK_ROLE_RULER,
  ATK_ROLE_APPLICATION,
  ATK_ROLE_AUTOCOMPLETE,
  ATK_ROLE_EDITBAR,
  ATK_ROLE_EMBEDDED,
  ATK_ROLE_ENTRY,
  ATK_ROLE_CHART,
  ATK_ROLE_CAPTION,
  ATK_ROLE_DOCUMENT_FRAME,
  ATK_ROLE_HEADING,
  ATK_ROLE_PAGE,
  ATK_ROLE_SECTION,
  ATK_ROLE_REDUNDANT_OBJECT,
  ATK_ROLE_FORM,
  ATK_ROLE_LINK,
  ATK_ROLE_INPUT_METHOD_WINDOW,
  ATK_ROLE_TABLE_ROW,
  ATK_ROLE_TREE_ITEM,
  ATK_ROLE_DOCUMENT_SPREADSHEET,
  ATK_ROLE_DOCUMENT_PRESENTATION,
  ATK_ROLE_DOCUMENT_TEXT,
  ATK_ROLE_DOCUMENT_WEB,
  ATK_ROLE_DOCUMENT_EMAIL,
  ATK_ROLE_COMMENT,
  ATK_ROLE_LIST_BOX,
  ATK_ROLE_GROUPING,
  ATK_ROLE_IMAGE_MAP,
  ATK_ROLE_NOTIFICATION,
  ATK_ROLE_INFO_BAR,
  ATK_ROLE_LEVEL_BAR,
  ATK_ROLE_TITLE_BAR,
  ATK_ROLE_BLOCK_QUOTE,
  ATK_ROLE_AUDIO,
  ATK_ROLE_VIDEO,
  ATK_ROLE_DEFINITION,
  ATK_ROLE_ARTICLE,
  ATK_ROLE_LANDMARK,
  ATK_ROLE_LOG,
  ATK_ROLE_MARQUEE,
  ATK_ROLE_MATH,
  ATK_ROLE_RATING,
  ATK_ROLE_TIMER,
  ATK_ROLE_DESCRIPTION_LIST,
  ATK_ROLE_DESCRIPTION_TERM,
  ATK_ROLE_DESCRIPTION_VALUE,
  ATK_ROLE_STATIC,
  ATK_ROLE_MATH_FRACTION,
  ATK_ROLE_MATH_ROOT,
  ATK_ROLE_SUBSCRIPT,
  ATK_ROLE_SUPERSCRIPT,
  ATK_ROLE_FOOTNOTE,
  ATK_ROLE_CONTENT_DELETION,
  ATK_ROLE_CONTENT_INSERTION,
  ATK_ROLE_LAST_DEFINED
} AtkRole;
typedef enum
{
  ATK_LAYER_INVALID,
  ATK_LAYER_BACKGROUND,
  ATK_LAYER_CANVAS,
  ATK_LAYER_WIDGET,
  ATK_LAYER_MDI,
  ATK_LAYER_POPUP,
  ATK_LAYER_OVERLAY,
  ATK_LAYER_WINDOW
} AtkLayer;
typedef GSList AtkAttributeSet;
typedef struct _AtkAttribute AtkAttribute;
struct _AtkAttribute {
  gchar* name;
  gchar* value;
};
typedef struct _AtkImplementor AtkImplementor;
typedef struct _AtkImplementorIface AtkImplementorIface;
typedef struct _AtkObject AtkObject;
typedef struct _AtkObjectClass AtkObjectClass;
typedef struct _AtkRelationSet AtkRelationSet;
typedef struct _AtkStateSet AtkStateSet;
struct _AtkPropertyValues
{
  const gchar *property_name;
  GValue old_value;
  GValue new_value;
};
typedef struct _AtkPropertyValues AtkPropertyValues;
typedef gboolean (*AtkFunction) (gpointer user_data);
typedef void (*AtkPropertyChangeHandler) (AtkObject* obj, AtkPropertyValues* vals);
struct _AtkObject
{
  GObject parent;
  gchar *description;
  gchar *name;
  AtkObject *accessible_parent;
  AtkRole role;
  AtkRelationSet *relation_set;
  AtkLayer layer;
};
struct _AtkObjectClass
{
  GObjectClass parent;
  const gchar* (* get_name) (AtkObject *accessible);
  const gchar* (* get_description) (AtkObject *accessible);
  AtkObject* (*get_parent) (AtkObject *accessible);
  gint (* get_n_children) (AtkObject *accessible);
  AtkObject* (* ref_child) (AtkObject *accessible,
                                                    gint i);
  gint (* get_index_in_parent) (AtkObject *accessible);
  AtkRelationSet* (* ref_relation_set) (AtkObject *accessible);
  AtkRole (* get_role) (AtkObject *accessible);
  AtkLayer (* get_layer) (AtkObject *accessible);
  gint (* get_mdi_zorder) (AtkObject *accessible);
  AtkStateSet* (* ref_state_set) (AtkObject *accessible);
  void (* set_name) (AtkObject *accessible,
                                                   const gchar *name);
  void (* set_description) (AtkObject *accessible,
                                                   const gchar *description);
  void (* set_parent) (AtkObject *accessible,
                                                   AtkObject *parent);
  void (* set_role) (AtkObject *accessible,
                                                   AtkRole role);
guint (* connect_property_change_handler) (AtkObject
                 *accessible,
                                                                  AtkPropertyChangeHandler *handler);
void (* remove_property_change_handler) (AtkObject
                *accessible,
                                                                  guint
                handler_id);
void (* initialize) (AtkObject *accessible,
                                                                  gpointer data);
  void (* children_changed) (AtkObject *accessible,
                                                   guint change_index,
                                                   gpointer changed_child);
  void (* focus_event) (AtkObject *accessible,
                                                   gboolean focus_in);
  void (* property_change) (AtkObject *accessible,
                                                   AtkPropertyValues *values);
  void (* state_change) (AtkObject *accessible,
                                                   const gchar *name,
                                                   gboolean state_set);
  void (*visible_data_changed) (AtkObject *accessible);
  void (*active_descendant_changed) (AtkObject *accessible,
                                                        gpointer *child);
  AtkAttributeSet* (*get_attributes) (AtkObject *accessible);
  const gchar* (*get_object_locale) (AtkObject *accessible);
  AtkFunction pad1;
};
struct _AtkImplementorIface
{
  GTypeInterface parent;
  AtkObject* (*ref_accessible) (AtkImplementor *implementor);
};
typedef struct _AtkAction AtkAction;
typedef struct _AtkActionIface AtkActionIface;
struct _AtkActionIface
{
  GTypeInterface parent;
  gboolean (*do_action) (AtkAction *action,
                                                gint i);
  gint (*get_n_actions) (AtkAction *action);
  const gchar* (*get_description) (AtkAction *action,
                                                gint i);
  const gchar* (*get_name) (AtkAction *action,
                                                gint i);
  const gchar* (*get_keybinding) (AtkAction *action,
                                                gint i);
  gboolean (*set_description) (AtkAction *action,
                                                gint i,
                                                const gchar *desc);
  const gchar* (*get_localized_name)(AtkAction *action,
      gint i);
};
typedef struct _AtkUtil AtkUtil;
typedef struct _AtkUtilClass AtkUtilClass;
typedef struct _AtkKeyEventStruct AtkKeyEventStruct;
typedef void (*AtkEventListener) (AtkObject* obj);
typedef void (*AtkEventListenerInit) (void);
typedef gint (*AtkKeySnoopFunc) (AtkKeyEventStruct *event,
       gpointer user_data);
struct _AtkKeyEventStruct {
  gint type;
  guint state;
  guint keyval;
  gint length;
  gchar *string;
  guint16 keycode;
  guint32 timestamp;
};
typedef enum
{
  ATK_KEY_EVENT_PRESS,
  ATK_KEY_EVENT_RELEASE,
  ATK_KEY_EVENT_LAST_DEFINED
} AtkKeyEventType;
struct _AtkUtil
{
  GObject parent;
};
struct _AtkUtilClass
{
   GObjectClass parent;
   guint (* add_global_event_listener) (GSignalEmissionHook listener,
        const gchar *event_type);
   void (* remove_global_event_listener) (guint listener_id);
   guint (* add_key_event_listener) (AtkKeySnoopFunc listener,
        gpointer data);
   void (* remove_key_event_listener) (guint listener_id);
   AtkObject* (* get_root) (void);
   const gchar* (* get_toolkit_name) (void);
   const gchar* (* get_toolkit_version) (void);
};
typedef enum {
  ATK_XY_SCREEN,
  ATK_XY_WINDOW,
  ATK_XY_PARENT
}AtkCoordType;
typedef enum {
  ATK_SCROLL_TOP_LEFT,
  ATK_SCROLL_BOTTOM_RIGHT,
  ATK_SCROLL_TOP_EDGE,
  ATK_SCROLL_BOTTOM_EDGE,
  ATK_SCROLL_LEFT_EDGE,
  ATK_SCROLL_RIGHT_EDGE,
  ATK_SCROLL_ANYWHERE
} AtkScrollType;
typedef struct _AtkComponent AtkComponent;
typedef struct _AtkComponentIface AtkComponentIface;
typedef void (*AtkFocusHandler) (AtkObject* object, gboolean focus_in);
typedef struct _AtkRectangle AtkRectangle;
struct _AtkRectangle
{
  gint x;
  gint y;
  gint width;
  gint height;
};
struct _AtkComponentIface
{
  GTypeInterface parent;
  guint (* add_focus_handler) (AtkComponent *component,
                                         AtkFocusHandler handler);
  gboolean (* contains) (AtkComponent *component,
                                         gint x,
                                         gint y,
                                         AtkCoordType coord_type);
  AtkObject* (* ref_accessible_at_point) (AtkComponent *component,
                                         gint x,
                                         gint y,
                                         AtkCoordType coord_type);
  void (* get_extents) (AtkComponent *component,
                                         gint *x,
                                         gint *y,
                                         gint *width,
                                         gint *height,
                                         AtkCoordType coord_type);
  void (* get_position) (AtkComponent *component,
                                                 gint *x,
                                                 gint *y,
                                                 AtkCoordType coord_type);
  void (* get_size) (AtkComponent *component,
                                                         gint *width,
                                                         gint *height);
  gboolean (* grab_focus) (AtkComponent *component);
  void (* remove_focus_handler) (AtkComponent *component,
                                                          guint handler_id);
  gboolean (* set_extents) (AtkComponent *component,
                                                 gint x,
                                                 gint y,
                                                 gint width,
                                                 gint height,
                                                 AtkCoordType coord_type);
  gboolean (* set_position) (AtkComponent *component,
                                                 gint x,
                                                 gint y,
                                                 AtkCoordType coord_type);
  gboolean (* set_size) (AtkComponent *component,
                                                 gint width,
                                                 gint height);
  AtkLayer (* get_layer) (AtkComponent *component);
  gint (* get_mdi_zorder) (AtkComponent *component);
  void (* bounds_changed) (AtkComponent *component,
                                                 AtkRectangle *bounds);
  gdouble (* get_alpha) (AtkComponent *component);
  gboolean (*scroll_to) (AtkComponent *component,
                                                 AtkScrollType type);
  gboolean (*scroll_to_point) (AtkComponent *component,
                                                 AtkCoordType coords,
                                                 gint x,
                                                 gint y);
};
typedef struct _AtkDocument AtkDocument;
typedef struct _AtkDocumentIface AtkDocumentIface;
struct _AtkDocumentIface
{
  GTypeInterface parent;
  const gchar* ( *get_document_type) (AtkDocument *document);
  gpointer ( *get_document) (AtkDocument *document);
  const gchar* ( *get_document_locale) (AtkDocument *document);
  AtkAttributeSet * ( *get_document_attributes) (AtkDocument *document);
  const gchar* ( *get_document_attribute_value) (AtkDocument *document,
                                                          const gchar *attribute_name);
  gboolean ( *set_document_attribute) (AtkDocument *document,
                                                    const gchar *attribute_name,
                                                    const gchar *attribute_value);
  gint ( *get_current_page_number) (AtkDocument *document);
  gint ( *get_page_count) (AtkDocument *document);
};
typedef enum
{
  ATK_TEXT_ATTR_INVALID = 0,
  ATK_TEXT_ATTR_LEFT_MARGIN,
  ATK_TEXT_ATTR_RIGHT_MARGIN,
  ATK_TEXT_ATTR_INDENT,
  ATK_TEXT_ATTR_INVISIBLE,
  ATK_TEXT_ATTR_EDITABLE,
  ATK_TEXT_ATTR_PIXELS_ABOVE_LINES,
  ATK_TEXT_ATTR_PIXELS_BELOW_LINES,
  ATK_TEXT_ATTR_PIXELS_INSIDE_WRAP,
  ATK_TEXT_ATTR_BG_FULL_HEIGHT,
  ATK_TEXT_ATTR_RISE,
  ATK_TEXT_ATTR_UNDERLINE,
  ATK_TEXT_ATTR_STRIKETHROUGH,
  ATK_TEXT_ATTR_SIZE,
  ATK_TEXT_ATTR_SCALE,
  ATK_TEXT_ATTR_WEIGHT,
  ATK_TEXT_ATTR_LANGUAGE,
  ATK_TEXT_ATTR_FAMILY_NAME,
  ATK_TEXT_ATTR_BG_COLOR,
  ATK_TEXT_ATTR_FG_COLOR,
  ATK_TEXT_ATTR_BG_STIPPLE,
  ATK_TEXT_ATTR_FG_STIPPLE,
  ATK_TEXT_ATTR_WRAP_MODE,
  ATK_TEXT_ATTR_DIRECTION,
  ATK_TEXT_ATTR_JUSTIFICATION,
  ATK_TEXT_ATTR_STRETCH,
  ATK_TEXT_ATTR_VARIANT,
  ATK_TEXT_ATTR_STYLE,
  ATK_TEXT_ATTR_LAST_DEFINED
} AtkTextAttribute;
typedef struct _AtkText AtkText;
typedef struct _AtkTextIface AtkTextIface;
typedef enum {
  ATK_TEXT_BOUNDARY_CHAR,
  ATK_TEXT_BOUNDARY_WORD_START,
  ATK_TEXT_BOUNDARY_WORD_END,
  ATK_TEXT_BOUNDARY_SENTENCE_START,
  ATK_TEXT_BOUNDARY_SENTENCE_END,
  ATK_TEXT_BOUNDARY_LINE_START,
  ATK_TEXT_BOUNDARY_LINE_END
} AtkTextBoundary;
typedef enum {
  ATK_TEXT_GRANULARITY_CHAR,
  ATK_TEXT_GRANULARITY_WORD,
  ATK_TEXT_GRANULARITY_SENTENCE,
  ATK_TEXT_GRANULARITY_LINE,
  ATK_TEXT_GRANULARITY_PARAGRAPH
} AtkTextGranularity;
typedef struct _AtkTextRectangle AtkTextRectangle;
struct _AtkTextRectangle {
  gint x;
  gint y;
  gint width;
  gint height;
};
typedef struct _AtkTextRange AtkTextRange;
struct _AtkTextRange {
  AtkTextRectangle bounds;
  gint start_offset;
  gint end_offset;
  gchar* content;
};
typedef enum {
    ATK_TEXT_CLIP_NONE,
    ATK_TEXT_CLIP_MIN,
    ATK_TEXT_CLIP_MAX,
    ATK_TEXT_CLIP_BOTH
} AtkTextClipType;
struct _AtkTextIface
{
  GTypeInterface parent;
  gchar* (* get_text) (AtkText *text,
                                                   gint start_offset,
                                                   gint end_offset);
  gchar* (* get_text_after_offset) (AtkText *text,
                                                   gint offset,
                                                   AtkTextBoundary boundary_type,
         gint *start_offset,
         gint *end_offset);
  gchar* (* get_text_at_offset) (AtkText *text,
                                                   gint offset,
                                                   AtkTextBoundary boundary_type,
         gint *start_offset,
         gint *end_offset);
  gunichar (* get_character_at_offset) (AtkText *text,
                                                   gint offset);
  gchar* (* get_text_before_offset) (AtkText *text,
                                                   gint offset,
                                                   AtkTextBoundary boundary_type,
          gint *start_offset,
         gint *end_offset);
  gint (* get_caret_offset) (AtkText *text);
  AtkAttributeSet* (* get_run_attributes) (AtkText *text,
         gint offset,
         gint *start_offset,
         gint *end_offset);
  AtkAttributeSet* (* get_default_attributes) (AtkText *text);
  void (* get_character_extents) (AtkText *text,
                                                   gint offset,
                                                   gint *x,
                                                   gint *y,
                                                   gint *width,
                                                   gint *height,
                                                   AtkCoordType coords);
  gint (* get_character_count) (AtkText *text);
  gint (* get_offset_at_point) (AtkText *text,
                                                   gint x,
                                                   gint y,
                                                   AtkCoordType coords);
  gint (* get_n_selections) (AtkText *text);
  gchar* (* get_selection) (AtkText *text,
         gint selection_num,
         gint *start_offset,
         gint *end_offset);
  gboolean (* add_selection) (AtkText *text,
         gint start_offset,
         gint end_offset);
  gboolean (* remove_selection) (AtkText *text,
         gint selection_num);
  gboolean (* set_selection) (AtkText *text,
         gint selection_num,
         gint start_offset,
         gint end_offset);
  gboolean (* set_caret_offset) (AtkText *text,
                                                   gint offset);
  void (* text_changed) (AtkText *text,
                                                   gint position,
                                                   gint length);
  void (* text_caret_moved) (AtkText *text,
                                                   gint location);
  void (* text_selection_changed) (AtkText *text);
  void (* text_attributes_changed) (AtkText *text);
  void (* get_range_extents) (AtkText *text,
                                                   gint start_offset,
                                                   gint end_offset,
                                                   AtkCoordType coord_type,
                                                   AtkTextRectangle *rect);
  AtkTextRange** (* get_bounded_ranges) (AtkText *text,
                                                   AtkTextRectangle *rect,
                                                   AtkCoordType coord_type,
                                                   AtkTextClipType x_clip_type,
                                                   AtkTextClipType y_clip_type);
  gchar* (* get_string_at_offset) (AtkText *text,
                                                   gint offset,
                                                   AtkTextGranularity granularity,
                                                   gint *start_offset,
                                                   gint *end_offset);
  gboolean (* scroll_substring_to) (AtkText *text,
                                                   gint start_offset,
                                                   gint end_offset,
                                                   AtkScrollType type);
  gboolean (* scroll_substring_to_point) (AtkText *text,
                                                   gint start_offset,
                                                   gint end_offset,
                                                   AtkCoordType coords,
                                                   gint x,
                                                   gint y);
};
typedef struct _AtkEditableText AtkEditableText;
typedef struct _AtkEditableTextIface AtkEditableTextIface;
struct _AtkEditableTextIface
{
  GTypeInterface parent_interface;
  gboolean (* set_run_attributes) (AtkEditableText *text,
                                   AtkAttributeSet *attrib_set,
                                   gint start_offset,
        gint end_offset);
  void (* set_text_contents) (AtkEditableText *text,
                                   const gchar *string);
  void (* insert_text) (AtkEditableText *text,
                                   const gchar *string,
                                   gint length,
                                   gint *position);
  void (* copy_text) (AtkEditableText *text,
                                   gint start_pos,
                                   gint end_pos);
  void (* cut_text) (AtkEditableText *text,
                                   gint start_pos,
                                   gint end_pos);
  void (* delete_text) (AtkEditableText *text,
                                   gint start_pos,
                                   gint end_pos);
  void (* paste_text) (AtkEditableText *text,
                                   gint position);
};
typedef struct _AtkGObjectAccessible AtkGObjectAccessible;
typedef struct _AtkGObjectAccessibleClass AtkGObjectAccessibleClass;
struct _AtkGObjectAccessible
{
  AtkObject parent;
};
struct _AtkGObjectAccessibleClass
{
  AtkObjectClass parent_class;
  AtkFunction pad1;
  AtkFunction pad2;
};
typedef enum
{
  ATK_HYPERLINK_IS_INLINE = 1 << 0
} AtkHyperlinkStateFlags;
typedef struct _AtkHyperlink AtkHyperlink;
typedef struct _AtkHyperlinkClass AtkHyperlinkClass;
struct _AtkHyperlink
{
  GObject parent;
};
struct _AtkHyperlinkClass
{
  GObjectClass parent;
  gchar* (* get_uri) (AtkHyperlink *link_,
                                            gint i);
  AtkObject* (* get_object) (AtkHyperlink *link_,
                                            gint i);
  gint (* get_end_index) (AtkHyperlink *link_);
  gint (* get_start_index) (AtkHyperlink *link_);
  gboolean (* is_valid) (AtkHyperlink *link_);
  gint (* get_n_anchors) (AtkHyperlink *link_);
  guint (* link_state) (AtkHyperlink *link_);
  gboolean (* is_selected_link) (AtkHyperlink *link_);
  void ( *link_activated) (AtkHyperlink *link_);
  AtkFunction pad1;
};
typedef struct _AtkHyperlinkImpl AtkHyperlinkImpl;
typedef struct _AtkHyperlinkImplIface AtkHyperlinkImplIface;
struct _AtkHyperlinkImplIface
{
  GTypeInterface parent;
  AtkHyperlink* (* get_hyperlink) (AtkHyperlinkImpl *impl);
};
typedef struct _AtkHypertext AtkHypertext;
typedef struct _AtkHypertextIface AtkHypertextIface;
struct _AtkHypertextIface
{
  GTypeInterface parent;
  AtkHyperlink*(* get_link) (AtkHypertext *hypertext,
                                             gint link_index);
  gint (* get_n_links) (AtkHypertext *hypertext);
  gint (* get_link_index) (AtkHypertext *hypertext,
                                             gint char_index);
  void (* link_selected) (AtkHypertext *hypertext,
                                             gint link_index);
};
typedef struct _AtkImage AtkImage;
typedef struct _AtkImageIface AtkImageIface;
struct _AtkImageIface
{
  GTypeInterface parent;
  void ( *get_image_position) (AtkImage *image,
                                                   gint *x,
                       gint *y,
                                  AtkCoordType coord_type);
  const gchar* ( *get_image_description) (AtkImage *image);
  void ( *get_image_size) (AtkImage *image,
                                                   gint *width,
                                                   gint *height);
  gboolean ( *set_image_description) (AtkImage *image,
                                                   const gchar *description);
  const gchar* ( *get_image_locale) (AtkImage *image);
};
typedef struct _AtkNoOpObject AtkNoOpObject;
typedef struct _AtkNoOpObjectClass AtkNoOpObjectClass;
struct _AtkNoOpObject
{
  AtkObject parent;
};
struct _AtkNoOpObjectClass
{
  AtkObjectClass parent_class;
};
typedef struct _AtkObjectFactory AtkObjectFactory;
typedef struct _AtkObjectFactoryClass AtkObjectFactoryClass;
struct _AtkObjectFactory
{
  GObject parent;
};
struct _AtkObjectFactoryClass
{
  GObjectClass parent_class;
  AtkObject* (* create_accessible) (GObject *obj);
  void (* invalidate) (AtkObjectFactory *factory);
  GType (* get_accessible_type) (void);
  AtkFunction pad1;
  AtkFunction pad2;
};
typedef struct _AtkNoOpObjectFactory AtkNoOpObjectFactory;
typedef struct _AtkNoOpObjectFactoryClass AtkNoOpObjectFactoryClass;
struct _AtkNoOpObjectFactory
{
  AtkObjectFactory parent;
};
struct _AtkNoOpObjectFactoryClass
{
  AtkObjectFactoryClass parent_class;
};
typedef struct _AtkPlug AtkPlug;
typedef struct _AtkPlugClass AtkPlugClass;
struct _AtkPlug
{
  AtkObject parent;
};
struct _AtkPlugClass
{
  AtkObjectClass parent_class;
  gchar* (* get_object_id) (AtkPlug* obj);
};
typedef struct _AtkRange AtkRange;
struct _AtkRegistry
{
  GObject parent;
  GHashTable *factory_type_registry;
  GHashTable *factory_singleton_cache;
};
struct _AtkRegistryClass
{
  GObjectClass parent_class;
};
typedef struct _AtkRegistry AtkRegistry;
typedef struct _AtkRegistryClass AtkRegistryClass;
typedef struct _AtkRelation AtkRelation;
typedef struct _AtkRelationClass AtkRelationClass;
struct _AtkRelation
{
  GObject parent;
  GPtrArray *target;
  AtkRelationType relationship;
};
struct _AtkRelationClass
{
  GObjectClass parent;
};
typedef struct _AtkRelationSetClass AtkRelationSetClass;
struct _AtkRelationSet
{
  GObject parent;
  GPtrArray *relations;
};
struct _AtkRelationSetClass
{
  GObjectClass parent;
  AtkFunction pad1;
  AtkFunction pad2;
};
typedef struct _AtkSelection AtkSelection;
typedef struct _AtkSelectionIface AtkSelectionIface;
struct _AtkSelectionIface
{
  GTypeInterface parent;
  gboolean (* add_selection) (AtkSelection *selection,
                                         gint i);
  gboolean (* clear_selection) (AtkSelection *selection);
  AtkObject* (* ref_selection) (AtkSelection *selection,
                                         gint i);
  gint (* get_selection_count) (AtkSelection *selection);
  gboolean (* is_child_selected) (AtkSelection *selection,
                                         gint i);
  gboolean (* remove_selection) (AtkSelection *selection,
                                         gint i);
  gboolean (* select_all_selection) (AtkSelection *selection);
  void (*selection_changed) (AtkSelection *selection);
};
typedef struct _AtkSocket AtkSocket;
typedef struct _AtkSocketClass AtkSocketClass;
struct _AtkSocket
{
  AtkObject parent;
  gchar* embedded_plug_id;
};
struct _AtkSocketClass
{
  AtkObjectClass parent_class;
  void (* embed) (AtkSocket *obj, gchar* plug_id);
};
typedef struct _AtkStateSetClass AtkStateSetClass;
struct _AtkStateSet
{
  GObject parent;
};
struct _AtkStateSetClass
{
  GObjectClass parent;
};
typedef struct _AtkStreamableContent AtkStreamableContent;
typedef struct _AtkStreamableContentIface AtkStreamableContentIface;
struct _AtkStreamableContentIface
{
  GTypeInterface parent;
  gint (* get_n_mime_types) (AtkStreamableContent *streamable);
  const gchar* (* get_mime_type) (AtkStreamableContent *streamable,
                                                   gint i);
  GIOChannel* (* get_stream) (AtkStreamableContent *streamable,
                                                   const gchar *mime_type);
    const gchar* (* get_uri) (AtkStreamableContent *streamable,
                                                   const gchar *mime_type);
  AtkFunction pad1;
  AtkFunction pad2;
  AtkFunction pad3;
};
typedef struct _AtkTable AtkTable;
typedef struct _AtkTableIface AtkTableIface;
struct _AtkTableIface
{
  GTypeInterface parent;
  AtkObject* (* ref_at) (AtkTable *table,
                                                  gint row,
                                                  gint column);
  gint (* get_index_at) (AtkTable *table,
                                                  gint row,
                                                  gint column);
  gint (* get_column_at_index) (AtkTable *table,
                                                  gint index_);
  gint (* get_row_at_index) (AtkTable *table,
                                                  gint index_);
  gint (* get_n_columns) (AtkTable *table);
  gint (* get_n_rows) (AtkTable *table);
  gint (* get_column_extent_at) (AtkTable *table,
                                                  gint row,
                                                  gint column);
  gint (* get_row_extent_at) (AtkTable *table,
                                                  gint row,
                                                  gint column);
  AtkObject*
                    (* get_caption) (AtkTable *table);
  const gchar* (* get_column_description) (AtkTable *table,
                                                  gint column);
  AtkObject* (* get_column_header) (AtkTable *table,
        gint column);
  const gchar* (* get_row_description) (AtkTable *table,
                                                  gint row);
  AtkObject* (* get_row_header) (AtkTable *table,
        gint row);
  AtkObject* (* get_summary) (AtkTable *table);
  void (* set_caption) (AtkTable *table,
                                                  AtkObject *caption);
  void (* set_column_description) (AtkTable *table,
                                                  gint column,
                                                  const gchar *description);
  void (* set_column_header) (AtkTable *table,
                                                  gint column,
                                                  AtkObject *header);
  void (* set_row_description) (AtkTable *table,
                                                  gint row,
                                                  const gchar *description);
  void (* set_row_header) (AtkTable *table,
                                                  gint row,
                                                  AtkObject *header);
  void (* set_summary) (AtkTable *table,
                                                  AtkObject *accessible);
  gint (* get_selected_columns) (AtkTable *table,
                                                  gint **selected);
  gint (* get_selected_rows) (AtkTable *table,
                                                  gint **selected);
  gboolean (* is_column_selected) (AtkTable *table,
                                                  gint column);
  gboolean (* is_row_selected) (AtkTable *table,
                                                  gint row);
  gboolean (* is_selected) (AtkTable *table,
                                                  gint row,
                                                  gint column);
  gboolean (* add_row_selection) (AtkTable *table,
                                                  gint row);
  gboolean (* remove_row_selection) (AtkTable *table,
                                                  gint row);
  gboolean (* add_column_selection) (AtkTable *table,
                                                  gint column);
  gboolean (* remove_column_selection) (AtkTable *table,
                                                  gint column);
  void (* row_inserted) (AtkTable *table,
                                                  gint row,
                                                  gint num_inserted);
  void (* column_inserted) (AtkTable *table,
                                                  gint column,
                                                  gint num_inserted);
  void (* row_deleted) (AtkTable *table,
                                                  gint row,
                                                  gint num_deleted);
  void (* column_deleted) (AtkTable *table,
                                                  gint column,
                                                  gint num_deleted);
  void (* row_reordered) (AtkTable *table);
  void (* column_reordered) (AtkTable *table);
  void (* model_changed) (AtkTable *table);
};
typedef struct _AtkTableCell AtkTableCell;
typedef struct _AtkTableCellIface AtkTableCellIface;
struct _AtkTableCellIface
{
  GTypeInterface parent;
  gint (*get_column_span) (AtkTableCell *cell);
  GPtrArray * (*get_column_header_cells) (AtkTableCell *cell);
  gboolean (*get_position) (AtkTableCell *cell,
                                            gint *row,
                                            gint *column);
  gint (*get_row_span) (AtkTableCell *cell);
  GPtrArray * (*get_row_header_cells) (AtkTableCell *cell);
  gboolean (*get_row_column_span) (AtkTableCell *cell,
                                            gint *row,
                                            gint *column,
                                            gint *row_span,
                                            gint *column_span);
  AtkObject * (*get_table) (AtkTableCell *cell);
};
typedef struct _AtkMisc AtkMisc;
typedef struct _AtkMiscClass AtkMiscClass;
struct _AtkMisc
{
  GObject parent;
};
struct _AtkMiscClass
{
   GObjectClass parent;
   void (* threads_enter) (AtkMisc *misc);
   void (* threads_leave) (AtkMisc *misc);
   gpointer vfuncs[32];
};
typedef struct _AtkValue AtkValue;
typedef struct _AtkValueIface AtkValueIface;
typedef enum
{
  ATK_VALUE_VERY_WEAK,
  ATK_VALUE_WEAK,
  ATK_VALUE_ACCEPTABLE,
  ATK_VALUE_STRONG,
  ATK_VALUE_VERY_STRONG,
  ATK_VALUE_VERY_LOW,
  ATK_VALUE_LOW,
  ATK_VALUE_MEDIUM,
  ATK_VALUE_HIGH,
  ATK_VALUE_VERY_HIGH,
  ATK_VALUE_VERY_BAD,
  ATK_VALUE_BAD,
  ATK_VALUE_GOOD,
  ATK_VALUE_VERY_GOOD,
  ATK_VALUE_BEST,
  ATK_VALUE_LAST_DEFINED
}AtkValueType;
struct _AtkValueIface
{
  GTypeInterface parent;
  void (* get_current_value) (AtkValue *obj,
                                  GValue *value);
  void (* get_maximum_value) (AtkValue *obj,
                                  GValue *value);
  void (* get_minimum_value) (AtkValue *obj,
                                  GValue *value);
  gboolean (* set_current_value) (AtkValue *obj,
                                  const GValue *value);
  void (* get_minimum_increment) (AtkValue *obj,
          GValue *value);
  void (* get_value_and_text) (AtkValue *obj,
                                   gdouble *value,
                                   gchar **text);
  AtkRange*(* get_range) (AtkValue *obj);
  gdouble (* get_increment) (AtkValue *obj);
  GSList* (* get_sub_ranges) (AtkValue *obj);
  void (* set_value) (AtkValue *obj,
                                   const gdouble new_value);
};
typedef struct _AtkWindow AtkWindow;
typedef struct _AtkWindowIface AtkWindowIface;
struct _AtkWindowIface
{
  GTypeInterface parent;
};
typedef enum
{
  GTK_WIDGET_HELP_TOOLTIP,
  GTK_WIDGET_HELP_WHATS_THIS
} GtkWidgetHelpType;
typedef struct _GtkWidgetPrivate GtkWidgetPrivate;
typedef struct _GtkWidgetClass GtkWidgetClass;
typedef struct _GtkWidgetClassPrivate GtkWidgetClassPrivate;
typedef GdkRectangle GtkAllocation;
typedef void (*GtkCallback) (GtkWidget *widget,
        gpointer data);
typedef gboolean (*GtkTickCallback) (GtkWidget *widget,
                                     GdkFrameClock *frame_clock,
                                     gpointer user_data);
struct _GtkRequisition
{
  gint width;
  gint height;
};
struct _GtkWidget
{
  GInitiallyUnowned parent_instance;
  GtkWidgetPrivate *priv;
};
struct _GtkWidgetClass
{
  GInitiallyUnownedClass parent_class;
  guint activate_signal;
  void (*dispatch_child_properties_changed) (GtkWidget *widget,
          guint n_pspecs,
          GParamSpec **pspecs);
  void (* destroy) (GtkWidget *widget);
  void (* show) (GtkWidget *widget);
  void (* show_all) (GtkWidget *widget);
  void (* hide) (GtkWidget *widget);
  void (* map) (GtkWidget *widget);
  void (* unmap) (GtkWidget *widget);
  void (* realize) (GtkWidget *widget);
  void (* unrealize) (GtkWidget *widget);
  void (* size_allocate) (GtkWidget *widget,
    GtkAllocation *allocation);
  void (* state_changed) (GtkWidget *widget,
    GtkStateType previous_state);
  void (* state_flags_changed) (GtkWidget *widget,
    GtkStateFlags previous_state_flags);
  void (* parent_set) (GtkWidget *widget,
    GtkWidget *previous_parent);
  void (* hierarchy_changed) (GtkWidget *widget,
    GtkWidget *previous_toplevel);
  void (* style_set) (GtkWidget *widget,
    GtkStyle *previous_style);
  void (* direction_changed) (GtkWidget *widget,
    GtkTextDirection previous_direction);
  void (* grab_notify) (GtkWidget *widget,
    gboolean was_grabbed);
  void (* child_notify) (GtkWidget *widget,
    GParamSpec *child_property);
  gboolean (* draw) (GtkWidget *widget,
                                cairo_t *cr);
  GtkSizeRequestMode (* get_request_mode) (GtkWidget *widget);
  void (* get_preferred_height) (GtkWidget *widget,
                                                         gint *minimum_height,
                                                         gint *natural_height);
  void (* get_preferred_width_for_height) (GtkWidget *widget,
                                                         gint height,
                                                         gint *minimum_width,
                                                         gint *natural_width);
  void (* get_preferred_width) (GtkWidget *widget,
                                                         gint *minimum_width,
                                                         gint *natural_width);
  void (* get_preferred_height_for_width) (GtkWidget *widget,
                                                         gint width,
                                                         gint *minimum_height,
                                                         gint *natural_height);
  gboolean (* mnemonic_activate) (GtkWidget *widget,
                                         gboolean group_cycling);
  void (* grab_focus) (GtkWidget *widget);
  gboolean (* focus) (GtkWidget *widget,
                                         GtkDirectionType direction);
  void (* move_focus) (GtkWidget *widget,
                                         GtkDirectionType direction);
  gboolean (* keynav_failed) (GtkWidget *widget,
                                         GtkDirectionType direction);
  gboolean (* event) (GtkWidget *widget,
      GdkEvent *event);
  gboolean (* button_press_event) (GtkWidget *widget,
      GdkEventButton *event);
  gboolean (* button_release_event) (GtkWidget *widget,
      GdkEventButton *event);
  gboolean (* scroll_event) (GtkWidget *widget,
      GdkEventScroll *event);
  gboolean (* motion_notify_event) (GtkWidget *widget,
      GdkEventMotion *event);
  gboolean (* delete_event) (GtkWidget *widget,
      GdkEventAny *event);
  gboolean (* destroy_event) (GtkWidget *widget,
      GdkEventAny *event);
  gboolean (* key_press_event) (GtkWidget *widget,
      GdkEventKey *event);
  gboolean (* key_release_event) (GtkWidget *widget,
      GdkEventKey *event);
  gboolean (* enter_notify_event) (GtkWidget *widget,
      GdkEventCrossing *event);
  gboolean (* leave_notify_event) (GtkWidget *widget,
      GdkEventCrossing *event);
  gboolean (* configure_event) (GtkWidget *widget,
      GdkEventConfigure *event);
  gboolean (* focus_in_event) (GtkWidget *widget,
      GdkEventFocus *event);
  gboolean (* focus_out_event) (GtkWidget *widget,
      GdkEventFocus *event);
  gboolean (* map_event) (GtkWidget *widget,
      GdkEventAny *event);
  gboolean (* unmap_event) (GtkWidget *widget,
      GdkEventAny *event);
  gboolean (* property_notify_event) (GtkWidget *widget,
      GdkEventProperty *event);
  gboolean (* selection_clear_event) (GtkWidget *widget,
      GdkEventSelection *event);
  gboolean (* selection_request_event) (GtkWidget *widget,
      GdkEventSelection *event);
  gboolean (* selection_notify_event) (GtkWidget *widget,
      GdkEventSelection *event);
  gboolean (* proximity_in_event) (GtkWidget *widget,
      GdkEventProximity *event);
  gboolean (* proximity_out_event) (GtkWidget *widget,
      GdkEventProximity *event);
  gboolean (* visibility_notify_event) (GtkWidget *widget,
      GdkEventVisibility *event);
  gboolean (* window_state_event) (GtkWidget *widget,
      GdkEventWindowState *event);
  gboolean (* damage_event) (GtkWidget *widget,
                                         GdkEventExpose *event);
  gboolean (* grab_broken_event) (GtkWidget *widget,
                                         GdkEventGrabBroken *event);
  void (* selection_get) (GtkWidget *widget,
        GtkSelectionData *selection_data,
        guint info,
        guint time_);
  void (* selection_received) (GtkWidget *widget,
        GtkSelectionData *selection_data,
        guint time_);
  void (* drag_begin) (GtkWidget *widget,
        GdkDragContext *context);
  void (* drag_end) (GtkWidget *widget,
        GdkDragContext *context);
  void (* drag_data_get) (GtkWidget *widget,
        GdkDragContext *context,
        GtkSelectionData *selection_data,
        guint info,
        guint time_);
  void (* drag_data_delete) (GtkWidget *widget,
        GdkDragContext *context);
  void (* drag_leave) (GtkWidget *widget,
        GdkDragContext *context,
        guint time_);
  gboolean (* drag_motion) (GtkWidget *widget,
        GdkDragContext *context,
        gint x,
        gint y,
        guint time_);
  gboolean (* drag_drop) (GtkWidget *widget,
        GdkDragContext *context,
        gint x,
        gint y,
        guint time_);
  void (* drag_data_received) (GtkWidget *widget,
        GdkDragContext *context,
        gint x,
        gint y,
        GtkSelectionData *selection_data,
        guint info,
        guint time_);
  gboolean (* drag_failed) (GtkWidget *widget,
                                    GdkDragContext *context,
                                    GtkDragResult result);
  gboolean (* popup_menu) (GtkWidget *widget);
  gboolean (* show_help) (GtkWidget *widget,
                                    GtkWidgetHelpType help_type);
  AtkObject * (* get_accessible) (GtkWidget *widget);
  void (* screen_changed) (GtkWidget *widget,
                                       GdkScreen *previous_screen);
  gboolean (* can_activate_accel) (GtkWidget *widget,
                                       guint signal_id);
  void (* composited_changed) (GtkWidget *widget);
  gboolean (* query_tooltip) (GtkWidget *widget,
           gint x,
           gint y,
           gboolean keyboard_tooltip,
           GtkTooltip *tooltip);
  void (* compute_expand) (GtkWidget *widget,
                                       gboolean *hexpand_p,
                                       gboolean *vexpand_p);
  void (* adjust_size_request) (GtkWidget *widget,
                                           GtkOrientation orientation,
                                           gint *minimum_size,
                                           gint *natural_size);
  void (* adjust_size_allocation) (GtkWidget *widget,
                                           GtkOrientation orientation,
                                           gint *minimum_size,
                                           gint *natural_size,
                                           gint *allocated_pos,
                                           gint *allocated_size);
  void (* style_updated) (GtkWidget *widget);
  gboolean (* touch_event) (GtkWidget *widget,
                                           GdkEventTouch *event);
  void (* get_preferred_height_and_baseline_for_width) (GtkWidget *widget,
         gint width,
         gint *minimum_height,
         gint *natural_height,
         gint *minimum_baseline,
         gint *natural_baseline);
  void (* adjust_baseline_request)(GtkWidget *widget,
                                           gint *minimum_baseline,
                                           gint *natural_baseline);
  void (* adjust_baseline_allocation) (GtkWidget *widget,
            gint *baseline);
  void (*queue_draw_region) (GtkWidget *widget,
            const cairo_region_t *region);
  GtkWidgetClassPrivate *priv;
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
};
typedef GtkWidget *GtkWidget_autoptr; typedef GList *GtkWidget_listautoptr; typedef GSList *GtkWidget_slistautoptr; typedef GQueue *GtkWidget_queueautoptr;
 
typedef GtkRequisition *GtkRequisition_autoptr; typedef GList *GtkRequisition_listautoptr; typedef GSList *GtkRequisition_slistautoptr; typedef GQueue *GtkRequisition_queueautoptr;
 
typedef struct _GtkApplication GtkApplication;
typedef struct _GtkApplicationClass GtkApplicationClass;
typedef struct _GtkApplicationPrivate GtkApplicationPrivate;
struct _GtkApplication
{
  GApplication parent;
  GtkApplicationPrivate *priv;
};
struct _GtkApplicationClass
{
  GApplicationClass parent_class;
  void (*window_added) (GtkApplication *application,
                          GtkWindow *window);
  void (*window_removed) (GtkApplication *application,
                          GtkWindow *window);
  gpointer padding[12];
};
typedef enum
{
  GTK_APPLICATION_INHIBIT_LOGOUT = (1 << 0),
  GTK_APPLICATION_INHIBIT_SWITCH = (1 << 1),
  GTK_APPLICATION_INHIBIT_SUSPEND = (1 << 2),
  GTK_APPLICATION_INHIBIT_IDLE = (1 << 3)
} GtkApplicationInhibitFlags;
typedef GtkApplication *GtkApplication_autoptr; typedef GList *GtkApplication_listautoptr; typedef GSList *GtkApplication_slistautoptr; typedef GQueue *GtkApplication_queueautoptr;
 
typedef struct _GtkContainer GtkContainer;
typedef struct _GtkContainerPrivate GtkContainerPrivate;
typedef struct _GtkContainerClass GtkContainerClass;
struct _GtkContainer
{
  GtkWidget widget;
  GtkContainerPrivate *priv;
};
struct _GtkContainerClass
{
  GtkWidgetClass parent_class;
  void (*add) (GtkContainer *container,
     GtkWidget *widget);
  void (*remove) (GtkContainer *container,
     GtkWidget *widget);
  void (*check_resize) (GtkContainer *container);
  void (*forall) (GtkContainer *container,
     gboolean include_internals,
     GtkCallback callback,
     gpointer callback_data);
  void (*set_focus_child) (GtkContainer *container,
     GtkWidget *child);
  GType (*child_type) (GtkContainer *container);
  gchar* (*composite_name) (GtkContainer *container,
     GtkWidget *child);
  void (*set_child_property) (GtkContainer *container,
     GtkWidget *child,
     guint property_id,
     const GValue *value,
     GParamSpec *pspec);
  void (*get_child_property) (GtkContainer *container,
                                 GtkWidget *child,
     guint property_id,
     GValue *value,
     GParamSpec *pspec);
  GtkWidgetPath * (*get_path_for_child) (GtkContainer *container,
                                         GtkWidget *child);
  unsigned int _handle_border_width : 1;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef enum
{
  GTK_RESIZE_PARENT,
  GTK_RESIZE_QUEUE,
  GTK_RESIZE_IMMEDIATE
} GtkResizeMode;
typedef GtkContainer *GtkContainer_autoptr; typedef GList *GtkContainer_listautoptr; typedef GSList *GtkContainer_slistautoptr; typedef GQueue *GtkContainer_queueautoptr;
 
typedef struct _GtkBin GtkBin;
typedef struct _GtkBinPrivate GtkBinPrivate;
typedef struct _GtkBinClass GtkBinClass;
struct _GtkBin
{
  GtkContainer container;
  GtkBinPrivate *priv;
};
struct _GtkBinClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef GtkBin *GtkBin_autoptr; typedef GList *GtkBin_listautoptr; typedef GSList *GtkBin_slistautoptr; typedef GQueue *GtkBin_queueautoptr;
 
typedef struct _GtkWindowPrivate GtkWindowPrivate;
typedef struct _GtkWindowClass GtkWindowClass;
typedef struct _GtkWindowGeometryInfo GtkWindowGeometryInfo;
typedef struct _GtkWindowGroup GtkWindowGroup;
typedef struct _GtkWindowGroupClass GtkWindowGroupClass;
typedef struct _GtkWindowGroupPrivate GtkWindowGroupPrivate;
struct _GtkWindow
{
  GtkBin bin;
  GtkWindowPrivate *priv;
};
struct _GtkWindowClass
{
  GtkBinClass parent_class;
  void (* set_focus) (GtkWindow *window,
                            GtkWidget *focus);
  void (* activate_focus) (GtkWindow *window);
  void (* activate_default) (GtkWindow *window);
  void (* keys_changed) (GtkWindow *window);
  gboolean (* enable_debugging) (GtkWindow *window,
                                 gboolean toggle);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
};
typedef enum
{
  GTK_WINDOW_TOPLEVEL,
  GTK_WINDOW_POPUP
} GtkWindowType;
typedef enum
{
  GTK_WIN_POS_NONE,
  GTK_WIN_POS_CENTER,
  GTK_WIN_POS_MOUSE,
  GTK_WIN_POS_CENTER_ALWAYS,
  GTK_WIN_POS_CENTER_ON_PARENT
} GtkWindowPosition;
typedef GtkWindow *GtkWindow_autoptr; typedef GList *GtkWindow_listautoptr; typedef GSList *GtkWindow_slistautoptr; typedef GQueue *GtkWindow_queueautoptr;
 
typedef GtkWindowGroup *GtkWindowGroup_autoptr; typedef GList *GtkWindowGroup_listautoptr; typedef GSList *GtkWindowGroup_slistautoptr; typedef GQueue *GtkWindowGroup_queueautoptr;
 
typedef enum
{
  GTK_DIALOG_MODAL = 1 << 0,
  GTK_DIALOG_DESTROY_WITH_PARENT = 1 << 1,
  GTK_DIALOG_USE_HEADER_BAR = 1 << 2
} GtkDialogFlags;
typedef enum
{
  GTK_RESPONSE_NONE = -1,
  GTK_RESPONSE_REJECT = -2,
  GTK_RESPONSE_ACCEPT = -3,
  GTK_RESPONSE_DELETE_EVENT = -4,
  GTK_RESPONSE_OK = -5,
  GTK_RESPONSE_CANCEL = -6,
  GTK_RESPONSE_CLOSE = -7,
  GTK_RESPONSE_YES = -8,
  GTK_RESPONSE_NO = -9,
  GTK_RESPONSE_APPLY = -10,
  GTK_RESPONSE_HELP = -11
} GtkResponseType;
typedef struct _GtkDialog GtkDialog;
typedef struct _GtkDialogPrivate GtkDialogPrivate;
typedef struct _GtkDialogClass GtkDialogClass;
struct _GtkDialog
{
  GtkWindow window;
  GtkDialogPrivate *priv;
};
struct _GtkDialogClass
{
  GtkWindowClass parent_class;
  void (* response) (GtkDialog *dialog, gint response_id);
  void (* close) (GtkDialog *dialog);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef GtkDialog *GtkDialog_autoptr; typedef GList *GtkDialog_listautoptr; typedef GSList *GtkDialog_slistautoptr; typedef GQueue *GtkDialog_queueautoptr;
 
typedef struct _GtkAboutDialog GtkAboutDialog;
typedef struct _GtkAboutDialogClass GtkAboutDialogClass;
typedef struct _GtkAboutDialogPrivate GtkAboutDialogPrivate;
typedef enum {
  GTK_LICENSE_UNKNOWN,
  GTK_LICENSE_CUSTOM,
  GTK_LICENSE_GPL_2_0,
  GTK_LICENSE_GPL_3_0,
  GTK_LICENSE_LGPL_2_1,
  GTK_LICENSE_LGPL_3_0,
  GTK_LICENSE_BSD,
  GTK_LICENSE_MIT_X11,
  GTK_LICENSE_ARTISTIC,
  GTK_LICENSE_GPL_2_0_ONLY,
  GTK_LICENSE_GPL_3_0_ONLY,
  GTK_LICENSE_LGPL_2_1_ONLY,
  GTK_LICENSE_LGPL_3_0_ONLY,
  GTK_LICENSE_AGPL_3_0,
  GTK_LICENSE_AGPL_3_0_ONLY
} GtkLicense;
struct _GtkAboutDialog
{
  GtkDialog parent_instance;
  GtkAboutDialogPrivate *priv;
};
struct _GtkAboutDialogClass
{
  GtkDialogClass parent_class;
  gboolean (*activate_link) (GtkAboutDialog *dialog,
                             const gchar *uri);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef GtkAboutDialog *GtkAboutDialog_autoptr; typedef GList *GtkAboutDialog_listautoptr; typedef GSList *GtkAboutDialog_slistautoptr; typedef GQueue *GtkAboutDialog_queueautoptr;
 
typedef struct _GtkMisc GtkMisc;
typedef struct _GtkMiscPrivate GtkMiscPrivate;
typedef struct _GtkMiscClass GtkMiscClass;
struct _GtkMisc
{
  GtkWidget widget;
  GtkMiscPrivate *priv;
};
struct _GtkMiscClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkMenuShell GtkMenuShell;
typedef struct _GtkMenuShellClass GtkMenuShellClass;
typedef struct _GtkMenuShellPrivate GtkMenuShellPrivate;
struct _GtkMenuShell
{
  GtkContainer container;
  GtkMenuShellPrivate *priv;
};
struct _GtkMenuShellClass
{
  GtkContainerClass parent_class;
  guint submenu_placement : 1;
  void (*deactivate) (GtkMenuShell *menu_shell);
  void (*selection_done) (GtkMenuShell *menu_shell);
  void (*move_current) (GtkMenuShell *menu_shell,
                                GtkMenuDirectionType direction);
  void (*activate_current) (GtkMenuShell *menu_shell,
                                gboolean force_hide);
  void (*cancel) (GtkMenuShell *menu_shell);
  void (*select_item) (GtkMenuShell *menu_shell,
                                GtkWidget *menu_item);
  void (*insert) (GtkMenuShell *menu_shell,
                                GtkWidget *child,
                                gint position);
  gint (*get_popup_delay) (GtkMenuShell *menu_shell);
  gboolean (*move_selected) (GtkMenuShell *menu_shell,
                                gint distance);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef GtkMenuShell *GtkMenuShell_autoptr; typedef GList *GtkMenuShell_listautoptr; typedef GSList *GtkMenuShell_slistautoptr; typedef GQueue *GtkMenuShell_queueautoptr;
 
typedef struct _GtkMenu GtkMenu;
typedef struct _GtkMenuClass GtkMenuClass;
typedef struct _GtkMenuPrivate GtkMenuPrivate;
typedef enum
{
  GTK_ARROWS_BOTH,
  GTK_ARROWS_START,
  GTK_ARROWS_END
} GtkArrowPlacement;
typedef void (*GtkMenuPositionFunc) (GtkMenu *menu,
         gint *x,
         gint *y,
         gboolean *push_in,
         gpointer user_data);
typedef void (*GtkMenuDetachFunc) (GtkWidget *attach_widget,
         GtkMenu *menu);
struct _GtkMenu
{
  GtkMenuShell menu_shell;
  GtkMenuPrivate *priv;
};
struct _GtkMenuClass
{
  GtkMenuShellClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef GtkMenu *GtkMenu_autoptr; typedef GList *GtkMenu_listautoptr; typedef GSList *GtkMenu_slistautoptr; typedef GQueue *GtkMenu_queueautoptr;
 
typedef struct _GtkLabel GtkLabel;
typedef struct _GtkLabelPrivate GtkLabelPrivate;
typedef struct _GtkLabelClass GtkLabelClass;
typedef struct _GtkLabelSelectionInfo GtkLabelSelectionInfo;
struct _GtkLabel
{
  GtkMisc misc;
  GtkLabelPrivate *priv;
};
struct _GtkLabelClass
{
  GtkMiscClass parent_class;
  void (* move_cursor) (GtkLabel *label,
       GtkMovementStep step,
       gint count,
       gboolean extend_selection);
  void (* copy_clipboard) (GtkLabel *label);
  void (* populate_popup) (GtkLabel *label,
                             GtkMenu *menu);
  gboolean (*activate_link) (GtkLabel *label,
                             const gchar *uri);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef GtkLabel *GtkLabel_autoptr; typedef GList *GtkLabel_listautoptr; typedef GSList *GtkLabel_slistautoptr; typedef GQueue *GtkLabel_queueautoptr;
 
typedef struct _GtkAccelLabel GtkAccelLabel;
typedef struct _GtkAccelLabelClass GtkAccelLabelClass;
typedef struct _GtkAccelLabelPrivate GtkAccelLabelPrivate;
struct _GtkAccelLabel
{
  GtkLabel label;
  GtkAccelLabelPrivate *priv;
};
struct _GtkAccelLabelClass
{
  GtkLabelClass parent_class;
  gchar *signal_quote1;
  gchar *signal_quote2;
  gchar *mod_name_shift;
  gchar *mod_name_control;
  gchar *mod_name_alt;
  gchar *mod_separator;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef GtkAccelLabel *GtkAccelLabel_autoptr; typedef GList *GtkAccelLabel_listautoptr; typedef GSList *GtkAccelLabel_slistautoptr; typedef GQueue *GtkAccelLabel_queueautoptr;
 
typedef struct _GtkAccelMap GtkAccelMap;
typedef struct _GtkAccelMapClass GtkAccelMapClass;
typedef void (*GtkAccelMapForeach) (gpointer data,
       const gchar *accel_path,
       guint accel_key,
       GdkModifierType accel_mods,
       gboolean changed);
typedef GtkAccelMap *GtkAccelMap_autoptr; typedef GList *GtkAccelMap_listautoptr; typedef GSList *GtkAccelMap_slistautoptr; typedef GQueue *GtkAccelMap_queueautoptr;
 
typedef struct _GtkAccessible GtkAccessible;
typedef struct _GtkAccessiblePrivate GtkAccessiblePrivate;
typedef struct _GtkAccessibleClass GtkAccessibleClass;
struct _GtkAccessible
{
  AtkObject parent;
  GtkAccessiblePrivate *priv;
};
struct _GtkAccessibleClass
{
  AtkObjectClass parent_class;
  void (*connect_widget_destroyed) (GtkAccessible *accessible);
  void (*widget_set) (GtkAccessible *accessible);
  void (*widget_unset) (GtkAccessible *accessible);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkActionableInterface GtkActionableInterface;
typedef struct _GtkActionable GtkActionable;
struct _GtkActionableInterface
{
  GTypeInterface g_iface;
  const gchar * (* get_action_name) (GtkActionable *actionable);
  void (* set_action_name) (GtkActionable *actionable,
                                                 const gchar *action_name);
  GVariant * (* get_action_target_value) (GtkActionable *actionable);
  void (* set_action_target_value) (GtkActionable *actionable,
                                                 GVariant *target_value);
};
typedef struct _GtkActionBar GtkActionBar;
typedef struct _GtkActionBarPrivate GtkActionBarPrivate;
typedef struct _GtkActionBarClass GtkActionBarClass;
struct _GtkActionBar
{
  GtkBin bin;
};
struct _GtkActionBarClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkAdjustmentPrivate GtkAdjustmentPrivate;
typedef struct _GtkAdjustmentClass GtkAdjustmentClass;
struct _GtkAdjustment
{
  GInitiallyUnowned parent_instance;
  GtkAdjustmentPrivate *priv;
};
struct _GtkAdjustmentClass
{
  GInitiallyUnownedClass parent_class;
  void (* changed) (GtkAdjustment *adjustment);
  void (* value_changed) (GtkAdjustment *adjustment);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkAppChooser GtkAppChooser;
typedef struct _GtkAppChooserDialog GtkAppChooserDialog;
typedef struct _GtkAppChooserDialogClass GtkAppChooserDialogClass;
typedef struct _GtkAppChooserDialogPrivate GtkAppChooserDialogPrivate;
struct _GtkAppChooserDialog {
  GtkDialog parent;
  GtkAppChooserDialogPrivate *priv;
};
struct _GtkAppChooserDialogClass {
  GtkDialogClass parent_class;
  gpointer padding[16];
};
typedef struct _GtkBox GtkBox;
typedef struct _GtkBoxPrivate GtkBoxPrivate;
typedef struct _GtkBoxClass GtkBoxClass;
struct _GtkBox
{
  GtkContainer container;
  GtkBoxPrivate *priv;
};
struct _GtkBoxClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkAppChooserWidget GtkAppChooserWidget;
typedef struct _GtkAppChooserWidgetClass GtkAppChooserWidgetClass;
typedef struct _GtkAppChooserWidgetPrivate GtkAppChooserWidgetPrivate;
struct _GtkAppChooserWidget {
  GtkBox parent;
  GtkAppChooserWidgetPrivate *priv;
};
struct _GtkAppChooserWidgetClass {
  GtkBoxClass parent_class;
  void (* application_selected) (GtkAppChooserWidget *self,
                                  GAppInfo *app_info);
  void (* application_activated) (GtkAppChooserWidget *self,
                                  GAppInfo *app_info);
  void (* populate_popup) (GtkAppChooserWidget *self,
                                  GtkMenu *menu,
                                  GAppInfo *app_info);
  gpointer padding[16];
};
typedef struct _GtkTreeIter GtkTreeIter;
typedef struct _GtkTreePath GtkTreePath;
typedef struct _GtkTreeRowReference GtkTreeRowReference;
typedef struct _GtkTreeModel GtkTreeModel;
typedef struct _GtkTreeModelIface GtkTreeModelIface;
typedef gboolean (* GtkTreeModelForeachFunc) (GtkTreeModel *model, GtkTreePath *path, GtkTreeIter *iter, gpointer data);
typedef enum
{
  GTK_TREE_MODEL_ITERS_PERSIST = 1 << 0,
  GTK_TREE_MODEL_LIST_ONLY = 1 << 1
} GtkTreeModelFlags;
struct _GtkTreeIter
{
  gint stamp;
  gpointer user_data;
  gpointer user_data2;
  gpointer user_data3;
};
struct _GtkTreeModelIface
{
  GTypeInterface g_iface;
  void (* row_changed) (GtkTreeModel *tree_model,
       GtkTreePath *path,
       GtkTreeIter *iter);
  void (* row_inserted) (GtkTreeModel *tree_model,
       GtkTreePath *path,
       GtkTreeIter *iter);
  void (* row_has_child_toggled) (GtkTreeModel *tree_model,
       GtkTreePath *path,
       GtkTreeIter *iter);
  void (* row_deleted) (GtkTreeModel *tree_model,
       GtkTreePath *path);
  void (* rows_reordered) (GtkTreeModel *tree_model,
       GtkTreePath *path,
       GtkTreeIter *iter,
       gint *new_order);
  GtkTreeModelFlags (* get_flags) (GtkTreeModel *tree_model);
  gint (* get_n_columns) (GtkTreeModel *tree_model);
  GType (* get_column_type) (GtkTreeModel *tree_model,
        gint index_);
  gboolean (* get_iter) (GtkTreeModel *tree_model,
        GtkTreeIter *iter,
        GtkTreePath *path);
  GtkTreePath *(* get_path) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  void (* get_value) (GtkTreeModel *tree_model,
        GtkTreeIter *iter,
        gint column,
        GValue *value);
  gboolean (* iter_next) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  gboolean (* iter_previous) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  gboolean (* iter_children) (GtkTreeModel *tree_model,
        GtkTreeIter *iter,
        GtkTreeIter *parent);
  gboolean (* iter_has_child) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  gint (* iter_n_children) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  gboolean (* iter_nth_child) (GtkTreeModel *tree_model,
        GtkTreeIter *iter,
        GtkTreeIter *parent,
        gint n);
  gboolean (* iter_parent) (GtkTreeModel *tree_model,
        GtkTreeIter *iter,
        GtkTreeIter *child);
  void (* ref_node) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
  void (* unref_node) (GtkTreeModel *tree_model,
        GtkTreeIter *iter);
};
typedef struct _GtkCellEditable GtkCellEditable;
typedef struct _GtkCellEditableIface GtkCellEditableIface;
struct _GtkCellEditableIface
{
  GTypeInterface g_iface;
  void (* editing_done) (GtkCellEditable *cell_editable);
  void (* remove_widget) (GtkCellEditable *cell_editable);
  void (* start_editing) (GtkCellEditable *cell_editable,
     GdkEvent *event);
};
typedef enum
{
  GTK_CELL_RENDERER_SELECTED = 1 << 0,
  GTK_CELL_RENDERER_PRELIT = 1 << 1,
  GTK_CELL_RENDERER_INSENSITIVE = 1 << 2,
  GTK_CELL_RENDERER_SORTED = 1 << 3,
  GTK_CELL_RENDERER_FOCUSED = 1 << 4,
  GTK_CELL_RENDERER_EXPANDABLE = 1 << 5,
  GTK_CELL_RENDERER_EXPANDED = 1 << 6
} GtkCellRendererState;
typedef enum
{
  GTK_CELL_RENDERER_MODE_INERT,
  GTK_CELL_RENDERER_MODE_ACTIVATABLE,
  GTK_CELL_RENDERER_MODE_EDITABLE
} GtkCellRendererMode;
typedef struct _GtkCellRenderer GtkCellRenderer;
typedef struct _GtkCellRendererPrivate GtkCellRendererPrivate;
typedef struct _GtkCellRendererClass GtkCellRendererClass;
typedef struct _GtkCellRendererClassPrivate GtkCellRendererClassPrivate;
struct _GtkCellRenderer
{
  GInitiallyUnowned parent_instance;
  GtkCellRendererPrivate *priv;
};
struct _GtkCellRendererClass
{
  GInitiallyUnownedClass parent_class;
  GtkSizeRequestMode (* get_request_mode) (GtkCellRenderer *cell);
  void (* get_preferred_width) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
                                                          gint *minimum_size,
                                                          gint *natural_size);
  void (* get_preferred_height_for_width) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
                                                          gint width,
                                                          gint *minimum_height,
                                                          gint *natural_height);
  void (* get_preferred_height) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
                                                          gint *minimum_size,
                                                          gint *natural_size);
  void (* get_preferred_width_for_height) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
                                                          gint height,
                                                          gint *minimum_width,
                                                          gint *natural_width);
  void (* get_aligned_area) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
         GtkCellRendererState flags,
                                                          const GdkRectangle *cell_area,
                                                          GdkRectangle *aligned_area);
  void (* get_size) (GtkCellRenderer *cell,
                                                          GtkWidget *widget,
                                                          const GdkRectangle *cell_area,
                                                          gint *x_offset,
                                                          gint *y_offset,
                                                          gint *width,
                                                          gint *height);
  void (* render) (GtkCellRenderer *cell,
                                                          cairo_t *cr,
                                                          GtkWidget *widget,
                                                          const GdkRectangle *background_area,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags);
  gboolean (* activate) (GtkCellRenderer *cell,
                                                          GdkEvent *event,
                                                          GtkWidget *widget,
                                                          const gchar *path,
                                                          const GdkRectangle *background_area,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags);
  GtkCellEditable * (* start_editing) (GtkCellRenderer *cell,
                                                          GdkEvent *event,
                                                          GtkWidget *widget,
                                                          const gchar *path,
                                                          const GdkRectangle *background_area,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags);
  void (* editing_canceled) (GtkCellRenderer *cell);
  void (* editing_started) (GtkCellRenderer *cell,
        GtkCellEditable *editable,
        const gchar *path);
  GtkCellRendererClassPrivate *priv;
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkTreeSortable GtkTreeSortable;
typedef struct _GtkTreeSortableIface GtkTreeSortableIface;
typedef gint (* GtkTreeIterCompareFunc) (GtkTreeModel *model,
      GtkTreeIter *a,
      GtkTreeIter *b,
      gpointer user_data);
struct _GtkTreeSortableIface
{
  GTypeInterface g_iface;
  void (* sort_column_changed) (GtkTreeSortable *sortable);
  gboolean (* get_sort_column_id) (GtkTreeSortable *sortable,
          gint *sort_column_id,
          GtkSortType *order);
  void (* set_sort_column_id) (GtkTreeSortable *sortable,
          gint sort_column_id,
          GtkSortType order);
  void (* set_sort_func) (GtkTreeSortable *sortable,
          gint sort_column_id,
          GtkTreeIterCompareFunc sort_func,
          gpointer user_data,
          GDestroyNotify destroy);
  void (* set_default_sort_func) (GtkTreeSortable *sortable,
          GtkTreeIterCompareFunc sort_func,
          gpointer user_data,
          GDestroyNotify destroy);
  gboolean (* has_default_sort_func) (GtkTreeSortable *sortable);
};
typedef struct _GtkCellArea GtkCellArea;
typedef struct _GtkCellAreaClass GtkCellAreaClass;
typedef struct _GtkCellAreaPrivate GtkCellAreaPrivate;
typedef struct _GtkCellAreaContext GtkCellAreaContext;
typedef gboolean (*GtkCellCallback) (GtkCellRenderer *renderer,
                                        gpointer data);
typedef gboolean (*GtkCellAllocCallback) (GtkCellRenderer *renderer,
                                             const GdkRectangle *cell_area,
                                             const GdkRectangle *cell_background,
                                             gpointer data);
struct _GtkCellArea
{
  GInitiallyUnowned parent_instance;
  GtkCellAreaPrivate *priv;
};
struct _GtkCellAreaClass
{
  GInitiallyUnownedClass parent_class;
  void (* add) (GtkCellArea *area,
                                                          GtkCellRenderer *renderer);
  void (* remove) (GtkCellArea *area,
                                                          GtkCellRenderer *renderer);
  void (* foreach) (GtkCellArea *area,
                                                          GtkCellCallback callback,
                                                          gpointer callback_data);
  void (* foreach_alloc) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          const GdkRectangle *cell_area,
                                                          const GdkRectangle *background_area,
                                                          GtkCellAllocCallback callback,
                                                          gpointer callback_data);
  gint (* event) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          GdkEvent *event,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags);
  void (* render) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          cairo_t *cr,
                                                          const GdkRectangle *background_area,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags,
                                                          gboolean paint_focus);
  void (* apply_attributes) (GtkCellArea *area,
                                                          GtkTreeModel *tree_model,
                                                          GtkTreeIter *iter,
                                                          gboolean is_expander,
                                                          gboolean is_expanded);
  GtkCellAreaContext *(* create_context) (GtkCellArea *area);
  GtkCellAreaContext *(* copy_context) (GtkCellArea *area,
                                                          GtkCellAreaContext *context);
  GtkSizeRequestMode (* get_request_mode) (GtkCellArea *area);
  void (* get_preferred_width) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          gint *minimum_width,
                                                          gint *natural_width);
  void (* get_preferred_height_for_width) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          gint width,
                                                          gint *minimum_height,
                                                          gint *natural_height);
  void (* get_preferred_height) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          gint *minimum_height,
                                                          gint *natural_height);
  void (* get_preferred_width_for_height) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          gint height,
                                                          gint *minimum_width,
                                                          gint *natural_width);
  void (* set_cell_property) (GtkCellArea *area,
                                                          GtkCellRenderer *renderer,
                                                          guint property_id,
                                                          const GValue *value,
                                                          GParamSpec *pspec);
  void (* get_cell_property) (GtkCellArea *area,
                                                          GtkCellRenderer *renderer,
                                                          guint property_id,
                                                          GValue *value,
                                                          GParamSpec *pspec);
  gboolean (* focus) (GtkCellArea *area,
                                                          GtkDirectionType direction);
  gboolean (* is_activatable) (GtkCellArea *area);
  gboolean (* activate) (GtkCellArea *area,
                                                          GtkCellAreaContext *context,
                                                          GtkWidget *widget,
                                                          const GdkRectangle *cell_area,
                                                          GtkCellRendererState flags,
                                                          gboolean edit_only);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};

typedef struct _GtkTreeViewColumn GtkTreeViewColumn;
typedef struct _GtkTreeViewColumnClass GtkTreeViewColumnClass;
typedef struct _GtkTreeViewColumnPrivate GtkTreeViewColumnPrivate;
typedef enum
{
  GTK_TREE_VIEW_COLUMN_GROW_ONLY,
  GTK_TREE_VIEW_COLUMN_AUTOSIZE,
  GTK_TREE_VIEW_COLUMN_FIXED
} GtkTreeViewColumnSizing;
typedef void (* GtkTreeCellDataFunc) (GtkTreeViewColumn *tree_column,
          GtkCellRenderer *cell,
          GtkTreeModel *tree_model,
          GtkTreeIter *iter,
          gpointer data);
struct _GtkTreeViewColumn
{
  GInitiallyUnowned parent_instance;
  GtkTreeViewColumnPrivate *priv;
};
struct _GtkTreeViewColumnClass
{
  GInitiallyUnownedClass parent_class;
  void (*clicked) (GtkTreeViewColumn *tree_column);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextAttributes GtkTextAttributes;
typedef struct _GtkTextAppearance GtkTextAppearance;
struct _GtkTextAppearance
{
  GdkColor bg_color;
  GdkColor fg_color;
  gint rise;
  guint underline : 4;
  guint strikethrough : 1;
  guint draw_bg : 1;
  guint inside_selection : 1;
  guint is_text : 1;
  GdkRGBA *rgba[2];
};
struct _GtkTextAttributes
{
  guint refcount;
  GtkTextAppearance appearance;
  GtkJustification justification;
  GtkTextDirection direction;
  PangoFontDescription *font;
  gdouble font_scale;
  gint left_margin;
  gint right_margin;
  gint indent;
  gint pixels_above_lines;
  gint pixels_below_lines;
  gint pixels_inside_wrap;
  PangoTabArray *tabs;
  GtkWrapMode wrap_mode;
  PangoLanguage *language;
  GdkColor *pg_bg_color;
  guint invisible : 1;
  guint bg_full_height : 1;
  guint editable : 1;
  guint no_fallback: 1;
  GdkRGBA *pg_bg_rgba;
  gint letter_spacing;
  gchar *font_features;
};
typedef struct _GtkTextChildAnchor GtkTextChildAnchor;
typedef struct _GtkTextChildAnchorClass GtkTextChildAnchorClass;
struct _GtkTextChildAnchor
{
  GObject parent_instance;
  gpointer segment;
};
struct _GtkTextChildAnchorClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextIter GtkTextIter;
typedef struct _GtkTextTagTable GtkTextTagTable;
typedef struct _GtkTextTag GtkTextTag;
typedef struct _GtkTextTagPrivate GtkTextTagPrivate;
typedef struct _GtkTextTagClass GtkTextTagClass;
struct _GtkTextTag
{
  GObject parent_instance;
  GtkTextTagPrivate *priv;
};
struct _GtkTextTagClass
{
  GObjectClass parent_class;
  gboolean (* event) (GtkTextTag *tag,
                      GObject *event_object,
                      GdkEvent *event,
                      const GtkTextIter *iter);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum {
  GTK_TEXT_SEARCH_VISIBLE_ONLY = 1 << 0,
  GTK_TEXT_SEARCH_TEXT_ONLY = 1 << 1,
  GTK_TEXT_SEARCH_CASE_INSENSITIVE = 1 << 2
} GtkTextSearchFlags;
typedef struct _GtkTextBuffer GtkTextBuffer;
struct _GtkTextIter {
  gpointer dummy1;
  gpointer dummy2;
  gint dummy3;
  gint dummy4;
  gint dummy5;
  gint dummy6;
  gint dummy7;
  gint dummy8;
  gpointer dummy9;
  gpointer dummy10;
  gint dummy11;
  gint dummy12;
  gint dummy13;
  gpointer dummy14;
};
typedef gboolean (* GtkTextCharPredicate) (gunichar ch, gpointer user_data);
typedef struct _GtkTargetPair GtkTargetPair;
struct _GtkTargetPair
{
  GdkAtom target;
  guint flags;
  guint info;
};
typedef struct _GtkTargetList GtkTargetList;
typedef struct _GtkTargetEntry GtkTargetEntry;
typedef enum {
  GTK_TARGET_SAME_APP = 1 << 0,
  GTK_TARGET_SAME_WIDGET = 1 << 1,
  GTK_TARGET_OTHER_APP = 1 << 2,
  GTK_TARGET_OTHER_WIDGET = 1 << 3
} GtkTargetFlags;
struct _GtkTargetEntry
{
  gchar *target;
  guint flags;
  guint info;
};
typedef struct _GtkEditable GtkEditable;
typedef struct _GtkEditableInterface GtkEditableInterface;
struct _GtkEditableInterface
{
  GTypeInterface base_iface;
  void (* insert_text) (GtkEditable *editable,
         const gchar *new_text,
         gint new_text_length,
         gint *position);
  void (* delete_text) (GtkEditable *editable,
         gint start_pos,
         gint end_pos);
  void (* changed) (GtkEditable *editable);
  void (* do_insert_text) (GtkEditable *editable,
         const gchar *new_text,
         gint new_text_length,
         gint *position);
  void (* do_delete_text) (GtkEditable *editable,
         gint start_pos,
         gint end_pos);
  gchar* (* get_chars) (GtkEditable *editable,
         gint start_pos,
         gint end_pos);
  void (* set_selection_bounds) (GtkEditable *editable,
         gint start_pos,
         gint end_pos);
  gboolean (* get_selection_bounds) (GtkEditable *editable,
         gint *start_pos,
         gint *end_pos);
  void (* set_position) (GtkEditable *editable,
         gint position);
  gint (* get_position) (GtkEditable *editable);
};
typedef struct _GtkIMContext GtkIMContext;
typedef struct _GtkIMContextClass GtkIMContextClass;
struct _GtkIMContext
{
  GObject parent_instance;
};
struct _GtkIMContextClass
{
  GObjectClass parent_class;
  void (*preedit_start) (GtkIMContext *context);
  void (*preedit_end) (GtkIMContext *context);
  void (*preedit_changed) (GtkIMContext *context);
  void (*commit) (GtkIMContext *context, const gchar *str);
  gboolean (*retrieve_surrounding) (GtkIMContext *context);
  gboolean (*delete_surrounding) (GtkIMContext *context,
        gint offset,
        gint n_chars);
  void (*set_client_window) (GtkIMContext *context,
       GdkWindow *window);
  void (*get_preedit_string) (GtkIMContext *context,
       gchar **str,
       PangoAttrList **attrs,
       gint *cursor_pos);
  gboolean (*filter_keypress) (GtkIMContext *context,
              GdkEventKey *event);
  void (*focus_in) (GtkIMContext *context);
  void (*focus_out) (GtkIMContext *context);
  void (*reset) (GtkIMContext *context);
  void (*set_cursor_location) (GtkIMContext *context,
       GdkRectangle *area);
  void (*set_use_preedit) (GtkIMContext *context,
       gboolean use_preedit);
  void (*set_surrounding) (GtkIMContext *context,
       const gchar *text,
       gint len,
       gint cursor_index);
  gboolean (*get_surrounding) (GtkIMContext *context,
       gchar **text,
       gint *cursor_index);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
};
typedef struct _GtkEntryBuffer GtkEntryBuffer;
typedef struct _GtkEntryBufferClass GtkEntryBufferClass;
typedef struct _GtkEntryBufferPrivate GtkEntryBufferPrivate;
struct _GtkEntryBuffer
{
  GObject parent_instance;
  GtkEntryBufferPrivate *priv;
};
struct _GtkEntryBufferClass
{
  GObjectClass parent_class;
  void (*inserted_text) (GtkEntryBuffer *buffer,
                                          guint position,
                                          const gchar *chars,
                                          guint n_chars);
  void (*deleted_text) (GtkEntryBuffer *buffer,
                                          guint position,
                                          guint n_chars);
  const gchar* (*get_text) (GtkEntryBuffer *buffer,
                                          gsize *n_bytes);
  guint (*get_length) (GtkEntryBuffer *buffer);
  guint (*insert_text) (GtkEntryBuffer *buffer,
                                          guint position,
                                          const gchar *chars,
                                          guint n_chars);
  guint (*delete_text) (GtkEntryBuffer *buffer,
                                          guint position,
                                          guint n_chars);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkListStore GtkListStore;
typedef struct _GtkListStorePrivate GtkListStorePrivate;
typedef struct _GtkListStoreClass GtkListStoreClass;
struct _GtkListStore
{
  GObject parent;
  GtkListStorePrivate *priv;
};
struct _GtkListStoreClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef gboolean (* GtkTreeModelFilterVisibleFunc) (GtkTreeModel *model,
                                                    GtkTreeIter *iter,
                                                    gpointer data);
typedef void (* GtkTreeModelFilterModifyFunc) (GtkTreeModel *model,
                                               GtkTreeIter *iter,
                                               GValue *value,
                                               gint column,
                                               gpointer data);
typedef struct _GtkTreeModelFilter GtkTreeModelFilter;
typedef struct _GtkTreeModelFilterClass GtkTreeModelFilterClass;
typedef struct _GtkTreeModelFilterPrivate GtkTreeModelFilterPrivate;
struct _GtkTreeModelFilter
{
  GObject parent;
  GtkTreeModelFilterPrivate *priv;
};
struct _GtkTreeModelFilterClass
{
  GObjectClass parent_class;
  gboolean (* visible) (GtkTreeModelFilter *self,
                        GtkTreeModel *child_model,
                        GtkTreeIter *iter);
  void (* modify) (GtkTreeModelFilter *self,
                   GtkTreeModel *child_model,
                   GtkTreeIter *iter,
                   GValue *value,
                   gint column);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkEntryCompletion GtkEntryCompletion;
typedef struct _GtkEntryCompletionClass GtkEntryCompletionClass;
typedef struct _GtkEntryCompletionPrivate GtkEntryCompletionPrivate;
typedef gboolean (* GtkEntryCompletionMatchFunc) (GtkEntryCompletion *completion,
                                                  const gchar *key,
                                                  GtkTreeIter *iter,
                                                  gpointer user_data);
struct _GtkEntryCompletion
{
  GObject parent_instance;
  GtkEntryCompletionPrivate *priv;
};
struct _GtkEntryCompletionClass
{
  GObjectClass parent_class;
  gboolean (* match_selected) (GtkEntryCompletion *completion,
                                 GtkTreeModel *model,
                                 GtkTreeIter *iter);
  void (* action_activated) (GtkEntryCompletion *completion,
                                 gint index_);
  gboolean (* insert_prefix) (GtkEntryCompletion *completion,
                                 const gchar *prefix);
  gboolean (* cursor_on_match) (GtkEntryCompletion *completion,
                                 GtkTreeModel *model,
                                 GtkTreeIter *iter);
  void (* no_matches) (GtkEntryCompletion *completion);
  void (*_gtk_reserved0) (void);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
};
typedef struct _GtkImage GtkImage;
typedef struct _GtkImagePrivate GtkImagePrivate;
typedef struct _GtkImageClass GtkImageClass;
typedef enum
{
  GTK_IMAGE_EMPTY,
  GTK_IMAGE_PIXBUF,
  GTK_IMAGE_STOCK,
  GTK_IMAGE_ICON_SET,
  GTK_IMAGE_ANIMATION,
  GTK_IMAGE_ICON_NAME,
  GTK_IMAGE_GICON,
  GTK_IMAGE_SURFACE
} GtkImageType;
struct _GtkImage
{
  GtkMisc misc;
  GtkImagePrivate *priv;
};
struct _GtkImageClass
{
  GtkMiscClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_ENTRY_ICON_PRIMARY,
  GTK_ENTRY_ICON_SECONDARY
} GtkEntryIconPosition;
typedef struct _GtkEntry GtkEntry;
typedef struct _GtkEntryPrivate GtkEntryPrivate;
typedef struct _GtkEntryClass GtkEntryClass;
struct _GtkEntry
{
  GtkWidget parent_instance;
  GtkEntryPrivate *priv;
};
struct _GtkEntryClass
{
  GtkWidgetClass parent_class;
  void (* populate_popup) (GtkEntry *entry,
                             GtkWidget *popup);
  void (* activate) (GtkEntry *entry);
  void (* move_cursor) (GtkEntry *entry,
          GtkMovementStep step,
          gint count,
          gboolean extend_selection);
  void (* insert_at_cursor) (GtkEntry *entry,
          const gchar *str);
  void (* delete_from_cursor) (GtkEntry *entry,
          GtkDeleteType type,
          gint count);
  void (* backspace) (GtkEntry *entry);
  void (* cut_clipboard) (GtkEntry *entry);
  void (* copy_clipboard) (GtkEntry *entry);
  void (* paste_clipboard) (GtkEntry *entry);
  void (* toggle_overwrite) (GtkEntry *entry);
  void (* get_text_area_size) (GtkEntry *entry,
          gint *x,
          gint *y,
          gint *width,
          gint *height);
  void (* get_frame_size) (GtkEntry *entry,
                               gint *x,
                               gint *y,
          gint *width,
          gint *height);
  void (* insert_emoji) (GtkEntry *entry);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
};
typedef enum
{
  GTK_TREE_VIEW_DROP_BEFORE,
  GTK_TREE_VIEW_DROP_AFTER,
  GTK_TREE_VIEW_DROP_INTO_OR_BEFORE,
  GTK_TREE_VIEW_DROP_INTO_OR_AFTER
} GtkTreeViewDropPosition;
typedef struct _GtkTreeView GtkTreeView;
typedef struct _GtkTreeViewClass GtkTreeViewClass;
typedef struct _GtkTreeViewPrivate GtkTreeViewPrivate;
typedef struct _GtkTreeSelection GtkTreeSelection;
typedef struct _GtkTreeSelectionClass GtkTreeSelectionClass;
struct _GtkTreeView
{
  GtkContainer parent;
  GtkTreeViewPrivate *priv;
};
struct _GtkTreeViewClass
{
  GtkContainerClass parent_class;
  void (* row_activated) (GtkTreeView *tree_view,
               GtkTreePath *path,
        GtkTreeViewColumn *column);
  gboolean (* test_expand_row) (GtkTreeView *tree_view,
               GtkTreeIter *iter,
               GtkTreePath *path);
  gboolean (* test_collapse_row) (GtkTreeView *tree_view,
               GtkTreeIter *iter,
               GtkTreePath *path);
  void (* row_expanded) (GtkTreeView *tree_view,
               GtkTreeIter *iter,
               GtkTreePath *path);
  void (* row_collapsed) (GtkTreeView *tree_view,
               GtkTreeIter *iter,
               GtkTreePath *path);
  void (* columns_changed) (GtkTreeView *tree_view);
  void (* cursor_changed) (GtkTreeView *tree_view);
  gboolean (* move_cursor) (GtkTreeView *tree_view,
               GtkMovementStep step,
               gint count);
  gboolean (* select_all) (GtkTreeView *tree_view);
  gboolean (* unselect_all) (GtkTreeView *tree_view);
  gboolean (* select_cursor_row) (GtkTreeView *tree_view,
        gboolean start_editing);
  gboolean (* toggle_cursor_row) (GtkTreeView *tree_view);
  gboolean (* expand_collapse_cursor_row) (GtkTreeView *tree_view,
        gboolean logical,
        gboolean expand,
        gboolean open_all);
  gboolean (* select_cursor_parent) (GtkTreeView *tree_view);
  gboolean (* start_interactive_search) (GtkTreeView *tree_view);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef gboolean (* GtkTreeViewColumnDropFunc) (GtkTreeView *tree_view,
      GtkTreeViewColumn *column,
      GtkTreeViewColumn *prev_column,
      GtkTreeViewColumn *next_column,
      gpointer data);
typedef void (* GtkTreeViewMappingFunc) (GtkTreeView *tree_view,
      GtkTreePath *path,
      gpointer user_data);
typedef gboolean (*GtkTreeViewSearchEqualFunc) (GtkTreeModel *model,
      gint column,
      const gchar *key,
      GtkTreeIter *iter,
      gpointer search_data);
typedef gboolean (*GtkTreeViewRowSeparatorFunc) (GtkTreeModel *model,
       GtkTreeIter *iter,
       gpointer data);
typedef void (*GtkTreeViewSearchPositionFunc) (GtkTreeView *tree_view,
         GtkWidget *search_dialog,
         gpointer user_data);
typedef void (* GtkTreeDestroyCountFunc) (GtkTreeView *tree_view,
        GtkTreePath *path,
        gint children,
        gpointer user_data);
typedef struct _GtkComboBox GtkComboBox;
typedef struct _GtkComboBoxClass GtkComboBoxClass;
typedef struct _GtkComboBoxPrivate GtkComboBoxPrivate;
struct _GtkComboBox
{
  GtkBin parent_instance;
  GtkComboBoxPrivate *priv;
};
struct _GtkComboBoxClass
{
  GtkBinClass parent_class;
  void (* changed) (GtkComboBox *combo_box);
  gchar *(* format_entry_text) (GtkComboBox *combo_box,
                                  const gchar *path);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
};
typedef struct _GtkAppChooserButton GtkAppChooserButton;
typedef struct _GtkAppChooserButtonClass GtkAppChooserButtonClass;
typedef struct _GtkAppChooserButtonPrivate GtkAppChooserButtonPrivate;
struct _GtkAppChooserButton {
  GtkComboBox parent;
  GtkAppChooserButtonPrivate *priv;
};
struct _GtkAppChooserButtonClass {
  GtkComboBoxClass parent_class;
  void (* custom_item_activated) (GtkAppChooserButton *self,
                                  const gchar *item_name);
  gpointer padding[16];
};
typedef struct _GtkShortcutsWindow GtkShortcutsWindow;
typedef struct _GtkShortcutsWindowClass GtkShortcutsWindowClass;
struct _GtkShortcutsWindow
{
  GtkWindow window;
};
struct _GtkShortcutsWindowClass
{
  GtkWindowClass parent_class;
  void (*close) (GtkShortcutsWindow *self);
  void (*search) (GtkShortcutsWindow *self);
};
typedef GtkShortcutsWindow *GtkShortcutsWindow_autoptr; typedef GList *GtkShortcutsWindow_listautoptr; typedef GSList *GtkShortcutsWindow_slistautoptr; typedef GQueue *GtkShortcutsWindow_queueautoptr;
 
typedef struct _GtkApplicationWindowPrivate GtkApplicationWindowPrivate;
typedef struct _GtkApplicationWindowClass GtkApplicationWindowClass;
typedef struct _GtkApplicationWindow GtkApplicationWindow;
struct _GtkApplicationWindow
{
  GtkWindow parent_instance;
  GtkApplicationWindowPrivate *priv;
};
struct _GtkApplicationWindowClass
{
  GtkWindowClass parent_class;
  gpointer padding[14];
};
typedef struct _GtkFrame GtkFrame;
typedef struct _GtkFramePrivate GtkFramePrivate;
typedef struct _GtkFrameClass GtkFrameClass;
struct _GtkFrame
{
  GtkBin bin;
  GtkFramePrivate *priv;
};
struct _GtkFrameClass
{
  GtkBinClass parent_class;
  void (*compute_child_allocation) (GtkFrame *frame,
                                    GtkAllocation *allocation);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkAspectFrame GtkAspectFrame;
typedef struct _GtkAspectFramePrivate GtkAspectFramePrivate;
typedef struct _GtkAspectFrameClass GtkAspectFrameClass;
struct _GtkAspectFrame
{
  GtkFrame frame;
  GtkAspectFramePrivate *priv;
};
struct _GtkAspectFrameClass
{
  GtkFrameClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_ASSISTANT_PAGE_CONTENT,
  GTK_ASSISTANT_PAGE_INTRO,
  GTK_ASSISTANT_PAGE_CONFIRM,
  GTK_ASSISTANT_PAGE_SUMMARY,
  GTK_ASSISTANT_PAGE_PROGRESS,
  GTK_ASSISTANT_PAGE_CUSTOM
} GtkAssistantPageType;
typedef struct _GtkAssistant GtkAssistant;
typedef struct _GtkAssistantPrivate GtkAssistantPrivate;
typedef struct _GtkAssistantClass GtkAssistantClass;
struct _GtkAssistant
{
  GtkWindow parent;
  GtkAssistantPrivate *priv;
};
struct _GtkAssistantClass
{
  GtkWindowClass parent_class;
  void (* prepare) (GtkAssistant *assistant, GtkWidget *page);
  void (* apply) (GtkAssistant *assistant);
  void (* close) (GtkAssistant *assistant);
  void (* cancel) (GtkAssistant *assistant);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
};
typedef gint (*GtkAssistantPageFunc) (gint current_page, gpointer data);
typedef struct _GtkButtonBox GtkButtonBox;
typedef struct _GtkButtonBoxPrivate GtkButtonBoxPrivate;
typedef struct _GtkButtonBoxClass GtkButtonBoxClass;
struct _GtkButtonBox
{
  GtkBox box;
  GtkButtonBoxPrivate *priv;
};
struct _GtkButtonBoxClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_BUTTONBOX_SPREAD = 1,
  GTK_BUTTONBOX_EDGE,
  GTK_BUTTONBOX_START,
  GTK_BUTTONBOX_END,
  GTK_BUTTONBOX_CENTER,
  GTK_BUTTONBOX_EXPAND
} GtkButtonBoxStyle;
typedef struct _GtkBindingSet GtkBindingSet;
typedef struct _GtkBindingEntry GtkBindingEntry;
typedef struct _GtkBindingSignal GtkBindingSignal;
typedef struct _GtkBindingArg GtkBindingArg;
struct _GtkBindingSet
{
  gchar *set_name;
  gint priority;
  GSList *widget_path_pspecs;
  GSList *widget_class_pspecs;
  GSList *class_branch_pspecs;
  GtkBindingEntry *entries;
  GtkBindingEntry *current;
  guint parsed : 1;
};
struct _GtkBindingEntry
{
  guint keyval;
  GdkModifierType modifiers;
  GtkBindingSet *binding_set;
  guint destroyed : 1;
  guint in_emission : 1;
  guint marks_unbound : 1;
  GtkBindingEntry *set_next;
  GtkBindingEntry *hash_next;
  GtkBindingSignal *signals;
};
struct _GtkBindingArg
{
  GType arg_type;
  union {
    glong long_data;
    gdouble double_data;
    gchar *string_data;
  } d;
};
struct _GtkBindingSignal
{
  GtkBindingSignal *next;
  gchar *signal_name;
  guint n_args;
  GtkBindingArg *args;
};
typedef struct _GtkBuilderClass GtkBuilderClass;
typedef struct _GtkBuilderPrivate GtkBuilderPrivate;
typedef enum
{
  GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION,
  GTK_BUILDER_ERROR_UNHANDLED_TAG,
  GTK_BUILDER_ERROR_MISSING_ATTRIBUTE,
  GTK_BUILDER_ERROR_INVALID_ATTRIBUTE,
  GTK_BUILDER_ERROR_INVALID_TAG,
  GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE,
  GTK_BUILDER_ERROR_INVALID_VALUE,
  GTK_BUILDER_ERROR_VERSION_MISMATCH,
  GTK_BUILDER_ERROR_DUPLICATE_ID,
  GTK_BUILDER_ERROR_OBJECT_TYPE_REFUSED,
  GTK_BUILDER_ERROR_TEMPLATE_MISMATCH,
  GTK_BUILDER_ERROR_INVALID_PROPERTY,
  GTK_BUILDER_ERROR_INVALID_SIGNAL,
  GTK_BUILDER_ERROR_INVALID_ID
} GtkBuilderError;
struct _GtkBuilder
{
  GObject parent_instance;
  GtkBuilderPrivate *priv;
};
struct _GtkBuilderClass
{
  GObjectClass parent_class;
  GType (* get_type_from_name) (GtkBuilder *builder,
                                const char *type_name);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkBuildable GtkBuildable;
typedef struct _GtkBuildableIface GtkBuildableIface;
struct _GtkBuildableIface
{
  GTypeInterface g_iface;
  void (* set_name) (GtkBuildable *buildable,
                                            const gchar *name);
  const gchar * (* get_name) (GtkBuildable *buildable);
  void (* add_child) (GtkBuildable *buildable,
         GtkBuilder *builder,
         GObject *child,
         const gchar *type);
  void (* set_buildable_property) (GtkBuildable *buildable,
         GtkBuilder *builder,
         const gchar *name,
         const GValue *value);
  GObject * (* construct_child) (GtkBuildable *buildable,
         GtkBuilder *builder,
         const gchar *name);
  gboolean (* custom_tag_start) (GtkBuildable *buildable,
         GtkBuilder *builder,
         GObject *child,
         const gchar *tagname,
         GMarkupParser *parser,
         gpointer *data);
  void (* custom_tag_end) (GtkBuildable *buildable,
         GtkBuilder *builder,
         GObject *child,
         const gchar *tagname,
         gpointer *data);
  void (* custom_finished) (GtkBuildable *buildable,
         GtkBuilder *builder,
         GObject *child,
         const gchar *tagname,
         gpointer data);
  void (* parser_finished) (GtkBuildable *buildable,
         GtkBuilder *builder);
  GObject * (* get_internal_child) (GtkBuildable *buildable,
         GtkBuilder *builder,
         const gchar *childname);
};
typedef struct _GtkButton GtkButton;
typedef struct _GtkButtonPrivate GtkButtonPrivate;
typedef struct _GtkButtonClass GtkButtonClass;
struct _GtkButton
{
  GtkBin bin;
  GtkButtonPrivate *priv;
};
struct _GtkButtonClass
{
  GtkBinClass parent_class;
  void (* pressed) (GtkButton *button);
  void (* released) (GtkButton *button);
  void (* clicked) (GtkButton *button);
  void (* enter) (GtkButton *button);
  void (* leave) (GtkButton *button);
  void (* activate) (GtkButton *button);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCalendar GtkCalendar;
typedef struct _GtkCalendarClass GtkCalendarClass;
typedef struct _GtkCalendarPrivate GtkCalendarPrivate;
typedef enum
{
  GTK_CALENDAR_SHOW_HEADING = 1 << 0,
  GTK_CALENDAR_SHOW_DAY_NAMES = 1 << 1,
  GTK_CALENDAR_NO_MONTH_CHANGE = 1 << 2,
  GTK_CALENDAR_SHOW_WEEK_NUMBERS = 1 << 3,
  GTK_CALENDAR_SHOW_DETAILS = 1 << 5
} GtkCalendarDisplayOptions;
typedef gchar* (*GtkCalendarDetailFunc) (GtkCalendar *calendar,
                                         guint year,
                                         guint month,
                                         guint day,
                                         gpointer user_data);
struct _GtkCalendar
{
  GtkWidget widget;
  GtkCalendarPrivate *priv;
};
struct _GtkCalendarClass
{
  GtkWidgetClass parent_class;
  void (* month_changed) (GtkCalendar *calendar);
  void (* day_selected) (GtkCalendar *calendar);
  void (* day_selected_double_click) (GtkCalendar *calendar);
  void (* prev_month) (GtkCalendar *calendar);
  void (* next_month) (GtkCalendar *calendar);
  void (* prev_year) (GtkCalendar *calendar);
  void (* next_year) (GtkCalendar *calendar);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellAreaBox GtkCellAreaBox;
typedef struct _GtkCellAreaBoxClass GtkCellAreaBoxClass;
typedef struct _GtkCellAreaBoxPrivate GtkCellAreaBoxPrivate;
struct _GtkCellAreaBox
{
  GtkCellArea parent_instance;
  GtkCellAreaBoxPrivate *priv;
};
struct _GtkCellAreaBoxClass
{
  GtkCellAreaClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkCellAreaContextPrivate GtkCellAreaContextPrivate;
typedef struct _GtkCellAreaContextClass GtkCellAreaContextClass;
struct _GtkCellAreaContext
{
  GObject parent_instance;
  GtkCellAreaContextPrivate *priv;
};
struct _GtkCellAreaContextClass
{
  GObjectClass parent_class;
  void (* allocate) (GtkCellAreaContext *context,
                                              gint width,
                                              gint height);
  void (* reset) (GtkCellAreaContext *context);
  void (* get_preferred_height_for_width) (GtkCellAreaContext *context,
                                              gint width,
                                              gint *minimum_height,
                                              gint *natural_height);
  void (* get_preferred_width_for_height) (GtkCellAreaContext *context,
                                              gint height,
                                              gint *minimum_width,
                                              gint *natural_width);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
};
typedef struct _GtkCellLayout GtkCellLayout;
typedef struct _GtkCellLayoutIface GtkCellLayoutIface;
typedef void (* GtkCellLayoutDataFunc) (GtkCellLayout *cell_layout,
                                        GtkCellRenderer *cell,
                                        GtkTreeModel *tree_model,
                                        GtkTreeIter *iter,
                                        gpointer data);
struct _GtkCellLayoutIface
{
  GTypeInterface g_iface;
  void (* pack_start) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell,
                               gboolean expand);
  void (* pack_end) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell,
                               gboolean expand);
  void (* clear) (GtkCellLayout *cell_layout);
  void (* add_attribute) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell,
                               const gchar *attribute,
                               gint column);
  void (* set_cell_data_func) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell,
                               GtkCellLayoutDataFunc func,
                               gpointer func_data,
                               GDestroyNotify destroy);
  void (* clear_attributes) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell);
  void (* reorder) (GtkCellLayout *cell_layout,
                               GtkCellRenderer *cell,
                               gint position);
  GList* (* get_cells) (GtkCellLayout *cell_layout);
  GtkCellArea *(* get_area) (GtkCellLayout *cell_layout);
};

typedef struct _GtkCellRendererText GtkCellRendererText;
typedef struct _GtkCellRendererTextPrivate GtkCellRendererTextPrivate;
typedef struct _GtkCellRendererTextClass GtkCellRendererTextClass;
struct _GtkCellRendererText
{
  GtkCellRenderer parent;
  GtkCellRendererTextPrivate *priv;
};
struct _GtkCellRendererTextClass
{
  GtkCellRendererClass parent_class;
  void (* edited) (GtkCellRendererText *cell_renderer_text,
     const gchar *path,
     const gchar *new_text);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererAccel GtkCellRendererAccel;
typedef struct _GtkCellRendererAccelPrivate GtkCellRendererAccelPrivate;
typedef struct _GtkCellRendererAccelClass GtkCellRendererAccelClass;
typedef enum
{
  GTK_CELL_RENDERER_ACCEL_MODE_GTK,
  GTK_CELL_RENDERER_ACCEL_MODE_OTHER
} GtkCellRendererAccelMode;
struct _GtkCellRendererAccel
{
  GtkCellRendererText parent;
  GtkCellRendererAccelPrivate *priv;
};
struct _GtkCellRendererAccelClass
{
  GtkCellRendererTextClass parent_class;
  void (* accel_edited) (GtkCellRendererAccel *accel,
      const gchar *path_string,
     guint accel_key,
     GdkModifierType accel_mods,
     guint hardware_keycode);
  void (* accel_cleared) (GtkCellRendererAccel *accel,
     const gchar *path_string);
  void (*_gtk_reserved0) (void);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererCombo GtkCellRendererCombo;
typedef struct _GtkCellRendererComboPrivate GtkCellRendererComboPrivate;
typedef struct _GtkCellRendererComboClass GtkCellRendererComboClass;
struct _GtkCellRendererCombo
{
  GtkCellRendererText parent;
  GtkCellRendererComboPrivate *priv;
};
struct _GtkCellRendererComboClass
{
  GtkCellRendererTextClass parent;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererPixbuf GtkCellRendererPixbuf;
typedef struct _GtkCellRendererPixbufPrivate GtkCellRendererPixbufPrivate;
typedef struct _GtkCellRendererPixbufClass GtkCellRendererPixbufClass;
struct _GtkCellRendererPixbuf
{
  GtkCellRenderer parent;
  GtkCellRendererPixbufPrivate *priv;
};
struct _GtkCellRendererPixbufClass
{
  GtkCellRendererClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererProgress GtkCellRendererProgress;
typedef struct _GtkCellRendererProgressClass GtkCellRendererProgressClass;
typedef struct _GtkCellRendererProgressPrivate GtkCellRendererProgressPrivate;
struct _GtkCellRendererProgress
{
  GtkCellRenderer parent_instance;
  GtkCellRendererProgressPrivate *priv;
};
struct _GtkCellRendererProgressClass
{
  GtkCellRendererClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererSpin GtkCellRendererSpin;
typedef struct _GtkCellRendererSpinClass GtkCellRendererSpinClass;
typedef struct _GtkCellRendererSpinPrivate GtkCellRendererSpinPrivate;
struct _GtkCellRendererSpin
{
  GtkCellRendererText parent;
  GtkCellRendererSpinPrivate *priv;
};
struct _GtkCellRendererSpinClass
{
  GtkCellRendererTextClass parent;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererSpinner GtkCellRendererSpinner;
typedef struct _GtkCellRendererSpinnerClass GtkCellRendererSpinnerClass;
typedef struct _GtkCellRendererSpinnerPrivate GtkCellRendererSpinnerPrivate;
struct _GtkCellRendererSpinner
{
  GtkCellRenderer parent;
  GtkCellRendererSpinnerPrivate *priv;
};
struct _GtkCellRendererSpinnerClass
{
  GtkCellRendererClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererToggle GtkCellRendererToggle;
typedef struct _GtkCellRendererTogglePrivate GtkCellRendererTogglePrivate;
typedef struct _GtkCellRendererToggleClass GtkCellRendererToggleClass;
struct _GtkCellRendererToggle
{
  GtkCellRenderer parent;
  GtkCellRendererTogglePrivate *priv;
};
struct _GtkCellRendererToggleClass
{
  GtkCellRendererClass parent_class;
  void (* toggled) (GtkCellRendererToggle *cell_renderer_toggle,
      const gchar *path);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellView GtkCellView;
typedef struct _GtkCellViewClass GtkCellViewClass;
typedef struct _GtkCellViewPrivate GtkCellViewPrivate;
struct _GtkCellView
{
  GtkWidget parent_instance;
  GtkCellViewPrivate *priv;
};
struct _GtkCellViewClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToggleButton GtkToggleButton;
typedef struct _GtkToggleButtonPrivate GtkToggleButtonPrivate;
typedef struct _GtkToggleButtonClass GtkToggleButtonClass;
struct _GtkToggleButton
{
  GtkButton button;
  GtkToggleButtonPrivate *priv;
};
struct _GtkToggleButtonClass
{
  GtkButtonClass parent_class;
  void (* toggled) (GtkToggleButton *toggle_button);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCheckButton GtkCheckButton;
typedef struct _GtkCheckButtonClass GtkCheckButtonClass;
struct _GtkCheckButton
{
  GtkToggleButton toggle_button;
};
struct _GtkCheckButtonClass
{
  GtkToggleButtonClass parent_class;
  void (* draw_indicator) (GtkCheckButton *check_button,
      cairo_t *cr);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkMenuItem GtkMenuItem;
typedef struct _GtkMenuItemClass GtkMenuItemClass;
typedef struct _GtkMenuItemPrivate GtkMenuItemPrivate;
struct _GtkMenuItem
{
  GtkBin bin;
  GtkMenuItemPrivate *priv;
};
struct _GtkMenuItemClass
{
  GtkBinClass parent_class;
  guint hide_on_activate : 1;
  void (* activate) (GtkMenuItem *menu_item);
  void (* activate_item) (GtkMenuItem *menu_item);
  void (* toggle_size_request) (GtkMenuItem *menu_item,
                                 gint *requisition);
  void (* toggle_size_allocate) (GtkMenuItem *menu_item,
                                 gint allocation);
  void (* set_label) (GtkMenuItem *menu_item,
                                 const gchar *label);
  const gchar * (* get_label) (GtkMenuItem *menu_item);
  void (* select) (GtkMenuItem *menu_item);
  void (* deselect) (GtkMenuItem *menu_item);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkCheckMenuItem GtkCheckMenuItem;
typedef struct _GtkCheckMenuItemPrivate GtkCheckMenuItemPrivate;
typedef struct _GtkCheckMenuItemClass GtkCheckMenuItemClass;
struct _GtkCheckMenuItem
{
  GtkMenuItem menu_item;
  GtkCheckMenuItemPrivate *priv;
};
struct _GtkCheckMenuItemClass
{
  GtkMenuItemClass parent_class;
  void (* toggled) (GtkCheckMenuItem *check_menu_item);
  void (* draw_indicator) (GtkCheckMenuItem *check_menu_item,
      cairo_t *cr);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef void (* GtkClipboardReceivedFunc) (GtkClipboard *clipboard,
                GtkSelectionData *selection_data,
                gpointer data);
typedef void (* GtkClipboardTextReceivedFunc) (GtkClipboard *clipboard,
                const gchar *text,
                gpointer data);
typedef void (* GtkClipboardRichTextReceivedFunc) (GtkClipboard *clipboard,
                                                   GdkAtom format,
                const guint8 *text,
                                                   gsize length,
                gpointer data);
typedef void (* GtkClipboardImageReceivedFunc) (GtkClipboard *clipboard,
         GdkPixbuf *pixbuf,
         gpointer data);
typedef void (* GtkClipboardURIReceivedFunc) (GtkClipboard *clipboard,
         gchar **uris,
         gpointer data);
typedef void (* GtkClipboardTargetsReceivedFunc) (GtkClipboard *clipboard,
                GdkAtom *atoms,
         gint n_atoms,
                gpointer data);
typedef void (* GtkClipboardGetFunc) (GtkClipboard *clipboard,
            GtkSelectionData *selection_data,
            guint info,
            gpointer user_data_or_owner);
typedef void (* GtkClipboardClearFunc) (GtkClipboard *clipboard,
            gpointer user_data_or_owner);
typedef struct _GtkColorButton GtkColorButton;
typedef struct _GtkColorButtonClass GtkColorButtonClass;
typedef struct _GtkColorButtonPrivate GtkColorButtonPrivate;
struct _GtkColorButton {
  GtkButton button;
  GtkColorButtonPrivate *priv;
};
struct _GtkColorButtonClass {
  GtkButtonClass parent_class;
  void (* color_set) (GtkColorButton *cp);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorChooser GtkColorChooser;
typedef struct _GtkColorChooserInterface GtkColorChooserInterface;
struct _GtkColorChooserInterface
{
  GTypeInterface base_interface;
  void (* get_rgba) (GtkColorChooser *chooser,
                        GdkRGBA *color);
  void (* set_rgba) (GtkColorChooser *chooser,
                        const GdkRGBA *color);
  void (* add_palette) (GtkColorChooser *chooser,
                        GtkOrientation orientation,
                        gint colors_per_line,
                        gint n_colors,
                        GdkRGBA *colors);
  void (* color_activated) (GtkColorChooser *chooser,
                            const GdkRGBA *color);
  gpointer padding[12];
};
typedef struct _GtkColorChooserDialog GtkColorChooserDialog;
typedef struct _GtkColorChooserDialogPrivate GtkColorChooserDialogPrivate;
typedef struct _GtkColorChooserDialogClass GtkColorChooserDialogClass;
struct _GtkColorChooserDialog
{
  GtkDialog parent_instance;
  GtkColorChooserDialogPrivate *priv;
};
struct _GtkColorChooserDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorChooserWidget GtkColorChooserWidget;
typedef struct _GtkColorChooserWidgetPrivate GtkColorChooserWidgetPrivate;
typedef struct _GtkColorChooserWidgetClass GtkColorChooserWidgetClass;
struct _GtkColorChooserWidget
{
  GtkBox parent_instance;
  GtkColorChooserWidgetPrivate *priv;
};
struct _GtkColorChooserWidgetClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkComboBoxText GtkComboBoxText;
typedef struct _GtkComboBoxTextPrivate GtkComboBoxTextPrivate;
typedef struct _GtkComboBoxTextClass GtkComboBoxTextClass;
struct _GtkComboBoxText
{
  GtkComboBox parent_instance;
  GtkComboBoxTextPrivate *priv;
};
struct _GtkComboBoxTextClass
{
  GtkComboBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_CSS_SECTION_DOCUMENT,
  GTK_CSS_SECTION_IMPORT,
  GTK_CSS_SECTION_COLOR_DEFINITION,
  GTK_CSS_SECTION_BINDING_SET,
  GTK_CSS_SECTION_RULESET,
  GTK_CSS_SECTION_SELECTOR,
  GTK_CSS_SECTION_DECLARATION,
  GTK_CSS_SECTION_VALUE,
  GTK_CSS_SECTION_KEYFRAMES
} GtkCssSectionType;
typedef struct _GtkCssSection GtkCssSection;
typedef enum
{
  GTK_CSS_PROVIDER_ERROR_FAILED,
  GTK_CSS_PROVIDER_ERROR_SYNTAX,
  GTK_CSS_PROVIDER_ERROR_IMPORT,
  GTK_CSS_PROVIDER_ERROR_NAME,
  GTK_CSS_PROVIDER_ERROR_DEPRECATED,
  GTK_CSS_PROVIDER_ERROR_UNKNOWN_VALUE
} GtkCssProviderError;
typedef struct _GtkCssProvider GtkCssProvider;
typedef struct _GtkCssProviderClass GtkCssProviderClass;
typedef struct _GtkCssProviderPrivate GtkCssProviderPrivate;
struct _GtkCssProvider
{
  GObject parent_instance;
  GtkCssProviderPrivate *priv;
};
struct _GtkCssProviderClass
{
  GObjectClass parent_class;
  void (* parsing_error) (GtkCssProvider *provider,
                                                 GtkCssSection *section,
                                                 const GError * error);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum {
  GTK_DEBUG_MISC = 1 << 0,
  GTK_DEBUG_PLUGSOCKET = 1 << 1,
  GTK_DEBUG_TEXT = 1 << 2,
  GTK_DEBUG_TREE = 1 << 3,
  GTK_DEBUG_UPDATES = 1 << 4,
  GTK_DEBUG_KEYBINDINGS = 1 << 5,
  GTK_DEBUG_MULTIHEAD = 1 << 6,
  GTK_DEBUG_MODULES = 1 << 7,
  GTK_DEBUG_GEOMETRY = 1 << 8,
  GTK_DEBUG_ICONTHEME = 1 << 9,
  GTK_DEBUG_PRINTING = 1 << 10,
  GTK_DEBUG_BUILDER = 1 << 11,
  GTK_DEBUG_SIZE_REQUEST = 1 << 12,
  GTK_DEBUG_NO_CSS_CACHE = 1 << 13,
  GTK_DEBUG_BASELINES = 1 << 14,
  GTK_DEBUG_PIXEL_CACHE = 1 << 15,
  GTK_DEBUG_NO_PIXEL_CACHE = 1 << 16,
  GTK_DEBUG_INTERACTIVE = 1 << 17,
  GTK_DEBUG_TOUCHSCREEN = 1 << 18,
  GTK_DEBUG_ACTIONS = 1 << 19,
  GTK_DEBUG_RESIZE = 1 << 20,
  GTK_DEBUG_LAYOUT = 1 << 21
} GtkDebugFlag;
typedef enum {
  GTK_DEST_DEFAULT_MOTION = 1 << 0,
  GTK_DEST_DEFAULT_HIGHLIGHT = 1 << 1,
  GTK_DEST_DEFAULT_DROP = 1 << 2,
  GTK_DEST_DEFAULT_ALL = 0x07
} GtkDestDefaults;
typedef struct _GtkDrawingArea GtkDrawingArea;
typedef struct _GtkDrawingAreaClass GtkDrawingAreaClass;
struct _GtkDrawingArea
{
  GtkWidget widget;
  gpointer dummy;
};
struct _GtkDrawingAreaClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkEventBox GtkEventBox;
typedef struct _GtkEventBoxClass GtkEventBoxClass;
typedef struct _GtkEventBoxPrivate GtkEventBoxPrivate;
struct _GtkEventBox
{
  GtkBin bin;
  GtkEventBoxPrivate *priv;
};
struct _GtkEventBoxClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkEventController GtkEventController;
typedef struct _GtkEventControllerClass GtkEventControllerClass;
typedef struct _GtkEventControllerKey GtkEventControllerKey;
typedef struct _GtkEventControllerKeyClass GtkEventControllerKeyClass;
typedef struct _GtkEventControllerMotion GtkEventControllerMotion;
typedef struct _GtkEventControllerMotionClass GtkEventControllerMotionClass;
typedef struct _GtkEventControllerScroll GtkEventControllerScroll;
typedef struct _GtkEventControllerScrollClass GtkEventControllerScrollClass;
typedef enum {
  GTK_EVENT_CONTROLLER_SCROLL_NONE = 0,
  GTK_EVENT_CONTROLLER_SCROLL_VERTICAL = 1 << 0,
  GTK_EVENT_CONTROLLER_SCROLL_HORIZONTAL = 1 << 1,
  GTK_EVENT_CONTROLLER_SCROLL_DISCRETE = 1 << 2,
  GTK_EVENT_CONTROLLER_SCROLL_KINETIC = 1 << 3,
  GTK_EVENT_CONTROLLER_SCROLL_BOTH_AXES = (GTK_EVENT_CONTROLLER_SCROLL_VERTICAL | GTK_EVENT_CONTROLLER_SCROLL_HORIZONTAL),
} GtkEventControllerScrollFlags;
typedef struct _GtkExpander GtkExpander;
typedef struct _GtkExpanderClass GtkExpanderClass;
typedef struct _GtkExpanderPrivate GtkExpanderPrivate;
struct _GtkExpander
{
  GtkBin bin;
  GtkExpanderPrivate *priv;
};
struct _GtkExpanderClass
{
  GtkBinClass parent_class;
  void (* activate) (GtkExpander *expander);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkFixed GtkFixed;
typedef struct _GtkFixedPrivate GtkFixedPrivate;
typedef struct _GtkFixedClass GtkFixedClass;
typedef struct _GtkFixedChild GtkFixedChild;
struct _GtkFixed
{
  GtkContainer container;
  GtkFixedPrivate *priv;
};
struct _GtkFixedClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkFixedChild
{
  GtkWidget *widget;
  gint x;
  gint y;
};
typedef struct _GtkFileFilter GtkFileFilter;
typedef struct _GtkFileFilterInfo GtkFileFilterInfo;
typedef enum {
  GTK_FILE_FILTER_FILENAME = 1 << 0,
  GTK_FILE_FILTER_URI = 1 << 1,
  GTK_FILE_FILTER_DISPLAY_NAME = 1 << 2,
  GTK_FILE_FILTER_MIME_TYPE = 1 << 3
} GtkFileFilterFlags;
typedef gboolean (*GtkFileFilterFunc) (const GtkFileFilterInfo *filter_info,
           gpointer data);
struct _GtkFileFilterInfo
{
  GtkFileFilterFlags contains;
  const gchar *filename;
  const gchar *uri;
  const gchar *display_name;
  const gchar *mime_type;
};
typedef struct _GtkFileChooser GtkFileChooser;
typedef enum
{
  GTK_FILE_CHOOSER_ACTION_OPEN,
  GTK_FILE_CHOOSER_ACTION_SAVE,
  GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
  GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER
} GtkFileChooserAction;
typedef enum
{
  GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM,
  GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME,
  GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN
} GtkFileChooserConfirmation;
typedef enum {
  GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
  GTK_FILE_CHOOSER_ERROR_BAD_FILENAME,
  GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS,
  GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME
} GtkFileChooserError;
typedef struct _GtkFileChooserButton GtkFileChooserButton;
typedef struct _GtkFileChooserButtonPrivate GtkFileChooserButtonPrivate;
typedef struct _GtkFileChooserButtonClass GtkFileChooserButtonClass;
struct _GtkFileChooserButton
{
  GtkBox parent;
  GtkFileChooserButtonPrivate *priv;
};
struct _GtkFileChooserButtonClass
{
  GtkBoxClass parent_class;
  void (* file_set) (GtkFileChooserButton *fc);
  void (*__gtk_reserved1) (void);
  void (*__gtk_reserved2) (void);
  void (*__gtk_reserved3) (void);
  void (*__gtk_reserved4) (void);
};
typedef struct _GtkFileChooserDialog GtkFileChooserDialog;
typedef struct _GtkFileChooserDialogPrivate GtkFileChooserDialogPrivate;
typedef struct _GtkFileChooserDialogClass GtkFileChooserDialogClass;
struct _GtkFileChooserDialog
{
  GtkDialog parent_instance;
  GtkFileChooserDialogPrivate *priv;
};
struct _GtkFileChooserDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
 typedef struct _GtkNativeDialog GtkNativeDialog; typedef struct _GtkNativeDialogClass GtkNativeDialogClass; struct _GtkNativeDialog { GObject parent_instance; }; typedef GtkNativeDialog *GtkNativeDialog_autoptr; typedef GList *GtkNativeDialog_listautoptr; typedef GSList *GtkNativeDialog_slistautoptr; typedef GQueue *GtkNativeDialog_queueautoptr;
 
struct _GtkNativeDialogClass
{
  GObjectClass parent_class;
  void (* response) (GtkNativeDialog *self, gint response_id);
  void (* show) (GtkNativeDialog *self);
  void (* hide) (GtkNativeDialog *self);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
 typedef struct _GtkFileChooserNative GtkFileChooserNative; typedef struct { GtkNativeDialogClass parent_class; } GtkFileChooserNativeClass; typedef GtkFileChooserNative *GtkFileChooserNative_autoptr; typedef GList *GtkFileChooserNative_listautoptr; typedef GSList *GtkFileChooserNative_slistautoptr; typedef GQueue *GtkFileChooserNative_queueautoptr;
 

typedef struct _GtkFileChooserWidget GtkFileChooserWidget;
typedef struct _GtkFileChooserWidgetPrivate GtkFileChooserWidgetPrivate;
typedef struct _GtkFileChooserWidgetClass GtkFileChooserWidgetClass;
struct _GtkFileChooserWidget
{
  GtkBox parent_instance;
  GtkFileChooserWidgetPrivate *priv;
};
struct _GtkFileChooserWidgetClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkFlowBox GtkFlowBox;
typedef struct _GtkFlowBoxClass GtkFlowBoxClass;
typedef struct _GtkFlowBoxChild GtkFlowBoxChild;
typedef struct _GtkFlowBoxChildClass GtkFlowBoxChildClass;
struct _GtkFlowBox
{
  GtkContainer container;
};
struct _GtkFlowBoxClass
{
  GtkContainerClass parent_class;
  void (*child_activated) (GtkFlowBox *box,
                                      GtkFlowBoxChild *child);
  void (*selected_children_changed) (GtkFlowBox *box);
  void (*activate_cursor_child) (GtkFlowBox *box);
  void (*toggle_cursor_child) (GtkFlowBox *box);
  gboolean (*move_cursor) (GtkFlowBox *box,
                                      GtkMovementStep step,
                                      gint count);
  void (*select_all) (GtkFlowBox *box);
  void (*unselect_all) (GtkFlowBox *box);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
};
struct _GtkFlowBoxChild
{
  GtkBin parent_instance;
};
struct _GtkFlowBoxChildClass
{
  GtkBinClass parent_class;
  void (* activate) (GtkFlowBoxChild *child);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
};
typedef GtkWidget * (*GtkFlowBoxCreateWidgetFunc) (gpointer item,
                                                   gpointer user_data);
typedef void (* GtkFlowBoxForeachFunc) (GtkFlowBox *box,
                                        GtkFlowBoxChild *child,
                                        gpointer user_data);
typedef gboolean (*GtkFlowBoxFilterFunc) (GtkFlowBoxChild *child,
                                          gpointer user_data);
typedef gint (*GtkFlowBoxSortFunc) (GtkFlowBoxChild *child1,
                                    GtkFlowBoxChild *child2,
                                    gpointer user_data);
typedef struct _GtkFontButton GtkFontButton;
typedef struct _GtkFontButtonClass GtkFontButtonClass;
typedef struct _GtkFontButtonPrivate GtkFontButtonPrivate;
struct _GtkFontButton {
  GtkButton button;
  GtkFontButtonPrivate *priv;
};
struct _GtkFontButtonClass {
  GtkButtonClass parent_class;
  void (* font_set) (GtkFontButton *gfp);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef gboolean (*GtkFontFilterFunc) (const PangoFontFamily *family,
                                       const PangoFontFace *face,
                                       gpointer data);
typedef enum {
  GTK_FONT_CHOOSER_LEVEL_FAMILY = 0,
  GTK_FONT_CHOOSER_LEVEL_STYLE = 1 << 0,
  GTK_FONT_CHOOSER_LEVEL_SIZE = 1 << 1,
  GTK_FONT_CHOOSER_LEVEL_VARIATIONS = 1 << 2,
  GTK_FONT_CHOOSER_LEVEL_FEATURES = 1 << 3
} GtkFontChooserLevel;
typedef struct _GtkFontChooser GtkFontChooser;
typedef struct _GtkFontChooserIface GtkFontChooserIface;
struct _GtkFontChooserIface
{
  GTypeInterface base_iface;
  PangoFontFamily * (* get_font_family) (GtkFontChooser *fontchooser);
  PangoFontFace * (* get_font_face) (GtkFontChooser *fontchooser);
  gint (* get_font_size) (GtkFontChooser *fontchooser);
  void (* set_filter_func) (GtkFontChooser *fontchooser,
                                                 GtkFontFilterFunc filter,
                                                 gpointer user_data,
                                                 GDestroyNotify destroy);
  void (* font_activated) (GtkFontChooser *chooser,
                           const gchar *fontname);
  void (* set_font_map) (GtkFontChooser *fontchooser,
                                                 PangoFontMap *fontmap);
  PangoFontMap * (* get_font_map) (GtkFontChooser *fontchooser);
  gpointer padding[10];
};
typedef struct _GtkFontChooserDialog GtkFontChooserDialog;
typedef struct _GtkFontChooserDialogPrivate GtkFontChooserDialogPrivate;
typedef struct _GtkFontChooserDialogClass GtkFontChooserDialogClass;
struct _GtkFontChooserDialog
{
  GtkDialog parent_instance;
  GtkFontChooserDialogPrivate *priv;
};
struct _GtkFontChooserDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkFontChooserWidget GtkFontChooserWidget;
typedef struct _GtkFontChooserWidgetPrivate GtkFontChooserWidgetPrivate;
typedef struct _GtkFontChooserWidgetClass GtkFontChooserWidgetClass;
struct _GtkFontChooserWidget
{
  GtkBox parent_instance;
  GtkFontChooserWidgetPrivate *priv;
};
struct _GtkFontChooserWidgetClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkGesture GtkGesture;
typedef struct _GtkGestureClass GtkGestureClass;
typedef struct _GtkGestureSingle GtkGestureSingle;
typedef struct _GtkGestureSingleClass GtkGestureSingleClass;
typedef struct _GtkGestureDrag GtkGestureDrag;
typedef struct _GtkGestureDragClass GtkGestureDragClass;
typedef struct _GtkGestureLongPress GtkGestureLongPress;
typedef struct _GtkGestureLongPressClass GtkGestureLongPressClass;
typedef struct _GtkGestureMultiPress GtkGestureMultiPress;
typedef struct _GtkGestureMultiPressClass GtkGestureMultiPressClass;
typedef struct _GtkGesturePan GtkGesturePan;
typedef struct _GtkGesturePanClass GtkGesturePanClass;
typedef struct _GtkGestureRotate GtkGestureRotate;
typedef struct _GtkGestureRotateClass GtkGestureRotateClass;
typedef struct _GtkGestureStylus GtkGestureStylus;
typedef struct _GtkGestureStylusClass GtkGestureStylusClass;
typedef struct _GtkGestureSwipe GtkGestureSwipe;
typedef struct _GtkGestureSwipeClass GtkGestureSwipeClass;
typedef struct _GtkGestureZoom GtkGestureZoom;
typedef struct _GtkGestureZoomClass GtkGestureZoomClass;
typedef struct _GtkGLArea GtkGLArea;
typedef struct _GtkGLAreaClass GtkGLAreaClass;
struct _GtkGLArea
{
  GtkWidget parent_instance;
};
struct _GtkGLAreaClass
{
  GtkWidgetClass parent_class;
  gboolean (* render) (GtkGLArea *area,
                                     GdkGLContext *context);
  void (* resize) (GtkGLArea *area,
                                     int width,
                                     int height);
  GdkGLContext * (* create_context) (GtkGLArea *area);
  gpointer _padding[6];
};
typedef struct _GtkGrid GtkGrid;
typedef struct _GtkGridPrivate GtkGridPrivate;
typedef struct _GtkGridClass GtkGridClass;
struct _GtkGrid
{
  GtkContainer container;
  GtkGridPrivate *priv;
};
struct _GtkGridClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkHeaderBar GtkHeaderBar;
typedef struct _GtkHeaderBarPrivate GtkHeaderBarPrivate;
typedef struct _GtkHeaderBarClass GtkHeaderBarClass;
struct _GtkHeaderBar
{
  GtkContainer container;
};
struct _GtkHeaderBarClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkIconFactory GtkIconFactory;
typedef struct _GtkIconFactoryPrivate GtkIconFactoryPrivate;
typedef struct _GtkIconFactoryClass GtkIconFactoryClass;
struct _GtkIconFactory
{
  GObject parent_instance;
  GtkIconFactoryPrivate *priv;
};
struct _GtkIconFactoryClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkStyleProperties GtkStyleProperties;
typedef struct _GtkStylePropertiesClass GtkStylePropertiesClass;
typedef struct _GtkStylePropertiesPrivate GtkStylePropertiesPrivate;
typedef struct _GtkSymbolicColor GtkSymbolicColor;
typedef struct _GtkGradient GtkGradient;
struct _GtkStyleProperties
{
  GObject parent_object;
  GtkStylePropertiesPrivate *priv;
};
struct _GtkStylePropertiesClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef gboolean (* GtkStylePropertyParser) (const gchar *string,
                                             GValue *value,
                                             GError **error);
typedef struct _GtkStyleProviderIface GtkStyleProviderIface;
typedef struct _GtkStyleProvider GtkStyleProvider;
struct _GtkStyleProviderIface
{
  GTypeInterface g_iface;
  GtkStyleProperties * (* get_style) (GtkStyleProvider *provider,
                                      GtkWidgetPath *path);
  gboolean (* get_style_property) (GtkStyleProvider *provider,
                                   GtkWidgetPath *path,
                                   GtkStateFlags state,
                                   GParamSpec *pspec,
                                   GValue *value);
  GtkIconFactory * (* get_icon_factory) (GtkStyleProvider *provider,
      GtkWidgetPath *path);
};
typedef struct _GtkStyleContextClass GtkStyleContextClass;
typedef struct _GtkStyleContextPrivate GtkStyleContextPrivate;
struct _GtkStyleContext
{
  GObject parent_object;
  GtkStyleContextPrivate *priv;
};
struct _GtkStyleContextClass
{
  GObjectClass parent_class;
  void (* changed) (GtkStyleContext *context);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum {
  GTK_STYLE_CONTEXT_PRINT_NONE = 0,
  GTK_STYLE_CONTEXT_PRINT_RECURSE = 1 << 0,
  GTK_STYLE_CONTEXT_PRINT_SHOW_STYLE = 1 << 1
} GtkStyleContextPrintFlags;
typedef struct _GtkIconInfo GtkIconInfo;
typedef struct _GtkIconInfoClass GtkIconInfoClass;
typedef struct _GtkIconTheme GtkIconTheme;
typedef struct _GtkIconThemeClass GtkIconThemeClass;
typedef struct _GtkIconThemePrivate GtkIconThemePrivate;
struct _GtkIconTheme
{
  GObject parent_instance;
  GtkIconThemePrivate *priv;
};
struct _GtkIconThemeClass
{
  GObjectClass parent_class;
  void (* changed) (GtkIconTheme *icon_theme);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_ICON_LOOKUP_NO_SVG = 1 << 0,
  GTK_ICON_LOOKUP_FORCE_SVG = 1 << 1,
  GTK_ICON_LOOKUP_USE_BUILTIN = 1 << 2,
  GTK_ICON_LOOKUP_GENERIC_FALLBACK = 1 << 3,
  GTK_ICON_LOOKUP_FORCE_SIZE = 1 << 4,
  GTK_ICON_LOOKUP_FORCE_REGULAR = 1 << 5,
  GTK_ICON_LOOKUP_FORCE_SYMBOLIC = 1 << 6,
  GTK_ICON_LOOKUP_DIR_LTR = 1 << 7,
  GTK_ICON_LOOKUP_DIR_RTL = 1 << 8
} GtkIconLookupFlags;
typedef enum {
  GTK_ICON_THEME_NOT_FOUND,
  GTK_ICON_THEME_FAILED
} GtkIconThemeError;
typedef struct _GtkIconView GtkIconView;
typedef struct _GtkIconViewClass GtkIconViewClass;
typedef struct _GtkIconViewPrivate GtkIconViewPrivate;
typedef void (* GtkIconViewForeachFunc) (GtkIconView *icon_view,
          GtkTreePath *path,
          gpointer data);
typedef enum
{
  GTK_ICON_VIEW_NO_DROP,
  GTK_ICON_VIEW_DROP_INTO,
  GTK_ICON_VIEW_DROP_LEFT,
  GTK_ICON_VIEW_DROP_RIGHT,
  GTK_ICON_VIEW_DROP_ABOVE,
  GTK_ICON_VIEW_DROP_BELOW
} GtkIconViewDropPosition;
struct _GtkIconView
{
  GtkContainer parent;
  GtkIconViewPrivate *priv;
};
struct _GtkIconViewClass
{
  GtkContainerClass parent_class;
  void (* item_activated) (GtkIconView *icon_view,
          GtkTreePath *path);
  void (* selection_changed) (GtkIconView *icon_view);
  void (* select_all) (GtkIconView *icon_view);
  void (* unselect_all) (GtkIconView *icon_view);
  void (* select_cursor_item) (GtkIconView *icon_view);
  void (* toggle_cursor_item) (GtkIconView *icon_view);
  gboolean (* move_cursor) (GtkIconView *icon_view,
          GtkMovementStep step,
          gint count);
  gboolean (* activate_cursor_item) (GtkIconView *icon_view);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkIMContextInfo GtkIMContextInfo;
struct _GtkIMContextInfo
{
  const gchar *context_id;
  const gchar *context_name;
  const gchar *domain;
  const gchar *domain_dirname;
  const gchar *default_locales;
};
typedef struct _GtkIMContextSimple GtkIMContextSimple;
typedef struct _GtkIMContextSimplePrivate GtkIMContextSimplePrivate;
typedef struct _GtkIMContextSimpleClass GtkIMContextSimpleClass;
struct _GtkIMContextSimple
{
  GtkIMContext object;
  GtkIMContextSimplePrivate *priv;
};
struct _GtkIMContextSimpleClass
{
  GtkIMContextClass parent_class;
};
typedef struct _GtkIMMulticontext GtkIMMulticontext;
typedef struct _GtkIMMulticontextClass GtkIMMulticontextClass;
typedef struct _GtkIMMulticontextPrivate GtkIMMulticontextPrivate;
struct _GtkIMMulticontext
{
  GtkIMContext object;
  GtkIMMulticontextPrivate *priv;
};
struct _GtkIMMulticontextClass
{
  GtkIMContextClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkInfoBarPrivate GtkInfoBarPrivate;
typedef struct _GtkInfoBarClass GtkInfoBarClass;
typedef struct _GtkInfoBar GtkInfoBar;
struct _GtkInfoBar
{
  GtkBox parent;
  GtkInfoBarPrivate *priv;
};
struct _GtkInfoBarClass
{
  GtkBoxClass parent_class;
  void (* response) (GtkInfoBar *info_bar, gint response_id);
  void (* close) (GtkInfoBar *info_bar);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkInvisible GtkInvisible;
typedef struct _GtkInvisiblePrivate GtkInvisiblePrivate;
typedef struct _GtkInvisibleClass GtkInvisibleClass;
struct _GtkInvisible
{
  GtkWidget widget;
  GtkInvisiblePrivate *priv;
};
struct _GtkInvisibleClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkLayout GtkLayout;
typedef struct _GtkLayoutPrivate GtkLayoutPrivate;
typedef struct _GtkLayoutClass GtkLayoutClass;
struct _GtkLayout
{
  GtkContainer container;
  GtkLayoutPrivate *priv;
};
struct _GtkLayoutClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkLevelBarClass GtkLevelBarClass;
typedef struct _GtkLevelBar GtkLevelBar;
typedef struct _GtkLevelBarPrivate GtkLevelBarPrivate;
struct _GtkLevelBar {
  GtkWidget parent;
  GtkLevelBarPrivate *priv;
};
struct _GtkLevelBarClass {
  GtkWidgetClass parent_class;
  void (* offset_changed) (GtkLevelBar *self,
                           const gchar *name);
  gpointer padding[16];
};
typedef struct _GtkLinkButton GtkLinkButton;
typedef struct _GtkLinkButtonClass GtkLinkButtonClass;
typedef struct _GtkLinkButtonPrivate GtkLinkButtonPrivate;
struct _GtkLinkButton
{
  GtkButton parent_instance;
  GtkLinkButtonPrivate *priv;
};
struct _GtkLinkButtonClass
{
  GtkButtonClass parent_class;
  gboolean (* activate_link) (GtkLinkButton *button);
  void (*_gtk_padding1) (void);
  void (*_gtk_padding2) (void);
  void (*_gtk_padding3) (void);
  void (*_gtk_padding4) (void);
};
typedef struct _GtkListBox GtkListBox;
typedef struct _GtkListBoxClass GtkListBoxClass;
typedef struct _GtkListBoxRow GtkListBoxRow;
typedef struct _GtkListBoxRowClass GtkListBoxRowClass;
struct _GtkListBox
{
  GtkContainer parent_instance;
};
struct _GtkListBoxClass
{
  GtkContainerClass parent_class;
  void (*row_selected) (GtkListBox *box,
                               GtkListBoxRow *row);
  void (*row_activated) (GtkListBox *box,
                               GtkListBoxRow *row);
  void (*activate_cursor_row) (GtkListBox *box);
  void (*toggle_cursor_row) (GtkListBox *box);
  void (*move_cursor) (GtkListBox *box,
                               GtkMovementStep step,
                               gint count);
  void (*selected_rows_changed) (GtkListBox *box);
  void (*select_all) (GtkListBox *box);
  void (*unselect_all) (GtkListBox *box);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
};
struct _GtkListBoxRow
{
  GtkBin parent_instance;
};
struct _GtkListBoxRowClass
{
  GtkBinClass parent_class;
  void (* activate) (GtkListBoxRow *row);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
};
typedef gboolean (*GtkListBoxFilterFunc) (GtkListBoxRow *row,
                                          gpointer user_data);
typedef gint (*GtkListBoxSortFunc) (GtkListBoxRow *row1,
                                    GtkListBoxRow *row2,
                                    gpointer user_data);
typedef void (*GtkListBoxUpdateHeaderFunc) (GtkListBoxRow *row,
                                            GtkListBoxRow *before,
                                            gpointer user_data);
typedef GtkWidget * (*GtkListBoxCreateWidgetFunc) (gpointer item,
                                                   gpointer user_data);
typedef void (* GtkListBoxForeachFunc) (GtkListBox *box,
                                        GtkListBoxRow *row,
                                        gpointer user_data);
typedef GtkListBox *GtkListBox_autoptr; typedef GList *GtkListBox_listautoptr; typedef GSList *GtkListBox_slistautoptr; typedef GQueue *GtkListBox_queueautoptr;
 
typedef GtkListBoxRow *GtkListBoxRow_autoptr; typedef GList *GtkListBoxRow_listautoptr; typedef GSList *GtkListBoxRow_slistautoptr; typedef GQueue *GtkListBoxRow_queueautoptr;
 
typedef struct _GtkLockButton GtkLockButton;
typedef struct _GtkLockButtonClass GtkLockButtonClass;
typedef struct _GtkLockButtonPrivate GtkLockButtonPrivate;
struct _GtkLockButton
{
  GtkButton parent;
  GtkLockButtonPrivate *priv;
};
struct _GtkLockButtonClass
{
  GtkButtonClass parent_class;
  void (*reserved0) (void);
  void (*reserved1) (void);
  void (*reserved2) (void);
  void (*reserved3) (void);
  void (*reserved4) (void);
  void (*reserved5) (void);
  void (*reserved6) (void);
  void (*reserved7) (void);
};
typedef gint (*GtkKeySnoopFunc) (GtkWidget *grab_widget,
                                 GdkEventKey *event,
                                 gpointer func_data);
typedef struct _GtkMenuBar GtkMenuBar;
typedef struct _GtkMenuBarPrivate GtkMenuBarPrivate;
typedef struct _GtkMenuBarClass GtkMenuBarClass;
struct _GtkMenuBar
{
  GtkMenuShell menu_shell;
  GtkMenuBarPrivate *priv;
};
struct _GtkMenuBarClass
{
  GtkMenuShellClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkPopover GtkPopover;
typedef struct _GtkPopoverClass GtkPopoverClass;
typedef struct _GtkPopoverPrivate GtkPopoverPrivate;
struct _GtkPopover
{
  GtkBin parent_instance;
  GtkPopoverPrivate *priv;
};
struct _GtkPopoverClass
{
  GtkBinClass parent_class;
  void (* closed) (GtkPopover *popover);
  gpointer reserved[10];
};
typedef struct _GtkMenuButton GtkMenuButton;
typedef struct _GtkMenuButtonClass GtkMenuButtonClass;
typedef struct _GtkMenuButtonPrivate GtkMenuButtonPrivate;
struct _GtkMenuButton
{
  GtkToggleButton parent;
  GtkMenuButtonPrivate *priv;
};
struct _GtkMenuButtonClass
{
  GtkToggleButtonClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkSizeGroup GtkSizeGroup;
typedef struct _GtkSizeGroupPrivate GtkSizeGroupPrivate;
typedef struct _GtkSizeGroupClass GtkSizeGroupClass;
struct _GtkSizeGroup
{
  GObject parent_instance;
  GtkSizeGroupPrivate *priv;
};
struct _GtkSizeGroupClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolItem GtkToolItem;
typedef struct _GtkToolItemClass GtkToolItemClass;
typedef struct _GtkToolItemPrivate GtkToolItemPrivate;
struct _GtkToolItem
{
  GtkBin parent;
  GtkToolItemPrivate *priv;
};
struct _GtkToolItemClass
{
  GtkBinClass parent_class;
  gboolean (* create_menu_proxy) (GtkToolItem *tool_item);
  void (* toolbar_reconfigured) (GtkToolItem *tool_item);
  void (* _gtk_reserved1) (void);
  void (* _gtk_reserved2) (void);
  void (* _gtk_reserved3) (void);
  void (* _gtk_reserved4) (void);
};

typedef struct _GtkToolButton GtkToolButton;
typedef struct _GtkToolButtonClass GtkToolButtonClass;
typedef struct _GtkToolButtonPrivate GtkToolButtonPrivate;
struct _GtkToolButton
{
  GtkToolItem parent;
  GtkToolButtonPrivate *priv;
};
struct _GtkToolButtonClass
{
  GtkToolItemClass parent_class;
  GType button_type;
  void (* clicked) (GtkToolButton *tool_item);
  void (* _gtk_reserved1) (void);
  void (* _gtk_reserved2) (void);
  void (* _gtk_reserved3) (void);
  void (* _gtk_reserved4) (void);
};

typedef struct _GtkMenuToolButtonClass GtkMenuToolButtonClass;
typedef struct _GtkMenuToolButton GtkMenuToolButton;
typedef struct _GtkMenuToolButtonPrivate GtkMenuToolButtonPrivate;
struct _GtkMenuToolButton
{
  GtkToolButton parent;
  GtkMenuToolButtonPrivate *priv;
};
struct _GtkMenuToolButtonClass
{
  GtkToolButtonClass parent_class;
  void (*show_menu) (GtkMenuToolButton *button);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkMessageDialog GtkMessageDialog;
typedef struct _GtkMessageDialogPrivate GtkMessageDialogPrivate;
typedef struct _GtkMessageDialogClass GtkMessageDialogClass;
struct _GtkMessageDialog
{
  GtkDialog parent_instance;
  GtkMessageDialogPrivate *priv;
};
struct _GtkMessageDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_BUTTONS_NONE,
  GTK_BUTTONS_OK,
  GTK_BUTTONS_CLOSE,
  GTK_BUTTONS_CANCEL,
  GTK_BUTTONS_YES_NO,
  GTK_BUTTONS_OK_CANCEL
} GtkButtonsType;
typedef struct _GtkModelButton GtkModelButton;
typedef enum {
  GTK_BUTTON_ROLE_NORMAL,
  GTK_BUTTON_ROLE_CHECK,
  GTK_BUTTON_ROLE_RADIO
} GtkButtonRole;
typedef void (*GtkModuleInitFunc) (gint *argc,
                                              gchar ***argv);
typedef void (*GtkModuleDisplayInitFunc) (GdkDisplay *display);
typedef struct _GtkMountOperation GtkMountOperation;
typedef struct _GtkMountOperationClass GtkMountOperationClass;
typedef struct _GtkMountOperationPrivate GtkMountOperationPrivate;
struct _GtkMountOperation
{
  GMountOperation parent_instance;
  GtkMountOperationPrivate *priv;
};
struct _GtkMountOperationClass
{
  GMountOperationClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_NOTEBOOK_TAB_FIRST,
  GTK_NOTEBOOK_TAB_LAST
} GtkNotebookTab;
typedef struct _GtkNotebook GtkNotebook;
typedef struct _GtkNotebookPrivate GtkNotebookPrivate;
typedef struct _GtkNotebookClass GtkNotebookClass;
struct _GtkNotebook
{
  GtkContainer container;
  GtkNotebookPrivate *priv;
};
struct _GtkNotebookClass
{
  GtkContainerClass parent_class;
  void (* switch_page) (GtkNotebook *notebook,
                              GtkWidget *page,
         guint page_num);
  gboolean (* select_page) (GtkNotebook *notebook,
                                gboolean move_focus);
  gboolean (* focus_tab) (GtkNotebook *notebook,
                                GtkNotebookTab type);
  gboolean (* change_current_page) (GtkNotebook *notebook,
                                gint offset);
  void (* move_focus_out) (GtkNotebook *notebook,
    GtkDirectionType direction);
  gboolean (* reorder_tab) (GtkNotebook *notebook,
    GtkDirectionType direction,
    gboolean move_to_last);
  gint (* insert_page) (GtkNotebook *notebook,
           GtkWidget *child,
    GtkWidget *tab_label,
    GtkWidget *menu_label,
    gint position);
  GtkNotebook * (* create_window) (GtkNotebook *notebook,
                                   GtkWidget *page,
                                   gint x,
                                   gint y);
  void (* page_reordered) (GtkNotebook *notebook,
                                GtkWidget *child,
                                guint page_num);
  void (* page_removed) (GtkNotebook *notebook,
                                GtkWidget *child,
                                guint page_num);
  void (* page_added) (GtkNotebook *notebook,
                                GtkWidget *child,
                                guint page_num);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkOffscreenWindow GtkOffscreenWindow;
typedef struct _GtkOffscreenWindowClass GtkOffscreenWindowClass;
struct _GtkOffscreenWindow
{
  GtkWindow parent_object;
};
struct _GtkOffscreenWindowClass
{
  GtkWindowClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkOrientable GtkOrientable;
typedef struct _GtkOrientableIface GtkOrientableIface;
struct _GtkOrientableIface
{
  GTypeInterface base_iface;
};
typedef struct _GtkOverlay GtkOverlay;
typedef struct _GtkOverlayClass GtkOverlayClass;
typedef struct _GtkOverlayPrivate GtkOverlayPrivate;
struct _GtkOverlay
{
  GtkBin parent;
  GtkOverlayPrivate *priv;
};
struct _GtkOverlayClass
{
  GtkBinClass parent_class;
  gboolean (*get_child_position) (GtkOverlay *overlay,
                                  GtkWidget *widget,
                                  GtkAllocation *allocation);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkPadController GtkPadController;
typedef struct _GtkPadControllerClass GtkPadControllerClass;
typedef struct _GtkPadActionEntry GtkPadActionEntry;
typedef enum {
  GTK_PAD_ACTION_BUTTON,
  GTK_PAD_ACTION_RING,
  GTK_PAD_ACTION_STRIP
} GtkPadActionType;
struct _GtkPadActionEntry {
  GtkPadActionType type;
  gint index;
  gint mode;
  gchar *label;
  gchar *action_name;
};
typedef struct _GtkPaperSize GtkPaperSize;
typedef struct _GtkPageSetup GtkPageSetup;
typedef struct _GtkPaned GtkPaned;
typedef struct _GtkPanedClass GtkPanedClass;
typedef struct _GtkPanedPrivate GtkPanedPrivate;
struct _GtkPaned
{
  GtkContainer container;
  GtkPanedPrivate *priv;
};
struct _GtkPanedClass
{
  GtkContainerClass parent_class;
  gboolean (* cycle_child_focus) (GtkPaned *paned,
        gboolean reverse);
  gboolean (* toggle_handle_focus) (GtkPaned *paned);
  gboolean (* move_handle) (GtkPaned *paned,
        GtkScrollType scroll);
  gboolean (* cycle_handle_focus) (GtkPaned *paned,
        gboolean reverse);
  gboolean (* accept_position) (GtkPaned *paned);
  gboolean (* cancel_position) (GtkPaned *paned);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkPlacesSidebar GtkPlacesSidebar;
typedef struct _GtkPlacesSidebarClass GtkPlacesSidebarClass;
typedef enum {
  GTK_PLACES_OPEN_NORMAL = 1 << 0,
  GTK_PLACES_OPEN_NEW_TAB = 1 << 1,
  GTK_PLACES_OPEN_NEW_WINDOW = 1 << 2
} GtkPlacesOpenFlags;
typedef struct _GtkPopoverMenu GtkPopoverMenu;
typedef struct _GtkPopoverMenuClass GtkPopoverMenuClass;
struct _GtkPopoverMenuClass
{
  GtkPopoverClass parent_class;
  gpointer reserved[10];
};
typedef struct _GtkPrintContext GtkPrintContext;
typedef struct _GtkPrintSettings GtkPrintSettings;
typedef void (*GtkPrintSettingsFunc) (const gchar *key,
     const gchar *value,
     gpointer user_data);
typedef struct _GtkPageRange GtkPageRange;
struct _GtkPageRange
{
  gint start;
  gint end;
};
typedef struct _GtkPrintOperationPreview GtkPrintOperationPreview;
typedef struct _GtkPrintOperationPreviewIface GtkPrintOperationPreviewIface;
struct _GtkPrintOperationPreviewIface
{
  GTypeInterface g_iface;
  void (*ready) (GtkPrintOperationPreview *preview,
           GtkPrintContext *context);
  void (*got_page_size) (GtkPrintOperationPreview *preview,
           GtkPrintContext *context,
           GtkPageSetup *page_setup);
  void (*render_page) (GtkPrintOperationPreview *preview,
           gint page_nr);
  gboolean (*is_selected) (GtkPrintOperationPreview *preview,
           gint page_nr);
  void (*end_preview) (GtkPrintOperationPreview *preview);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef struct _GtkPrintOperationClass GtkPrintOperationClass;
typedef struct _GtkPrintOperationPrivate GtkPrintOperationPrivate;
typedef struct _GtkPrintOperation GtkPrintOperation;
typedef enum {
  GTK_PRINT_STATUS_INITIAL,
  GTK_PRINT_STATUS_PREPARING,
  GTK_PRINT_STATUS_GENERATING_DATA,
  GTK_PRINT_STATUS_SENDING_DATA,
  GTK_PRINT_STATUS_PENDING,
  GTK_PRINT_STATUS_PENDING_ISSUE,
  GTK_PRINT_STATUS_PRINTING,
  GTK_PRINT_STATUS_FINISHED,
  GTK_PRINT_STATUS_FINISHED_ABORTED
} GtkPrintStatus;
typedef enum {
  GTK_PRINT_OPERATION_RESULT_ERROR,
  GTK_PRINT_OPERATION_RESULT_APPLY,
  GTK_PRINT_OPERATION_RESULT_CANCEL,
  GTK_PRINT_OPERATION_RESULT_IN_PROGRESS
} GtkPrintOperationResult;
typedef enum {
  GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG,
  GTK_PRINT_OPERATION_ACTION_PRINT,
  GTK_PRINT_OPERATION_ACTION_PREVIEW,
  GTK_PRINT_OPERATION_ACTION_EXPORT
} GtkPrintOperationAction;
struct _GtkPrintOperation
{
  GObject parent_instance;
  GtkPrintOperationPrivate *priv;
};
struct _GtkPrintOperationClass
{
  GObjectClass parent_class;
  void (*done) (GtkPrintOperation *operation,
                                  GtkPrintOperationResult result);
  void (*begin_print) (GtkPrintOperation *operation,
                                  GtkPrintContext *context);
  gboolean (*paginate) (GtkPrintOperation *operation,
                                  GtkPrintContext *context);
  void (*request_page_setup) (GtkPrintOperation *operation,
                                  GtkPrintContext *context,
                                  gint page_nr,
                                  GtkPageSetup *setup);
  void (*draw_page) (GtkPrintOperation *operation,
                                  GtkPrintContext *context,
                                  gint page_nr);
  void (*end_print) (GtkPrintOperation *operation,
                                  GtkPrintContext *context);
  void (*status_changed) (GtkPrintOperation *operation);
  GtkWidget *(*create_custom_widget) (GtkPrintOperation *operation);
  void (*custom_widget_apply) (GtkPrintOperation *operation,
                                      GtkWidget *widget);
  gboolean (*preview) (GtkPrintOperation *operation,
                              GtkPrintOperationPreview *preview,
                              GtkPrintContext *context,
                              GtkWindow *parent);
  void (*update_custom_widget) (GtkPrintOperation *operation,
                                    GtkWidget *widget,
                                    GtkPageSetup *setup,
                                    GtkPrintSettings *settings);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
};
typedef enum
{
  GTK_PRINT_ERROR_GENERAL,
  GTK_PRINT_ERROR_INTERNAL_ERROR,
  GTK_PRINT_ERROR_NOMEM,
  GTK_PRINT_ERROR_INVALID_FILE
} GtkPrintError;
typedef void (* GtkPageSetupDoneFunc) (GtkPageSetup *page_setup,
                                        gpointer data);
typedef struct _GtkProgressBar GtkProgressBar;
typedef struct _GtkProgressBarPrivate GtkProgressBarPrivate;
typedef struct _GtkProgressBarClass GtkProgressBarClass;
struct _GtkProgressBar
{
  GtkWidget parent;
  GtkProgressBarPrivate *priv;
};
struct _GtkProgressBarClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRadioButton GtkRadioButton;
typedef struct _GtkRadioButtonPrivate GtkRadioButtonPrivate;
typedef struct _GtkRadioButtonClass GtkRadioButtonClass;
struct _GtkRadioButton
{
  GtkCheckButton check_button;
  GtkRadioButtonPrivate *priv;
};
struct _GtkRadioButtonClass
{
  GtkCheckButtonClass parent_class;
  void (*group_changed) (GtkRadioButton *radio_button);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRadioMenuItem GtkRadioMenuItem;
typedef struct _GtkRadioMenuItemPrivate GtkRadioMenuItemPrivate;
typedef struct _GtkRadioMenuItemClass GtkRadioMenuItemClass;
struct _GtkRadioMenuItem
{
  GtkCheckMenuItem check_menu_item;
  GtkRadioMenuItemPrivate *priv;
};
struct _GtkRadioMenuItemClass
{
  GtkCheckMenuItemClass parent_class;
  void (*group_changed) (GtkRadioMenuItem *radio_menu_item);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToggleToolButton GtkToggleToolButton;
typedef struct _GtkToggleToolButtonClass GtkToggleToolButtonClass;
typedef struct _GtkToggleToolButtonPrivate GtkToggleToolButtonPrivate;
struct _GtkToggleToolButton
{
  GtkToolButton parent;
  GtkToggleToolButtonPrivate *priv;
};
struct _GtkToggleToolButtonClass
{
  GtkToolButtonClass parent_class;
  void (* toggled) (GtkToggleToolButton *button);
  void (* _gtk_reserved1) (void);
  void (* _gtk_reserved2) (void);
  void (* _gtk_reserved3) (void);
  void (* _gtk_reserved4) (void);
};
typedef struct _GtkRadioToolButton GtkRadioToolButton;
typedef struct _GtkRadioToolButtonClass GtkRadioToolButtonClass;
struct _GtkRadioToolButton
{
  GtkToggleToolButton parent;
};
struct _GtkRadioToolButtonClass
{
  GtkToggleToolButtonClass parent_class;
  void (* _gtk_reserved1) (void);
  void (* _gtk_reserved2) (void);
  void (* _gtk_reserved3) (void);
  void (* _gtk_reserved4) (void);
};
typedef struct _GtkRange GtkRange;
typedef struct _GtkRangePrivate GtkRangePrivate;
typedef struct _GtkRangeClass GtkRangeClass;
struct _GtkRange
{
  GtkWidget widget;
  GtkRangePrivate *priv;
};
struct _GtkRangeClass
{
  GtkWidgetClass parent_class;
  gchar *slider_detail;
  gchar *stepper_detail;
  void (* value_changed) (GtkRange *range);
  void (* adjust_bounds) (GtkRange *range,
                             gdouble new_value);
  void (* move_slider) (GtkRange *range,
                             GtkScrollType scroll);
  void (* get_range_border) (GtkRange *range,
                             GtkBorder *border_);
  gboolean (* change_value) (GtkRange *range,
                             GtkScrollType scroll,
                             gdouble new_value);
   void (* get_range_size_request) (GtkRange *range,
                                    GtkOrientation orientation,
                                    gint *minimum,
                                    gint *natural);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
};
typedef struct _GtkRecentInfo GtkRecentInfo;
typedef struct _GtkRecentData GtkRecentData;
typedef struct _GtkRecentManager GtkRecentManager;
typedef struct _GtkRecentManagerClass GtkRecentManagerClass;
typedef struct _GtkRecentManagerPrivate GtkRecentManagerPrivate;
struct _GtkRecentData
{
  gchar *display_name;
  gchar *description;
  gchar *mime_type;
  gchar *app_name;
  gchar *app_exec;
  gchar **groups;
  gboolean is_private;
};
struct _GtkRecentManager
{
  GObject parent_instance;
  GtkRecentManagerPrivate *priv;
};
struct _GtkRecentManagerClass
{
  GObjectClass parent_class;
  void (*changed) (GtkRecentManager *manager);
  void (*_gtk_recent1) (void);
  void (*_gtk_recent2) (void);
  void (*_gtk_recent3) (void);
  void (*_gtk_recent4) (void);
};
typedef enum
{
  GTK_RECENT_MANAGER_ERROR_NOT_FOUND,
  GTK_RECENT_MANAGER_ERROR_INVALID_URI,
  GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING,
  GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED,
  GTK_RECENT_MANAGER_ERROR_READ,
  GTK_RECENT_MANAGER_ERROR_WRITE,
  GTK_RECENT_MANAGER_ERROR_UNKNOWN
} GtkRecentManagerError;

typedef struct _GtkRecentFilter GtkRecentFilter;
typedef struct _GtkRecentFilterInfo GtkRecentFilterInfo;
typedef enum {
  GTK_RECENT_FILTER_URI = 1 << 0,
  GTK_RECENT_FILTER_DISPLAY_NAME = 1 << 1,
  GTK_RECENT_FILTER_MIME_TYPE = 1 << 2,
  GTK_RECENT_FILTER_APPLICATION = 1 << 3,
  GTK_RECENT_FILTER_GROUP = 1 << 4,
  GTK_RECENT_FILTER_AGE = 1 << 5
} GtkRecentFilterFlags;
typedef gboolean (*GtkRecentFilterFunc) (const GtkRecentFilterInfo *filter_info,
      gpointer user_data);
struct _GtkRecentFilterInfo
{
  GtkRecentFilterFlags contains;
  const gchar *uri;
  const gchar *display_name;
  const gchar *mime_type;
  const gchar **applications;
  const gchar **groups;
  gint age;
};
typedef enum
{
  GTK_RECENT_SORT_NONE = 0,
  GTK_RECENT_SORT_MRU,
  GTK_RECENT_SORT_LRU,
  GTK_RECENT_SORT_CUSTOM
} GtkRecentSortType;
typedef gint (*GtkRecentSortFunc) (GtkRecentInfo *a,
       GtkRecentInfo *b,
       gpointer user_data);
typedef struct _GtkRecentChooser GtkRecentChooser;
typedef struct _GtkRecentChooserIface GtkRecentChooserIface;
typedef enum
{
  GTK_RECENT_CHOOSER_ERROR_NOT_FOUND,
  GTK_RECENT_CHOOSER_ERROR_INVALID_URI
} GtkRecentChooserError;
struct _GtkRecentChooserIface
{
  GTypeInterface base_iface;
  gboolean (* set_current_uri) (GtkRecentChooser *chooser,
           const gchar *uri,
           GError **error);
  gchar * (* get_current_uri) (GtkRecentChooser *chooser);
  gboolean (* select_uri) (GtkRecentChooser *chooser,
           const gchar *uri,
           GError **error);
  void (* unselect_uri) (GtkRecentChooser *chooser,
                                            const gchar *uri);
  void (* select_all) (GtkRecentChooser *chooser);
  void (* unselect_all) (GtkRecentChooser *chooser);
  GList * (* get_items) (GtkRecentChooser *chooser);
  GtkRecentManager *(* get_recent_manager) (GtkRecentChooser *chooser);
  void (* add_filter) (GtkRecentChooser *chooser,
           GtkRecentFilter *filter);
  void (* remove_filter) (GtkRecentChooser *chooser,
           GtkRecentFilter *filter);
  GSList * (* list_filters) (GtkRecentChooser *chooser);
  void (* set_sort_func) (GtkRecentChooser *chooser,
           GtkRecentSortFunc sort_func,
           gpointer sort_data,
           GDestroyNotify data_destroy);
  void (* item_activated) (GtkRecentChooser *chooser);
  void (* selection_changed) (GtkRecentChooser *chooser);
};
typedef struct _GtkRecentChooserDialog GtkRecentChooserDialog;
typedef struct _GtkRecentChooserDialogClass GtkRecentChooserDialogClass;
typedef struct _GtkRecentChooserDialogPrivate GtkRecentChooserDialogPrivate;
struct _GtkRecentChooserDialog
{
  GtkDialog parent_instance;
  GtkRecentChooserDialogPrivate *priv;
};
struct _GtkRecentChooserDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRecentChooserMenu GtkRecentChooserMenu;
typedef struct _GtkRecentChooserMenuClass GtkRecentChooserMenuClass;
typedef struct _GtkRecentChooserMenuPrivate GtkRecentChooserMenuPrivate;
struct _GtkRecentChooserMenu
{
  GtkMenu parent_instance;
  GtkRecentChooserMenuPrivate *priv;
};
struct _GtkRecentChooserMenuClass
{
  GtkMenuClass parent_class;
  void (* gtk_recent1) (void);
  void (* gtk_recent2) (void);
  void (* gtk_recent3) (void);
  void (* gtk_recent4) (void);
};
typedef struct _GtkRecentChooserWidget GtkRecentChooserWidget;
typedef struct _GtkRecentChooserWidgetClass GtkRecentChooserWidgetClass;
typedef struct _GtkRecentChooserWidgetPrivate GtkRecentChooserWidgetPrivate;
struct _GtkRecentChooserWidget
{
  GtkBox parent_instance;
  GtkRecentChooserWidgetPrivate *priv;
};
struct _GtkRecentChooserWidgetClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRevealer GtkRevealer;
typedef struct _GtkRevealerClass GtkRevealerClass;
typedef enum {
  GTK_REVEALER_TRANSITION_TYPE_NONE,
  GTK_REVEALER_TRANSITION_TYPE_CROSSFADE,
  GTK_REVEALER_TRANSITION_TYPE_SLIDE_RIGHT,
  GTK_REVEALER_TRANSITION_TYPE_SLIDE_LEFT,
  GTK_REVEALER_TRANSITION_TYPE_SLIDE_UP,
  GTK_REVEALER_TRANSITION_TYPE_SLIDE_DOWN
} GtkRevealerTransitionType;
struct _GtkRevealer {
  GtkBin parent_instance;
};
struct _GtkRevealerClass {
  GtkBinClass parent_class;
};
typedef struct _GtkScale GtkScale;
typedef struct _GtkScalePrivate GtkScalePrivate;
typedef struct _GtkScaleClass GtkScaleClass;
struct _GtkScale
{
  GtkRange range;
  GtkScalePrivate *priv;
};
struct _GtkScaleClass
{
  GtkRangeClass parent_class;
  gchar* (* format_value) (GtkScale *scale,
                           gdouble value);
  void (* draw_value) (GtkScale *scale);
  void (* get_layout_offsets) (GtkScale *scale,
                               gint *x,
                               gint *y);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkScaleButton GtkScaleButton;
typedef struct _GtkScaleButtonClass GtkScaleButtonClass;
typedef struct _GtkScaleButtonPrivate GtkScaleButtonPrivate;
struct _GtkScaleButton
{
  GtkButton parent;
  GtkScaleButtonPrivate *priv;
};
struct _GtkScaleButtonClass
{
  GtkButtonClass parent_class;
  void (* value_changed) (GtkScaleButton *button,
                           gdouble value);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkScrollable GtkScrollable;
typedef struct _GtkScrollableInterface GtkScrollableInterface;
struct _GtkScrollableInterface
{
  GTypeInterface base_iface;
  gboolean (* get_border) (GtkScrollable *scrollable,
                           GtkBorder *border);
};
typedef struct _GtkScrollbar GtkScrollbar;
typedef struct _GtkScrollbarClass GtkScrollbarClass;
struct _GtkScrollbar
{
  GtkRange range;
};
struct _GtkScrollbarClass
{
  GtkRangeClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkScrolledWindow GtkScrolledWindow;
typedef struct _GtkScrolledWindowPrivate GtkScrolledWindowPrivate;
typedef struct _GtkScrolledWindowClass GtkScrolledWindowClass;
struct _GtkScrolledWindow
{
  GtkBin container;
  GtkScrolledWindowPrivate *priv;
};
struct _GtkScrolledWindowClass
{
  GtkBinClass parent_class;
  gint scrollbar_spacing;
  gboolean (*scroll_child) (GtkScrolledWindow *scrolled_window,
         GtkScrollType scroll,
       gboolean horizontal);
  void (* move_focus_out) (GtkScrolledWindow *scrolled_window,
      GtkDirectionType direction);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_CORNER_TOP_LEFT,
  GTK_CORNER_BOTTOM_LEFT,
  GTK_CORNER_TOP_RIGHT,
  GTK_CORNER_BOTTOM_RIGHT
} GtkCornerType;
typedef enum
{
  GTK_POLICY_ALWAYS,
  GTK_POLICY_AUTOMATIC,
  GTK_POLICY_NEVER,
  GTK_POLICY_EXTERNAL
} GtkPolicyType;
typedef struct _GtkSearchBar GtkSearchBar;
typedef struct _GtkSearchBarClass GtkSearchBarClass;
struct _GtkSearchBar
{
  GtkBin parent;
};
struct _GtkSearchBarClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkSearchEntry GtkSearchEntry;
typedef struct _GtkSearchEntryClass GtkSearchEntryClass;
struct _GtkSearchEntry
{
  GtkEntry parent;
};
struct _GtkSearchEntryClass
{
  GtkEntryClass parent_class;
  void (*search_changed) (GtkSearchEntry *entry);
  void (*next_match) (GtkSearchEntry *entry);
  void (*previous_match) (GtkSearchEntry *entry);
  void (*stop_search) (GtkSearchEntry *entry);
};
typedef struct _GtkSeparator GtkSeparator;
typedef struct _GtkSeparatorPrivate GtkSeparatorPrivate;
typedef struct _GtkSeparatorClass GtkSeparatorClass;
struct _GtkSeparator
{
  GtkWidget widget;
  GtkSeparatorPrivate *priv;
};
struct _GtkSeparatorClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkSeparatorMenuItem GtkSeparatorMenuItem;
typedef struct _GtkSeparatorMenuItemClass GtkSeparatorMenuItemClass;
struct _GtkSeparatorMenuItem
{
  GtkMenuItem menu_item;
};
struct _GtkSeparatorMenuItemClass
{
  GtkMenuItemClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkSeparatorToolItem GtkSeparatorToolItem;
typedef struct _GtkSeparatorToolItemClass GtkSeparatorToolItemClass;
typedef struct _GtkSeparatorToolItemPrivate GtkSeparatorToolItemPrivate;
struct _GtkSeparatorToolItem
{
  GtkToolItem parent;
  GtkSeparatorToolItemPrivate *priv;
};
struct _GtkSeparatorToolItemClass
{
  GtkToolItemClass parent_class;
  void (* _gtk_reserved1) (void);
  void (* _gtk_reserved2) (void);
  void (* _gtk_reserved3) (void);
  void (* _gtk_reserved4) (void);
};
typedef struct _GtkSettingsPrivate GtkSettingsPrivate;
typedef struct _GtkSettingsClass GtkSettingsClass;
typedef struct _GtkSettingsValue GtkSettingsValue;
struct _GtkSettings
{
  GObject parent_instance;
  GtkSettingsPrivate *priv;
};
struct _GtkSettingsClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkSettingsValue
{
  gchar *origin;
  GValue value;
};
typedef struct _GtkShortcutLabel GtkShortcutLabel;
typedef struct _GtkShortcutLabelClass GtkShortcutLabelClass;
typedef struct _GtkShortcutsGroup GtkShortcutsGroup;
typedef struct _GtkShortcutsGroupClass GtkShortcutsGroupClass;
typedef struct _GtkShortcutsSection GtkShortcutsSection;
typedef struct _GtkShortcutsSectionClass GtkShortcutsSectionClass;
typedef struct _GtkShortcutsShortcut GtkShortcutsShortcut;
typedef struct _GtkShortcutsShortcutClass GtkShortcutsShortcutClass;
typedef enum {
  GTK_SHORTCUT_ACCELERATOR,
  GTK_SHORTCUT_GESTURE_PINCH,
  GTK_SHORTCUT_GESTURE_STRETCH,
  GTK_SHORTCUT_GESTURE_ROTATE_CLOCKWISE,
  GTK_SHORTCUT_GESTURE_ROTATE_COUNTERCLOCKWISE,
  GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_LEFT,
  GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_RIGHT,
  GTK_SHORTCUT_GESTURE
} GtkShortcutType;
typedef struct _GtkStack GtkStack;
typedef struct _GtkStackClass GtkStackClass;
typedef enum {
  GTK_STACK_TRANSITION_TYPE_NONE,
  GTK_STACK_TRANSITION_TYPE_CROSSFADE,
  GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT,
  GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT,
  GTK_STACK_TRANSITION_TYPE_SLIDE_UP,
  GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN,
  GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
  GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN,
  GTK_STACK_TRANSITION_TYPE_OVER_UP,
  GTK_STACK_TRANSITION_TYPE_OVER_DOWN,
  GTK_STACK_TRANSITION_TYPE_OVER_LEFT,
  GTK_STACK_TRANSITION_TYPE_OVER_RIGHT,
  GTK_STACK_TRANSITION_TYPE_UNDER_UP,
  GTK_STACK_TRANSITION_TYPE_UNDER_DOWN,
  GTK_STACK_TRANSITION_TYPE_UNDER_LEFT,
  GTK_STACK_TRANSITION_TYPE_UNDER_RIGHT,
  GTK_STACK_TRANSITION_TYPE_OVER_UP_DOWN,
  GTK_STACK_TRANSITION_TYPE_OVER_DOWN_UP,
  GTK_STACK_TRANSITION_TYPE_OVER_LEFT_RIGHT,
  GTK_STACK_TRANSITION_TYPE_OVER_RIGHT_LEFT
} GtkStackTransitionType;
struct _GtkStack {
  GtkContainer parent_instance;
};
struct _GtkStackClass {
  GtkContainerClass parent_class;
};
typedef struct _GtkStackSidebar GtkStackSidebar;
typedef struct _GtkStackSidebarPrivate GtkStackSidebarPrivate;
typedef struct _GtkStackSidebarClass GtkStackSidebarClass;
struct _GtkStackSidebar
{
  GtkBin parent;
};
struct _GtkStackSidebarClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRequestedSize GtkRequestedSize;
struct _GtkRequestedSize
{
  gpointer data;
  gint minimum_size;
  gint natural_size;
};
typedef enum
{
  GTK_UPDATE_ALWAYS,
  GTK_UPDATE_IF_VALID
} GtkSpinButtonUpdatePolicy;
typedef enum
{
  GTK_SPIN_STEP_FORWARD,
  GTK_SPIN_STEP_BACKWARD,
  GTK_SPIN_PAGE_FORWARD,
  GTK_SPIN_PAGE_BACKWARD,
  GTK_SPIN_HOME,
  GTK_SPIN_END,
  GTK_SPIN_USER_DEFINED
} GtkSpinType;
typedef struct _GtkSpinButton GtkSpinButton;
typedef struct _GtkSpinButtonPrivate GtkSpinButtonPrivate;
typedef struct _GtkSpinButtonClass GtkSpinButtonClass;
struct _GtkSpinButton
{
  GtkEntry entry;
  GtkSpinButtonPrivate *priv;
};
struct _GtkSpinButtonClass
{
  GtkEntryClass parent_class;
  gint (*input) (GtkSpinButton *spin_button,
    gdouble *new_value);
  gint (*output) (GtkSpinButton *spin_button);
  void (*value_changed) (GtkSpinButton *spin_button);
  void (*change_value) (GtkSpinButton *spin_button,
   GtkScrollType scroll);
  void (*wrapped) (GtkSpinButton *spin_button);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkSpinner GtkSpinner;
typedef struct _GtkSpinnerClass GtkSpinnerClass;
typedef struct _GtkSpinnerPrivate GtkSpinnerPrivate;
struct _GtkSpinner
{
  GtkWidget parent;
  GtkSpinnerPrivate *priv;
};
struct _GtkSpinnerClass
{
  GtkWidgetClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkStackSwitcher GtkStackSwitcher;
typedef struct _GtkStackSwitcherClass GtkStackSwitcherClass;
struct _GtkStackSwitcher
{
  GtkBox widget;
};
struct _GtkStackSwitcherClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkStatusbar GtkStatusbar;
typedef struct _GtkStatusbarPrivate GtkStatusbarPrivate;
typedef struct _GtkStatusbarClass GtkStatusbarClass;
struct _GtkStatusbar
{
  GtkBox parent_widget;
  GtkStatusbarPrivate *priv;
};
struct _GtkStatusbarClass
{
  GtkBoxClass parent_class;
  gpointer reserved;
  void (*text_pushed) (GtkStatusbar *statusbar,
    guint context_id,
    const gchar *text);
  void (*text_popped) (GtkStatusbar *statusbar,
    guint context_id,
    const gchar *text);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkSwitch GtkSwitch;
typedef struct _GtkSwitchPrivate GtkSwitchPrivate;
typedef struct _GtkSwitchClass GtkSwitchClass;
struct _GtkSwitch
{
  GtkWidget parent_instance;
  GtkSwitchPrivate *priv;
};
struct _GtkSwitchClass
{
  GtkWidgetClass parent_class;
  void (* activate) (GtkSwitch *sw);
  gboolean (* state_set) (GtkSwitch *sw, gboolean state);
  void (* _switch_padding_1) (void);
  void (* _switch_padding_2) (void);
  void (* _switch_padding_3) (void);
  void (* _switch_padding_4) (void);
  void (* _switch_padding_5) (void);
};
typedef void (* GtkTextTagTableForeach) (GtkTextTag *tag, gpointer data);
typedef struct _GtkTextTagTablePrivate GtkTextTagTablePrivate;
typedef struct _GtkTextTagTableClass GtkTextTagTableClass;
struct _GtkTextTagTable
{
  GObject parent_instance;
  GtkTextTagTablePrivate *priv;
};
struct _GtkTextTagTableClass
{
  GObjectClass parent_class;
  void (* tag_changed) (GtkTextTagTable *table, GtkTextTag *tag, gboolean size_changed);
  void (* tag_added) (GtkTextTagTable *table, GtkTextTag *tag);
  void (* tag_removed) (GtkTextTagTable *table, GtkTextTag *tag);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkTextMark GtkTextMark;
typedef struct _GtkTextMarkClass GtkTextMarkClass;
struct _GtkTextMark
{
  GObject parent_instance;
  gpointer segment;
};
struct _GtkTextMarkClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS = - 1,
  GTK_TEXT_BUFFER_TARGET_INFO_RICH_TEXT = - 2,
  GTK_TEXT_BUFFER_TARGET_INFO_TEXT = - 3
} GtkTextBufferTargetInfo;
typedef struct _GtkTextBTree GtkTextBTree;
typedef struct _GtkTextBufferPrivate GtkTextBufferPrivate;
typedef struct _GtkTextBufferClass GtkTextBufferClass;
struct _GtkTextBuffer
{
  GObject parent_instance;
  GtkTextBufferPrivate *priv;
};
struct _GtkTextBufferClass
{
  GObjectClass parent_class;
  void (* insert_text) (GtkTextBuffer *buffer,
                                   GtkTextIter *pos,
                                   const gchar *new_text,
                                   gint new_text_length);
  void (* insert_pixbuf) (GtkTextBuffer *buffer,
                                   GtkTextIter *iter,
                                   GdkPixbuf *pixbuf);
  void (* insert_child_anchor) (GtkTextBuffer *buffer,
                                   GtkTextIter *iter,
                                   GtkTextChildAnchor *anchor);
  void (* delete_range) (GtkTextBuffer *buffer,
                                   GtkTextIter *start,
                                   GtkTextIter *end);
  void (* changed) (GtkTextBuffer *buffer);
  void (* modified_changed) (GtkTextBuffer *buffer);
  void (* mark_set) (GtkTextBuffer *buffer,
                                   const GtkTextIter *location,
                                   GtkTextMark *mark);
  void (* mark_deleted) (GtkTextBuffer *buffer,
                                   GtkTextMark *mark);
  void (* apply_tag) (GtkTextBuffer *buffer,
                                   GtkTextTag *tag,
                                   const GtkTextIter *start,
                                   const GtkTextIter *end);
  void (* remove_tag) (GtkTextBuffer *buffer,
                                   GtkTextTag *tag,
                                   const GtkTextIter *start,
                                   const GtkTextIter *end);
  void (* begin_user_action) (GtkTextBuffer *buffer);
  void (* end_user_action) (GtkTextBuffer *buffer);
  void (* paste_done) (GtkTextBuffer *buffer,
                                   GtkClipboard *clipboard);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef guint8 * (* GtkTextBufferSerializeFunc) (GtkTextBuffer *register_buffer,
                                                   GtkTextBuffer *content_buffer,
                                                   const GtkTextIter *start,
                                                   const GtkTextIter *end,
                                                   gsize *length,
                                                   gpointer user_data);
typedef gboolean (* GtkTextBufferDeserializeFunc) (GtkTextBuffer *register_buffer,
                                                   GtkTextBuffer *content_buffer,
                                                   GtkTextIter *iter,
                                                   const guint8 *data,
                                                   gsize length,
                                                   gboolean create_tags,
                                                   gpointer user_data,
                                                   GError **error);
typedef enum
{
  GTK_TEXT_WINDOW_PRIVATE,
  GTK_TEXT_WINDOW_WIDGET,
  GTK_TEXT_WINDOW_TEXT,
  GTK_TEXT_WINDOW_LEFT,
  GTK_TEXT_WINDOW_RIGHT,
  GTK_TEXT_WINDOW_TOP,
  GTK_TEXT_WINDOW_BOTTOM
} GtkTextWindowType;
typedef enum
{
  GTK_TEXT_VIEW_LAYER_BELOW,
  GTK_TEXT_VIEW_LAYER_ABOVE,
  GTK_TEXT_VIEW_LAYER_BELOW_TEXT,
  GTK_TEXT_VIEW_LAYER_ABOVE_TEXT
} GtkTextViewLayer;
typedef enum
{
  GTK_TEXT_EXTEND_SELECTION_WORD,
  GTK_TEXT_EXTEND_SELECTION_LINE
} GtkTextExtendSelection;
typedef struct _GtkTextView GtkTextView;
typedef struct _GtkTextViewPrivate GtkTextViewPrivate;
typedef struct _GtkTextViewClass GtkTextViewClass;
struct _GtkTextView
{
  GtkContainer parent_instance;
  GtkTextViewPrivate *priv;
};
struct _GtkTextViewClass
{
  GtkContainerClass parent_class;
  void (* populate_popup) (GtkTextView *text_view,
                                  GtkWidget *popup);
  void (* move_cursor) (GtkTextView *text_view,
                                  GtkMovementStep step,
                                  gint count,
                                  gboolean extend_selection);
  void (* set_anchor) (GtkTextView *text_view);
  void (* insert_at_cursor) (GtkTextView *text_view,
                                  const gchar *str);
  void (* delete_from_cursor) (GtkTextView *text_view,
                                  GtkDeleteType type,
                                  gint count);
  void (* backspace) (GtkTextView *text_view);
  void (* cut_clipboard) (GtkTextView *text_view);
  void (* copy_clipboard) (GtkTextView *text_view);
  void (* paste_clipboard) (GtkTextView *text_view);
  void (* toggle_overwrite) (GtkTextView *text_view);
  GtkTextBuffer * (* create_buffer) (GtkTextView *text_view);
  void (* draw_layer) (GtkTextView *text_view,
             GtkTextViewLayer layer,
             cairo_t *cr);
  gboolean (* extend_selection) (GtkTextView *text_view,
                                  GtkTextExtendSelection granularity,
                                  const GtkTextIter *location,
                                  GtkTextIter *start,
                                  GtkTextIter *end);
  void (* insert_emoji) (GtkTextView *text_view);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum
{
  GTK_TOOLBAR_SPACE_EMPTY,
  GTK_TOOLBAR_SPACE_LINE
} GtkToolbarSpaceStyle;
typedef struct _GtkToolbar GtkToolbar;
typedef struct _GtkToolbarPrivate GtkToolbarPrivate;
typedef struct _GtkToolbarClass GtkToolbarClass;
struct _GtkToolbar
{
  GtkContainer container;
  GtkToolbarPrivate *priv;
};
struct _GtkToolbarClass
{
  GtkContainerClass parent_class;
  void (* orientation_changed) (GtkToolbar *toolbar,
        GtkOrientation orientation);
  void (* style_changed) (GtkToolbar *toolbar,
        GtkToolbarStyle style);
  gboolean (* popup_context_menu) (GtkToolbar *toolbar,
        gint x,
        gint y,
        gint button_number);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolItemGroup GtkToolItemGroup;
typedef struct _GtkToolItemGroupClass GtkToolItemGroupClass;
typedef struct _GtkToolItemGroupPrivate GtkToolItemGroupPrivate;
struct _GtkToolItemGroup
{
  GtkContainer parent_instance;
  GtkToolItemGroupPrivate *priv;
};
struct _GtkToolItemGroupClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolPalette GtkToolPalette;
typedef struct _GtkToolPaletteClass GtkToolPaletteClass;
typedef struct _GtkToolPalettePrivate GtkToolPalettePrivate;
typedef enum
{
  GTK_TOOL_PALETTE_DRAG_ITEMS = (1 << 0),
  GTK_TOOL_PALETTE_DRAG_GROUPS = (1 << 1)
}
GtkToolPaletteDragTargets;
struct _GtkToolPalette
{
  GtkContainer parent_instance;
  GtkToolPalettePrivate *priv;
};
struct _GtkToolPaletteClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolShell GtkToolShell;
typedef struct _GtkToolShellIface GtkToolShellIface;
struct _GtkToolShellIface
{
  GTypeInterface g_iface;
  GtkIconSize (*get_icon_size) (GtkToolShell *shell);
  GtkOrientation (*get_orientation) (GtkToolShell *shell);
  GtkToolbarStyle (*get_style) (GtkToolShell *shell);
  GtkReliefStyle (*get_relief_style) (GtkToolShell *shell);
  void (*rebuild_menu) (GtkToolShell *shell);
  GtkOrientation (*get_text_orientation) (GtkToolShell *shell);
  gfloat (*get_text_alignment) (GtkToolShell *shell);
  PangoEllipsizeMode (*get_ellipsize_mode) (GtkToolShell *shell);
  GtkSizeGroup * (*get_text_size_group) (GtkToolShell *shell);
};
typedef struct _GtkTreeDragSource GtkTreeDragSource;
typedef struct _GtkTreeDragSourceIface GtkTreeDragSourceIface;
struct _GtkTreeDragSourceIface
{
  GTypeInterface g_iface;
  gboolean (* row_draggable) (GtkTreeDragSource *drag_source,
                                         GtkTreePath *path);
  gboolean (* drag_data_get) (GtkTreeDragSource *drag_source,
                                         GtkTreePath *path,
                                         GtkSelectionData *selection_data);
  gboolean (* drag_data_delete) (GtkTreeDragSource *drag_source,
                                         GtkTreePath *path);
};
typedef struct _GtkTreeDragDest GtkTreeDragDest;
typedef struct _GtkTreeDragDestIface GtkTreeDragDestIface;
struct _GtkTreeDragDestIface
{
  GTypeInterface g_iface;
  gboolean (* drag_data_received) (GtkTreeDragDest *drag_dest,
                                       GtkTreePath *dest,
                                       GtkSelectionData *selection_data);
  gboolean (* row_drop_possible) (GtkTreeDragDest *drag_dest,
                                       GtkTreePath *dest_path,
           GtkSelectionData *selection_data);
};
typedef struct _GtkTreeModelSort GtkTreeModelSort;
typedef struct _GtkTreeModelSortClass GtkTreeModelSortClass;
typedef struct _GtkTreeModelSortPrivate GtkTreeModelSortPrivate;
struct _GtkTreeModelSort
{
  GObject parent;
  GtkTreeModelSortPrivate *priv;
};
struct _GtkTreeModelSortClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkTreeSelectionPrivate GtkTreeSelectionPrivate;
typedef gboolean (* GtkTreeSelectionFunc) (GtkTreeSelection *selection,
           GtkTreeModel *model,
           GtkTreePath *path,
                                              gboolean path_currently_selected,
           gpointer data);
typedef void (* GtkTreeSelectionForeachFunc) (GtkTreeModel *model,
           GtkTreePath *path,
           GtkTreeIter *iter,
           gpointer data);
struct _GtkTreeSelection
{
  GObject parent;
  GtkTreeSelectionPrivate *priv;
};
struct _GtkTreeSelectionClass
{
  GObjectClass parent_class;
  void (* changed) (GtkTreeSelection *selection);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkTreeStore GtkTreeStore;
typedef struct _GtkTreeStoreClass GtkTreeStoreClass;
typedef struct _GtkTreeStorePrivate GtkTreeStorePrivate;
struct _GtkTreeStore
{
  GObject parent;
  GtkTreeStorePrivate *priv;
};
struct _GtkTreeStoreClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkViewport GtkViewport;
typedef struct _GtkViewportPrivate GtkViewportPrivate;
typedef struct _GtkViewportClass GtkViewportClass;
struct _GtkViewport
{
  GtkBin bin;
  GtkViewportPrivate *priv;
};
struct _GtkViewportClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkVolumeButton GtkVolumeButton;
typedef struct _GtkVolumeButtonClass GtkVolumeButtonClass;
struct _GtkVolumeButton
{
  GtkScaleButton parent;
};
struct _GtkVolumeButtonClass
{
  GtkScaleButtonClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkWindowGroup
{
  GObject parent_instance;
  GtkWindowGroupPrivate *priv;
};
struct _GtkWindowGroupClass
{
  GObjectClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkArrow GtkArrow;
typedef struct _GtkArrowPrivate GtkArrowPrivate;
typedef struct _GtkArrowClass GtkArrowClass;
struct _GtkArrow
{
  GtkMisc misc;
  GtkArrowPrivate *priv;
};
struct _GtkArrowClass
{
  GtkMiscClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkAction GtkAction;
typedef struct _GtkActionClass GtkActionClass;
typedef struct _GtkActionPrivate GtkActionPrivate;
struct _GtkAction
{
  GObject object;
  GtkActionPrivate *private_data;
};
struct _GtkActionClass
{
  GObjectClass parent_class;
  void (* activate) (GtkAction *action);
  GType menu_item_type;
  GType toolbar_item_type;
  GtkWidget *(* create_menu_item) (GtkAction *action);
  GtkWidget *(* create_tool_item) (GtkAction *action);
  void (* connect_proxy) (GtkAction *action,
         GtkWidget *proxy);
  void (* disconnect_proxy) (GtkAction *action,
         GtkWidget *proxy);
  GtkWidget *(* create_menu) (GtkAction *action);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkActivatable GtkActivatable;
typedef struct _GtkActivatableIface GtkActivatableIface;
struct _GtkActivatableIface
{
  GTypeInterface g_iface;
  void (* update) (GtkActivatable *activatable,
                         GtkAction *action,
                         const gchar *property_name);
  void (* sync_action_properties) (GtkActivatable *activatable,
                         GtkAction *action);
};
typedef gchar * (*GtkTranslateFunc) (const gchar *path,
                                     gpointer func_data);
typedef struct _GtkStockItem GtkStockItem;
struct _GtkStockItem
{
  gchar *stock_id;
  gchar *label;
  GdkModifierType modifier;
  guint keyval;
  gchar *translation_domain;
};
typedef char * GtkStock;
typedef struct _GtkActionGroup GtkActionGroup;
typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;
typedef struct _GtkActionGroupClass GtkActionGroupClass;
typedef struct _GtkActionEntry GtkActionEntry;
typedef struct _GtkToggleActionEntry GtkToggleActionEntry;
typedef struct _GtkRadioActionEntry GtkRadioActionEntry;
struct _GtkActionGroup
{
  GObject parent;
  GtkActionGroupPrivate *priv;
};
struct _GtkActionGroupClass
{
  GObjectClass parent_class;
  GtkAction *(* get_action) (GtkActionGroup *action_group,
                             const gchar *action_name);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkActionEntry
{
  const gchar *name;
  const gchar *stock_id;
  const gchar *label;
  const gchar *accelerator;
  const gchar *tooltip;
  GCallback callback;
};
struct _GtkToggleActionEntry
{
  const gchar *name;
  const gchar *stock_id;
  const gchar *label;
  const gchar *accelerator;
  const gchar *tooltip;
  GCallback callback;
  gboolean is_active;
};
struct _GtkRadioActionEntry
{
  const gchar *name;
  const gchar *stock_id;
  const gchar *label;
  const gchar *accelerator;
  const gchar *tooltip;
  gint value;
};

typedef struct _GtkAlignment GtkAlignment;
typedef struct _GtkAlignmentPrivate GtkAlignmentPrivate;
typedef struct _GtkAlignmentClass GtkAlignmentClass;
struct _GtkAlignment
{
  GtkBin bin;
  GtkAlignmentPrivate *priv;
};
struct _GtkAlignmentClass
{
  GtkBinClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorSelection GtkColorSelection;
typedef struct _GtkColorSelectionPrivate GtkColorSelectionPrivate;
typedef struct _GtkColorSelectionClass GtkColorSelectionClass;
typedef void (* GtkColorSelectionChangePaletteFunc) (const GdkColor *colors,
                                                     gint n_colors);
typedef void (* GtkColorSelectionChangePaletteWithScreenFunc) (GdkScreen *screen,
              const GdkColor *colors,
              gint n_colors);
struct _GtkColorSelection
{
  GtkBox parent_instance;
  GtkColorSelectionPrivate *private_data;
};
struct _GtkColorSelectionClass
{
  GtkBoxClass parent_class;
  void (*color_changed) (GtkColorSelection *color_selection);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorSelectionDialog GtkColorSelectionDialog;
typedef struct _GtkColorSelectionDialogPrivate GtkColorSelectionDialogPrivate;
typedef struct _GtkColorSelectionDialogClass GtkColorSelectionDialogClass;
struct _GtkColorSelectionDialog
{
  GtkDialog parent_instance;
  GtkColorSelectionDialogPrivate *priv;
};
struct _GtkColorSelectionDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkFontSelection GtkFontSelection;
typedef struct _GtkFontSelectionPrivate GtkFontSelectionPrivate;
typedef struct _GtkFontSelectionClass GtkFontSelectionClass;
typedef struct _GtkFontSelectionDialog GtkFontSelectionDialog;
typedef struct _GtkFontSelectionDialogPrivate GtkFontSelectionDialogPrivate;
typedef struct _GtkFontSelectionDialogClass GtkFontSelectionDialogClass;
struct _GtkFontSelection
{
  GtkBox parent_instance;
  GtkFontSelectionPrivate *priv;
};
struct _GtkFontSelectionClass
{
  GtkBoxClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkFontSelectionDialog
{
  GtkDialog parent_instance;
  GtkFontSelectionDialogPrivate *priv;
};
struct _GtkFontSelectionDialogClass
{
  GtkDialogClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkHandleBox GtkHandleBox;
typedef struct _GtkHandleBoxPrivate GtkHandleBoxPrivate;
typedef struct _GtkHandleBoxClass GtkHandleBoxClass;
struct _GtkHandleBox
{
  GtkBin bin;
  GtkHandleBoxPrivate *priv;
};
struct _GtkHandleBoxClass
{
  GtkBinClass parent_class;
  void (*child_attached) (GtkHandleBox *handle_box,
     GtkWidget *child);
  void (*child_detached) (GtkHandleBox *handle_box,
     GtkWidget *child);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkHButtonBox GtkHButtonBox;
typedef struct _GtkHButtonBoxClass GtkHButtonBoxClass;
struct _GtkHButtonBox
{
  GtkButtonBox button_box;
};
struct _GtkHButtonBoxClass
{
  GtkButtonBoxClass parent_class;
};
typedef struct _GtkHBox GtkHBox;
typedef struct _GtkHBoxClass GtkHBoxClass;
struct _GtkHBox
{
  GtkBox box;
};
struct _GtkHBoxClass
{
  GtkBoxClass parent_class;
};
typedef struct _GtkHPaned GtkHPaned;
typedef struct _GtkHPanedClass GtkHPanedClass;
struct _GtkHPaned
{
  GtkPaned paned;
};
struct _GtkHPanedClass
{
  GtkPanedClass parent_class;
};
typedef struct _GtkHSV GtkHSV;
typedef struct _GtkHSVPrivate GtkHSVPrivate;
typedef struct _GtkHSVClass GtkHSVClass;
struct _GtkHSV
{
  GtkWidget parent_instance;
  GtkHSVPrivate *priv;
};
struct _GtkHSVClass
{
  GtkWidgetClass parent_class;
  void (* changed) (GtkHSV *hsv);
  void (* move) (GtkHSV *hsv,
                    GtkDirectionType type);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkHScale GtkHScale;
typedef struct _GtkHScaleClass GtkHScaleClass;
struct _GtkHScale
{
  GtkScale scale;
};
struct _GtkHScaleClass
{
  GtkScaleClass parent_class;
};
typedef struct _GtkHScrollbar GtkHScrollbar;
typedef struct _GtkHScrollbarClass GtkHScrollbarClass;
struct _GtkHScrollbar
{
  GtkScrollbar scrollbar;
};
struct _GtkHScrollbarClass
{
  GtkScrollbarClass parent_class;
};
typedef struct _GtkHSeparator GtkHSeparator;
typedef struct _GtkHSeparatorClass GtkHSeparatorClass;
struct _GtkHSeparator
{
  GtkSeparator separator;
};
struct _GtkHSeparatorClass
{
  GtkSeparatorClass parent_class;
};
typedef struct _GtkImageMenuItem GtkImageMenuItem;
typedef struct _GtkImageMenuItemPrivate GtkImageMenuItemPrivate;
typedef struct _GtkImageMenuItemClass GtkImageMenuItemClass;
struct _GtkImageMenuItem
{
  GtkMenuItem menu_item;
  GtkImageMenuItemPrivate *priv;
};
struct _GtkImageMenuItemClass
{
  GtkMenuItemClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkNumerableIcon GtkNumerableIcon;
typedef struct _GtkNumerableIconClass GtkNumerableIconClass;
typedef struct _GtkNumerableIconPrivate GtkNumerableIconPrivate;
struct _GtkNumerableIcon {
  GEmblemedIcon parent;
  GtkNumerableIconPrivate *priv;
};
struct _GtkNumerableIconClass {
  GEmblemedIconClass parent_class;
  gpointer padding[16];
};
typedef struct _GtkToggleAction GtkToggleAction;
typedef struct _GtkToggleActionPrivate GtkToggleActionPrivate;
typedef struct _GtkToggleActionClass GtkToggleActionClass;
struct _GtkToggleAction
{
  GtkAction parent;
  GtkToggleActionPrivate *private_data;
};
struct _GtkToggleActionClass
{
  GtkActionClass parent_class;
  void (* toggled) (GtkToggleAction *action);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef struct _GtkRadioAction GtkRadioAction;
typedef struct _GtkRadioActionPrivate GtkRadioActionPrivate;
typedef struct _GtkRadioActionClass GtkRadioActionClass;
struct _GtkRadioAction
{
  GtkToggleAction parent;
  GtkRadioActionPrivate *private_data;
};
struct _GtkRadioActionClass
{
  GtkToggleActionClass parent_class;
  void (* changed) (GtkRadioAction *action, GtkRadioAction *current);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkRcContext GtkRcContext;
typedef struct _GtkRcStyleClass GtkRcStyleClass;
typedef enum
{
  GTK_RC_FG = 1 << 0,
  GTK_RC_BG = 1 << 1,
  GTK_RC_TEXT = 1 << 2,
  GTK_RC_BASE = 1 << 3
} GtkRcFlags;
struct _GtkRcStyle
{
  GObject parent_instance;
  gchar *name;
  gchar *bg_pixmap_name[5];
  PangoFontDescription *font_desc;
  GtkRcFlags color_flags[5];
  GdkColor fg[5];
  GdkColor bg[5];
  GdkColor text[5];
  GdkColor base[5];
  gint xthickness;
  gint ythickness;
  GArray *rc_properties;
  GSList *rc_style_lists;
  GSList *icon_factories;
  guint engine_specified : 1;
};
struct _GtkRcStyleClass
{
  GObjectClass parent_class;
  GtkRcStyle * (*create_rc_style) (GtkRcStyle *rc_style);
  guint (*parse) (GtkRcStyle *rc_style,
                       GtkSettings *settings,
                       GScanner *scanner);
  void (*merge) (GtkRcStyle *dest,
                       GtkRcStyle *src);
  GtkStyle * (*create_style) (GtkRcStyle *rc_style);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

typedef enum {
  GTK_RC_TOKEN_INVALID = G_TOKEN_LAST,
  GTK_RC_TOKEN_INCLUDE,
  GTK_RC_TOKEN_NORMAL,
  GTK_RC_TOKEN_ACTIVE,
  GTK_RC_TOKEN_PRELIGHT,
  GTK_RC_TOKEN_SELECTED,
  GTK_RC_TOKEN_INSENSITIVE,
  GTK_RC_TOKEN_FG,
  GTK_RC_TOKEN_BG,
  GTK_RC_TOKEN_TEXT,
  GTK_RC_TOKEN_BASE,
  GTK_RC_TOKEN_XTHICKNESS,
  GTK_RC_TOKEN_YTHICKNESS,
  GTK_RC_TOKEN_FONT,
  GTK_RC_TOKEN_FONTSET,
  GTK_RC_TOKEN_FONT_NAME,
  GTK_RC_TOKEN_BG_PIXMAP,
  GTK_RC_TOKEN_PIXMAP_PATH,
  GTK_RC_TOKEN_STYLE,
  GTK_RC_TOKEN_BINDING,
  GTK_RC_TOKEN_BIND,
  GTK_RC_TOKEN_WIDGET,
  GTK_RC_TOKEN_WIDGET_CLASS,
  GTK_RC_TOKEN_CLASS,
  GTK_RC_TOKEN_LOWEST,
  GTK_RC_TOKEN_GTK,
  GTK_RC_TOKEN_APPLICATION,
  GTK_RC_TOKEN_THEME,
  GTK_RC_TOKEN_RC,
  GTK_RC_TOKEN_HIGHEST,
  GTK_RC_TOKEN_ENGINE,
  GTK_RC_TOKEN_MODULE_PATH,
  GTK_RC_TOKEN_IM_MODULE_PATH,
  GTK_RC_TOKEN_IM_MODULE_FILE,
  GTK_RC_TOKEN_STOCK,
  GTK_RC_TOKEN_LTR,
  GTK_RC_TOKEN_RTL,
  GTK_RC_TOKEN_COLOR,
  GTK_RC_TOKEN_UNBIND,
  GTK_RC_TOKEN_LAST
} GtkRcTokenType;
typedef enum
{
  GTK_PATH_PRIO_LOWEST = 0,
  GTK_PATH_PRIO_GTK = 4,
  GTK_PATH_PRIO_APPLICATION = 8,
  GTK_PATH_PRIO_THEME = 10,
  GTK_PATH_PRIO_RC = 12,
  GTK_PATH_PRIO_HIGHEST = 15
} GtkPathPriorityType;
typedef enum
{
  GTK_PATH_WIDGET,
  GTK_PATH_WIDGET_CLASS,
  GTK_PATH_CLASS
} GtkPathType;
struct _GtkRcProperty
{
  GQuark type_name;
  GQuark property_name;
  gchar *origin;
  GValue value;
};
typedef struct _GtkRecentAction GtkRecentAction;
typedef struct _GtkRecentActionPrivate GtkRecentActionPrivate;
typedef struct _GtkRecentActionClass GtkRecentActionClass;
struct _GtkRecentAction
{
  GtkAction parent_instance;
  GtkRecentActionPrivate *priv;
};
struct _GtkRecentActionClass
{
  GtkActionClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkStatusIcon GtkStatusIcon;
typedef struct _GtkStatusIconClass GtkStatusIconClass;
typedef struct _GtkStatusIconPrivate GtkStatusIconPrivate;
struct _GtkStatusIcon
{
  GObject parent_instance;
  GtkStatusIconPrivate *priv;
};
struct _GtkStatusIconClass
{
  GObjectClass parent_class;
  void (* activate) (GtkStatusIcon *status_icon);
  void (* popup_menu) (GtkStatusIcon *status_icon,
                                     guint button,
                                     guint32 activate_time);
  gboolean (* size_changed) (GtkStatusIcon *status_icon,
                                     gint size);
  gboolean (* button_press_event) (GtkStatusIcon *status_icon,
                                     GdkEventButton *event);
  gboolean (* button_release_event) (GtkStatusIcon *status_icon,
                                     GdkEventButton *event);
  gboolean (* scroll_event) (GtkStatusIcon *status_icon,
                                     GdkEventScroll *event);
  gboolean (* query_tooltip) (GtkStatusIcon *status_icon,
                                     gint x,
                                     gint y,
                                     gboolean keyboard_mode,
                                     GtkTooltip *tooltip);
  void (*__gtk_reserved1) (void);
  void (*__gtk_reserved2) (void);
  void (*__gtk_reserved3) (void);
  void (*__gtk_reserved4) (void);
};
typedef struct _GtkStyleClass GtkStyleClass;
typedef struct _GtkThemeEngine GtkThemeEngine;
typedef struct _GtkRcProperty GtkRcProperty;
typedef enum
{
  GTK_EXPANDER_COLLAPSED,
  GTK_EXPANDER_SEMI_COLLAPSED,
  GTK_EXPANDER_SEMI_EXPANDED,
  GTK_EXPANDER_EXPANDED
} GtkExpanderStyle;
struct _GtkStyle
{
  GObject parent_instance;
  GdkColor fg[5];
  GdkColor bg[5];
  GdkColor light[5];
  GdkColor dark[5];
  GdkColor mid[5];
  GdkColor text[5];
  GdkColor base[5];
  GdkColor text_aa[5];
  GdkColor black;
  GdkColor white;
  PangoFontDescription *font_desc;
  gint xthickness;
  gint ythickness;
  cairo_pattern_t *background[5];
  gint attach_count;
  GdkVisual *visual;
  PangoFontDescription *private_font_desc;
  GtkRcStyle *rc_style;
  GSList *styles;
  GArray *property_cache;
  GSList *icon_factories;
};
struct _GtkStyleClass
{
  GObjectClass parent_class;
  void (*realize) (GtkStyle *style);
  void (*unrealize) (GtkStyle *style);
  void (*copy) (GtkStyle *style,
                                 GtkStyle *src);
  GtkStyle *(*clone) (GtkStyle *style);
  void (*init_from_rc) (GtkStyle *style,
                                 GtkRcStyle *rc_style);
  void (*set_background) (GtkStyle *style,
                                 GdkWindow *window,
                                 GtkStateType state_type);
  GdkPixbuf * (* render_icon) (GtkStyle *style,
                                 const GtkIconSource *source,
                                 GtkTextDirection direction,
                                 GtkStateType state,
                                 GtkIconSize size,
                                 GtkWidget *widget,
                                 const gchar *detail);
  void (*draw_hline) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x1,
                                 gint x2,
                                 gint y);
  void (*draw_vline) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint y1_,
                                 gint y2_,
                                 gint x);
  void (*draw_shadow) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_arrow) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 GtkArrowType arrow_type,
                                 gboolean fill,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_diamond) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_box) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_flat_box) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_check) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_option) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_tab) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_shadow_gap) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height,
                                 GtkPositionType gap_side,
                                 gint gap_x,
                                 gint gap_width);
  void (*draw_box_gap) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height,
                                 GtkPositionType gap_side,
                                 gint gap_x,
                                 gint gap_width);
  void (*draw_extension) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height,
                                 GtkPositionType gap_side);
  void (*draw_focus) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_slider) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height,
                                 GtkOrientation orientation);
  void (*draw_handle) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkShadowType shadow_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height,
                                 GtkOrientation orientation);
  void (*draw_expander) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 GtkExpanderStyle expander_style);
  void (*draw_layout) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 gboolean use_text,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 gint x,
                                 gint y,
                                 PangoLayout *layout);
  void (*draw_resize_grip) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 GdkWindowEdge edge,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*draw_spinner) (GtkStyle *style,
                                 cairo_t *cr,
                                 GtkStateType state_type,
                                 GtkWidget *widget,
                                 const gchar *detail,
                                 guint step,
                                 gint x,
                                 gint y,
                                 gint width,
                                 gint height);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
  void (*_gtk_reserved8) (void);
  void (*_gtk_reserved9) (void);
  void (*_gtk_reserved10) (void);
  void (*_gtk_reserved11) (void);
};

typedef struct _GtkTable GtkTable;
typedef struct _GtkTablePrivate GtkTablePrivate;
typedef struct _GtkTableClass GtkTableClass;
typedef struct _GtkTableChild GtkTableChild;
typedef struct _GtkTableRowCol GtkTableRowCol;
struct _GtkTable
{
  GtkContainer container;
  GtkTablePrivate *priv;
};
struct _GtkTableClass
{
  GtkContainerClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
struct _GtkTableChild
{
  GtkWidget *widget;
  guint16 left_attach;
  guint16 right_attach;
  guint16 top_attach;
  guint16 bottom_attach;
  guint16 xpadding;
  guint16 ypadding;
  guint xexpand : 1;
  guint yexpand : 1;
  guint xshrink : 1;
  guint yshrink : 1;
  guint xfill : 1;
  guint yfill : 1;
};
struct _GtkTableRowCol
{
  guint16 requisition;
  guint16 allocation;
  guint16 spacing;
  guint need_expand : 1;
  guint need_shrink : 1;
  guint expand : 1;
  guint shrink : 1;
  guint empty : 1;
};
typedef enum
{
  GTK_EXPAND = 1 << 0,
  GTK_SHRINK = 1 << 1,
  GTK_FILL = 1 << 2
} GtkAttachOptions;
typedef struct _GtkTearoffMenuItem GtkTearoffMenuItem;
typedef struct _GtkTearoffMenuItemPrivate GtkTearoffMenuItemPrivate;
typedef struct _GtkTearoffMenuItemClass GtkTearoffMenuItemClass;
struct _GtkTearoffMenuItem
{
  GtkMenuItem menu_item;
  GtkTearoffMenuItemPrivate *priv;
};
struct _GtkTearoffMenuItemClass
{
  GtkMenuItemClass parent_class;
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef struct _GtkThemingEngine GtkThemingEngine;
typedef struct GtkThemingEnginePrivate GtkThemingEnginePrivate;
typedef struct _GtkThemingEngineClass GtkThemingEngineClass;
struct _GtkThemingEngine
{
  GObject parent_object;
  GtkThemingEnginePrivate *priv;
};
struct _GtkThemingEngineClass
{
  GObjectClass parent_class;
  void (* render_line) (GtkThemingEngine *engine,
                        cairo_t *cr,
                        gdouble x0,
                        gdouble y0,
                        gdouble x1,
                        gdouble y1);
  void (* render_background) (GtkThemingEngine *engine,
                              cairo_t *cr,
                              gdouble x,
                              gdouble y,
                              gdouble width,
                              gdouble height);
  void (* render_frame) (GtkThemingEngine *engine,
                         cairo_t *cr,
                         gdouble x,
                         gdouble y,
                         gdouble width,
                         gdouble height);
  void (* render_frame_gap) (GtkThemingEngine *engine,
                             cairo_t *cr,
                             gdouble x,
                             gdouble y,
                             gdouble width,
                             gdouble height,
                             GtkPositionType gap_side,
                             gdouble xy0_gap,
                             gdouble xy1_gap);
  void (* render_extension) (GtkThemingEngine *engine,
                             cairo_t *cr,
                             gdouble x,
                             gdouble y,
                             gdouble width,
                             gdouble height,
                             GtkPositionType gap_side);
  void (* render_check) (GtkThemingEngine *engine,
                         cairo_t *cr,
                         gdouble x,
                         gdouble y,
                         gdouble width,
                         gdouble height);
  void (* render_option) (GtkThemingEngine *engine,
                          cairo_t *cr,
                          gdouble x,
                          gdouble y,
                          gdouble width,
                          gdouble height);
  void (* render_arrow) (GtkThemingEngine *engine,
                         cairo_t *cr,
                         gdouble angle,
                         gdouble x,
                         gdouble y,
                         gdouble size);
  void (* render_expander) (GtkThemingEngine *engine,
                            cairo_t *cr,
                            gdouble x,
                            gdouble y,
                            gdouble width,
                            gdouble height);
  void (* render_focus) (GtkThemingEngine *engine,
                         cairo_t *cr,
                         gdouble x,
                         gdouble y,
                         gdouble width,
                         gdouble height);
  void (* render_layout) (GtkThemingEngine *engine,
                          cairo_t *cr,
                          gdouble x,
                          gdouble y,
                          PangoLayout *layout);
  void (* render_slider) (GtkThemingEngine *engine,
                          cairo_t *cr,
                          gdouble x,
                          gdouble y,
                          gdouble width,
                          gdouble height,
                          GtkOrientation orientation);
  void (* render_handle) (GtkThemingEngine *engine,
                             cairo_t *cr,
                             gdouble x,
                             gdouble y,
                             gdouble width,
                             gdouble height);
  void (* render_activity) (GtkThemingEngine *engine,
                            cairo_t *cr,
                            gdouble x,
                            gdouble y,
                            gdouble width,
                            gdouble height);
  GdkPixbuf * (* render_icon_pixbuf) (GtkThemingEngine *engine,
                                      const GtkIconSource *source,
                                      GtkIconSize size);
  void (* render_icon) (GtkThemingEngine *engine,
                        cairo_t *cr,
   GdkPixbuf *pixbuf,
                        gdouble x,
                        gdouble y);
  void (* render_icon_surface) (GtkThemingEngine *engine,
    cairo_t *cr,
    cairo_surface_t *surface,
    gdouble x,
    gdouble y);
  gpointer padding[14];
};
typedef struct _GtkUIManager GtkUIManager;
typedef struct _GtkUIManagerClass GtkUIManagerClass;
typedef struct _GtkUIManagerPrivate GtkUIManagerPrivate;
struct _GtkUIManager {
  GObject parent;
  GtkUIManagerPrivate *private_data;
};
struct _GtkUIManagerClass {
  GObjectClass parent_class;
  void (* add_widget) (GtkUIManager *manager,
                             GtkWidget *widget);
  void (* actions_changed) (GtkUIManager *manager);
  void (* connect_proxy) (GtkUIManager *manager,
        GtkAction *action,
        GtkWidget *proxy);
  void (* disconnect_proxy) (GtkUIManager *manager,
        GtkAction *action,
        GtkWidget *proxy);
  void (* pre_activate) (GtkUIManager *manager,
        GtkAction *action);
  void (* post_activate) (GtkUIManager *manager,
        GtkAction *action);
  GtkWidget * (* get_widget) (GtkUIManager *manager,
                              const gchar *path);
  GtkAction * (* get_action) (GtkUIManager *manager,
                              const gchar *path);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};
typedef enum {
  GTK_UI_MANAGER_AUTO = 0,
  GTK_UI_MANAGER_MENUBAR = 1 << 0,
  GTK_UI_MANAGER_MENU = 1 << 1,
  GTK_UI_MANAGER_TOOLBAR = 1 << 2,
  GTK_UI_MANAGER_PLACEHOLDER = 1 << 3,
  GTK_UI_MANAGER_POPUP = 1 << 4,
  GTK_UI_MANAGER_MENUITEM = 1 << 5,
  GTK_UI_MANAGER_TOOLITEM = 1 << 6,
  GTK_UI_MANAGER_SEPARATOR = 1 << 7,
  GTK_UI_MANAGER_ACCELERATOR = 1 << 8,
  GTK_UI_MANAGER_POPUP_WITH_ACCELS = 1 << 9
} GtkUIManagerItemType;
typedef struct _GtkVButtonBox GtkVButtonBox;
typedef struct _GtkVButtonBoxClass GtkVButtonBoxClass;
struct _GtkVButtonBox
{
  GtkButtonBox button_box;
};
struct _GtkVButtonBoxClass
{
  GtkButtonBoxClass parent_class;
};
typedef struct _GtkVBox GtkVBox;
typedef struct _GtkVBoxClass GtkVBoxClass;
struct _GtkVBox
{
  GtkBox box;
};
struct _GtkVBoxClass
{
  GtkBoxClass parent_class;
};
typedef struct _GtkVPaned GtkVPaned;
typedef struct _GtkVPanedClass GtkVPanedClass;
struct _GtkVPaned
{
  GtkPaned paned;
};
struct _GtkVPanedClass
{
  GtkPanedClass parent_class;
};
typedef struct _GtkVScale GtkVScale;
typedef struct _GtkVScaleClass GtkVScaleClass;
struct _GtkVScale
{
  GtkScale scale;
};
struct _GtkVScaleClass
{
  GtkScaleClass parent_class;
};
typedef struct _GtkVScrollbar GtkVScrollbar;
typedef struct _GtkVScrollbarClass GtkVScrollbarClass;
struct _GtkVScrollbar
{
  GtkScrollbar scrollbar;
};
struct _GtkVScrollbarClass
{
  GtkScrollbarClass parent_class;
};
typedef struct _GtkVSeparator GtkVSeparator;
typedef struct _GtkVSeparatorClass GtkVSeparatorClass;
struct _GtkVSeparator
{
  GtkSeparator separator;
};
struct _GtkVSeparatorClass
{
  GtkSeparatorClass parent_class;
};
typedef GtkAccessible *GtkAccessible_autoptr; typedef GList *GtkAccessible_listautoptr; typedef GSList *GtkAccessible_slistautoptr; typedef GQueue *GtkAccessible_queueautoptr;
 
typedef GtkActionBar *GtkActionBar_autoptr; typedef GList *GtkActionBar_listautoptr; typedef GSList *GtkActionBar_slistautoptr; typedef GQueue *GtkActionBar_queueautoptr;
 
typedef GtkActionable *GtkActionable_autoptr; typedef GList *GtkActionable_listautoptr; typedef GSList *GtkActionable_slistautoptr; typedef GQueue *GtkActionable_queueautoptr;
 
typedef GtkAdjustment *GtkAdjustment_autoptr; typedef GList *GtkAdjustment_listautoptr; typedef GSList *GtkAdjustment_slistautoptr; typedef GQueue *GtkAdjustment_queueautoptr;
 
typedef GtkAppChooser *GtkAppChooser_autoptr; typedef GList *GtkAppChooser_listautoptr; typedef GSList *GtkAppChooser_slistautoptr; typedef GQueue *GtkAppChooser_queueautoptr;
 
typedef GtkAppChooserButton *GtkAppChooserButton_autoptr; typedef GList *GtkAppChooserButton_listautoptr; typedef GSList *GtkAppChooserButton_slistautoptr; typedef GQueue *GtkAppChooserButton_queueautoptr;
 
typedef GtkAppChooserDialog *GtkAppChooserDialog_autoptr; typedef GList *GtkAppChooserDialog_listautoptr; typedef GSList *GtkAppChooserDialog_slistautoptr; typedef GQueue *GtkAppChooserDialog_queueautoptr;
 
typedef GtkAppChooserWidget *GtkAppChooserWidget_autoptr; typedef GList *GtkAppChooserWidget_listautoptr; typedef GSList *GtkAppChooserWidget_slistautoptr; typedef GQueue *GtkAppChooserWidget_queueautoptr;
 
typedef GtkApplicationWindow *GtkApplicationWindow_autoptr; typedef GList *GtkApplicationWindow_listautoptr; typedef GSList *GtkApplicationWindow_slistautoptr; typedef GQueue *GtkApplicationWindow_queueautoptr;
 
typedef GtkAspectFrame *GtkAspectFrame_autoptr; typedef GList *GtkAspectFrame_listautoptr; typedef GSList *GtkAspectFrame_slistautoptr; typedef GQueue *GtkAspectFrame_queueautoptr;
 
typedef GtkAssistant *GtkAssistant_autoptr; typedef GList *GtkAssistant_listautoptr; typedef GSList *GtkAssistant_slistautoptr; typedef GQueue *GtkAssistant_queueautoptr;
 
typedef GtkBox *GtkBox_autoptr; typedef GList *GtkBox_listautoptr; typedef GSList *GtkBox_slistautoptr; typedef GQueue *GtkBox_queueautoptr;
 
typedef GtkBuildable *GtkBuildable_autoptr; typedef GList *GtkBuildable_listautoptr; typedef GSList *GtkBuildable_slistautoptr; typedef GQueue *GtkBuildable_queueautoptr;
 
typedef GtkBuilder *GtkBuilder_autoptr; typedef GList *GtkBuilder_listautoptr; typedef GSList *GtkBuilder_slistautoptr; typedef GQueue *GtkBuilder_queueautoptr;
 
typedef GtkButton *GtkButton_autoptr; typedef GList *GtkButton_listautoptr; typedef GSList *GtkButton_slistautoptr; typedef GQueue *GtkButton_queueautoptr;
 
typedef GtkButtonBox *GtkButtonBox_autoptr; typedef GList *GtkButtonBox_listautoptr; typedef GSList *GtkButtonBox_slistautoptr; typedef GQueue *GtkButtonBox_queueautoptr;
 
typedef GtkCalendar *GtkCalendar_autoptr; typedef GList *GtkCalendar_listautoptr; typedef GSList *GtkCalendar_slistautoptr; typedef GQueue *GtkCalendar_queueautoptr;
 
typedef GtkCellArea *GtkCellArea_autoptr; typedef GList *GtkCellArea_listautoptr; typedef GSList *GtkCellArea_slistautoptr; typedef GQueue *GtkCellArea_queueautoptr;
 
typedef GtkCellAreaBox *GtkCellAreaBox_autoptr; typedef GList *GtkCellAreaBox_listautoptr; typedef GSList *GtkCellAreaBox_slistautoptr; typedef GQueue *GtkCellAreaBox_queueautoptr;
 
typedef GtkCellAreaContext *GtkCellAreaContext_autoptr; typedef GList *GtkCellAreaContext_listautoptr; typedef GSList *GtkCellAreaContext_slistautoptr; typedef GQueue *GtkCellAreaContext_queueautoptr;
 
typedef GtkCellEditable *GtkCellEditable_autoptr; typedef GList *GtkCellEditable_listautoptr; typedef GSList *GtkCellEditable_slistautoptr; typedef GQueue *GtkCellEditable_queueautoptr;
 
typedef GtkCellLayout *GtkCellLayout_autoptr; typedef GList *GtkCellLayout_listautoptr; typedef GSList *GtkCellLayout_slistautoptr; typedef GQueue *GtkCellLayout_queueautoptr;
 
typedef GtkCellRenderer *GtkCellRenderer_autoptr; typedef GList *GtkCellRenderer_listautoptr; typedef GSList *GtkCellRenderer_slistautoptr; typedef GQueue *GtkCellRenderer_queueautoptr;
 
typedef GtkCellRendererAccel *GtkCellRendererAccel_autoptr; typedef GList *GtkCellRendererAccel_listautoptr; typedef GSList *GtkCellRendererAccel_slistautoptr; typedef GQueue *GtkCellRendererAccel_queueautoptr;
 
typedef GtkCellRendererCombo *GtkCellRendererCombo_autoptr; typedef GList *GtkCellRendererCombo_listautoptr; typedef GSList *GtkCellRendererCombo_slistautoptr; typedef GQueue *GtkCellRendererCombo_queueautoptr;
 
typedef GtkCellRendererPixbuf *GtkCellRendererPixbuf_autoptr; typedef GList *GtkCellRendererPixbuf_listautoptr; typedef GSList *GtkCellRendererPixbuf_slistautoptr; typedef GQueue *GtkCellRendererPixbuf_queueautoptr;
 
typedef GtkCellRendererProgress *GtkCellRendererProgress_autoptr; typedef GList *GtkCellRendererProgress_listautoptr; typedef GSList *GtkCellRendererProgress_slistautoptr; typedef GQueue *GtkCellRendererProgress_queueautoptr;
 
typedef GtkCellRendererSpin *GtkCellRendererSpin_autoptr; typedef GList *GtkCellRendererSpin_listautoptr; typedef GSList *GtkCellRendererSpin_slistautoptr; typedef GQueue *GtkCellRendererSpin_queueautoptr;
 
typedef GtkCellRendererSpinner *GtkCellRendererSpinner_autoptr; typedef GList *GtkCellRendererSpinner_listautoptr; typedef GSList *GtkCellRendererSpinner_slistautoptr; typedef GQueue *GtkCellRendererSpinner_queueautoptr;
 
typedef GtkCellRendererText *GtkCellRendererText_autoptr; typedef GList *GtkCellRendererText_listautoptr; typedef GSList *GtkCellRendererText_slistautoptr; typedef GQueue *GtkCellRendererText_queueautoptr;
 
typedef GtkCellRendererToggle *GtkCellRendererToggle_autoptr; typedef GList *GtkCellRendererToggle_listautoptr; typedef GSList *GtkCellRendererToggle_slistautoptr; typedef GQueue *GtkCellRendererToggle_queueautoptr;
 
typedef GtkCellView *GtkCellView_autoptr; typedef GList *GtkCellView_listautoptr; typedef GSList *GtkCellView_slistautoptr; typedef GQueue *GtkCellView_queueautoptr;
 
typedef GtkCheckButton *GtkCheckButton_autoptr; typedef GList *GtkCheckButton_listautoptr; typedef GSList *GtkCheckButton_slistautoptr; typedef GQueue *GtkCheckButton_queueautoptr;
 
typedef GtkCheckMenuItem *GtkCheckMenuItem_autoptr; typedef GList *GtkCheckMenuItem_listautoptr; typedef GSList *GtkCheckMenuItem_slistautoptr; typedef GQueue *GtkCheckMenuItem_queueautoptr;
 
typedef GtkClipboard *GtkClipboard_autoptr; typedef GList *GtkClipboard_listautoptr; typedef GSList *GtkClipboard_slistautoptr; typedef GQueue *GtkClipboard_queueautoptr;
 
typedef GtkColorButton *GtkColorButton_autoptr; typedef GList *GtkColorButton_listautoptr; typedef GSList *GtkColorButton_slistautoptr; typedef GQueue *GtkColorButton_queueautoptr;
 
typedef GtkColorChooser *GtkColorChooser_autoptr; typedef GList *GtkColorChooser_listautoptr; typedef GSList *GtkColorChooser_slistautoptr; typedef GQueue *GtkColorChooser_queueautoptr;
 
typedef GtkColorChooserDialog *GtkColorChooserDialog_autoptr; typedef GList *GtkColorChooserDialog_listautoptr; typedef GSList *GtkColorChooserDialog_slistautoptr; typedef GQueue *GtkColorChooserDialog_queueautoptr;
 
typedef GtkColorChooserWidget *GtkColorChooserWidget_autoptr; typedef GList *GtkColorChooserWidget_listautoptr; typedef GSList *GtkColorChooserWidget_slistautoptr; typedef GQueue *GtkColorChooserWidget_queueautoptr;
 
typedef GtkComboBox *GtkComboBox_autoptr; typedef GList *GtkComboBox_listautoptr; typedef GSList *GtkComboBox_slistautoptr; typedef GQueue *GtkComboBox_queueautoptr;
 
typedef GtkComboBoxText *GtkComboBoxText_autoptr; typedef GList *GtkComboBoxText_listautoptr; typedef GSList *GtkComboBoxText_slistautoptr; typedef GQueue *GtkComboBoxText_queueautoptr;
 
typedef GtkCssProvider *GtkCssProvider_autoptr; typedef GList *GtkCssProvider_listautoptr; typedef GSList *GtkCssProvider_slistautoptr; typedef GQueue *GtkCssProvider_queueautoptr;
 
typedef GtkDrawingArea *GtkDrawingArea_autoptr; typedef GList *GtkDrawingArea_listautoptr; typedef GSList *GtkDrawingArea_slistautoptr; typedef GQueue *GtkDrawingArea_queueautoptr;
 
typedef GtkEditable *GtkEditable_autoptr; typedef GList *GtkEditable_listautoptr; typedef GSList *GtkEditable_slistautoptr; typedef GQueue *GtkEditable_queueautoptr;
 
typedef GtkEntry *GtkEntry_autoptr; typedef GList *GtkEntry_listautoptr; typedef GSList *GtkEntry_slistautoptr; typedef GQueue *GtkEntry_queueautoptr;
 
typedef GtkEntryBuffer *GtkEntryBuffer_autoptr; typedef GList *GtkEntryBuffer_listautoptr; typedef GSList *GtkEntryBuffer_slistautoptr; typedef GQueue *GtkEntryBuffer_queueautoptr;
 
typedef GtkEntryCompletion *GtkEntryCompletion_autoptr; typedef GList *GtkEntryCompletion_listautoptr; typedef GSList *GtkEntryCompletion_slistautoptr; typedef GQueue *GtkEntryCompletion_queueautoptr;
 
typedef GtkEventBox *GtkEventBox_autoptr; typedef GList *GtkEventBox_listautoptr; typedef GSList *GtkEventBox_slistautoptr; typedef GQueue *GtkEventBox_queueautoptr;
 
typedef GtkEventController *GtkEventController_autoptr; typedef GList *GtkEventController_listautoptr; typedef GSList *GtkEventController_slistautoptr; typedef GQueue *GtkEventController_queueautoptr;
 
typedef GtkExpander *GtkExpander_autoptr; typedef GList *GtkExpander_listautoptr; typedef GSList *GtkExpander_slistautoptr; typedef GQueue *GtkExpander_queueautoptr;
 
typedef GtkFileChooserButton *GtkFileChooserButton_autoptr; typedef GList *GtkFileChooserButton_listautoptr; typedef GSList *GtkFileChooserButton_slistautoptr; typedef GQueue *GtkFileChooserButton_queueautoptr;
 
typedef GtkFileChooserDialog *GtkFileChooserDialog_autoptr; typedef GList *GtkFileChooserDialog_listautoptr; typedef GSList *GtkFileChooserDialog_slistautoptr; typedef GQueue *GtkFileChooserDialog_queueautoptr;
 
typedef GtkFileChooserWidget *GtkFileChooserWidget_autoptr; typedef GList *GtkFileChooserWidget_listautoptr; typedef GSList *GtkFileChooserWidget_slistautoptr; typedef GQueue *GtkFileChooserWidget_queueautoptr;
 
typedef GtkFileFilter *GtkFileFilter_autoptr; typedef GList *GtkFileFilter_listautoptr; typedef GSList *GtkFileFilter_slistautoptr; typedef GQueue *GtkFileFilter_queueautoptr;
 
typedef GtkFixed *GtkFixed_autoptr; typedef GList *GtkFixed_listautoptr; typedef GSList *GtkFixed_slistautoptr; typedef GQueue *GtkFixed_queueautoptr;
 
typedef GtkFlowBox *GtkFlowBox_autoptr; typedef GList *GtkFlowBox_listautoptr; typedef GSList *GtkFlowBox_slistautoptr; typedef GQueue *GtkFlowBox_queueautoptr;
 
typedef GtkFlowBoxChild *GtkFlowBoxChild_autoptr; typedef GList *GtkFlowBoxChild_listautoptr; typedef GSList *GtkFlowBoxChild_slistautoptr; typedef GQueue *GtkFlowBoxChild_queueautoptr;
 
typedef GtkFontButton *GtkFontButton_autoptr; typedef GList *GtkFontButton_listautoptr; typedef GSList *GtkFontButton_slistautoptr; typedef GQueue *GtkFontButton_queueautoptr;
 
typedef GtkFontChooser *GtkFontChooser_autoptr; typedef GList *GtkFontChooser_listautoptr; typedef GSList *GtkFontChooser_slistautoptr; typedef GQueue *GtkFontChooser_queueautoptr;
 
typedef GtkFontChooserDialog *GtkFontChooserDialog_autoptr; typedef GList *GtkFontChooserDialog_listautoptr; typedef GSList *GtkFontChooserDialog_slistautoptr; typedef GQueue *GtkFontChooserDialog_queueautoptr;
 
typedef GtkFontChooserWidget *GtkFontChooserWidget_autoptr; typedef GList *GtkFontChooserWidget_listautoptr; typedef GSList *GtkFontChooserWidget_slistautoptr; typedef GQueue *GtkFontChooserWidget_queueautoptr;
 
typedef GtkFrame *GtkFrame_autoptr; typedef GList *GtkFrame_listautoptr; typedef GSList *GtkFrame_slistautoptr; typedef GQueue *GtkFrame_queueautoptr;
 
typedef GtkGLArea *GtkGLArea_autoptr; typedef GList *GtkGLArea_listautoptr; typedef GSList *GtkGLArea_slistautoptr; typedef GQueue *GtkGLArea_queueautoptr;
 
typedef GtkGesture *GtkGesture_autoptr; typedef GList *GtkGesture_listautoptr; typedef GSList *GtkGesture_slistautoptr; typedef GQueue *GtkGesture_queueautoptr;
 
typedef GtkGestureDrag *GtkGestureDrag_autoptr; typedef GList *GtkGestureDrag_listautoptr; typedef GSList *GtkGestureDrag_slistautoptr; typedef GQueue *GtkGestureDrag_queueautoptr;
 
typedef GtkGestureLongPress *GtkGestureLongPress_autoptr; typedef GList *GtkGestureLongPress_listautoptr; typedef GSList *GtkGestureLongPress_slistautoptr; typedef GQueue *GtkGestureLongPress_queueautoptr;
 
typedef GtkGestureMultiPress *GtkGestureMultiPress_autoptr; typedef GList *GtkGestureMultiPress_listautoptr; typedef GSList *GtkGestureMultiPress_slistautoptr; typedef GQueue *GtkGestureMultiPress_queueautoptr;
 
typedef GtkGesturePan *GtkGesturePan_autoptr; typedef GList *GtkGesturePan_listautoptr; typedef GSList *GtkGesturePan_slistautoptr; typedef GQueue *GtkGesturePan_queueautoptr;
 
typedef GtkGestureRotate *GtkGestureRotate_autoptr; typedef GList *GtkGestureRotate_listautoptr; typedef GSList *GtkGestureRotate_slistautoptr; typedef GQueue *GtkGestureRotate_queueautoptr;
 
typedef GtkGestureSingle *GtkGestureSingle_autoptr; typedef GList *GtkGestureSingle_listautoptr; typedef GSList *GtkGestureSingle_slistautoptr; typedef GQueue *GtkGestureSingle_queueautoptr;
 
typedef GtkGestureSwipe *GtkGestureSwipe_autoptr; typedef GList *GtkGestureSwipe_listautoptr; typedef GSList *GtkGestureSwipe_slistautoptr; typedef GQueue *GtkGestureSwipe_queueautoptr;
 
typedef GtkGestureZoom *GtkGestureZoom_autoptr; typedef GList *GtkGestureZoom_listautoptr; typedef GSList *GtkGestureZoom_slistautoptr; typedef GQueue *GtkGestureZoom_queueautoptr;
 
typedef GtkGrid *GtkGrid_autoptr; typedef GList *GtkGrid_listautoptr; typedef GSList *GtkGrid_slistautoptr; typedef GQueue *GtkGrid_queueautoptr;
 
typedef GtkHeaderBar *GtkHeaderBar_autoptr; typedef GList *GtkHeaderBar_listautoptr; typedef GSList *GtkHeaderBar_slistautoptr; typedef GQueue *GtkHeaderBar_queueautoptr;
 
typedef GtkIMContext *GtkIMContext_autoptr; typedef GList *GtkIMContext_listautoptr; typedef GSList *GtkIMContext_slistautoptr; typedef GQueue *GtkIMContext_queueautoptr;
 
typedef GtkIMContextSimple *GtkIMContextSimple_autoptr; typedef GList *GtkIMContextSimple_listautoptr; typedef GSList *GtkIMContextSimple_slistautoptr; typedef GQueue *GtkIMContextSimple_queueautoptr;
 
typedef GtkIMMulticontext *GtkIMMulticontext_autoptr; typedef GList *GtkIMMulticontext_listautoptr; typedef GSList *GtkIMMulticontext_slistautoptr; typedef GQueue *GtkIMMulticontext_queueautoptr;
 
typedef GtkIconInfo *GtkIconInfo_autoptr; typedef GList *GtkIconInfo_listautoptr; typedef GSList *GtkIconInfo_slistautoptr; typedef GQueue *GtkIconInfo_queueautoptr;
 
typedef GtkIconTheme *GtkIconTheme_autoptr; typedef GList *GtkIconTheme_listautoptr; typedef GSList *GtkIconTheme_slistautoptr; typedef GQueue *GtkIconTheme_queueautoptr;
 
typedef GtkIconView *GtkIconView_autoptr; typedef GList *GtkIconView_listautoptr; typedef GSList *GtkIconView_slistautoptr; typedef GQueue *GtkIconView_queueautoptr;
 
typedef GtkImage *GtkImage_autoptr; typedef GList *GtkImage_listautoptr; typedef GSList *GtkImage_slistautoptr; typedef GQueue *GtkImage_queueautoptr;
 
typedef GtkInfoBar *GtkInfoBar_autoptr; typedef GList *GtkInfoBar_listautoptr; typedef GSList *GtkInfoBar_slistautoptr; typedef GQueue *GtkInfoBar_queueautoptr;
 
typedef GtkInvisible *GtkInvisible_autoptr; typedef GList *GtkInvisible_listautoptr; typedef GSList *GtkInvisible_slistautoptr; typedef GQueue *GtkInvisible_queueautoptr;
 
typedef GtkLayout *GtkLayout_autoptr; typedef GList *GtkLayout_listautoptr; typedef GSList *GtkLayout_slistautoptr; typedef GQueue *GtkLayout_queueautoptr;
 
typedef GtkLevelBar *GtkLevelBar_autoptr; typedef GList *GtkLevelBar_listautoptr; typedef GSList *GtkLevelBar_slistautoptr; typedef GQueue *GtkLevelBar_queueautoptr;
 
typedef GtkLinkButton *GtkLinkButton_autoptr; typedef GList *GtkLinkButton_listautoptr; typedef GSList *GtkLinkButton_slistautoptr; typedef GQueue *GtkLinkButton_queueautoptr;
 
typedef GtkListStore *GtkListStore_autoptr; typedef GList *GtkListStore_listautoptr; typedef GSList *GtkListStore_slistautoptr; typedef GQueue *GtkListStore_queueautoptr;
 
typedef GtkLockButton *GtkLockButton_autoptr; typedef GList *GtkLockButton_listautoptr; typedef GSList *GtkLockButton_slistautoptr; typedef GQueue *GtkLockButton_queueautoptr;
 
typedef GtkMenuBar *GtkMenuBar_autoptr; typedef GList *GtkMenuBar_listautoptr; typedef GSList *GtkMenuBar_slistautoptr; typedef GQueue *GtkMenuBar_queueautoptr;
 
typedef GtkMenuButton *GtkMenuButton_autoptr; typedef GList *GtkMenuButton_listautoptr; typedef GSList *GtkMenuButton_slistautoptr; typedef GQueue *GtkMenuButton_queueautoptr;
 
typedef GtkMenuItem *GtkMenuItem_autoptr; typedef GList *GtkMenuItem_listautoptr; typedef GSList *GtkMenuItem_slistautoptr; typedef GQueue *GtkMenuItem_queueautoptr;
 
typedef GtkMenuToolButton *GtkMenuToolButton_autoptr; typedef GList *GtkMenuToolButton_listautoptr; typedef GSList *GtkMenuToolButton_slistautoptr; typedef GQueue *GtkMenuToolButton_queueautoptr;
 
typedef GtkMessageDialog *GtkMessageDialog_autoptr; typedef GList *GtkMessageDialog_listautoptr; typedef GSList *GtkMessageDialog_slistautoptr; typedef GQueue *GtkMessageDialog_queueautoptr;
 
typedef GtkMountOperation *GtkMountOperation_autoptr; typedef GList *GtkMountOperation_listautoptr; typedef GSList *GtkMountOperation_slistautoptr; typedef GQueue *GtkMountOperation_queueautoptr;
 
typedef GtkNotebook *GtkNotebook_autoptr; typedef GList *GtkNotebook_listautoptr; typedef GSList *GtkNotebook_slistautoptr; typedef GQueue *GtkNotebook_queueautoptr;
 
typedef GtkOffscreenWindow *GtkOffscreenWindow_autoptr; typedef GList *GtkOffscreenWindow_listautoptr; typedef GSList *GtkOffscreenWindow_slistautoptr; typedef GQueue *GtkOffscreenWindow_queueautoptr;
 
typedef GtkOrientable *GtkOrientable_autoptr; typedef GList *GtkOrientable_listautoptr; typedef GSList *GtkOrientable_slistautoptr; typedef GQueue *GtkOrientable_queueautoptr;
 
typedef GtkOverlay *GtkOverlay_autoptr; typedef GList *GtkOverlay_listautoptr; typedef GSList *GtkOverlay_slistautoptr; typedef GQueue *GtkOverlay_queueautoptr;
 
typedef GtkPageSetup *GtkPageSetup_autoptr; typedef GList *GtkPageSetup_listautoptr; typedef GSList *GtkPageSetup_slistautoptr; typedef GQueue *GtkPageSetup_queueautoptr;
 
typedef GtkPaned *GtkPaned_autoptr; typedef GList *GtkPaned_listautoptr; typedef GSList *GtkPaned_slistautoptr; typedef GQueue *GtkPaned_queueautoptr;
 
typedef GtkPlacesSidebar *GtkPlacesSidebar_autoptr; typedef GList *GtkPlacesSidebar_listautoptr; typedef GSList *GtkPlacesSidebar_slistautoptr; typedef GQueue *GtkPlacesSidebar_queueautoptr;
 
typedef GtkPopover *GtkPopover_autoptr; typedef GList *GtkPopover_listautoptr; typedef GSList *GtkPopover_slistautoptr; typedef GQueue *GtkPopover_queueautoptr;
 
typedef GtkPopoverMenu *GtkPopoverMenu_autoptr; typedef GList *GtkPopoverMenu_listautoptr; typedef GSList *GtkPopoverMenu_slistautoptr; typedef GQueue *GtkPopoverMenu_queueautoptr;
 
typedef GtkPrintContext *GtkPrintContext_autoptr; typedef GList *GtkPrintContext_listautoptr; typedef GSList *GtkPrintContext_slistautoptr; typedef GQueue *GtkPrintContext_queueautoptr;
 
typedef GtkPrintOperation *GtkPrintOperation_autoptr; typedef GList *GtkPrintOperation_listautoptr; typedef GSList *GtkPrintOperation_slistautoptr; typedef GQueue *GtkPrintOperation_queueautoptr;
 
typedef GtkPrintOperationPreview *GtkPrintOperationPreview_autoptr; typedef GList *GtkPrintOperationPreview_listautoptr; typedef GSList *GtkPrintOperationPreview_slistautoptr; typedef GQueue *GtkPrintOperationPreview_queueautoptr;
 
typedef GtkPrintSettings *GtkPrintSettings_autoptr; typedef GList *GtkPrintSettings_listautoptr; typedef GSList *GtkPrintSettings_slistautoptr; typedef GQueue *GtkPrintSettings_queueautoptr;
 
typedef GtkProgressBar *GtkProgressBar_autoptr; typedef GList *GtkProgressBar_listautoptr; typedef GSList *GtkProgressBar_slistautoptr; typedef GQueue *GtkProgressBar_queueautoptr;
 
typedef GtkRadioButton *GtkRadioButton_autoptr; typedef GList *GtkRadioButton_listautoptr; typedef GSList *GtkRadioButton_slistautoptr; typedef GQueue *GtkRadioButton_queueautoptr;
 
typedef GtkRadioMenuItem *GtkRadioMenuItem_autoptr; typedef GList *GtkRadioMenuItem_listautoptr; typedef GSList *GtkRadioMenuItem_slistautoptr; typedef GQueue *GtkRadioMenuItem_queueautoptr;
 
typedef GtkRadioToolButton *GtkRadioToolButton_autoptr; typedef GList *GtkRadioToolButton_listautoptr; typedef GSList *GtkRadioToolButton_slistautoptr; typedef GQueue *GtkRadioToolButton_queueautoptr;
 
typedef GtkRange *GtkRange_autoptr; typedef GList *GtkRange_listautoptr; typedef GSList *GtkRange_slistautoptr; typedef GQueue *GtkRange_queueautoptr;
 
typedef GtkRcStyle *GtkRcStyle_autoptr; typedef GList *GtkRcStyle_listautoptr; typedef GSList *GtkRcStyle_slistautoptr; typedef GQueue *GtkRcStyle_queueautoptr;
 
typedef GtkRecentChooser *GtkRecentChooser_autoptr; typedef GList *GtkRecentChooser_listautoptr; typedef GSList *GtkRecentChooser_slistautoptr; typedef GQueue *GtkRecentChooser_queueautoptr;
 
typedef GtkRecentChooserDialog *GtkRecentChooserDialog_autoptr; typedef GList *GtkRecentChooserDialog_listautoptr; typedef GSList *GtkRecentChooserDialog_slistautoptr; typedef GQueue *GtkRecentChooserDialog_queueautoptr;
 
typedef GtkRecentChooserMenu *GtkRecentChooserMenu_autoptr; typedef GList *GtkRecentChooserMenu_listautoptr; typedef GSList *GtkRecentChooserMenu_slistautoptr; typedef GQueue *GtkRecentChooserMenu_queueautoptr;
 
typedef GtkRecentChooserWidget *GtkRecentChooserWidget_autoptr; typedef GList *GtkRecentChooserWidget_listautoptr; typedef GSList *GtkRecentChooserWidget_slistautoptr; typedef GQueue *GtkRecentChooserWidget_queueautoptr;
 
typedef GtkRecentFilter *GtkRecentFilter_autoptr; typedef GList *GtkRecentFilter_listautoptr; typedef GSList *GtkRecentFilter_slistautoptr; typedef GQueue *GtkRecentFilter_queueautoptr;
 
typedef GtkRecentManager *GtkRecentManager_autoptr; typedef GList *GtkRecentManager_listautoptr; typedef GSList *GtkRecentManager_slistautoptr; typedef GQueue *GtkRecentManager_queueautoptr;
 
typedef GtkRevealer *GtkRevealer_autoptr; typedef GList *GtkRevealer_listautoptr; typedef GSList *GtkRevealer_slistautoptr; typedef GQueue *GtkRevealer_queueautoptr;
 
typedef GtkScale *GtkScale_autoptr; typedef GList *GtkScale_listautoptr; typedef GSList *GtkScale_slistautoptr; typedef GQueue *GtkScale_queueautoptr;
 
typedef GtkScaleButton *GtkScaleButton_autoptr; typedef GList *GtkScaleButton_listautoptr; typedef GSList *GtkScaleButton_slistautoptr; typedef GQueue *GtkScaleButton_queueautoptr;
 
typedef GtkScrollable *GtkScrollable_autoptr; typedef GList *GtkScrollable_listautoptr; typedef GSList *GtkScrollable_slistautoptr; typedef GQueue *GtkScrollable_queueautoptr;
 
typedef GtkScrollbar *GtkScrollbar_autoptr; typedef GList *GtkScrollbar_listautoptr; typedef GSList *GtkScrollbar_slistautoptr; typedef GQueue *GtkScrollbar_queueautoptr;
 
typedef GtkScrolledWindow *GtkScrolledWindow_autoptr; typedef GList *GtkScrolledWindow_listautoptr; typedef GSList *GtkScrolledWindow_slistautoptr; typedef GQueue *GtkScrolledWindow_queueautoptr;
 
typedef GtkSearchBar *GtkSearchBar_autoptr; typedef GList *GtkSearchBar_listautoptr; typedef GSList *GtkSearchBar_slistautoptr; typedef GQueue *GtkSearchBar_queueautoptr;
 
typedef GtkSearchEntry *GtkSearchEntry_autoptr; typedef GList *GtkSearchEntry_listautoptr; typedef GSList *GtkSearchEntry_slistautoptr; typedef GQueue *GtkSearchEntry_queueautoptr;
 
typedef GtkSeparator *GtkSeparator_autoptr; typedef GList *GtkSeparator_listautoptr; typedef GSList *GtkSeparator_slistautoptr; typedef GQueue *GtkSeparator_queueautoptr;
 
typedef GtkSeparatorMenuItem *GtkSeparatorMenuItem_autoptr; typedef GList *GtkSeparatorMenuItem_listautoptr; typedef GSList *GtkSeparatorMenuItem_slistautoptr; typedef GQueue *GtkSeparatorMenuItem_queueautoptr;
 
typedef GtkSeparatorToolItem *GtkSeparatorToolItem_autoptr; typedef GList *GtkSeparatorToolItem_listautoptr; typedef GSList *GtkSeparatorToolItem_slistautoptr; typedef GQueue *GtkSeparatorToolItem_queueautoptr;
 
typedef GtkSettings *GtkSettings_autoptr; typedef GList *GtkSettings_listautoptr; typedef GSList *GtkSettings_slistautoptr; typedef GQueue *GtkSettings_queueautoptr;
 
typedef GtkStackSidebar *GtkStackSidebar_autoptr; typedef GList *GtkStackSidebar_listautoptr; typedef GSList *GtkStackSidebar_slistautoptr; typedef GQueue *GtkStackSidebar_queueautoptr;
 
typedef GtkSizeGroup *GtkSizeGroup_autoptr; typedef GList *GtkSizeGroup_listautoptr; typedef GSList *GtkSizeGroup_slistautoptr; typedef GQueue *GtkSizeGroup_queueautoptr;
 
typedef GtkSpinButton *GtkSpinButton_autoptr; typedef GList *GtkSpinButton_listautoptr; typedef GSList *GtkSpinButton_slistautoptr; typedef GQueue *GtkSpinButton_queueautoptr;
 
typedef GtkSpinner *GtkSpinner_autoptr; typedef GList *GtkSpinner_listautoptr; typedef GSList *GtkSpinner_slistautoptr; typedef GQueue *GtkSpinner_queueautoptr;
 
typedef GtkStack *GtkStack_autoptr; typedef GList *GtkStack_listautoptr; typedef GSList *GtkStack_slistautoptr; typedef GQueue *GtkStack_queueautoptr;
 
typedef GtkStackSwitcher *GtkStackSwitcher_autoptr; typedef GList *GtkStackSwitcher_listautoptr; typedef GSList *GtkStackSwitcher_slistautoptr; typedef GQueue *GtkStackSwitcher_queueautoptr;
 
typedef GtkStatusbar *GtkStatusbar_autoptr; typedef GList *GtkStatusbar_listautoptr; typedef GSList *GtkStatusbar_slistautoptr; typedef GQueue *GtkStatusbar_queueautoptr;
 
typedef GtkStyle *GtkStyle_autoptr; typedef GList *GtkStyle_listautoptr; typedef GSList *GtkStyle_slistautoptr; typedef GQueue *GtkStyle_queueautoptr;
 
typedef GtkStyleContext *GtkStyleContext_autoptr; typedef GList *GtkStyleContext_listautoptr; typedef GSList *GtkStyleContext_slistautoptr; typedef GQueue *GtkStyleContext_queueautoptr;
 
typedef GtkStyleProperties *GtkStyleProperties_autoptr; typedef GList *GtkStyleProperties_listautoptr; typedef GSList *GtkStyleProperties_slistautoptr; typedef GQueue *GtkStyleProperties_queueautoptr;
 
typedef GtkStyleProvider *GtkStyleProvider_autoptr; typedef GList *GtkStyleProvider_listautoptr; typedef GSList *GtkStyleProvider_slistautoptr; typedef GQueue *GtkStyleProvider_queueautoptr;
 
typedef GtkSwitch *GtkSwitch_autoptr; typedef GList *GtkSwitch_listautoptr; typedef GSList *GtkSwitch_slistautoptr; typedef GQueue *GtkSwitch_queueautoptr;
 
typedef GtkTextBuffer *GtkTextBuffer_autoptr; typedef GList *GtkTextBuffer_listautoptr; typedef GSList *GtkTextBuffer_slistautoptr; typedef GQueue *GtkTextBuffer_queueautoptr;
 
typedef GtkTextChildAnchor *GtkTextChildAnchor_autoptr; typedef GList *GtkTextChildAnchor_listautoptr; typedef GSList *GtkTextChildAnchor_slistautoptr; typedef GQueue *GtkTextChildAnchor_queueautoptr;
 
typedef GtkTextMark *GtkTextMark_autoptr; typedef GList *GtkTextMark_listautoptr; typedef GSList *GtkTextMark_slistautoptr; typedef GQueue *GtkTextMark_queueautoptr;
 
typedef GtkTextTag *GtkTextTag_autoptr; typedef GList *GtkTextTag_listautoptr; typedef GSList *GtkTextTag_slistautoptr; typedef GQueue *GtkTextTag_queueautoptr;
 
typedef GtkTextTagTable *GtkTextTagTable_autoptr; typedef GList *GtkTextTagTable_listautoptr; typedef GSList *GtkTextTagTable_slistautoptr; typedef GQueue *GtkTextTagTable_queueautoptr;
 
typedef GtkTextView *GtkTextView_autoptr; typedef GList *GtkTextView_listautoptr; typedef GSList *GtkTextView_slistautoptr; typedef GQueue *GtkTextView_queueautoptr;
 
typedef GtkToggleButton *GtkToggleButton_autoptr; typedef GList *GtkToggleButton_listautoptr; typedef GSList *GtkToggleButton_slistautoptr; typedef GQueue *GtkToggleButton_queueautoptr;
 
typedef GtkToggleToolButton *GtkToggleToolButton_autoptr; typedef GList *GtkToggleToolButton_listautoptr; typedef GSList *GtkToggleToolButton_slistautoptr; typedef GQueue *GtkToggleToolButton_queueautoptr;
 
typedef GtkToolButton *GtkToolButton_autoptr; typedef GList *GtkToolButton_listautoptr; typedef GSList *GtkToolButton_slistautoptr; typedef GQueue *GtkToolButton_queueautoptr;
 
typedef GtkToolItem *GtkToolItem_autoptr; typedef GList *GtkToolItem_listautoptr; typedef GSList *GtkToolItem_slistautoptr; typedef GQueue *GtkToolItem_queueautoptr;
 
typedef GtkToolItemGroup *GtkToolItemGroup_autoptr; typedef GList *GtkToolItemGroup_listautoptr; typedef GSList *GtkToolItemGroup_slistautoptr; typedef GQueue *GtkToolItemGroup_queueautoptr;
 
typedef GtkToolPalette *GtkToolPalette_autoptr; typedef GList *GtkToolPalette_listautoptr; typedef GSList *GtkToolPalette_slistautoptr; typedef GQueue *GtkToolPalette_queueautoptr;
 
typedef GtkToolShell *GtkToolShell_autoptr; typedef GList *GtkToolShell_listautoptr; typedef GSList *GtkToolShell_slistautoptr; typedef GQueue *GtkToolShell_queueautoptr;
 
typedef GtkToolbar *GtkToolbar_autoptr; typedef GList *GtkToolbar_listautoptr; typedef GSList *GtkToolbar_slistautoptr; typedef GQueue *GtkToolbar_queueautoptr;
 
typedef GtkTooltip *GtkTooltip_autoptr; typedef GList *GtkTooltip_listautoptr; typedef GSList *GtkTooltip_slistautoptr; typedef GQueue *GtkTooltip_queueautoptr;
 
typedef GtkTreeDragDest *GtkTreeDragDest_autoptr; typedef GList *GtkTreeDragDest_listautoptr; typedef GSList *GtkTreeDragDest_slistautoptr; typedef GQueue *GtkTreeDragDest_queueautoptr;
 
typedef GtkTreeDragSource *GtkTreeDragSource_autoptr; typedef GList *GtkTreeDragSource_listautoptr; typedef GSList *GtkTreeDragSource_slistautoptr; typedef GQueue *GtkTreeDragSource_queueautoptr;
 
typedef GtkTreeModel *GtkTreeModel_autoptr; typedef GList *GtkTreeModel_listautoptr; typedef GSList *GtkTreeModel_slistautoptr; typedef GQueue *GtkTreeModel_queueautoptr;
 
typedef GtkTreeModelFilter *GtkTreeModelFilter_autoptr; typedef GList *GtkTreeModelFilter_listautoptr; typedef GSList *GtkTreeModelFilter_slistautoptr; typedef GQueue *GtkTreeModelFilter_queueautoptr;
 
typedef GtkTreeModelSort *GtkTreeModelSort_autoptr; typedef GList *GtkTreeModelSort_listautoptr; typedef GSList *GtkTreeModelSort_slistautoptr; typedef GQueue *GtkTreeModelSort_queueautoptr;
 
typedef GtkTreeSelection *GtkTreeSelection_autoptr; typedef GList *GtkTreeSelection_listautoptr; typedef GSList *GtkTreeSelection_slistautoptr; typedef GQueue *GtkTreeSelection_queueautoptr;
 
typedef GtkTreeSortable *GtkTreeSortable_autoptr; typedef GList *GtkTreeSortable_listautoptr; typedef GSList *GtkTreeSortable_slistautoptr; typedef GQueue *GtkTreeSortable_queueautoptr;
 
typedef GtkTreeStore *GtkTreeStore_autoptr; typedef GList *GtkTreeStore_listautoptr; typedef GSList *GtkTreeStore_slistautoptr; typedef GQueue *GtkTreeStore_queueautoptr;
 
typedef GtkTreeView *GtkTreeView_autoptr; typedef GList *GtkTreeView_listautoptr; typedef GSList *GtkTreeView_slistautoptr; typedef GQueue *GtkTreeView_queueautoptr;
 
typedef GtkTreeViewColumn *GtkTreeViewColumn_autoptr; typedef GList *GtkTreeViewColumn_listautoptr; typedef GSList *GtkTreeViewColumn_slistautoptr; typedef GQueue *GtkTreeViewColumn_queueautoptr;
 
typedef GtkViewport *GtkViewport_autoptr; typedef GList *GtkViewport_listautoptr; typedef GSList *GtkViewport_slistautoptr; typedef GQueue *GtkViewport_queueautoptr;
 
typedef GtkVolumeButton *GtkVolumeButton_autoptr; typedef GList *GtkVolumeButton_listautoptr; typedef GSList *GtkVolumeButton_slistautoptr; typedef GQueue *GtkVolumeButton_queueautoptr;
 
typedef GtkPaperSize *GtkPaperSize_autoptr; typedef GList *GtkPaperSize_listautoptr; typedef GSList *GtkPaperSize_slistautoptr; typedef GQueue *GtkPaperSize_queueautoptr;
 
typedef GtkRecentInfo *GtkRecentInfo_autoptr; typedef GList *GtkRecentInfo_listautoptr; typedef GSList *GtkRecentInfo_slistautoptr; typedef GQueue *GtkRecentInfo_queueautoptr;
 
typedef GtkSelectionData *GtkSelectionData_autoptr; typedef GList *GtkSelectionData_listautoptr; typedef GSList *GtkSelectionData_slistautoptr; typedef GQueue *GtkSelectionData_queueautoptr;
 
typedef GtkTargetList *GtkTargetList_autoptr; typedef GList *GtkTargetList_listautoptr; typedef GSList *GtkTargetList_slistautoptr; typedef GQueue *GtkTargetList_queueautoptr;
 
typedef GtkTextAttributes *GtkTextAttributes_autoptr; typedef GList *GtkTextAttributes_listautoptr; typedef GSList *GtkTextAttributes_slistautoptr; typedef GQueue *GtkTextAttributes_queueautoptr;
 
typedef GtkTextIter *GtkTextIter_autoptr; typedef GList *GtkTextIter_listautoptr; typedef GSList *GtkTextIter_slistautoptr; typedef GQueue *GtkTextIter_queueautoptr;
 
typedef GtkTreeIter *GtkTreeIter_autoptr; typedef GList *GtkTreeIter_listautoptr; typedef GSList *GtkTreeIter_slistautoptr; typedef GQueue *GtkTreeIter_queueautoptr;
 
typedef GtkTreePath *GtkTreePath_autoptr; typedef GList *GtkTreePath_listautoptr; typedef GSList *GtkTreePath_slistautoptr; typedef GQueue *GtkTreePath_queueautoptr;
 
typedef GtkTreeRowReference *GtkTreeRowReference_autoptr; typedef GList *GtkTreeRowReference_listautoptr; typedef GSList *GtkTreeRowReference_slistautoptr; typedef GQueue *GtkTreeRowReference_queueautoptr;
 
typedef GtkWidgetPath *GtkWidgetPath_autoptr; typedef GList *GtkWidgetPath_listautoptr; typedef GSList *GtkWidgetPath_slistautoptr; typedef GQueue *GtkWidgetPath_queueautoptr;
 
