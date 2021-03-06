/*
	Build Configuration Template for Win32.
	$Id: config.w32.h.in 282624 2009-06-23 06:56:45Z kalle $
*/

/* Define the minimum supported version */
#undef _WIN32_WINNT
#undef NTDDI_VERSION
#define _WIN32_WINNT 0x500
#define NTDDI_VERSION  _WIN32_WIN2K

/* Default PHP / PEAR directories */
#define PHP_CONFIG_FILE_PATH ""
#define CONFIGURATION_FILE_PATH "php.ini"
#define PEAR_INSTALLDIR ".\\pear"
#define PHP_BINDIR "."
#define PHP_DATADIR "."
#define PHP_EXTENSION_DIR "."
#define PHP_INCLUDE_PATH	".;.\\pear"
#define PHP_LIBDIR "."
#define PHP_LOCALSTATEDIR "."
#define PHP_PREFIX "."
#define PHP_SYSCONFDIR "."

/* Enable / Disable crypt() function (default: enabled) */
#define HAVE_CRYPT 1
#define PHP_STD_DES_CRYPT 1
#define PHP_EXT_DES_CRYPT 1
#define PHP_MD5_CRYPT 1
#define PHP_BLOWFISH_CRYPT 1

/* PHP Runtime Configuration */
#define PHP_URL_FOPEN 1
#define PHP_SAFE_MODE 0
#define MAGIC_QUOTES 0
#define USE_CONFIG_FILE 1
#define DEFAULT_SHORT_OPEN_TAG "1"

/* Platform-Specific Configuration. Should not be changed. */
#define PHP_SIGCHILD 0
#define HAVE_LIBBIND 1
#define HAVE_GETSERVBYNAME 1
#define HAVE_GETSERVBYPORT 1
#define HAVE_GETPROTOBYNAME 1
#define HAVE_GETPROTOBYNUMBER 1
#define HAVE_GETHOSTNAME 1
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define HAVE_ERRMSG_H 0
#undef HAVE_ADABAS
#undef HAVE_SOLID
#undef HAVE_LINK
#undef HAVE_SYMLINK

/* its in win32/time.c */
#define HAVE_USLEEP 1
#define HAVE_NANOSLEEP 1

#define HAVE_GETHOSTNAME 1
#define HAVE_GETCWD 1
#define HAVE_POSIX_READDIR_R 1
#define NEED_ISBLANK 1
#define DISCARD_PATH 0
#undef HAVE_SETITIMER
#undef HAVE_SIGSETJMP
#undef HAVE_IODBC
#define HAVE_LIBDL 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_PUTENV 1
#define HAVE_LIMITS_H 1
#define HAVE_TZSET 1
#define HAVE_TZNAME 1
#undef HAVE_FLOCK
#define HAVE_ALLOCA 1
#undef HAVE_SYS_TIME_H
#define HAVE_SIGNAL_H 1
#undef HAVE_ST_BLKSIZE
#undef HAVE_ST_BLOCKS
#define HAVE_ST_RDEV 1
#define HAVE_UTIME_NULL 1
#define HAVE_VPRINTF 1
#define STDC_HEADERS 1
#define HAVE_GCVT 1
#define HAVE_GETLOGIN 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
#define HAVE_PUTENV 1
#define HAVE_REGCOMP 1
#define HAVE_SETLOCALE 1
#define HAVE_LOCALECONV 1
#define HAVE_LOCALE_H 1
#ifndef HAVE_LIBBIND
# define HAVE_SETVBUF 1
#endif
#define HAVE_SHUTDOWN 1
#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_STRCASECMP 1
#define HAVE_STRDUP 1
#define HAVE_STRERROR 1
#define HAVE_STRSTR 1
#define HAVE_TEMPNAM 1
#define HAVE_UTIME 1
#undef HAVE_DIRENT_H
#define HAVE_ASSERT_H 1
#define HAVE_FCNTL_H 1
#define HAVE_GRP_H 0
#undef HAVE_PWD_H
#define HAVE_STRING_H 1
#undef HAVE_SYS_FILE_H
#undef HAVE_SYS_SOCKET_H
#undef HAVE_SYS_WAIT_H
#define HAVE_SYSLOG_H 1
#undef HAVE_UNISTD_H
#define HAVE_SYS_TYPES_H 1
#define HAVE_STDARG_H 1
#undef HAVE_ALLOCA_H
#undef HAVE_KILL
#define HAVE_GETPID 1
#define HAVE_LIBM 1
#define HAVE_CUSERID 0
#undef HAVE_RINT
#define HAVE_STRFTIME 1
#define SIZEOF_SHORT 2
/* int and long are stll 32bit in 64bit compiles */
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
/* MSVC.6/NET don't allow 'long long' or know 'intmax_t' */
#define SIZEOF_LONG_LONG_INT 0
#define SIZEOF_LONG_LONG 8 /* defined as __int64 */
#define SIZEOF_INTMAX_T 0
#define ssize_t SSIZE_T
#ifdef _WIN64
# define SIZEOF_SIZE_T 8
# define SIZEOF_PTRDIFF_T 8
#else
# define SIZEOF_SIZE_T 4
# define SIZEOF_PTRDIFF_T 4
#endif
#define HAVE_FNMATCH
#define HAVE_GLOB
#define PHP_SHLIB_SUFFIX "dll"
#define HAVE_SQLDATASOURCES

/* Win32 supports strcoll */
#define HAVE_STRCOLL 1

/* Win32 supports socketpair by the emulation in win32/sockets.c */
#define HAVE_SOCKETPAIR 1
#define HAVE_SOCKLEN_T 1

/* Win32 support proc_open */
#define PHP_CAN_SUPPORT_PROC_OPEN 1

/* inet_ntop() / inet_pton() */
#define HAVE_INET_PTON 1
#define HAVE_INET_NTOP 1

#define HAVE_MBLEN

#undef HAVE_ATOF_ACCEPTS_NAN
#undef HAVE_ATOF_ACCEPTS_INF
#define HAVE_HUGE_VAL_NAN 0

/* vs.net 2005 has a 64-bit time_t.  This will likely break
 * 3rdParty libs that were built with older compilers; switch
 * back to 32-bit */
#ifndef _WIN64
# define _USE_32BIT_TIME_T 1
#endif
#define HAVE_STDLIB_H 1

/* values determined by configure.js */

/* Configure line */
#define CONFIGURE_COMMAND "cscript /nologo configure.js \"--enable-snapshot-build\""

/* Detected compiler version */
#define COMPILER "MSVC6 (Visual C++ 6.0)"

/* Compiler compatibility ID */
#define PHP_COMPILER_ID "VC6"

/* Detected compiler architecture */
#define ARCHITECTURE "x86"

#define ZEND_DVAL_TO_LVAL_CAST_OK 1

/* have the wspiapi.h header file */
#define HAVE_WSPIAPI_H 1

#define HAVE_GETADDRINFO 1

#define HAVE_GAI_STRERROR 1

#define HAVE_IPV6 1

#define HAVE_USLEEP 1

#define HAVE_STRCOLL 1

/* Have BCMATH library */
#define HAVE_BCMATH 1

/* Have BZ2 library */
#define HAVE_BZ2 1

/* Have calendar */
#define HAVE_CALENDAR 1

/* Have COM_DOTNET support */
#define HAVE_COM_DOTNET 1

/* Have ctype */
#define HAVE_CTYPE 1

/* Have cURL library */
#define HAVE_CURL 1

/* Have SSL suppurt in cURL */
#define HAVE_CURL_SSL 1

/* Have curl_easy_strerror in cURL */
#define HAVE_CURL_EASY_STRERROR 1

/* Have curl_multi_strerror in cURL */
#define HAVE_CURL_MULTI_STRERROR 1

/* Have curl_version_info in cURL */
#define HAVE_CURL_VERSION_INFO 1

/* Have date/time support */
#define HAVE_DATE 1

/* DBA support */
#define HAVE_DBA 1

/* System regex */
#define REGEX 0

/* Have FTP support */
#define HAVE_FTP 1

/* GD support */
#define HAVE_LIBGD 1

/* GMP support */
#define HAVE_GMP 1

#define PHP_MHASH_BC 1

#define HAVE_HASH_EXT 1

/* Define if iconv extension is enabled */
#define HAVE_ICONV 1

/* Define if libiconv is available */
#define HAVE_LIBICONV 1

/* Which iconv implementation to use */
#define PHP_ICONV_IMPL "\"libiconv\""

/* Whether iconv supports errno or not */
#define ICONV_SUPPORTS_ERRNO 1

/* Have IMAP support */
#define HAVE_IMAP 1

/* Have utf8_mime2text */
#define HAVE_NEW_MIME2TEXT 1

/* Have rfc822_output_address_list */
#define HAVE_RFC822_OUTPUT_ADDRESS_LIST 1

/* Have modified utf7 support */
#define HAVE_IMAP_MUTF7 1

/* Have interbase library */
#define HAVE_IBASE 1

/* Internationalization support enabled */
#define HAVE_INTL 1

#define HAVE_LDAP_PARSE_RESULT 1

#define HAVE_LDAP_PARSE_REFERENCE 1

#define HAVE_LDAP_START_TLS_S 1

#define HAVE_LDAP 1

/* Have mbstring support */
#define HAVE_MBSTRING 1

/* CN */
#define HAVE_MBSTR_CN 1

/* JA */
#define HAVE_MBSTR_JA 1

/* KR */
#define HAVE_MBSTR_KR 1

/* RU */
#define HAVE_MBSTR_RU 1

/* TW */
#define HAVE_MBSTR_TW 1

/* have stdarg.h */
#define HAVE_STDARG_PROTOTYPES 1

#define HAVE_MBREGEX 1

#define HAVE_ONIG 1

#define USE_COMBINATION_EXPLOSION_CHECK 1

#define HAVE_LIBMCRYPT 1

/* Have MSSQL support */
#define HAVE_MSSQL 1

#define HAVE_OCI8 1

#define HAVE_OCI_INSTANT_CLIENT 1

#define HAVE_OCI_LOB_READ2 1

/* ODBC support */
#define HAVE_UODBC 1

/* Have openssl */
#define HAVE_OPENSSL_EXT 1

#define HAVE_OPENSSL 1

#define HAVE_DSA_DEFAULT_METHOD 1

/* Have PCRE library */
#define HAVE_PCRE 1

/* Whether to have pg_config.h */
#define HAVE_PG_CONFIG_H 1

/* Have PostgreSQL library */
#define HAVE_PGSQL 1

/* PostgreSQL 7.2.0 or later */
#define HAVE_PQESCAPE 1

/* PostgreSQL 7.3.0 or later */
#define HAVE_PQUNESCAPEBYTEA 1

/* PostgreSQL 7.0.x or later */
#define HAVE_PQSETNONBLOCKING 1

/* Broken libpq under windows */
#define HAVE_PQCMDTUPLES 1

/* Older PostgreSQL */
#define HAVE_PQOIDVALUE 1

/* PostgreSQL 7.0.x or later */
#define HAVE_PQCLIENTENCODING 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPARAMETERSTATUS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPROTOCOLVERSION 1

/* PostgreSQL 7.4 or later */
#define HAVE_PGTRANSACTIONSTATUS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQEXECPARAMS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPREPARE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQEXECPREPARED 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQRESULTERRORFIELD 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDQUERYPARAMS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDPREPARE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDQUERYPREPARED 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPUTCOPYDATA 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPUTCOPYEND 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQGETCOPYDATA 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQFREEMEM 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSETERRORVERBOSITY 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQFTABLE 1

/* PostgreSQL 8.1.4 or later */
#define HAVE_PQESCAPE_CONN 1

/* PostgreSQL 8.1.4 or later */
#define HAVE_PQESCAPE_BYTEA_CONN 1

/* Whether libpq is compiled with --enable-multibyte */
#define HAVE_PGSQL_WITH_MULTIBYTE_SUPPORT 1

/* PostgreSQL 8.1 or later */
#define HAVE_PG_LO_CREATE 1

/* PostgreSQL 8.4 or later */
#define HAVE_PG_LO_IMPORT_WITH_OID 1

#define HAVE_PSPELL 1

/* Reflection support enabled */
#define HAVE_REFLECTION 1

/* Session support */
#define HAVE_PHP_SESSION 1

/* Have SHMOP support */
#define HAVE_SHMOP 1

#define HAVE_SNMP 1

#define HAVE_NET_SNMP 1

#define HAVE_SNMP_PARSE_OID 1

#define MSVC_PERL 1

#define HAVE_SOCKETS 1

#define HAVE_SPL 1

/* SQLite support */
#define HAVE_SQLITE3 1

#define PHP_CONFIG_FILE_SCAN_DIR ""

#define PHP_USE_PHP_CRYPT_R 1

#define HAVE_SYBASE_CT 1

/* Have TIDY library */
#define HAVE_TIDY 1

/* Tokenizer support */
#define HAVE_TOKENIZER 1

#define HAVE_ZIP 1

/* ZLIB support */
#define HAVE_ZLIB 1

#define APC_FCNTL_LOCKS 1

#define HAVE_APC 1

/* dbase support */
#define HAVE_DBASE 1

/* Define if you like to use eAccelerator */
#define HAVE_EACCELERATOR 1

/* Define if you have the <ext/session/php_session.h> header file. */
#define HAVE_EXT_SESSION_PHP_SESSION_H 1

/* Have FrontBase support */
#define HAVE_FBSQL 1

#define HAVE_DESTROY_SWF_BLOCK 1

#define HAVE_NEW_MING 1

#define HAVE_SWFVIDEOSTREAM_SETFRAMEMODE 1

#define HAVE_SWFVIDEOSTREAM_NEXTFRAME 1

#define HAVE_SWFVIDEOSTREAM_SEEK 1

#define HAVE_MING_MOVIE_LEVEL 1

#define HAVE_MING_ZLIB 1

#define HAVE_MING 1

#define HAVE_MSQL 1

#define HAVE_PDFLIB 1

/* Rar support */
#define HAVE_RAR 1

/* Xdebug support */
#define HAVE_XDEBUG 1

#define HAVE_EXECUTE_DATA_PTR 1

/* LibXML support */
#define HAVE_LIBXML 1

/* DOM support */
#define HAVE_DOM 1

/* Have exif */
#define HAVE_EXIF 1

/* Have MySQL library */
#define HAVE_MYSQL 1

/* Have MySQLi library */
#define HAVE_MYSQLILIB 1

/* libmysql supports prepared statements */
#define HAVE_MYSQL_STMT_PREPARE 1

/* Have PostgreSQL library */
#define HAVE_PDO_PGSQL 1

#define PHAR_HAVE_OPENSSL 1

#define PHAR_HASH_OK 1

/* Simple XML support */
#define HAVE_SIMPLEXML 1

/* SOAP support */
#define HAVE_PHP_SOAP 1

/* SQLite support */
#define HAVE_SQLITE 1

/* WDDX support */
#define HAVE_WDDX 1

/* XML support */
#define HAVE_XML 1

/* XMLReader support */
#define HAVE_XMLREADER 1

/* XMLWriter support */
#define HAVE_XMLWRITER 1

/*  */
#define HAVE_XSL_EXSLT 1

/* Define if xsl extension is enabled */
#define HAVE_XSL 1
