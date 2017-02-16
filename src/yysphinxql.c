/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif



// some helpers
#include <float.h> // for FLT_MAX

static void AddInsval ( SqlParser_c * pParser, CSphVector<SqlInsert_t> & dVec, const SqlNode_t & tNode )
{
	SqlInsert_t & tIns = dVec.Add();
	tIns.m_iType = tNode.m_iType;
	tIns.m_iVal = tNode.m_iValue; // OPTIMIZE? copy conditionally based on type?
	tIns.m_fVal = tNode.m_fValue;
	if ( tIns.m_iType==TOK_QUOTED_STRING )
		pParser->ToStringUnescape ( tIns.m_sVal, tNode );
	tIns.m_pVals = tNode.m_pValues;
}

#define TRACK_BOUNDS(_res,_left,_right) \
	_res = _left; \
	if ( _res.m_iStart>0 && pParser->m_pBuf[_res.m_iStart-1]=='`' ) \
		_res.m_iStart--; \
	_res.m_iEnd = _right.m_iEnd; \
	_res.m_iType = 0;




# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yysphinxql.h".  */
#ifndef YY_YY_YYSPHINXQL_H_INCLUDED
# define YY_YY_YYSPHINXQL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_IDENT = 258,
    TOK_ATIDENT = 259,
    TOK_CONST_INT = 260,
    TOK_CONST_FLOAT = 261,
    TOK_CONST_MVA = 262,
    TOK_QUOTED_STRING = 263,
    TOK_USERVAR = 264,
    TOK_SYSVAR = 265,
    TOK_CONST_STRINGS = 266,
    TOK_BAD_NUMERIC = 267,
    TOK_SUBKEY = 268,
    TOK_DOT_NUMBER = 269,
    TOK_ADD = 270,
    TOK_AGENT = 271,
    TOK_ALTER = 272,
    TOK_AS = 273,
    TOK_ASC = 274,
    TOK_ATTACH = 275,
    TOK_ATTRIBUTES = 276,
    TOK_AVG = 277,
    TOK_BEGIN = 278,
    TOK_BETWEEN = 279,
    TOK_BIGINT = 280,
    TOK_BOOL = 281,
    TOK_BY = 282,
    TOK_CALL = 283,
    TOK_CHARACTER = 284,
    TOK_CHUNK = 285,
    TOK_COLLATION = 286,
    TOK_COLUMN = 287,
    TOK_COMMIT = 288,
    TOK_COMMITTED = 289,
    TOK_COUNT = 290,
    TOK_CREATE = 291,
    TOK_DATABASES = 292,
    TOK_DELETE = 293,
    TOK_DESC = 294,
    TOK_DESCRIBE = 295,
    TOK_DISTINCT = 296,
    TOK_DIV = 297,
    TOK_DOUBLE = 298,
    TOK_DROP = 299,
    TOK_FACET = 300,
    TOK_FALSE = 301,
    TOK_FLOAT = 302,
    TOK_FLUSH = 303,
    TOK_FOR = 304,
    TOK_FROM = 305,
    TOK_FUNCTION = 306,
    TOK_GLOBAL = 307,
    TOK_GROUP = 308,
    TOK_GROUPBY = 309,
    TOK_GROUP_CONCAT = 310,
    TOK_HAVING = 311,
    TOK_ID = 312,
    TOK_IN = 313,
    TOK_INDEX = 314,
    TOK_INSERT = 315,
    TOK_INT = 316,
    TOK_INTEGER = 317,
    TOK_INTO = 318,
    TOK_IS = 319,
    TOK_ISOLATION = 320,
    TOK_JSON = 321,
    TOK_LEVEL = 322,
    TOK_LIKE = 323,
    TOK_LIMIT = 324,
    TOK_MATCH = 325,
    TOK_MAX = 326,
    TOK_META = 327,
    TOK_MIN = 328,
    TOK_MOD = 329,
    TOK_MULTI = 330,
    TOK_MULTI64 = 331,
    TOK_NAMES = 332,
    TOK_NULL = 333,
    TOK_OPTION = 334,
    TOK_ORDER = 335,
    TOK_OPTIMIZE = 336,
    TOK_PLAN = 337,
    TOK_PLUGIN = 338,
    TOK_PLUGINS = 339,
    TOK_PROFILE = 340,
    TOK_RAND = 341,
    TOK_RAMCHUNK = 342,
    TOK_READ = 343,
    TOK_RECONFIGURE = 344,
    TOK_REPEATABLE = 345,
    TOK_REPLACE = 346,
    TOK_REMAP = 347,
    TOK_RETURNS = 348,
    TOK_ROLLBACK = 349,
    TOK_RTINDEX = 350,
    TOK_SELECT = 351,
    TOK_SERIALIZABLE = 352,
    TOK_SET = 353,
    TOK_SETTINGS = 354,
    TOK_SESSION = 355,
    TOK_SHOW = 356,
    TOK_SONAME = 357,
    TOK_START = 358,
    TOK_STATUS = 359,
    TOK_STRING = 360,
    TOK_SUM = 361,
    TOK_TABLE = 362,
    TOK_TABLES = 363,
    TOK_THREADS = 364,
    TOK_TO = 365,
    TOK_TRANSACTION = 366,
    TOK_TRUE = 367,
    TOK_TRUNCATE = 368,
    TOK_TYPE = 369,
    TOK_UNCOMMITTED = 370,
    TOK_UPDATE = 371,
    TOK_VALUES = 372,
    TOK_VARIABLES = 373,
    TOK_WARNINGS = 374,
    TOK_WEIGHT = 375,
    TOK_WHERE = 376,
    TOK_WITHIN = 377,
    TOK_OR = 378,
    TOK_AND = 379,
    TOK_NE = 380,
    TOK_LTE = 381,
    TOK_GTE = 382,
    TOK_NOT = 383,
    TOK_NEG = 384
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (SqlParser_c * pParser);

#endif /* !YY_YY_YYSPHINXQL_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  240
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  485
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  845

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   137,   126,     2,
     141,   142,   135,   133,   143,   134,     2,   136,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   140,
     129,   127,   130,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   146,     2,   147,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   144,   125,   145,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     128,   131,   132,   138,   139
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   175,   176,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   220,   221,   221,   221,   221,   221,   221,   222,   222,
     222,   222,   222,   222,   223,   223,   223,   223,   223,   224,
     224,   224,   224,   224,   225,   225,   225,   225,   225,   226,
     226,   226,   226,   226,   226,   227,   227,   227,   227,   227,
     228,   228,   228,   228,   228,   228,   229,   229,   229,   229,
     229,   229,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   231,   232,   232,   232,   232,   232,   233,   233,   233,
     233,   233,   234,   234,   234,   234,   234,   234,   235,   235,
     235,   235,   235,   235,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   241,   241,   241,   247,   248,   249,   253,
     254,   255,   259,   260,   268,   269,   276,   278,   282,   286,
     293,   294,   295,   299,   312,   319,   321,   326,   335,   351,
     352,   356,   357,   360,   362,   363,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   379,   380,   383,   385,   389,
     393,   394,   395,   399,   404,   408,   415,   423,   431,   440,
     445,   450,   455,   460,   465,   470,   475,   480,   485,   490,
     495,   500,   505,   510,   515,   520,   525,   530,   535,   540,
     545,   553,   554,   559,   565,   571,   577,   583,   584,   585,
     586,   587,   591,   592,   603,   604,   605,   609,   615,   622,
     628,   634,   636,   639,   641,   648,   652,   658,   660,   666,
     668,   672,   683,   685,   689,   693,   700,   701,   705,   706,
     707,   710,   712,   716,   721,   728,   730,   734,   738,   739,
     743,   748,   753,   759,   764,   772,   777,   784,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   846,   847,   851,   852,   856,   857,   861,
     862,   866,   867,   873,   876,   878,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   895,   900,   905,   910,   919,
     920,   923,   925,   933,   938,   943,   948,   949,   950,   954,
     959,   964,   969,   978,   979,   983,   984,   985,   997,   998,
    1002,  1003,  1004,  1005,  1006,  1013,  1014,  1015,  1019,  1020,
    1026,  1034,  1035,  1038,  1040,  1044,  1045,  1049,  1050,  1054,
    1055,  1059,  1063,  1064,  1068,  1069,  1070,  1071,  1072,  1075,
    1076,  1080,  1081,  1085,  1091,  1101,  1109,  1113,  1120,  1121,
    1128,  1138,  1144,  1146,  1150,  1155,  1159,  1166,  1168,  1172,
    1173,  1179,  1187,  1188,  1194,  1198,  1204,  1212,  1213,  1217,
    1231,  1237,  1241,  1246,  1260,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1283,  1291,  1298,  1309,  1313,  1320,
    1321,  1325,  1329,  1330,  1334,  1338,  1345,  1352,  1358,  1359,
    1360,  1364,  1365,  1366,  1367,  1373,  1384,  1385,  1386,  1387,
    1388,  1393,  1404,  1416,  1425,  1434,  1444,  1452,  1453,  1457,
    1461,  1465,  1475,  1486,  1497,  1508,  1519,  1520,  1524,  1527,
    1528,  1532,  1533,  1534,  1535,  1539,  1540,  1544,  1549,  1551,
    1555,  1564,  1568,  1576,  1577,  1581
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT",
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", "TOK_QUOTED_STRING",
  "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", "TOK_BAD_NUMERIC",
  "TOK_SUBKEY", "TOK_DOT_NUMBER", "TOK_ADD", "TOK_AGENT", "TOK_ALTER",
  "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_ATTRIBUTES", "TOK_AVG",
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BOOL", "TOK_BY",
  "TOK_CALL", "TOK_CHARACTER", "TOK_CHUNK", "TOK_COLLATION", "TOK_COLUMN",
  "TOK_COMMIT", "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE",
  "TOK_DATABASES", "TOK_DELETE", "TOK_DESC", "TOK_DESCRIBE",
  "TOK_DISTINCT", "TOK_DIV", "TOK_DOUBLE", "TOK_DROP", "TOK_FACET",
  "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", "TOK_FOR", "TOK_FROM",
  "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_GROUPBY",
  "TOK_GROUP_CONCAT", "TOK_HAVING", "TOK_ID", "TOK_IN", "TOK_INDEX",
  "TOK_INSERT", "TOK_INT", "TOK_INTEGER", "TOK_INTO", "TOK_IS",
  "TOK_ISOLATION", "TOK_JSON", "TOK_LEVEL", "TOK_LIKE", "TOK_LIMIT",
  "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_MULTI",
  "TOK_MULTI64", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER",
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PLUGIN", "TOK_PLUGINS", "TOK_PROFILE",
  "TOK_RAND", "TOK_RAMCHUNK", "TOK_READ", "TOK_RECONFIGURE",
  "TOK_REPEATABLE", "TOK_REPLACE", "TOK_REMAP", "TOK_RETURNS",
  "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE",
  "TOK_SET", "TOK_SETTINGS", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME",
  "TOK_START", "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLE",
  "TOK_TABLES", "TOK_THREADS", "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE",
  "TOK_TRUNCATE", "TOK_TYPE", "TOK_UNCOMMITTED", "TOK_UPDATE",
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE",
  "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'",
  "'>'", "TOK_LTE", "TOK_GTE", "'+'", "'-'", "'*'", "'/'", "'%'",
  "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "$accept", "request", "statement", "ident_set", "ident",
  "multi_stmt_list", "multi_stmt", "select", "select1",
  "opt_tablefunc_args", "tablefunc_args_list", "tablefunc_arg",
  "subselect_start", "opt_outer_order", "opt_outer_limit", "select_from",
  "select_items_list", "select_item", "opt_alias", "select_expr",
  "ident_list", "opt_where_clause", "where_clause", "where_expr",
  "where_item", "filter_item", "expr_ident", "const_int", "const_float",
  "const_list", "string_list", "opt_group_clause", "opt_int",
  "group_items_list", "opt_having_clause", "opt_group_order_clause",
  "group_order_clause", "opt_order_clause", "order_clause",
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause",
  "opt_option_clause", "option_clause", "option_list", "option_item",
  "named_const_list", "named_const", "expr", "function", "arglist", "arg",
  "consthash", "hash_key", "hash_val", "show_stmt", "like_filter",
  "show_what", "index_or_table", "opt_chunk", "set_stmt",
  "set_global_stmt", "set_string_value", "boolean_value", "set_value",
  "simple_set_value", "transact_op", "start_transaction", "insert_into",
  "insert_or_replace", "opt_column_list", "column_ident", "column_list",
  "insert_rows_list", "insert_row", "insert_vals_list", "insert_val",
  "opt_insert_options", "insert_options_list", "insert_option",
  "delete_from", "call_proc", "call_args_list", "call_arg",
  "const_string_list", "opt_call_opts_list", "call_opts_list", "call_opt",
  "opt_as", "call_opt_name", "describe", "describe_tok", "show_tables",
  "show_databases", "update", "update_items_list", "update_item",
  "alter_col_type", "alter", "show_variables", "opt_show_variables_where",
  "show_variables_where", "show_variables_where_list",
  "show_variables_where_entry", "show_collation", "show_character_set",
  "set_transaction", "opt_scope", "isolation_level", "create_function",
  "udf_type", "drop_function", "attach_index", "flush_rtindex",
  "flush_ramchunk", "flush_index", "select_sysvar", "sysvar_list",
  "sysvar_item", "sysvar_name", "select_dual", "truncate",
  "optimize_index", "create_plugin", "drop_plugin", "json_field",
  "json_expr", "subscript", "subkey", "streq", "strval",
  "opt_facet_by_items_list", "facet_by", "facet_item", "facet_expr",
  "facet_items_list", "facet_stmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   124,    38,    61,   380,    60,
      62,   381,   382,    43,    45,    42,    47,    37,   383,   384,
      59,    40,    41,    44,   123,   125,    91,    93
};
# endif

#define YYPACT_NINF -660

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-660)))

#define YYTABLE_NINF -478

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4598,    95,    74,  -660,  3854,  -660,    48,    88,  -660,  -660,
      51,    89,  -660,   124,  -660,  -660,   832,  3974,   532,    18,
      91,  3854,   143,  -660,   -19,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,   154,  -660,  -660,  -660,  3854,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    3854,  3854,  3854,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,    97,  3854,
    3854,  3854,  3854,  3854,  -660,  3854,  3854,  3854,   100,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,   107,   131,   144,   162,
     177,   193,   194,  -660,   200,   216,   217,   218,   219,   222,
     223,  1684,  -660,  1684,  1684,  3298,    59,   -11,  -660,  3407,
     165,  -660,   -39,  -660,  3407,   159,   172,  -660,    99,   116,
     167,  4094,  3854,  2709,   176,   180,   254,  3527,   269,  -660,
     161,  -660,  -660,   161,  -660,  -660,  -660,  -660,   161,  -660,
     161,   289,  -660,  -660,  3854,   252,  -660,  3854,  -660,   -34,
    -660,  1684,   105,  -660,  3854,   161,   284,    72,   264,    41,
     287,   263,   -29,  -660,   267,  -660,  -660,  -660,   974,  1684,
    1826,    -5,  1826,  1826,   240,  1684,  1826,  1826,  1684,  1684,
    1684,  1684,   242,   244,   245,   246,  -660,  -660,  4316,  -660,
    -660,   -40,   261,  -660,  -660,  1968,    66,  -660,  2346,  1116,
    3854,  -660,  -660,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
    1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,  1684,
     385,   389,  -660,  -660,  -660,   -47,  1684,  2709,  2709,   277,
     278,   355,  -660,  -660,  -660,  -660,  -660,   274,  -660,  2469,
     344,   306,     9,   307,  -660,   404,  -660,  -660,  -660,  -660,
    3854,  -660,  -660,    31,    50,  -660,  3854,  3854,  4614,  -660,
    3407,    -7,  1258,  4214,   294,  -660,   273,  -660,  -660,   383,
     384,   323,  -660,  -660,  -660,  -660,   101,    32,  -660,  -660,
    -660,   295,  -660,    34,   432,  2100,  -660,   433,   316,  1400,
    -660,  4599,    79,  -660,  4349,  4614,    82,  3854,   304,    85,
      92,  -660,  4380,   102,   115,   544,   582,   680,  4413,  -660,
    1542,  1684,  1684,  -660,  3298,  -660,  2589,   300,   298,  -660,
    -660,   -29,  -660,  4614,  -660,  -660,  -660,  4628,  4641,   658,
     561,   146,  -660,   146,   118,   118,   118,   118,    -9,    -9,
    -660,  -660,  -660,   305,  -660,  -660,   371,   146,   274,   274,
     309,  3069,   442,  2709,  -660,  -660,  -660,  -660,   447,  -660,
    -660,  -660,  -660,   387,   161,  -660,   161,  -660,   329,   314,
    -660,   359,   454,  -660,   361,   453,  3854,  -660,  -660,    69,
     -24,  -660,   336,  -660,  -660,  -660,  1684,   386,  1684,  3636,
     347,  3854,  3854,  3854,  -660,  -660,  -660,  -660,  -660,   117,
     119,    41,   326,  -660,  -660,  -660,  -660,  -660,   363,   367,
    -660,   330,   331,   332,   335,   339,  -660,   340,   341,   342,
    2100,    66,   346,  -660,  -660,   192,  -660,  -660,  1116,   345,
    3854,  -660,  1826,  -660,  -660,   348,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  1684,  -660,  1684,  1684,  -660,  4218,  4252,
     362,  -660,  -660,  -660,  -660,  -660,   390,   435,  -660,   487,
    -660,    14,  -660,  -660,   366,  -660,    52,  -660,  -660,  2223,
    3854,  -660,  -660,  -660,  -660,   373,   378,  -660,    36,  3854,
     289,    84,  -660,   475,   434,  -660,   364,  -660,  -660,  -660,
     125,   368,   286,  -660,  -660,  -660,    14,  -660,   496,    56,
    -660,   365,  -660,  -660,   497,   502,  3854,   379,  3854,   375,
     376,  3854,   505,   396,   -31,  2100,    84,     4,   -16,    70,
      80,    84,    84,    84,    84,   481,   397,   483,  -660,  -660,
    4446,  4477,  4283,  2589,  1116,   401,   539,   423,  -660,   128,
     405,     0,   459,  -660,  -660,  -660,  -660,  3854,   408,  -660,
     542,  3854,    10,  -660,  -660,  -660,  -660,  -660,  -660,  2829,
    -660,  -660,  3636,    46,   -26,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  3745,
      46,  -660,  -660,    66,   409,   410,   411,  -660,  -660,   412,
     415,  -660,  -660,  -660,   436,   440,  -660,    19,  -660,   480,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,  -660,  -660,  -660,    13,  3189,   417,  3854,  -660,  -660,
     425,  -660,    -2,   488,  -660,   540,   517,   515,  -660,  -660,
      14,  -660,  -660,  -660,   446,   163,  -660,   566,  -660,  -660,
    -660,   166,   438,    81,   437,  -660,  -660,    39,   173,  -660,
     572,   368,  -660,  -660,  -660,  -660,   558,  -660,  -660,  -660,
    -660,  -660,  -660,    84,    84,  -660,   184,   186,  -660,  -660,
      19,  -660,  -660,  -660,   444,  -660,  -660,    66,   439,  -660,
    1826,  3854,   550,   514,  2949,   508,  2949,   386,   189,    14,
    -660,  3854,   443,  -660,   448,  -660,  -660,  2949,  -660,    46,
     462,   450,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
     587,   195,   202,  3189,  -660,   207,  2949,   591,  -660,  -660,
     455,   573,  -660,   434,  -660,  -660,  -660,  -660,  -660,  -660,
    -660,   594,   572,  -660,  -660,  -660,  -660,   456,   437,   463,
    2949,  2949,   289,  -660,  -660,   466,   603,  -660,   437,  -660,
    1826,  -660,   213,   467,  -660
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   358,     0,   355,     0,     0,   403,   402,
       0,     0,   361,     0,   362,   356,     0,   438,   438,     0,
       0,     0,     0,     2,     3,   126,   129,   132,   134,   130,
     131,     7,     8,   357,     5,     0,     6,     9,    10,     0,
      11,    12,    13,    28,    14,    15,    16,    23,    17,    18,
      19,    20,    21,    22,    24,    25,    26,    27,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    66,    65,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   124,    84,    83,    85,    86,
      87,    88,    90,    89,    91,    92,    94,    95,    93,    96,
      97,    98,    99,   101,   102,   100,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   125,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,     0,   455,     0,     0,     0,    31,   259,
     261,   262,   477,   264,   460,   263,    38,    41,    50,    57,
      59,    66,    65,   260,     0,    71,    78,    80,    93,   108,
     120,     0,   151,     0,     0,     0,   258,     0,   149,   153,
     156,   286,   241,   457,   153,     0,   287,   288,     0,     0,
      44,    63,    68,     0,   100,     0,     0,     0,     0,   435,
     314,   439,   329,   314,   321,   322,   320,   440,   314,   330,
     314,   245,   316,   313,     0,     0,   359,     0,   165,     0,
       1,     0,     4,   128,     0,   314,     0,     0,     0,     0,
       0,     0,     0,   451,     0,   454,   453,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    78,    80,   265,   266,     0,   310,
     309,     0,     0,   471,   472,     0,   468,   469,     0,     0,
       0,   154,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   456,   242,   459,     0,     0,     0,     0,     0,
       0,     0,   353,   354,   352,   351,   350,   336,   348,     0,
       0,     0,   314,     0,   436,     0,   405,   318,   317,   404,
       0,   323,   246,   331,   429,   462,     0,     0,   482,   483,
     153,   478,     0,     0,     0,   127,   363,   401,   426,     0,
       0,     0,   212,   214,   376,   216,     0,     0,   374,   375,
     388,   392,   386,     0,     0,     0,   384,     0,   306,     0,
     297,   305,     0,   303,     0,   305,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,   300,
       0,     0,     0,   284,     0,   285,     0,   477,     0,   470,
     143,   167,   150,   156,   155,   276,   277,   283,   282,   274,
     273,   280,   475,   281,   271,   272,   278,   279,   267,   268,
     269,   270,   275,   243,   458,   289,     0,   476,   337,   338,
       0,     0,     0,     0,   344,   346,   335,   345,     0,   343,
     347,   334,   333,     0,   314,   319,   314,   315,     0,   247,
     248,     0,     0,   326,     0,     0,     0,   427,   430,     0,
       0,   407,     0,   166,   481,   480,     0,   232,     0,     0,
       0,     0,     0,     0,   213,   215,   390,   378,   217,     0,
       0,     0,     0,   447,   448,   446,   450,   449,     0,     0,
     202,    41,    50,    57,     0,    66,   206,    71,    77,   120,
       0,   201,   169,   170,   174,     0,   207,   465,     0,     0,
       0,   291,     0,   157,   294,     0,   162,   296,   295,   161,
     292,   293,   158,     0,   159,     0,     0,   160,     0,     0,
       0,   312,   311,   307,   474,   473,     0,   221,   168,     0,
     290,     0,   341,   340,     0,   349,     0,   324,   325,     0,
       0,   328,   332,   327,   428,     0,   431,   432,     0,     0,
     245,     0,   484,     0,   241,   233,   479,   366,   365,   367,
       0,     0,     0,   425,   452,   377,     0,   389,     0,   397,
     387,   393,   394,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   304,   164,
       0,     0,     0,     0,     0,     0,   223,   229,   244,     0,
       0,     0,     0,   444,   437,   251,   254,     0,   250,   249,
       0,     0,     0,   409,   410,   408,   406,   413,   414,     0,
     485,   364,     0,     0,   379,   369,   416,   418,   417,   423,
     415,   421,   419,   420,   422,   424,   218,   391,   398,     0,
       0,   445,   464,     0,     0,     0,     0,   211,   204,     0,
       0,   205,   172,   171,     0,     0,   181,     0,   199,     0,
     197,   175,   188,   198,   176,   189,   185,   194,   184,   193,
     187,   196,   186,   195,     0,     0,     0,     0,   299,   298,
       0,   308,     0,     0,   224,     0,     0,   227,   230,   339,
       0,   442,   441,   443,     0,     0,   255,     0,   434,   433,
     412,     0,    90,   238,   234,   236,   368,     0,     0,   372,
       0,     0,   360,   400,   399,   396,   397,   395,   210,   203,
     209,   208,   173,     0,     0,   219,     0,     0,   200,   182,
       0,   141,   142,   140,   137,   138,   133,   467,     0,   466,
       0,     0,     0,   145,     0,     0,     0,   232,     0,     0,
     252,     0,     0,   411,     0,   239,   240,     0,   371,     0,
       0,   380,   381,   370,   183,   191,   192,   190,   177,   179,
       0,     0,     0,     0,   301,     0,     0,     0,   135,   225,
     222,     0,   228,   241,   342,   257,   256,   253,   235,   237,
     373,     0,     0,   220,   178,   180,   139,     0,   144,   146,
       0,     0,   245,   383,   382,     0,     0,   226,   231,   148,
       0,   147,     0,     0,   302
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -660,  -660,  -660,   -14,    -4,  -660,   369,  -660,   231,  -660,
    -660,  -191,  -660,  -660,  -660,    67,    -3,   333,  -186,  -660,
     -10,  -660,  -303,  -481,  -660,  -161,  -637,  -217,  -543,  -541,
    -140,  -660,  -660,  -660,  -660,  -660,  -660,  -154,  -660,  -659,
    -162,  -567,  -660,  -569,  -660,  -660,    71,  -660,  -152,   226,
    -660,  -258,   108,  -660,   230,    15,  -660,  -207,  -660,  -660,
    -660,  -660,  -660,   201,  -660,   -86,   203,  -660,  -660,  -660,
    -660,  -660,    -8,  -660,  -660,   -98,  -660,  -485,  -660,  -660,
    -175,  -660,  -660,  -660,   158,  -660,  -660,  -660,   -20,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,    83,  -660,  -660,
    -660,  -660,  -660,  -660,    12,  -660,  -660,  -660,   636,  -660,
    -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,   349,
    -660,  -660,  -660,  -660,  -660,  -660,   -52,  -332,  -660,   372,
    -660,   358,  -660,  -660,   183,  -660,   185,  -660
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,   157,   196,    24,    25,    26,    27,   706,
     764,   765,   546,   773,   808,    28,   197,   198,   292,   199,
     411,   547,   376,   512,   513,   514,   515,   488,   369,   489,
     757,   627,   715,   810,   777,   717,   718,   574,   575,   734,
     735,   312,   313,   341,   342,   459,   460,   725,   726,   385,
     201,   382,   383,   281,   282,   543,    29,   336,   233,   234,
     464,    30,    31,   451,   452,   327,   328,    32,    33,    34,
      35,   480,   579,   580,   654,   655,   738,   370,   742,   791,
     792,    36,    37,   371,   372,   490,   492,   591,   592,   669,
     745,    38,    39,    40,    41,    42,   470,   471,   665,    43,
      44,   467,   468,   566,   567,    45,    46,    47,   216,   634,
      48,   498,    49,    50,    51,    52,    53,    54,   202,   203,
     204,    55,    56,    57,    58,    59,   205,   206,   286,   287,
     207,   208,   477,   478,   349,   350,   351,   243
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   646,   386,   215,   389,   390,   589,   650,   393,   394,
     629,   239,   733,   686,   472,   362,   337,   238,   314,   362,
     475,   338,   759,   339,   362,   644,   241,   755,   648,   604,
     310,   435,   368,   293,   721,   245,   387,   362,   357,   288,
     486,   362,   363,   516,   362,   461,   362,   363,   771,   364,
     365,   362,   363,   740,   364,   365,   246,   247,   248,   493,
     365,   462,   688,   685,   346,   294,   692,   695,   697,   699,
     701,   703,   283,   284,   668,   362,   363,   335,   690,   283,
     284,   494,   283,   284,   365,   362,   363,   359,   693,   362,
     363,   436,   375,   605,   365,   495,   496,   375,   365,   159,
     785,   731,   162,   404,   311,   405,   484,   485,   548,   347,
     164,   682,   450,  -106,   347,   722,   360,   741,   465,   569,
     786,   242,   689,  -467,   683,   455,   307,   308,   309,   236,
     388,   160,   289,    62,   163,   463,   476,   809,   161,   497,
     631,   289,   632,   240,   448,   687,   756,   828,   448,   633,
     733,   252,   730,   448,   760,   250,   251,   238,   253,   254,
     293,   255,   256,   257,   474,  -461,   448,   570,   739,   733,
     366,   466,   838,   448,   487,   366,   165,   642,   516,   778,
     366,   487,   367,   167,   166,   746,   237,   737,   293,   542,
      60,   280,   294,   837,   733,   291,   568,   320,  -388,  -388,
     291,   352,    61,   353,   366,   285,   354,   293,   321,   326,
     795,   797,   285,   333,   366,   285,   606,   244,   366,   801,
     294,   521,   522,   315,   524,   522,   316,   527,   522,   335,
     343,   438,   439,   345,   528,   522,  -466,   472,   249,   294,
     356,   258,   200,   317,   530,   522,   832,   557,   259,   558,
     607,   305,   306,   307,   308,   309,   608,   531,   522,   585,
     586,   587,   588,   839,   674,   318,   676,   651,   652,   679,
     719,   586,   260,   516,   368,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   238,   261,   414,  -440,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   262,   820,   780,   781,   329,   783,   586,
     217,   656,   657,   326,   326,   788,   789,   516,   263,   609,
     610,   611,   612,   613,   614,   449,   798,   586,   799,   800,
     615,   814,   586,   658,   264,   265,   458,   824,   586,   215,
     293,   266,   469,   473,   825,   800,   291,   659,   660,   827,
     522,   643,   661,   222,   647,   843,   522,   267,   268,   269,
     270,   662,   663,   271,   272,   330,   223,   334,   340,   666,
     344,   511,   294,   358,   361,   769,   224,   374,   225,   226,
     373,   377,   391,   525,   399,   400,   401,   402,   406,   684,
     433,   664,   691,   694,   696,   698,   700,   702,   228,   174,
     280,   229,   541,   231,   440,   441,   542,   442,   443,   453,
     454,   456,   457,   232,   479,   481,   482,   276,   483,   277,
     278,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   368,   449,   491,   326,
     499,   517,   516,  -477,   516,   545,   526,   544,   549,   550,
     551,   554,   484,   368,   556,   516,   559,   560,   561,   562,
     563,   564,   565,   571,   581,   594,   573,   348,   593,   595,
     605,   596,   597,   598,   516,   578,   599,   582,   583,   584,
     600,   601,   602,   603,   381,   384,   624,   616,   626,   623,
     619,   392,   628,   630,   395,   396,   397,   398,   516,   516,
     640,   641,   649,   310,   667,   671,   511,   476,   670,   653,
     672,   408,   805,   680,   675,   413,   617,   677,   678,   415,
     416,   417,   418,   419,   420,   421,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   794,   796,   681,   704,
     705,   707,   437,   713,   714,   716,   720,   723,   217,   727,
     728,   748,   749,   750,   751,   638,   458,   752,   758,   766,
     753,   218,   815,   219,   754,   469,   770,   774,   772,   220,
     775,   776,   368,   779,   782,   790,   668,   806,   413,   784,
     787,   804,   842,   807,   221,   817,   293,   803,   811,   821,
     818,   222,   673,   822,   673,   823,   829,   673,   830,   835,
     831,   511,   833,   293,   223,   278,   836,   840,   841,   844,
     519,   355,   826,   625,   224,   812,   225,   226,   294,   541,
     802,   712,   412,   813,   293,   819,   381,   538,   539,   816,
     618,   639,   227,   724,   540,   294,   228,   565,   711,   229,
     230,   231,   553,   793,   736,   511,   555,   834,   578,   590,
     747,   232,   645,   729,   235,   768,   294,   422,   409,   572,
     434,     0,     0,   576,     0,   744,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,     0,     0,     0,     0,   532,   533,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,     0,
     293,   763,   348,   767,   348,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
       0,     0,   293,     0,   534,   535,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,     0,     0,     0,     0,   620,
       0,   621,   622,     0,     0,     0,     0,   238,     0,     0,
     511,     0,   511,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,   511,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,     0,     0,     0,   763,
       0,     0,   511,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,     0,
       0,     0,     0,   536,     0,     0,   511,   511,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,     0,
     172,   173,   174,     0,     0,     0,   175,    64,    65,    66,
     413,    67,    68,    69,   176,    71,    72,   177,    74,     0,
      75,    76,    77,    78,    79,    80,    81,   178,    83,    84,
      85,    86,    87,    88,     0,   179,    90,     0,     0,   180,
      92,    93,     0,    94,    95,    96,   181,   182,    99,   183,
     184,   100,   101,   102,   185,   104,     0,   105,   106,   107,
     108,     0,   109,   186,   111,   187,     0,   113,   114,   115,
       0,   116,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   188,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   189,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   190,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,   192,     0,     0,
     193,     0,     0,   194,     0,     0,   195,   273,   169,   170,
     171,     0,   378,   173,     0,     0,     0,     0,   175,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,   177,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   179,    90,     0,
       0,   180,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   183,   184,   100,   101,   102,   185,   104,     0,   105,
     106,   107,   108,     0,   109,   274,   111,   275,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   188,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   190,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   193,     0,     0,   379,   380,     0,   195,   273,
     169,   170,   171,     0,   172,   173,     0,     0,     0,     0,
     175,    64,    65,    66,     0,    67,    68,    69,   176,    71,
      72,   177,    74,     0,    75,    76,    77,    78,    79,    80,
      81,   178,    83,    84,    85,    86,    87,    88,     0,   179,
      90,     0,     0,   180,    92,    93,     0,    94,    95,    96,
     181,   182,    99,   183,   184,   100,   101,   102,   185,   104,
       0,   105,   106,   107,   108,     0,   109,   186,   111,   187,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   188,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   189,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   190,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,   192,     0,     0,   193,     0,     0,   194,     0,     0,
     195,   168,   169,   170,   171,     0,   172,   173,     0,     0,
       0,     0,   175,    64,    65,    66,     0,    67,    68,    69,
     176,    71,    72,   177,    74,     0,    75,    76,    77,    78,
      79,    80,    81,   178,    83,    84,    85,    86,    87,    88,
       0,   179,    90,     0,     0,   180,    92,    93,     0,    94,
      95,    96,   181,   182,    99,   183,   184,   100,   101,   102,
     185,   104,     0,   105,   106,   107,   108,     0,   109,   186,
     111,   187,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     188,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   189,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   190,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,     0,     0,   193,     0,     0,   194,
       0,     0,   195,   273,   169,   170,   171,     0,   172,   173,
       0,     0,     0,     0,   175,    64,    65,    66,     0,    67,
      68,    69,    70,    71,    72,   177,    74,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,   179,    90,     0,     0,   180,    92,    93,
       0,    94,    95,    96,    97,    98,    99,   183,   184,   100,
     101,   102,   185,   104,     0,   105,   106,   107,   108,     0,
     109,   274,   111,   275,     0,   113,   114,   115,     0,   116,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   188,   129,   130,   131,   518,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,   151,   152,   153,
     190,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   193,     0,
       0,   194,     0,     0,   195,   273,   169,   170,   171,     0,
     378,   173,     0,     0,     0,     0,   175,    64,    65,    66,
       0,    67,    68,    69,    70,    71,    72,   177,    74,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,   179,    90,     0,     0,   180,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   183,
     184,   100,   101,   102,   185,   104,     0,   105,   106,   107,
     108,     0,   109,   274,   111,   275,     0,   113,   114,   115,
       0,   116,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   188,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   190,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     193,     0,     0,   194,   380,     0,   195,   273,   169,   170,
     171,     0,   172,   173,     0,     0,     0,     0,   175,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,   177,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   179,    90,     0,
       0,   180,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   183,   184,   100,   101,   102,   185,   104,     0,   105,
     106,   107,   108,     0,   109,   274,   111,   275,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   188,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   190,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   193,     0,     0,   194,     0,     0,   195,   273,
     169,   170,   171,     0,   378,   173,     0,     0,     0,     0,
     175,    64,    65,    66,     0,    67,    68,    69,    70,    71,
      72,   177,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,   179,
      90,     0,     0,   180,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   183,   184,   100,   101,   102,   185,   104,
       0,   105,   106,   107,   108,     0,   109,   274,   111,   275,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   188,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   190,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,   193,     0,     0,   194,     0,     0,
     195,   273,   169,   170,   171,     0,   407,   173,     0,     0,
       0,     0,   175,    64,    65,    66,     0,    67,    68,    69,
      70,    71,    72,   177,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,   179,    90,     0,     0,   180,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   183,   184,   100,   101,   102,
     185,   104,     0,   105,   106,   107,   108,     0,   109,   274,
     111,   275,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     188,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   190,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,    63,   500,     0,   193,     0,     0,   194,
       0,     0,   195,     0,     0,    64,    65,    66,     0,    67,
      68,    69,    70,    71,    72,   501,    74,     0,    75,    76,
      77,    78,    79,    80,    81,   502,    83,    84,    85,    86,
      87,    88,     0,   503,    90,   504,     0,    91,    92,    93,
       0,    94,    95,    96,   505,    98,    99,   506,     0,   100,
     101,   102,   507,   104,     0,   105,   106,   107,   108,     0,
     508,   110,   111,   112,     0,   113,   114,   115,     0,   116,
       0,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,   147,   148,   149,   150,   151,   152,   153,
     509,   155,   156,     0,     0,     0,    63,     0,   635,     0,
       0,   636,     0,     0,     0,     0,     0,     0,    64,    65,
      66,   510,    67,    68,    69,    70,    71,    72,    73,    74,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,    97,    98,    99,
       0,     0,   100,   101,   102,   103,   104,     0,   105,   106,
     107,   108,     0,   109,   110,   111,   112,     0,   113,   114,
     115,     0,   116,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,   637,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,     0,     0,   100,   101,   102,   103,   104,
       0,   105,   106,   107,   108,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,    63,     0,   362,     0,     0,   444,     0,     0,
       0,     0,     0,     0,    64,    65,    66,   410,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,   445,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   446,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   447,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   362,     0,     0,     0,     0,     0,
       0,     0,     0,   448,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   322,   323,     0,   324,     0,     0,
       0,     0,     0,   448,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   325,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,   500,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,   501,    74,     0,    75,    76,    77,
      78,    79,    80,    81,   502,    83,    84,    85,    86,    87,
      88,     0,   503,    90,   504,     0,    91,    92,    93,     0,
      94,    95,    96,   505,    98,    99,   506,     0,   100,   101,
     102,   507,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   732,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   509,
     155,   156,    63,   500,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,   501,    74,     0,    75,    76,    77,
      78,    79,    80,    81,   502,    83,    84,    85,    86,    87,
      88,     0,   503,    90,   504,     0,    91,    92,    93,     0,
      94,    95,    96,   505,    98,    99,   506,     0,   100,   101,
     102,   507,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   509,
     155,   156,    63,     0,   552,     0,     0,   444,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,     0,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    63,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,   762,     0,   100,   101,
     102,   103,   104,     0,   105,   106,   107,   108,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    63,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,    64,    65,    66,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,     0,     0,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,     0,   279,   100,   101,   102,
     103,   104,     0,   105,   106,   107,   108,     0,   109,   110,
     111,   112,     0,   113,   114,   115,     0,   116,     0,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      63,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,    64,    65,    66,   290,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,    91,    92,    93,     0,    94,    95,
      96,    97,    98,    99,     0,     0,   100,   101,   102,   103,
     104,     0,   105,   106,   107,   108,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,     0,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      63,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,    64,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,    91,    92,    93,     0,    94,    95,
      96,    97,    98,    99,     0,     0,   100,   101,   102,   103,
     104,     0,   105,   106,   107,   108,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   332,   140,   141,   142,   143,   144,   145,   146,    63,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,    64,    65,    66,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
      97,    98,    99,   577,     0,   100,   101,   102,   103,   104,
       0,   105,   106,   107,   108,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,     0,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    63,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
      64,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,    91,    92,    93,     0,    94,    95,    96,    97,
      98,    99,     0,     0,   100,   101,   102,   103,   104,     0,
     105,   106,   107,   108,   743,   109,   110,   111,   112,     0,
     113,   114,   115,     0,   116,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    63,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   115,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,   210,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,   211,    96,    97,    98,
      99,     0,     0,   212,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   213,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   214,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,     0,     0,   116,     0,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,  -439,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    63,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,    64,
      65,    66,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,   210,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,     0,
     293,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,     0,     0,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,     0,   109,   110,   111,   112,     0,   113,
     114,   213,   294,   116,   293,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   293,   294,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,     0,   294,   293,     0,
       0,   533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     294,   293,     0,     0,     0,   535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,     0,   293,   294,     0,     0,   710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   294,   293,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   294,   293,     0,
       0,   523,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,   293,
     294,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   294,     0,     0,     0,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,     0,     0,     0,     0,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     1,     0,     0,     2,   709,
       0,     3,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     9,     0,
       0,   293,    10,     0,     0,     0,    11,     0,   520,     0,
       0,     0,     0,     0,     0,     0,   293,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,   294,     0,     0,     0,     0,     0,    13,
       0,     0,     0,   293,     0,     0,     0,     0,   294,    14,
       0,     0,    15,     0,    16,     0,    17,     0,     0,    18,
       0,    19,   294,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,    21,   294,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309
};

static const yytype_int16 yycheck[] =
{
       4,   570,   260,    17,   262,   263,   491,   574,   266,   267,
     551,    21,   649,     9,   346,     5,   223,    21,   204,     5,
      27,   228,     9,   230,     5,   568,    45,     8,   571,   510,
      69,    78,   249,    42,    34,    39,    41,     5,   245,    50,
       8,     5,     6,   375,     5,    14,     5,     6,    50,     8,
      14,     5,     6,    79,     8,    14,    60,    61,    62,    25,
      14,    30,    78,   606,    98,    74,   609,   610,   611,   612,
     613,   614,    13,    14,    18,     5,     6,    68,     8,    13,
      14,    47,    13,    14,    14,     5,     6,    15,     8,     5,
       6,   138,   121,   124,    14,    61,    62,   121,    14,    51,
      19,   642,    51,   143,   143,   145,     5,     6,   411,   143,
      21,   142,   329,   104,   143,   115,    44,   143,    68,   143,
      39,   140,   138,    64,   605,   332,   135,   136,   137,   111,
     135,    83,   143,    59,    83,   104,   143,   774,    50,   105,
      88,   143,    90,     0,   134,   141,   687,   806,   134,    97,
     787,   161,   142,   134,   141,   159,   160,   161,   162,   163,
      42,   165,   166,   167,   350,     0,   134,   470,   653,   806,
     134,   121,   831,   134,   142,   134,    87,   141,   510,   720,
     134,   142,   141,    59,    95,   670,    95,   141,    42,   406,
      95,   195,    74,   830,   831,   199,   127,   211,   142,   143,
     204,    96,   107,    98,   134,   146,   101,    42,   212,   213,
     753,   754,   146,   217,   134,   146,    24,    63,   134,   760,
      74,   142,   143,    64,   142,   143,   127,   142,   143,    68,
     234,   317,   318,   237,   142,   143,    64,   569,   141,    74,
     244,   141,    16,   127,   142,   143,   813,   454,   141,   456,
      58,   133,   134,   135,   136,   137,    64,   142,   143,   142,
     143,   142,   143,   832,   596,    98,   598,   142,   143,   601,
     142,   143,   141,   605,   491,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   288,   141,   290,   111,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   141,   789,   142,   143,   127,   142,   143,
      16,    25,    26,   317,   318,   142,   143,   649,   141,   127,
     128,   129,   130,   131,   132,   329,   142,   143,   142,   143,
     138,   142,   143,    47,   141,   141,   340,   142,   143,   353,
      42,   141,   346,   347,   142,   143,   350,    61,    62,   142,
     143,   568,    66,    59,   571,   142,   143,   141,   141,   141,
     141,    75,    76,   141,   141,   111,    72,    98,    79,   586,
     118,   375,    74,    89,   110,   707,    82,   114,    84,    85,
      93,   114,   142,   387,   142,   141,   141,   141,   127,   606,
       5,   105,   609,   610,   611,   612,   613,   614,   104,    10,
     404,   107,   406,   109,   127,   127,   623,    52,   134,    65,
     104,   104,     8,   119,   141,    32,    32,   191,    95,   193,
     194,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   653,   441,   143,   443,
       8,     8,   774,   127,   776,   147,   142,   147,   143,    78,
     141,     9,     5,   670,    67,   787,   127,   143,    99,     5,
      99,     8,   466,   127,   117,   102,    80,   241,   142,   102,
     124,   141,   141,   141,   806,   479,   141,   481,   482,   483,
     141,   141,   141,   141,   258,   259,    96,   142,    53,   127,
     142,   265,     5,   127,   268,   269,   270,   271,   830,   831,
     127,   123,    27,    69,     8,     8,   510,   143,   143,   141,
       8,   285,   770,     8,   135,   289,   520,   142,   142,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   753,   754,   142,    58,
     143,    58,   316,   142,     5,   122,   141,    88,    16,   141,
       8,   142,   142,   142,   142,   559,   560,   142,    78,   142,
     124,    29,   779,    31,   124,   569,   141,    27,    80,    37,
      53,    56,   789,   127,     8,     3,    18,    27,   352,   141,
     143,   142,   840,    69,    52,   142,    42,   143,    80,   127,
     142,    59,   596,   143,   598,     8,     5,   601,   143,   143,
      27,   605,     8,    42,    72,   379,   143,   141,     5,   142,
     379,   242,   803,   546,    82,   776,    84,    85,    74,   623,
     760,   624,   289,   777,    42,   787,   400,   401,   402,   781,
     522,   560,   100,   637,   404,    74,   104,   641,   623,   107,
     108,   109,   441,   741,   652,   649,   443,   822,   652,   491,
     670,   119,   569,   641,    18,   707,    74,   299,   286,   476,
     311,    -1,    -1,   478,    -1,   669,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,    -1,    -1,    -1,   142,   143,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
      42,   705,   476,   707,   478,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,    42,    -1,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   518,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,   533,
      -1,   535,   536,    -1,    -1,    -1,    -1,   771,    -1,    -1,
     774,    -1,   776,    -1,    -1,    -1,    -1,   781,    -1,    -1,
      -1,    -1,    -1,   787,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,    -1,    -1,   803,
      -1,    -1,   806,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,   830,   831,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
     624,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    -1,
     138,    -1,    -1,   141,    -1,    -1,   144,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,    -1,   144,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,    -1,   138,    -1,    -1,   141,    -1,    -1,
     144,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    -1,   138,    -1,    -1,   141,
      -1,    -1,   144,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    75,    76,    77,    -1,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,    -1,    -1,   144,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    -1,    75,    76,    77,
      -1,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,    -1,   144,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,    -1,    -1,   144,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,   141,    -1,    -1,
     144,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,     3,     4,    -1,   138,    -1,    -1,   141,
      -1,    -1,   144,    -1,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    75,    76,    77,    -1,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,     3,    -1,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,   141,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    75,    76,
      77,    -1,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,   141,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,   141,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,   134,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    -1,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     3,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       3,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    75,    76,    77,    -1,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    -1,    75,    76,    77,    -1,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     3,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      -1,    75,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     3,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     3,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    -1,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      42,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    -1,    75,
      76,    77,    74,    79,    42,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    42,    74,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,    74,    42,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      74,    42,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    -1,    42,    74,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    74,    42,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,    74,    42,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,    42,
      74,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    74,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,    17,    -1,    -1,    20,   142,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,    38,    39,    40,    -1,
      -1,    42,    44,    -1,    -1,    -1,    48,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    74,    91,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,    -1,   101,
      -1,   103,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    74,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    20,    23,    28,    33,    36,    38,    39,    40,
      44,    48,    60,    81,    91,    94,    96,    98,   101,   103,
     113,   116,   149,   150,   153,   154,   155,   156,   163,   204,
     209,   210,   215,   216,   217,   218,   229,   230,   239,   240,
     241,   242,   243,   247,   248,   253,   254,   255,   258,   260,
     261,   262,   263,   264,   265,   269,   270,   271,   272,   273,
      95,   107,    59,     3,    15,    16,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    43,
      44,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      59,    60,    61,    62,    63,    65,    66,    67,    68,    70,
      71,    72,    73,    75,    76,    77,    79,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   151,   152,    51,
      83,    50,    51,    83,    21,    87,    95,    59,     3,     4,
       5,     6,     8,     9,    10,    14,    22,    25,    35,    43,
      47,    54,    55,    57,    58,    62,    71,    73,    92,   106,
     120,   134,   135,   138,   141,   144,   152,   164,   165,   167,
     197,   198,   266,   267,   268,   274,   275,   278,   279,    10,
      29,    52,    59,    77,   100,   151,   256,    16,    29,    31,
      37,    52,    59,    72,    82,    84,    85,   100,   104,   107,
     108,   109,   119,   206,   207,   256,   111,    95,   152,   168,
       0,    45,   140,   285,    63,   152,   152,   152,   152,   141,
     152,   152,   168,   152,   152,   152,   152,   152,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,     3,    71,    73,   197,   197,   197,    58,
     152,   201,   202,    13,    14,   146,   276,   277,    50,   143,
      18,   152,   166,    42,    74,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      69,   143,   189,   190,   166,    64,   127,   127,    98,     9,
     151,   152,     5,     6,     8,    78,   152,   213,   214,   127,
     111,     8,   104,   152,    98,    68,   205,   205,   205,   205,
      79,   191,   192,   152,   118,   152,    98,   143,   197,   282,
     283,   284,    96,    98,   101,   154,   152,   205,    89,    15,
      44,   110,     5,     6,     8,    14,   134,   141,   175,   176,
     225,   231,   232,    93,   114,   121,   170,   114,     8,   141,
     142,   197,   199,   200,   197,   197,   199,    41,   135,   199,
     199,   142,   197,   199,   199,   197,   197,   197,   197,   142,
     141,   141,   141,   142,   143,   145,   127,     8,   197,   277,
     141,   168,   165,   197,   152,   197,   197,   197,   197,   197,
     197,   197,   279,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,     5,   267,    78,   138,   197,   213,   213,
     127,   127,    52,   134,     8,    46,    78,   112,   134,   152,
     175,   211,   212,    65,   104,   205,   104,     8,   152,   193,
     194,    14,    30,   104,   208,    68,   121,   249,   250,   152,
     244,   245,   275,   152,   166,    27,   143,   280,   281,   141,
     219,    32,    32,    95,     5,     6,     8,   142,   175,   177,
     233,   143,   234,    25,    47,    61,    62,   105,   259,     8,
       4,    25,    35,    43,    45,    54,    57,    62,    70,   120,
     141,   152,   171,   172,   173,   174,   275,     8,    96,   156,
      49,   142,   143,   142,   142,   152,   142,   142,   142,   142,
     142,   142,   142,   143,   142,   143,   143,   142,   197,   197,
     202,   152,   175,   203,   147,   147,   160,   169,   170,   143,
      78,   141,     5,   211,     9,   214,    67,   205,   205,   127,
     143,    99,     5,    99,     8,   152,   251,   252,   127,   143,
     170,   127,   282,    80,   185,   186,   284,    57,   152,   220,
     221,   117,   152,   152,   152,   142,   143,   142,   143,   225,
     232,   235,   236,   142,   102,   102,   141,   141,   141,   141,
     141,   141,   141,   141,   171,   124,    24,    58,    64,   127,
     128,   129,   130,   131,   132,   138,   142,   152,   200,   142,
     197,   197,   197,   127,    96,   163,    53,   179,     5,   177,
     127,    88,    90,    97,   257,     5,     8,   141,   152,   194,
     127,   123,   141,   175,   176,   245,   191,   175,   176,    27,
     189,   142,   143,   141,   222,   223,    25,    26,    47,    61,
      62,    66,    75,    76,   105,   246,   175,     8,    18,   237,
     143,     8,     8,   152,   275,   135,   275,   142,   142,   275,
       8,   142,   142,   171,   175,   176,     9,   141,    78,   138,
       8,   175,   176,     8,   175,   176,   175,   176,   175,   176,
     175,   176,   175,   176,    58,   143,   157,    58,   142,   142,
     143,   203,   164,   142,     5,   180,   122,   183,   184,   142,
     141,    34,   115,    88,   152,   195,   196,   141,     8,   252,
     142,   177,    86,   174,   187,   188,   220,   141,   224,   225,
      79,   143,   226,    69,   152,   238,   225,   236,   142,   142,
     142,   142,   142,   124,   124,     8,   177,   178,    78,     9,
     141,     5,    57,   152,   158,   159,   142,   152,   274,   275,
     141,    50,    80,   161,    27,    53,    56,   182,   177,   127,
     142,   143,     8,   142,   141,    19,    39,   143,   142,   143,
       3,   227,   228,   223,   175,   176,   175,   176,   142,   142,
     143,   177,   178,   143,   142,   199,    27,    69,   162,   174,
     181,    80,   173,   185,   142,   175,   196,   142,   142,   188,
     225,   127,   143,     8,   142,   142,   159,   142,   187,     5,
     143,    27,   189,     8,   228,   143,   143,   174,   187,   191,
     141,     5,   199,   142,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   148,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   154,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   159,   160,   161,   162,   162,   162,   163,   164,
     164,   165,   165,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   169,   169,   170,
     171,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   193,   193,
     194,   194,   194,   194,   194,   195,   195,   196,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   209,   209,   210,
     210,   210,   210,   211,   211,   212,   212,   212,   213,   213,
     214,   214,   214,   214,   214,   215,   215,   215,   216,   216,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   224,   224,   225,   225,   225,   225,   225,   226,
     226,   227,   227,   228,   229,   230,   231,   231,   232,   232,
     233,   233,   234,   234,   235,   235,   236,   237,   237,   238,
     238,   239,   240,   240,   241,   242,   243,   244,   244,   245,
     245,   245,   245,   245,   245,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   247,   247,   247,   248,   248,   249,
     249,   250,   251,   251,   252,   253,   254,   255,   256,   256,
     256,   257,   257,   257,   257,   258,   259,   259,   259,   259,
     259,   260,   261,   262,   263,   264,   265,   266,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   274,   275,   276,
     276,   277,   277,   277,   277,   278,   278,   279,   280,   280,
     281,   282,   283,   284,   284,   285
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     8,     1,     9,     0,     2,     1,     3,
       1,     1,     1,     0,     3,     0,     2,     4,    11,     1,
       3,     1,     2,     0,     1,     2,     1,     4,     4,     4,
       4,     4,     4,     3,     5,     1,     3,     0,     1,     2,
       1,     3,     3,     4,     1,     3,     3,     5,     6,     5,
       6,     3,     4,     5,     3,     3,     3,     3,     3,     3,
       5,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     4,     3,     3,     1,     1,     4,     4,
       4,     3,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     0,     4,     0,     1,     1,     3,     0,     2,     0,
       1,     5,     0,     1,     3,     5,     1,     3,     1,     2,
       2,     0,     1,     2,     4,     0,     1,     2,     1,     3,
       3,     3,     5,     6,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       4,     4,     4,     4,     4,     4,     4,     3,     6,     6,
       3,     8,    14,     1,     3,     1,     1,     3,     5,     1,
       1,     1,     1,     2,     0,     2,     1,     2,     2,     3,
       1,     1,     1,     2,     4,     4,     3,     4,     4,     1,
       1,     0,     2,     4,     4,     4,     3,     4,     4,     7,
       5,     5,     9,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       7,     1,     1,     0,     3,     1,     1,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     3,     2,     0,
       2,     1,     3,     3,     4,     6,     1,     3,     1,     3,
       1,     3,     0,     2,     1,     3,     3,     0,     1,     1,
       1,     3,     1,     1,     3,     3,     6,     1,     3,     3,
       3,     5,     4,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     6,     4,     4,     5,     0,
       1,     2,     1,     3,     3,     2,     3,     6,     0,     1,
       1,     2,     2,     2,     1,     7,     1,     1,     1,     1,
       1,     3,     6,     3,     3,     2,     3,     1,     3,     2,
       1,     2,     3,     3,     7,     5,     1,     1,     2,     1,
       2,     1,     1,     3,     3,     3,     3,     1,     0,     2,
       1,     2,     1,     1,     3,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (pParser, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, pParser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (pParser);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, SqlParser_c * pParser)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , pParser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pParser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, SqlParser_c * pParser)
{
  YYUSE (yyvaluep);
  YYUSE (pParser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (SqlParser_c * pParser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, pParser);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { pParser->PushQuery(); }

    break;

  case 126:

    { pParser->PushQuery(); }

    break;

  case 127:

    { pParser->PushQuery(); }

    break;

  case 128:

    { pParser->PushQuery(); }

    break;

  case 133:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by table argument
			pParser->ToString ( pParser->m_pStmt->m_sTableFunc, (yyvsp[-6]) );
		}

    break;

  case 135:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		}

    break;

  case 138:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[0]) );
		}

    break;

  case 139:

    {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), (yyvsp[0]) );
		}

    break;

  case 143:

    {
		CSphVector<CSphQueryItem> & dItems = pParser->m_pQuery->m_dItems;
		if ( dItems.GetLength()!=1 || dItems[0].m_sExpr!="*" )
		{
			yyerror ( pParser, "outer select list must be a single star" );
			YYERROR;
		}
		dItems.Reset();
		pParser->ResetSelect();
	}

    break;

  case 144:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOuterOrderBy, (yyvsp[0]) );
			pParser->m_pQuery->m_bHasOuter = true;
		}

    break;

  case 146:

    {
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[0]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		}

    break;

  case 147:

    {
			pParser->m_pQuery->m_iOuterOffset = (yyvsp[-2]).m_iValue;
			pParser->m_pQuery->m_iOuterLimit = (yyvsp[0]).m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		}

    break;

  case 148:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->ToString ( pParser->m_pQuery->m_sIndexes, (yyvsp[-7]) );
		}

    break;

  case 151:

    { pParser->AddItem ( &(yyvsp[0]) ); }

    break;

  case 154:

    { pParser->AliasLastItem ( &(yyvsp[0]) ); }

    break;

  case 155:

    { pParser->AliasLastItem ( &(yyvsp[0]) ); }

    break;

  case 156:

    { pParser->AddItem ( &(yyvsp[0]) ); }

    break;

  case 157:

    { pParser->AddItem ( &(yyvsp[-1]), SPH_AGGR_AVG, &(yyvsp[-3]), &(yyvsp[0]) ); }

    break;

  case 158:

    { pParser->AddItem ( &(yyvsp[-1]), SPH_AGGR_MAX, &(yyvsp[-3]), &(yyvsp[0]) ); }

    break;

  case 159:

    { pParser->AddItem ( &(yyvsp[-1]), SPH_AGGR_MIN, &(yyvsp[-3]), &(yyvsp[0]) ); }

    break;

  case 160:

    { pParser->AddItem ( &(yyvsp[-1]), SPH_AGGR_SUM, &(yyvsp[-3]), &(yyvsp[0]) ); }

    break;

  case 161:

    { pParser->AddItem ( &(yyvsp[-1]), SPH_AGGR_CAT, &(yyvsp[-3]), &(yyvsp[0]) ); }

    break;

  case 162:

    { if ( !pParser->AddItem ( "count(*)", &(yyvsp[-3]), &(yyvsp[0]) ) ) YYERROR; }

    break;

  case 163:

    { if ( !pParser->AddItem ( "groupby()", &(yyvsp[-2]), &(yyvsp[0]) ) ) YYERROR; }

    break;

  case 164:

    { if ( !pParser->AddDistinct ( &(yyvsp[-1]), &(yyvsp[-4]), &(yyvsp[0]) ) ) YYERROR; }

    break;

  case 166:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 173:

    {
			if ( !pParser->SetMatch((yyvsp[-1])) )
				YYERROR;
		}

    break;

  case 175:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[-2]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[0]).m_iValue );
		}

    break;

  case 176:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[-2]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( (yyvsp[0]).m_iValue );
			pFilter->m_bExclude = true;
		}

    break;

  case 177:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[-4]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[-1]).m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		}

    break;

  case 178:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( (yyvsp[-5]) );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *(yyvsp[-1]).m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
			pFilter->m_bExclude = true;
		}

    break;

  case 179:

    {
			if ( !pParser->AddStringListFilter ( (yyvsp[-4]), (yyvsp[-1]), false ) )
				YYERROR;
		}

    break;

  case 180:

    {
			if ( !pParser->AddStringListFilter ( (yyvsp[-5]), (yyvsp[-1]), true ) )
				YYERROR;
		}

    break;

  case 181:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[-2]), (yyvsp[0]), false ) )
				YYERROR;
		}

    break;

  case 182:

    {
			if ( !pParser->AddUservarFilter ( (yyvsp[-3]), (yyvsp[0]), true ) )
				YYERROR;
		}

    break;

  case 183:

    {
			if ( !pParser->AddIntRangeFilter ( (yyvsp[-4]), (yyvsp[-2]).m_iValue, (yyvsp[0]).m_iValue ) )
				YYERROR;
		}

    break;

  case 184:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[-2]), (yyvsp[0]).m_iValue, false ) )
				YYERROR;
		}

    break;

  case 185:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[-2]), (yyvsp[0]).m_iValue, false ) )
				YYERROR;
		}

    break;

  case 186:

    {
			if ( !pParser->AddIntFilterGreater ( (yyvsp[-2]), (yyvsp[0]).m_iValue, true ) )
				YYERROR;
		}

    break;

  case 187:

    {
			if ( !pParser->AddIntFilterLesser ( (yyvsp[-2]), (yyvsp[0]).m_iValue, true ) )
				YYERROR;
		}

    break;

  case 188:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), (yyvsp[0]).m_fValue, (yyvsp[0]).m_fValue, true ) )
				YYERROR;
		}

    break;

  case 189:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), (yyvsp[0]).m_fValue, (yyvsp[0]).m_fValue, true, true ) )
				YYERROR;
		}

    break;

  case 190:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-4]), (yyvsp[-2]).m_fValue, (yyvsp[0]).m_fValue, true ) )
				YYERROR;
		}

    break;

  case 191:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-4]), (yyvsp[-2]).m_iValue, (yyvsp[0]).m_fValue, true ) )
				YYERROR;
		}

    break;

  case 192:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-4]), (yyvsp[-2]).m_fValue, (yyvsp[0]).m_iValue, true ) )
				YYERROR;
		}

    break;

  case 193:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), (yyvsp[0]).m_fValue, FLT_MAX, false ) )
				YYERROR;
		}

    break;

  case 194:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), -FLT_MAX, (yyvsp[0]).m_fValue, false ) )
				YYERROR;
		}

    break;

  case 195:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), (yyvsp[0]).m_fValue, FLT_MAX, true ) )
				YYERROR;
		}

    break;

  case 196:

    {
			if ( !pParser->AddFloatRangeFilter ( (yyvsp[-2]), -FLT_MAX, (yyvsp[0]).m_fValue, true ) )
				YYERROR;
		}

    break;

  case 197:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[-2]), (yyvsp[0]), false ) )
				YYERROR;
		}

    break;

  case 198:

    {
			if ( !pParser->AddStringFilter ( (yyvsp[-2]), (yyvsp[0]), true ) )
				YYERROR;
		}

    break;

  case 199:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[-2]), true ) )
				YYERROR;
		}

    break;

  case 200:

    {
			if ( !pParser->AddNullFilter ( (yyvsp[-3]), false ) )
				YYERROR;
		}

    break;

  case 202:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		}

    break;

  case 203:

    {
			(yyval).m_iType = SPHINXQL_TOK_COUNT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}

    break;

  case 204:

    {
			(yyval).m_iType = SPHINXQL_TOK_GROUPBY;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}

    break;

  case 205:

    {
			(yyval).m_iType = SPHINXQL_TOK_WEIGHT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}

    break;

  case 206:

    {
			(yyval).m_iType = SPHINXQL_TOK_ID;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}

    break;

  case 212:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[0]).m_iValue; }

    break;

  case 213:

    {
			(yyval).m_iType = TOK_CONST_INT;
			if ( (uint64_t)(yyvsp[0]).m_iValue > (uint64_t)LLONG_MAX )
				(yyval).m_iValue = LLONG_MIN;
			else
				(yyval).m_iValue = -(yyvsp[0]).m_iValue;
		}

    break;

  case 214:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[0]).m_fValue; }

    break;

  case 215:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = -(yyvsp[0]).m_fValue; }

    break;

  case 216:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[0]).m_fValue; }

    break;

  case 217:

    {
			assert ( !(yyval).m_pValues.Ptr() );
			(yyval).m_pValues = new RefcountedVector_c<SphAttr_t> ();
			(yyval).m_pValues->Add ( (yyvsp[0]).m_iValue ); 
		}

    break;

  case 218:

    {
			(yyval).m_pValues->Add ( (yyvsp[0]).m_iValue );
		}

    break;

  case 219:

    {
			assert ( !(yyval).m_pValues.Ptr() );
			(yyval).m_pValues = new RefcountedVector_c<SphAttr_t> ();
			(yyval).m_pValues->Add ( (yyvsp[0]).m_iValue );
		}

    break;

  case 220:

    {
			(yyval).m_pValues->Add ( (yyvsp[0]).m_iValue );
		}

    break;

  case 224:

    {
			pParser->SetGroupbyLimit ( (yyvsp[0]).m_iValue );
		}

    break;

  case 225:

    {
			pParser->AddGroupBy ( (yyvsp[0]) );
		}

    break;

  case 226:

    {
			pParser->AddGroupBy ( (yyvsp[0]) );
		}

    break;

  case 228:

    {
			pParser->AddHaving();
		}

    break;

  case 231:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->ToString ( pParser->m_pQuery->m_sSortBy, (yyvsp[0]) );
		}

    break;

  case 234:

    {
			pParser->ToString ( pParser->m_pQuery->m_sOrderBy, (yyvsp[0]) );
		}

    break;

  case 235:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		}

    break;

  case 237:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 239:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-1]), (yyvsp[0]) ); }

    break;

  case 240:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-1]), (yyvsp[0]) ); }

    break;

  case 243:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = (yyvsp[0]).m_iValue;
		}

    break;

  case 244:

    {
			pParser->m_pQuery->m_iOffset = (yyvsp[-2]).m_iValue;
			pParser->m_pQuery->m_iLimit = (yyvsp[0]).m_iValue;
		}

    break;

  case 250:

    {
			if ( !pParser->AddOption ( (yyvsp[-2]), (yyvsp[0]) ) )
				YYERROR;
		}

    break;

  case 251:

    {
			if ( !pParser->AddOption ( (yyvsp[-2]), (yyvsp[0]) ) )
				YYERROR;
		}

    break;

  case 252:

    {
			if ( !pParser->AddOption ( (yyvsp[-4]), pParser->GetNamedVec ( (yyvsp[-1]).m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( (yyvsp[-1]).m_iValue );
		}

    break;

  case 253:

    {
			if ( !pParser->AddOption ( (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]) ) )
				YYERROR;
		}

    break;

  case 254:

    {
			if ( !pParser->AddOption ( (yyvsp[-2]), (yyvsp[0]) ) )
				YYERROR;
		}

    break;

  case 255:

    {
			(yyval).m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( (yyval).m_iValue, (yyvsp[0]) );
		}

    break;

  case 256:

    {
			pParser->AddConst( (yyval).m_iValue, (yyvsp[0]) );
		}

    break;

  case 257:

    {
			(yyval) = (yyvsp[-2]);
			(yyval).m_iValue = (yyvsp[0]).m_iValue;
		}

    break;

  case 259:

    { if ( !pParser->SetOldSyntax() ) YYERROR; }

    break;

  case 260:

    { if ( !pParser->SetNewSyntax() ) YYERROR; }

    break;

  case 265:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-1]), (yyvsp[0]) ); }

    break;

  case 266:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-1]), (yyvsp[0]) ); }

    break;

  case 267:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 268:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 269:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 270:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 271:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 272:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 273:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 274:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 275:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 276:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 277:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 278:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 279:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 280:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 281:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 282:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 283:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 284:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 285:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 289:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 290:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 291:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 292:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 293:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 294:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 295:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 296:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-3]), (yyvsp[0]) ); }

    break;

  case 297:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 298:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-5]), (yyvsp[0]) ); }

    break;

  case 299:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-5]), (yyvsp[0]) ); }

    break;

  case 300:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 301:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-7]), (yyvsp[0]) ); }

    break;

  case 302:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-13]), (yyvsp[0]) ); }

    break;

  case 307:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 308:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-4]), (yyvsp[0]) ); }

    break;

  case 315:

    { pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[0]) ); }

    break;

  case 316:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; }

    break;

  case 317:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; }

    break;

  case 318:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; }

    break;

  case 319:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; }

    break;

  case 320:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; }

    break;

  case 321:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; }

    break;

  case 322:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLUGINS; }

    break;

  case 323:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_THREADS; }

    break;

  case 324:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sIndex, (yyvsp[-2]) );
		}

    break;

  case 325:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-2]) );
		}

    break;

  case 326:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-1]) );
		}

    break;

  case 327:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-2]) );
		}

    break;

  case 328:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-2]) );
			pParser->m_pStmt->m_iIntParam = int((yyvsp[-1]).m_fValue*10);
		}

    break;

  case 332:

    {
			pParser->m_pStmt->m_iIntParam = (yyvsp[0]).m_iValue;
		}

    break;

  case 333:

    {
			pParser->SetStatement ( (yyvsp[-2]), SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = (yyvsp[0]).m_iValue;
		}

    break;

  case 334:

    {
			pParser->SetStatement ( (yyvsp[-2]), SET_LOCAL );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[0]) );
		}

    break;

  case 335:

    {
			pParser->SetStatement ( (yyvsp[-2]), SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		}

    break;

  case 336:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }

    break;

  case 337:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }

    break;

  case 338:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }

    break;

  case 339:

    {
			pParser->SetStatement ( (yyvsp[-4]), SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[-1]).m_pValues.Ptr();
		}

    break;

  case 340:

    {
			pParser->SetStatement ( (yyvsp[-2]), SET_GLOBAL_SVAR );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, (yyvsp[0]) ).Unquote();
		}

    break;

  case 341:

    {
			pParser->SetStatement ( (yyvsp[-2]), SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_iSetValue = (yyvsp[0]).m_iValue;
		}

    break;

  case 342:

    {
			pParser->SetStatement ( (yyvsp[-4]), SET_INDEX_UVAR );
			pParser->m_pStmt->m_dSetValues = *(yyvsp[-1]).m_pValues.Ptr();
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-6]) );
		}

    break;

  case 345:

    { (yyval).m_iValue = 1; }

    break;

  case 346:

    { (yyval).m_iValue = 0; }

    break;

  case 347:

    {
			(yyval).m_iValue = (yyvsp[0]).m_iValue;
			if ( (yyval).m_iValue!=0 && (yyval).m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		}

    break;

  case 355:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; }

    break;

  case 356:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; }

    break;

  case 357:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; }

    break;

  case 360:

    {
			// everything else is pushed directly into parser within the rules
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-4]) );
		}

    break;

  case 361:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; }

    break;

  case 362:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; }

    break;

  case 367:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[0]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } }

    break;

  case 368:

    { if ( !pParser->AddSchemaItem ( &(yyvsp[0]) ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } }

    break;

  case 371:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } }

    break;

  case 372:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[0]) ); }

    break;

  case 373:

    { AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[0]) ); }

    break;

  case 374:

    { (yyval).m_iType = TOK_CONST_INT; (yyval).m_iValue = (yyvsp[0]).m_iValue; }

    break;

  case 375:

    { (yyval).m_iType = TOK_CONST_FLOAT; (yyval).m_fValue = (yyvsp[0]).m_fValue; }

    break;

  case 376:

    { (yyval).m_iType = TOK_QUOTED_STRING; (yyval).m_iStart = (yyvsp[0]).m_iStart; (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 377:

    { (yyval).m_iType = TOK_CONST_MVA; (yyval).m_pValues = (yyvsp[-1]).m_pValues; }

    break;

  case 378:

    { (yyval).m_iType = TOK_CONST_MVA; }

    break;

  case 383:

    { if ( !pParser->AddInsertOption ( (yyvsp[-2]), (yyvsp[0]) ) ) YYERROR; }

    break;

  case 384:

    {
		if ( !pParser->DeleteStatement ( &(yyvsp[-1]) ) )
			YYERROR;
	}

    break;

  case 385:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->ToString ( pParser->m_pStmt->m_sCallProc, (yyvsp[-4]) );
		}

    break;

  case 386:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[0]) );
		}

    break;

  case 387:

    {
			AddInsval ( pParser, pParser->m_pStmt->m_dInsertValues, (yyvsp[0]) );
		}

    break;

  case 389:

    {
			(yyval).m_iType = TOK_CONST_STRINGS;
		}

    break;

  case 390:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), (yyvsp[0]) );
		}

    break;

  case 391:

    {
			pParser->ToStringUnescape ( pParser->m_pStmt->m_dCallStrings.Add(), (yyvsp[0]) );
		}

    break;

  case 394:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		}

    break;

  case 396:

    {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), (yyvsp[0]) );
			AddInsval ( pParser, pParser->m_pStmt->m_dCallOptValues, (yyvsp[-2]) );
		}

    break;

  case 401:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, (yyvsp[-1]) );
		}

    break;

  case 404:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; }

    break;

  case 405:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_DATABASES; }

    break;

  case 406:

    {
			if ( !pParser->UpdateStatement ( &(yyvsp[-4]) ) )
				YYERROR;
		}

    break;

  case 409:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)(yyvsp[0]).m_iValue );
			DWORD uHi = (DWORD)( (yyvsp[0]).m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_INTEGER );
			}
		}

    break;

  case 410:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[0]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_FLOAT );
		}

    break;

  case 411:

    {
			pParser->UpdateMVAAttr ( (yyvsp[-4]), (yyvsp[-1]) );
		}

    break;

  case 412:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( (yyvsp[-3]), tNoValues );
		}

    break;

  case 413:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( (DWORD)(yyvsp[0]).m_iValue );
			DWORD uHi = (DWORD)( (yyvsp[0]).m_iValue>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->m_tUpdate.m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_INTEGER );
			}
		}

    break;

  case 414:

    {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->m_tUpdate.m_dPool.Add ( sphF2DW ( (yyvsp[0]).m_fValue ) );
			pParser->AddUpdatedAttr ( (yyvsp[-2]), SPH_ATTR_FLOAT );
		}

    break;

  case 415:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; }

    break;

  case 416:

    { (yyval).m_iValue = SPH_ATTR_BIGINT; }

    break;

  case 417:

    { (yyval).m_iValue = SPH_ATTR_FLOAT; }

    break;

  case 418:

    { (yyval).m_iValue = SPH_ATTR_BOOL; }

    break;

  case 419:

    { (yyval).m_iValue = SPH_ATTR_UINT32SET; }

    break;

  case 420:

    { (yyval).m_iValue = SPH_ATTR_INT64SET; }

    break;

  case 421:

    { (yyval).m_iValue = SPH_ATTR_JSON; }

    break;

  case 422:

    { (yyval).m_iValue = SPH_ATTR_STRING; }

    break;

  case 423:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; }

    break;

  case 424:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_ADD;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[-4]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[-1]) );
			tStmt.m_eAlterColType = (ESphAttr)(yyvsp[0]).m_iValue;
		}

    break;

  case 425:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_DROP;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[-3]) );
			pParser->ToString ( tStmt.m_sAlterAttr, (yyvsp[0]) );
		}

    break;

  case 426:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_RECONFIGURE;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[-1]) );
		}

    break;

  case 427:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		}

    break;

  case 428:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
			pParser->ToStringUnescape ( pParser->m_pStmt->m_sStringParam, (yyvsp[0]) );
		}

    break;

  case 435:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		}

    break;

  case 436:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		}

    break;

  case 437:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		}

    break;

  case 445:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[-4]) );
			pParser->ToStringUnescape ( tStmt.m_sUdfLib, (yyvsp[0]) );
			tStmt.m_eUdfType = (ESphAttr) (yyvsp[-2]).m_iValue;
		}

    break;

  case 446:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; }

    break;

  case 447:

    { (yyval).m_iValue = SPH_ATTR_BIGINT; }

    break;

  case 448:

    { (yyval).m_iValue = SPH_ATTR_FLOAT; }

    break;

  case 449:

    { (yyval).m_iValue = SPH_ATTR_STRINGPTR; }

    break;

  case 450:

    { (yyval).m_iValue = SPH_ATTR_INTEGER; }

    break;

  case 451:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, (yyvsp[0]) );
		}

    break;

  case 452:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[-3]) );
			pParser->ToString ( tStmt.m_sStringParam, (yyvsp[0]) );
		}

    break;

  case 453:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[0]) );
		}

    break;

  case 454:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[0]) );
		}

    break;

  case 455:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_INDEX;
		}

    break;

  case 456:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[-1]) );
		}

    break;

  case 460:

    { pParser->AddItem ( &(yyvsp[0]) ); }

    break;

  case 461:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_DUAL;
			pParser->ToString ( pParser->m_pStmt->m_tQuery.m_sQuery, (yyvsp[0]) );
		}

    break;

  case 462:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[0]) );
		}

    break;

  case 463:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_OPTIMIZE_INDEX;
			pParser->ToString ( tStmt.m_sIndex, (yyvsp[0]) );
		}

    break;

  case 464:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_CREATE_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[-4]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[-2]) );
			pParser->ToStringUnescape ( s.m_sUdfLib, (yyvsp[0]) );
		}

    break;

  case 465:

    {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_DROP_PLUGIN;
			pParser->ToString ( s.m_sUdfName, (yyvsp[-2]) );
			pParser->ToStringUnescape ( s.m_sStringParam, (yyvsp[0]) );
		}

    break;

  case 468:

    { (yyval) = (yyvsp[-1]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 470:

    { (yyval) = (yyvsp[-1]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 471:

    { (yyval) = (yyvsp[0]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 472:

    { (yyval) = (yyvsp[0]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 473:

    { (yyval) = (yyvsp[-2]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 474:

    { (yyval) = (yyvsp[-2]); (yyval).m_iEnd = (yyvsp[0]).m_iEnd; }

    break;

  case 475:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 476:

    { TRACK_BOUNDS ( (yyval), (yyvsp[-2]), (yyvsp[0]) ); }

    break;

  case 480:

    {
			pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
			pParser->m_pQuery->m_sGroupBy = "";
			pParser->AddCount ();
		}

    break;

  case 482:

    {
			pParser->AddItem ( &(yyvsp[0]) );
			pParser->AddGroupBy ( (yyvsp[0]) );
		}

    break;

  case 485:

    {
			pParser->m_pStmt->m_eStmt = STMT_FACET;
			if ( pParser->m_pQuery->m_sFacetBy.IsEmpty() )
			{
				pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
				pParser->AddCount ();
			}
		}

    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (pParser, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (pParser, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pParser);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, pParser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (pParser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pParser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, pParser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}



#if USE_WINDOWS
#pragma warning(pop)
#endif
