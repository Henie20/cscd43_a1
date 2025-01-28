/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_PREPROC_H_INCLUDED
# define YY_BASE_YY_PREPROC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SQL_ALLOCATE = 258,            /* SQL_ALLOCATE  */
    SQL_AUTOCOMMIT = 259,          /* SQL_AUTOCOMMIT  */
    SQL_BOOL = 260,                /* SQL_BOOL  */
    SQL_BREAK = 261,               /* SQL_BREAK  */
    SQL_CARDINALITY = 262,         /* SQL_CARDINALITY  */
    SQL_CONNECT = 263,             /* SQL_CONNECT  */
    SQL_COUNT = 264,               /* SQL_COUNT  */
    SQL_DATETIME_INTERVAL_CODE = 265, /* SQL_DATETIME_INTERVAL_CODE  */
    SQL_DATETIME_INTERVAL_PRECISION = 266, /* SQL_DATETIME_INTERVAL_PRECISION  */
    SQL_DESCRIBE = 267,            /* SQL_DESCRIBE  */
    SQL_DESCRIPTOR = 268,          /* SQL_DESCRIPTOR  */
    SQL_DISCONNECT = 269,          /* SQL_DISCONNECT  */
    SQL_FOUND = 270,               /* SQL_FOUND  */
    SQL_FREE = 271,                /* SQL_FREE  */
    SQL_GET = 272,                 /* SQL_GET  */
    SQL_GO = 273,                  /* SQL_GO  */
    SQL_GOTO = 274,                /* SQL_GOTO  */
    SQL_IDENTIFIED = 275,          /* SQL_IDENTIFIED  */
    SQL_INDICATOR = 276,           /* SQL_INDICATOR  */
    SQL_KEY_MEMBER = 277,          /* SQL_KEY_MEMBER  */
    SQL_LENGTH = 278,              /* SQL_LENGTH  */
    SQL_LONG = 279,                /* SQL_LONG  */
    SQL_NULLABLE = 280,            /* SQL_NULLABLE  */
    SQL_OCTET_LENGTH = 281,        /* SQL_OCTET_LENGTH  */
    SQL_OPEN = 282,                /* SQL_OPEN  */
    SQL_OUTPUT = 283,              /* SQL_OUTPUT  */
    SQL_REFERENCE = 284,           /* SQL_REFERENCE  */
    SQL_RETURNED_LENGTH = 285,     /* SQL_RETURNED_LENGTH  */
    SQL_RETURNED_OCTET_LENGTH = 286, /* SQL_RETURNED_OCTET_LENGTH  */
    SQL_SCALE = 287,               /* SQL_SCALE  */
    SQL_SECTION = 288,             /* SQL_SECTION  */
    SQL_SHORT = 289,               /* SQL_SHORT  */
    SQL_SIGNED = 290,              /* SQL_SIGNED  */
    SQL_SQLERROR = 291,            /* SQL_SQLERROR  */
    SQL_SQLPRINT = 292,            /* SQL_SQLPRINT  */
    SQL_SQLWARNING = 293,          /* SQL_SQLWARNING  */
    SQL_START = 294,               /* SQL_START  */
    SQL_STOP = 295,                /* SQL_STOP  */
    SQL_STRUCT = 296,              /* SQL_STRUCT  */
    SQL_UNSIGNED = 297,            /* SQL_UNSIGNED  */
    SQL_VAR = 298,                 /* SQL_VAR  */
    SQL_WHENEVER = 299,            /* SQL_WHENEVER  */
    S_ADD = 300,                   /* S_ADD  */
    S_AND = 301,                   /* S_AND  */
    S_ANYTHING = 302,              /* S_ANYTHING  */
    S_AUTO = 303,                  /* S_AUTO  */
    S_CONST = 304,                 /* S_CONST  */
    S_DEC = 305,                   /* S_DEC  */
    S_DIV = 306,                   /* S_DIV  */
    S_DOTPOINT = 307,              /* S_DOTPOINT  */
    S_EQUAL = 308,                 /* S_EQUAL  */
    S_EXTERN = 309,                /* S_EXTERN  */
    S_INC = 310,                   /* S_INC  */
    S_LSHIFT = 311,                /* S_LSHIFT  */
    S_MEMPOINT = 312,              /* S_MEMPOINT  */
    S_MEMBER = 313,                /* S_MEMBER  */
    S_MOD = 314,                   /* S_MOD  */
    S_MUL = 315,                   /* S_MUL  */
    S_NEQUAL = 316,                /* S_NEQUAL  */
    S_OR = 317,                    /* S_OR  */
    S_REGISTER = 318,              /* S_REGISTER  */
    S_RSHIFT = 319,                /* S_RSHIFT  */
    S_STATIC = 320,                /* S_STATIC  */
    S_SUB = 321,                   /* S_SUB  */
    S_VOLATILE = 322,              /* S_VOLATILE  */
    S_TYPEDEF = 323,               /* S_TYPEDEF  */
    CSTRING = 324,                 /* CSTRING  */
    CVARIABLE = 325,               /* CVARIABLE  */
    CPP_LINE = 326,                /* CPP_LINE  */
    IP = 327,                      /* IP  */
    IDENT = 328,                   /* IDENT  */
    UIDENT = 329,                  /* UIDENT  */
    FCONST = 330,                  /* FCONST  */
    SCONST = 331,                  /* SCONST  */
    USCONST = 332,                 /* USCONST  */
    BCONST = 333,                  /* BCONST  */
    XCONST = 334,                  /* XCONST  */
    Op = 335,                      /* Op  */
    ICONST = 336,                  /* ICONST  */
    PARAM = 337,                   /* PARAM  */
    TYPECAST = 338,                /* TYPECAST  */
    DOT_DOT = 339,                 /* DOT_DOT  */
    COLON_EQUALS = 340,            /* COLON_EQUALS  */
    EQUALS_GREATER = 341,          /* EQUALS_GREATER  */
    LESS_EQUALS = 342,             /* LESS_EQUALS  */
    GREATER_EQUALS = 343,          /* GREATER_EQUALS  */
    NOT_EQUALS = 344,              /* NOT_EQUALS  */
    ABORT_P = 345,                 /* ABORT_P  */
    ABSENT = 346,                  /* ABSENT  */
    ABSOLUTE_P = 347,              /* ABSOLUTE_P  */
    ACCESS = 348,                  /* ACCESS  */
    ACTION = 349,                  /* ACTION  */
    ADD_P = 350,                   /* ADD_P  */
    ADMIN = 351,                   /* ADMIN  */
    AFTER = 352,                   /* AFTER  */
    AGGREGATE = 353,               /* AGGREGATE  */
    ALL = 354,                     /* ALL  */
    ALSO = 355,                    /* ALSO  */
    ALTER = 356,                   /* ALTER  */
    ALWAYS = 357,                  /* ALWAYS  */
    ANALYSE = 358,                 /* ANALYSE  */
    ANALYZE = 359,                 /* ANALYZE  */
    AND = 360,                     /* AND  */
    ANY = 361,                     /* ANY  */
    ARRAY = 362,                   /* ARRAY  */
    AS = 363,                      /* AS  */
    ASC = 364,                     /* ASC  */
    ASENSITIVE = 365,              /* ASENSITIVE  */
    ASSERTION = 366,               /* ASSERTION  */
    ASSIGNMENT = 367,              /* ASSIGNMENT  */
    ASYMMETRIC = 368,              /* ASYMMETRIC  */
    ATOMIC = 369,                  /* ATOMIC  */
    AT = 370,                      /* AT  */
    ATTACH = 371,                  /* ATTACH  */
    ATTRIBUTE = 372,               /* ATTRIBUTE  */
    AUTHORIZATION = 373,           /* AUTHORIZATION  */
    BACKWARD = 374,                /* BACKWARD  */
    BEFORE = 375,                  /* BEFORE  */
    BEGIN_P = 376,                 /* BEGIN_P  */
    BETWEEN = 377,                 /* BETWEEN  */
    BIGINT = 378,                  /* BIGINT  */
    BINARY = 379,                  /* BINARY  */
    BIT = 380,                     /* BIT  */
    BOOLEAN_P = 381,               /* BOOLEAN_P  */
    BOTH = 382,                    /* BOTH  */
    BREADTH = 383,                 /* BREADTH  */
    BY = 384,                      /* BY  */
    CACHE = 385,                   /* CACHE  */
    CALL = 386,                    /* CALL  */
    CALLED = 387,                  /* CALLED  */
    CASCADE = 388,                 /* CASCADE  */
    CASCADED = 389,                /* CASCADED  */
    CASE = 390,                    /* CASE  */
    CAST = 391,                    /* CAST  */
    CATALOG_P = 392,               /* CATALOG_P  */
    CHAIN = 393,                   /* CHAIN  */
    CHAR_P = 394,                  /* CHAR_P  */
    CHARACTER = 395,               /* CHARACTER  */
    CHARACTERISTICS = 396,         /* CHARACTERISTICS  */
    CHECK = 397,                   /* CHECK  */
    CHECKPOINT = 398,              /* CHECKPOINT  */
    CLASS = 399,                   /* CLASS  */
    CLOSE = 400,                   /* CLOSE  */
    CLUSTER = 401,                 /* CLUSTER  */
    COALESCE = 402,                /* COALESCE  */
    COLLATE = 403,                 /* COLLATE  */
    COLLATION = 404,               /* COLLATION  */
    COLUMN = 405,                  /* COLUMN  */
    COLUMNS = 406,                 /* COLUMNS  */
    COMMENT = 407,                 /* COMMENT  */
    COMMENTS = 408,                /* COMMENTS  */
    COMMIT = 409,                  /* COMMIT  */
    COMMITTED = 410,               /* COMMITTED  */
    COMPRESSION = 411,             /* COMPRESSION  */
    CONCURRENTLY = 412,            /* CONCURRENTLY  */
    CONDITIONAL = 413,             /* CONDITIONAL  */
    CONFIGURATION = 414,           /* CONFIGURATION  */
    CONFLICT = 415,                /* CONFLICT  */
    CONNECTION = 416,              /* CONNECTION  */
    CONSTRAINT = 417,              /* CONSTRAINT  */
    CONSTRAINTS = 418,             /* CONSTRAINTS  */
    CONTENT_P = 419,               /* CONTENT_P  */
    CONTINUE_P = 420,              /* CONTINUE_P  */
    CONVERSION_P = 421,            /* CONVERSION_P  */
    COPY = 422,                    /* COPY  */
    COST = 423,                    /* COST  */
    CREATE = 424,                  /* CREATE  */
    CROSS = 425,                   /* CROSS  */
    CSV = 426,                     /* CSV  */
    CUBE = 427,                    /* CUBE  */
    CURRENT_P = 428,               /* CURRENT_P  */
    CURRENT_CATALOG = 429,         /* CURRENT_CATALOG  */
    CURRENT_DATE = 430,            /* CURRENT_DATE  */
    CURRENT_ROLE = 431,            /* CURRENT_ROLE  */
    CURRENT_SCHEMA = 432,          /* CURRENT_SCHEMA  */
    CURRENT_TIME = 433,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 434,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 435,            /* CURRENT_USER  */
    CURSOR = 436,                  /* CURSOR  */
    CYCLE = 437,                   /* CYCLE  */
    DATA_P = 438,                  /* DATA_P  */
    DATABASE = 439,                /* DATABASE  */
    DAY_P = 440,                   /* DAY_P  */
    DEALLOCATE = 441,              /* DEALLOCATE  */
    DEC = 442,                     /* DEC  */
    DECIMAL_P = 443,               /* DECIMAL_P  */
    DECLARE = 444,                 /* DECLARE  */
    DEFAULT = 445,                 /* DEFAULT  */
    DEFAULTS = 446,                /* DEFAULTS  */
    DEFERRABLE = 447,              /* DEFERRABLE  */
    DEFERRED = 448,                /* DEFERRED  */
    DEFINER = 449,                 /* DEFINER  */
    DELETE_P = 450,                /* DELETE_P  */
    DELIMITER = 451,               /* DELIMITER  */
    DELIMITERS = 452,              /* DELIMITERS  */
    DEPENDS = 453,                 /* DEPENDS  */
    DEPTH = 454,                   /* DEPTH  */
    DESC = 455,                    /* DESC  */
    DETACH = 456,                  /* DETACH  */
    DICTIONARY = 457,              /* DICTIONARY  */
    DISABLE_P = 458,               /* DISABLE_P  */
    DISCARD = 459,                 /* DISCARD  */
    DISTINCT = 460,                /* DISTINCT  */
    DO = 461,                      /* DO  */
    DOCUMENT_P = 462,              /* DOCUMENT_P  */
    DOMAIN_P = 463,                /* DOMAIN_P  */
    DOUBLE_P = 464,                /* DOUBLE_P  */
    DROP = 465,                    /* DROP  */
    EACH = 466,                    /* EACH  */
    ELSE = 467,                    /* ELSE  */
    EMPTY_P = 468,                 /* EMPTY_P  */
    ENABLE_P = 469,                /* ENABLE_P  */
    ENCODING = 470,                /* ENCODING  */
    ENCRYPTED = 471,               /* ENCRYPTED  */
    END_P = 472,                   /* END_P  */
    ENUM_P = 473,                  /* ENUM_P  */
    ERROR_P = 474,                 /* ERROR_P  */
    ESCAPE = 475,                  /* ESCAPE  */
    EVENT = 476,                   /* EVENT  */
    EXCEPT = 477,                  /* EXCEPT  */
    EXCLUDE = 478,                 /* EXCLUDE  */
    EXCLUDING = 479,               /* EXCLUDING  */
    EXCLUSIVE = 480,               /* EXCLUSIVE  */
    EXECUTE = 481,                 /* EXECUTE  */
    EXISTS = 482,                  /* EXISTS  */
    EXPLAIN = 483,                 /* EXPLAIN  */
    EXPRESSION = 484,              /* EXPRESSION  */
    EXTENSION = 485,               /* EXTENSION  */
    EXTERNAL = 486,                /* EXTERNAL  */
    EXTRACT = 487,                 /* EXTRACT  */
    FALSE_P = 488,                 /* FALSE_P  */
    FAMILY = 489,                  /* FAMILY  */
    FETCH = 490,                   /* FETCH  */
    FILTER = 491,                  /* FILTER  */
    FINALIZE = 492,                /* FINALIZE  */
    FIRST_P = 493,                 /* FIRST_P  */
    FLOAT_P = 494,                 /* FLOAT_P  */
    FOLLOWING = 495,               /* FOLLOWING  */
    FOR = 496,                     /* FOR  */
    FORCE = 497,                   /* FORCE  */
    FOREIGN = 498,                 /* FOREIGN  */
    FORMAT = 499,                  /* FORMAT  */
    FORWARD = 500,                 /* FORWARD  */
    FREEZE = 501,                  /* FREEZE  */
    FROM = 502,                    /* FROM  */
    FULL = 503,                    /* FULL  */
    FUNCTION = 504,                /* FUNCTION  */
    FUNCTIONS = 505,               /* FUNCTIONS  */
    GENERATED = 506,               /* GENERATED  */
    GLOBAL = 507,                  /* GLOBAL  */
    GRANT = 508,                   /* GRANT  */
    GRANTED = 509,                 /* GRANTED  */
    GREATEST = 510,                /* GREATEST  */
    GROUP_P = 511,                 /* GROUP_P  */
    GROUPING = 512,                /* GROUPING  */
    GROUPS = 513,                  /* GROUPS  */
    HANDLER = 514,                 /* HANDLER  */
    HAVING = 515,                  /* HAVING  */
    HEADER_P = 516,                /* HEADER_P  */
    HOLD = 517,                    /* HOLD  */
    HOUR_P = 518,                  /* HOUR_P  */
    IDENTITY_P = 519,              /* IDENTITY_P  */
    IF_P = 520,                    /* IF_P  */
    ILIKE = 521,                   /* ILIKE  */
    IMMEDIATE = 522,               /* IMMEDIATE  */
    IMMUTABLE = 523,               /* IMMUTABLE  */
    IMPLICIT_P = 524,              /* IMPLICIT_P  */
    IMPORT_P = 525,                /* IMPORT_P  */
    IN_P = 526,                    /* IN_P  */
    INCLUDE = 527,                 /* INCLUDE  */
    INCLUDING = 528,               /* INCLUDING  */
    INCREMENT = 529,               /* INCREMENT  */
    INDENT = 530,                  /* INDENT  */
    INDEX = 531,                   /* INDEX  */
    INDEXES = 532,                 /* INDEXES  */
    INHERIT = 533,                 /* INHERIT  */
    INHERITS = 534,                /* INHERITS  */
    INITIALLY = 535,               /* INITIALLY  */
    INLINE_P = 536,                /* INLINE_P  */
    INNER_P = 537,                 /* INNER_P  */
    INOUT = 538,                   /* INOUT  */
    INPUT_P = 539,                 /* INPUT_P  */
    INSENSITIVE = 540,             /* INSENSITIVE  */
    INSERT = 541,                  /* INSERT  */
    INSTEAD = 542,                 /* INSTEAD  */
    INT_P = 543,                   /* INT_P  */
    INTEGER = 544,                 /* INTEGER  */
    INTERSECT = 545,               /* INTERSECT  */
    INTERVAL = 546,                /* INTERVAL  */
    INTO = 547,                    /* INTO  */
    INVOKER = 548,                 /* INVOKER  */
    IS = 549,                      /* IS  */
    ISNULL = 550,                  /* ISNULL  */
    ISOLATION = 551,               /* ISOLATION  */
    JOIN = 552,                    /* JOIN  */
    JSON = 553,                    /* JSON  */
    JSON_ARRAY = 554,              /* JSON_ARRAY  */
    JSON_ARRAYAGG = 555,           /* JSON_ARRAYAGG  */
    JSON_EXISTS = 556,             /* JSON_EXISTS  */
    JSON_OBJECT = 557,             /* JSON_OBJECT  */
    JSON_OBJECTAGG = 558,          /* JSON_OBJECTAGG  */
    JSON_QUERY = 559,              /* JSON_QUERY  */
    JSON_SCALAR = 560,             /* JSON_SCALAR  */
    JSON_SERIALIZE = 561,          /* JSON_SERIALIZE  */
    JSON_TABLE = 562,              /* JSON_TABLE  */
    JSON_VALUE = 563,              /* JSON_VALUE  */
    KEEP = 564,                    /* KEEP  */
    KEY = 565,                     /* KEY  */
    KEYS = 566,                    /* KEYS  */
    LABEL = 567,                   /* LABEL  */
    LANGUAGE = 568,                /* LANGUAGE  */
    LARGE_P = 569,                 /* LARGE_P  */
    LAST_P = 570,                  /* LAST_P  */
    LATERAL_P = 571,               /* LATERAL_P  */
    LEADING = 572,                 /* LEADING  */
    LEAKPROOF = 573,               /* LEAKPROOF  */
    LEAST = 574,                   /* LEAST  */
    LEFT = 575,                    /* LEFT  */
    LEVEL = 576,                   /* LEVEL  */
    LIKE = 577,                    /* LIKE  */
    LIMIT = 578,                   /* LIMIT  */
    LISTEN = 579,                  /* LISTEN  */
    LOAD = 580,                    /* LOAD  */
    LOCAL = 581,                   /* LOCAL  */
    LOCALTIME = 582,               /* LOCALTIME  */
    LOCALTIMESTAMP = 583,          /* LOCALTIMESTAMP  */
    LOCATION = 584,                /* LOCATION  */
    LOCK_P = 585,                  /* LOCK_P  */
    LOCKED = 586,                  /* LOCKED  */
    LOGGED = 587,                  /* LOGGED  */
    MAPPING = 588,                 /* MAPPING  */
    MATCH = 589,                   /* MATCH  */
    MATCHED = 590,                 /* MATCHED  */
    MATERIALIZED = 591,            /* MATERIALIZED  */
    MAXVALUE = 592,                /* MAXVALUE  */
    MERGE = 593,                   /* MERGE  */
    MERGE_ACTION = 594,            /* MERGE_ACTION  */
    METHOD = 595,                  /* METHOD  */
    MINUTE_P = 596,                /* MINUTE_P  */
    MINVALUE = 597,                /* MINVALUE  */
    MODE = 598,                    /* MODE  */
    MONTH_P = 599,                 /* MONTH_P  */
    MOVE = 600,                    /* MOVE  */
    NAME_P = 601,                  /* NAME_P  */
    NAMES = 602,                   /* NAMES  */
    NATIONAL = 603,                /* NATIONAL  */
    NATURAL = 604,                 /* NATURAL  */
    NCHAR = 605,                   /* NCHAR  */
    NESTED = 606,                  /* NESTED  */
    NEW = 607,                     /* NEW  */
    NEXT = 608,                    /* NEXT  */
    NFC = 609,                     /* NFC  */
    NFD = 610,                     /* NFD  */
    NFKC = 611,                    /* NFKC  */
    NFKD = 612,                    /* NFKD  */
    NO = 613,                      /* NO  */
    NONE = 614,                    /* NONE  */
    NORMALIZE = 615,               /* NORMALIZE  */
    NORMALIZED = 616,              /* NORMALIZED  */
    NOT = 617,                     /* NOT  */
    NOTHING = 618,                 /* NOTHING  */
    NOTIFY = 619,                  /* NOTIFY  */
    NOTNULL = 620,                 /* NOTNULL  */
    NOWAIT = 621,                  /* NOWAIT  */
    NULL_P = 622,                  /* NULL_P  */
    NULLIF = 623,                  /* NULLIF  */
    NULLS_P = 624,                 /* NULLS_P  */
    NUMERIC = 625,                 /* NUMERIC  */
    OBJECT_P = 626,                /* OBJECT_P  */
    OF = 627,                      /* OF  */
    OFF = 628,                     /* OFF  */
    OFFSET = 629,                  /* OFFSET  */
    OIDS = 630,                    /* OIDS  */
    OLD = 631,                     /* OLD  */
    OMIT = 632,                    /* OMIT  */
    ON = 633,                      /* ON  */
    ONLY = 634,                    /* ONLY  */
    OPERATOR = 635,                /* OPERATOR  */
    OPTION = 636,                  /* OPTION  */
    OPTIONS = 637,                 /* OPTIONS  */
    OR = 638,                      /* OR  */
    ORDER = 639,                   /* ORDER  */
    ORDINALITY = 640,              /* ORDINALITY  */
    OTHERS = 641,                  /* OTHERS  */
    OUT_P = 642,                   /* OUT_P  */
    OUTER_P = 643,                 /* OUTER_P  */
    OVER = 644,                    /* OVER  */
    OVERLAPS = 645,                /* OVERLAPS  */
    OVERLAY = 646,                 /* OVERLAY  */
    OVERRIDING = 647,              /* OVERRIDING  */
    OWNED = 648,                   /* OWNED  */
    OWNER = 649,                   /* OWNER  */
    PARALLEL = 650,                /* PARALLEL  */
    PARAMETER = 651,               /* PARAMETER  */
    PARSER = 652,                  /* PARSER  */
    PARTIAL = 653,                 /* PARTIAL  */
    PARTITION = 654,               /* PARTITION  */
    PASSING = 655,                 /* PASSING  */
    PASSWORD = 656,                /* PASSWORD  */
    PATH = 657,                    /* PATH  */
    PLACING = 658,                 /* PLACING  */
    PLAN = 659,                    /* PLAN  */
    PLANS = 660,                   /* PLANS  */
    POLICY = 661,                  /* POLICY  */
    POSITION = 662,                /* POSITION  */
    PRECEDING = 663,               /* PRECEDING  */
    PRECISION = 664,               /* PRECISION  */
    PRESERVE = 665,                /* PRESERVE  */
    PREPARE = 666,                 /* PREPARE  */
    PREPARED = 667,                /* PREPARED  */
    PRIMARY = 668,                 /* PRIMARY  */
    PRIOR = 669,                   /* PRIOR  */
    PRIVILEGES = 670,              /* PRIVILEGES  */
    PROCEDURAL = 671,              /* PROCEDURAL  */
    PROCEDURE = 672,               /* PROCEDURE  */
    PROCEDURES = 673,              /* PROCEDURES  */
    PROGRAM = 674,                 /* PROGRAM  */
    PUBLICATION = 675,             /* PUBLICATION  */
    QUOTE = 676,                   /* QUOTE  */
    QUOTES = 677,                  /* QUOTES  */
    RANGE = 678,                   /* RANGE  */
    READ = 679,                    /* READ  */
    REAL = 680,                    /* REAL  */
    REASSIGN = 681,                /* REASSIGN  */
    RECHECK = 682,                 /* RECHECK  */
    RECURSIVE = 683,               /* RECURSIVE  */
    REF_P = 684,                   /* REF_P  */
    REFERENCES = 685,              /* REFERENCES  */
    REFERENCING = 686,             /* REFERENCING  */
    REFRESH = 687,                 /* REFRESH  */
    REINDEX = 688,                 /* REINDEX  */
    RELATIVE_P = 689,              /* RELATIVE_P  */
    RELEASE = 690,                 /* RELEASE  */
    RENAME = 691,                  /* RENAME  */
    REPEATABLE = 692,              /* REPEATABLE  */
    REPLACE = 693,                 /* REPLACE  */
    REPLICA = 694,                 /* REPLICA  */
    RESET = 695,                   /* RESET  */
    RESTART = 696,                 /* RESTART  */
    RESTRICT = 697,                /* RESTRICT  */
    RETURN = 698,                  /* RETURN  */
    RETURNING = 699,               /* RETURNING  */
    RETURNS = 700,                 /* RETURNS  */
    REVOKE = 701,                  /* REVOKE  */
    RIGHT = 702,                   /* RIGHT  */
    ROLE = 703,                    /* ROLE  */
    ROLLBACK = 704,                /* ROLLBACK  */
    ROLLUP = 705,                  /* ROLLUP  */
    ROUTINE = 706,                 /* ROUTINE  */
    ROUTINES = 707,                /* ROUTINES  */
    ROW = 708,                     /* ROW  */
    ROWS = 709,                    /* ROWS  */
    RULE = 710,                    /* RULE  */
    SAVEPOINT = 711,               /* SAVEPOINT  */
    SCALAR = 712,                  /* SCALAR  */
    SCHEMA = 713,                  /* SCHEMA  */
    SCHEMAS = 714,                 /* SCHEMAS  */
    SCROLL = 715,                  /* SCROLL  */
    SEARCH = 716,                  /* SEARCH  */
    SECOND_P = 717,                /* SECOND_P  */
    SECURITY = 718,                /* SECURITY  */
    SELECT = 719,                  /* SELECT  */
    SEQUENCE = 720,                /* SEQUENCE  */
    SEQUENCES = 721,               /* SEQUENCES  */
    SERIALIZABLE = 722,            /* SERIALIZABLE  */
    SERVER = 723,                  /* SERVER  */
    SESSION = 724,                 /* SESSION  */
    SESSION_USER = 725,            /* SESSION_USER  */
    SET = 726,                     /* SET  */
    SETS = 727,                    /* SETS  */
    SETOF = 728,                   /* SETOF  */
    SHARE = 729,                   /* SHARE  */
    SHOW = 730,                    /* SHOW  */
    SIMILAR = 731,                 /* SIMILAR  */
    SIMPLE = 732,                  /* SIMPLE  */
    SKIP = 733,                    /* SKIP  */
    SMALLINT = 734,                /* SMALLINT  */
    SNAPSHOT = 735,                /* SNAPSHOT  */
    SOME = 736,                    /* SOME  */
    SOURCE = 737,                  /* SOURCE  */
    SQL_P = 738,                   /* SQL_P  */
    STABLE = 739,                  /* STABLE  */
    STANDALONE_P = 740,            /* STANDALONE_P  */
    START = 741,                   /* START  */
    STATEMENT = 742,               /* STATEMENT  */
    STATISTICS = 743,              /* STATISTICS  */
    STDIN = 744,                   /* STDIN  */
    STDOUT = 745,                  /* STDOUT  */
    STORAGE = 746,                 /* STORAGE  */
    STORED = 747,                  /* STORED  */
    STRICT_P = 748,                /* STRICT_P  */
    STRING_P = 749,                /* STRING_P  */
    STRIP_P = 750,                 /* STRIP_P  */
    SUBSCRIPTION = 751,            /* SUBSCRIPTION  */
    SUBSTRING = 752,               /* SUBSTRING  */
    SUPPORT = 753,                 /* SUPPORT  */
    SYMMETRIC = 754,               /* SYMMETRIC  */
    SYSID = 755,                   /* SYSID  */
    SYSTEM_P = 756,                /* SYSTEM_P  */
    SYSTEM_USER = 757,             /* SYSTEM_USER  */
    TABLE = 758,                   /* TABLE  */
    TABLES = 759,                  /* TABLES  */
    TABLESAMPLE = 760,             /* TABLESAMPLE  */
    TABLESPACE = 761,              /* TABLESPACE  */
    TARGET = 762,                  /* TARGET  */
    TEMP = 763,                    /* TEMP  */
    TEMPLATE = 764,                /* TEMPLATE  */
    TEMPORARY = 765,               /* TEMPORARY  */
    TEXT_P = 766,                  /* TEXT_P  */
    THEN = 767,                    /* THEN  */
    TIES = 768,                    /* TIES  */
    TIME = 769,                    /* TIME  */
    TIMESTAMP = 770,               /* TIMESTAMP  */
    TO = 771,                      /* TO  */
    TRAILING = 772,                /* TRAILING  */
    TRANSACTION = 773,             /* TRANSACTION  */
    TRANSFORM = 774,               /* TRANSFORM  */
    TREAT = 775,                   /* TREAT  */
    TRIGGER = 776,                 /* TRIGGER  */
    TRIM = 777,                    /* TRIM  */
    TRUE_P = 778,                  /* TRUE_P  */
    TRUNCATE = 779,                /* TRUNCATE  */
    TRUSTED = 780,                 /* TRUSTED  */
    TYPE_P = 781,                  /* TYPE_P  */
    TYPES_P = 782,                 /* TYPES_P  */
    UESCAPE = 783,                 /* UESCAPE  */
    UNBOUNDED = 784,               /* UNBOUNDED  */
    UNCONDITIONAL = 785,           /* UNCONDITIONAL  */
    UNCOMMITTED = 786,             /* UNCOMMITTED  */
    UNENCRYPTED = 787,             /* UNENCRYPTED  */
    UNION = 788,                   /* UNION  */
    UNIQUE = 789,                  /* UNIQUE  */
    UNKNOWN = 790,                 /* UNKNOWN  */
    UNLISTEN = 791,                /* UNLISTEN  */
    UNLOGGED = 792,                /* UNLOGGED  */
    UNTIL = 793,                   /* UNTIL  */
    UPDATE = 794,                  /* UPDATE  */
    USER = 795,                    /* USER  */
    USING = 796,                   /* USING  */
    VACUUM = 797,                  /* VACUUM  */
    VALID = 798,                   /* VALID  */
    VALIDATE = 799,                /* VALIDATE  */
    VALIDATOR = 800,               /* VALIDATOR  */
    VALUE_P = 801,                 /* VALUE_P  */
    VALUES = 802,                  /* VALUES  */
    VARCHAR = 803,                 /* VARCHAR  */
    VARIADIC = 804,                /* VARIADIC  */
    VARYING = 805,                 /* VARYING  */
    VERBOSE = 806,                 /* VERBOSE  */
    VERSION_P = 807,               /* VERSION_P  */
    VIEW = 808,                    /* VIEW  */
    VIEWS = 809,                   /* VIEWS  */
    VOLATILE = 810,                /* VOLATILE  */
    WHEN = 811,                    /* WHEN  */
    WHERE = 812,                   /* WHERE  */
    WHITESPACE_P = 813,            /* WHITESPACE_P  */
    WINDOW = 814,                  /* WINDOW  */
    WITH = 815,                    /* WITH  */
    WITHIN = 816,                  /* WITHIN  */
    WITHOUT = 817,                 /* WITHOUT  */
    WORK = 818,                    /* WORK  */
    WRAPPER = 819,                 /* WRAPPER  */
    WRITE = 820,                   /* WRITE  */
    XML_P = 821,                   /* XML_P  */
    XMLATTRIBUTES = 822,           /* XMLATTRIBUTES  */
    XMLCONCAT = 823,               /* XMLCONCAT  */
    XMLELEMENT = 824,              /* XMLELEMENT  */
    XMLEXISTS = 825,               /* XMLEXISTS  */
    XMLFOREST = 826,               /* XMLFOREST  */
    XMLNAMESPACES = 827,           /* XMLNAMESPACES  */
    XMLPARSE = 828,                /* XMLPARSE  */
    XMLPI = 829,                   /* XMLPI  */
    XMLROOT = 830,                 /* XMLROOT  */
    XMLSERIALIZE = 831,            /* XMLSERIALIZE  */
    XMLTABLE = 832,                /* XMLTABLE  */
    YEAR_P = 833,                  /* YEAR_P  */
    YES_P = 834,                   /* YES_P  */
    ZONE = 835,                    /* ZONE  */
    FORMAT_LA = 836,               /* FORMAT_LA  */
    NOT_LA = 837,                  /* NOT_LA  */
    NULLS_LA = 838,                /* NULLS_LA  */
    WITH_LA = 839,                 /* WITH_LA  */
    WITHOUT_LA = 840,              /* WITHOUT_LA  */
    MODE_TYPE_NAME = 841,          /* MODE_TYPE_NAME  */
    MODE_PLPGSQL_EXPR = 842,       /* MODE_PLPGSQL_EXPR  */
    MODE_PLPGSQL_ASSIGN1 = 843,    /* MODE_PLPGSQL_ASSIGN1  */
    MODE_PLPGSQL_ASSIGN2 = 844,    /* MODE_PLPGSQL_ASSIGN2  */
    MODE_PLPGSQL_ASSIGN3 = 845,    /* MODE_PLPGSQL_ASSIGN3  */
    UMINUS = 846                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 612 "preproc.y"

	double	dval;
	char	*str;
	int		ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;
	struct	exec		exec;
	struct describe		describe;

#line 672 "preproc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE base_yylval;
extern YYLTYPE base_yylloc;

int base_yyparse (void);


#endif /* !YY_BASE_YY_PREPROC_H_INCLUDED  */
