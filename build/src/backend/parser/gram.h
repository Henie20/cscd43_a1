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

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
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
    IDENT = 258,                   /* IDENT  */
    UIDENT = 259,                  /* UIDENT  */
    FCONST = 260,                  /* FCONST  */
    SCONST = 261,                  /* SCONST  */
    USCONST = 262,                 /* USCONST  */
    BCONST = 263,                  /* BCONST  */
    XCONST = 264,                  /* XCONST  */
    Op = 265,                      /* Op  */
    ICONST = 266,                  /* ICONST  */
    PARAM = 267,                   /* PARAM  */
    TYPECAST = 268,                /* TYPECAST  */
    DOT_DOT = 269,                 /* DOT_DOT  */
    COLON_EQUALS = 270,            /* COLON_EQUALS  */
    EQUALS_GREATER = 271,          /* EQUALS_GREATER  */
    LESS_EQUALS = 272,             /* LESS_EQUALS  */
    GREATER_EQUALS = 273,          /* GREATER_EQUALS  */
    NOT_EQUALS = 274,              /* NOT_EQUALS  */
    ABORT_P = 275,                 /* ABORT_P  */
    ABSENT = 276,                  /* ABSENT  */
    ABSOLUTE_P = 277,              /* ABSOLUTE_P  */
    ACCESS = 278,                  /* ACCESS  */
    ACTION = 279,                  /* ACTION  */
    ADD_P = 280,                   /* ADD_P  */
    ADMIN = 281,                   /* ADMIN  */
    AFTER = 282,                   /* AFTER  */
    AGGREGATE = 283,               /* AGGREGATE  */
    ALL = 284,                     /* ALL  */
    ALSO = 285,                    /* ALSO  */
    ALTER = 286,                   /* ALTER  */
    ALWAYS = 287,                  /* ALWAYS  */
    ANALYSE = 288,                 /* ANALYSE  */
    ANALYZE = 289,                 /* ANALYZE  */
    AND = 290,                     /* AND  */
    ANY = 291,                     /* ANY  */
    ARRAY = 292,                   /* ARRAY  */
    AS = 293,                      /* AS  */
    ASC = 294,                     /* ASC  */
    ASENSITIVE = 295,              /* ASENSITIVE  */
    ASSERTION = 296,               /* ASSERTION  */
    ASSIGNMENT = 297,              /* ASSIGNMENT  */
    ASYMMETRIC = 298,              /* ASYMMETRIC  */
    ATOMIC = 299,                  /* ATOMIC  */
    AT = 300,                      /* AT  */
    ATTACH = 301,                  /* ATTACH  */
    ATTRIBUTE = 302,               /* ATTRIBUTE  */
    AUTHORIZATION = 303,           /* AUTHORIZATION  */
    BACKWARD = 304,                /* BACKWARD  */
    BEFORE = 305,                  /* BEFORE  */
    BEGIN_P = 306,                 /* BEGIN_P  */
    BETWEEN = 307,                 /* BETWEEN  */
    BIGINT = 308,                  /* BIGINT  */
    BINARY = 309,                  /* BINARY  */
    BIT = 310,                     /* BIT  */
    BOOLEAN_P = 311,               /* BOOLEAN_P  */
    BOTH = 312,                    /* BOTH  */
    BREADTH = 313,                 /* BREADTH  */
    BY = 314,                      /* BY  */
    CACHE = 315,                   /* CACHE  */
    CALL = 316,                    /* CALL  */
    CALLED = 317,                  /* CALLED  */
    CASCADE = 318,                 /* CASCADE  */
    CASCADED = 319,                /* CASCADED  */
    CASE = 320,                    /* CASE  */
    CAST = 321,                    /* CAST  */
    CATALOG_P = 322,               /* CATALOG_P  */
    CHAIN = 323,                   /* CHAIN  */
    CHAR_P = 324,                  /* CHAR_P  */
    CHARACTER = 325,               /* CHARACTER  */
    CHARACTERISTICS = 326,         /* CHARACTERISTICS  */
    CHECK = 327,                   /* CHECK  */
    CHECKPOINT = 328,              /* CHECKPOINT  */
    CLASS = 329,                   /* CLASS  */
    CLOSE = 330,                   /* CLOSE  */
    CLUSTER = 331,                 /* CLUSTER  */
    COALESCE = 332,                /* COALESCE  */
    COLLATE = 333,                 /* COLLATE  */
    COLLATION = 334,               /* COLLATION  */
    COLUMN = 335,                  /* COLUMN  */
    COLUMNS = 336,                 /* COLUMNS  */
    COMMENT = 337,                 /* COMMENT  */
    COMMENTS = 338,                /* COMMENTS  */
    COMMIT = 339,                  /* COMMIT  */
    COMMITTED = 340,               /* COMMITTED  */
    COMPRESSION = 341,             /* COMPRESSION  */
    CONCURRENTLY = 342,            /* CONCURRENTLY  */
    CONDITIONAL = 343,             /* CONDITIONAL  */
    CONFIGURATION = 344,           /* CONFIGURATION  */
    CONFLICT = 345,                /* CONFLICT  */
    CONNECTION = 346,              /* CONNECTION  */
    CONSTRAINT = 347,              /* CONSTRAINT  */
    CONSTRAINTS = 348,             /* CONSTRAINTS  */
    CONTENT_P = 349,               /* CONTENT_P  */
    CONTINUE_P = 350,              /* CONTINUE_P  */
    CONVERSION_P = 351,            /* CONVERSION_P  */
    COPY = 352,                    /* COPY  */
    COST = 353,                    /* COST  */
    CREATE = 354,                  /* CREATE  */
    CROSS = 355,                   /* CROSS  */
    CSV = 356,                     /* CSV  */
    CUBE = 357,                    /* CUBE  */
    CURRENT_P = 358,               /* CURRENT_P  */
    CURRENT_CATALOG = 359,         /* CURRENT_CATALOG  */
    CURRENT_DATE = 360,            /* CURRENT_DATE  */
    CURRENT_ROLE = 361,            /* CURRENT_ROLE  */
    CURRENT_SCHEMA = 362,          /* CURRENT_SCHEMA  */
    CURRENT_TIME = 363,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 364,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 365,            /* CURRENT_USER  */
    CURSOR = 366,                  /* CURSOR  */
    CYCLE = 367,                   /* CYCLE  */
    DATA_P = 368,                  /* DATA_P  */
    DATABASE = 369,                /* DATABASE  */
    DAY_P = 370,                   /* DAY_P  */
    DEALLOCATE = 371,              /* DEALLOCATE  */
    DEC = 372,                     /* DEC  */
    DECIMAL_P = 373,               /* DECIMAL_P  */
    DECLARE = 374,                 /* DECLARE  */
    DEFAULT = 375,                 /* DEFAULT  */
    DEFAULTS = 376,                /* DEFAULTS  */
    DEFERRABLE = 377,              /* DEFERRABLE  */
    DEFERRED = 378,                /* DEFERRED  */
    DEFINER = 379,                 /* DEFINER  */
    DELETE_P = 380,                /* DELETE_P  */
    DELIMITER = 381,               /* DELIMITER  */
    DELIMITERS = 382,              /* DELIMITERS  */
    DEPENDS = 383,                 /* DEPENDS  */
    DEPTH = 384,                   /* DEPTH  */
    DESC = 385,                    /* DESC  */
    DETACH = 386,                  /* DETACH  */
    DICTIONARY = 387,              /* DICTIONARY  */
    DISABLE_P = 388,               /* DISABLE_P  */
    DISCARD = 389,                 /* DISCARD  */
    DISTINCT = 390,                /* DISTINCT  */
    DO = 391,                      /* DO  */
    DOCUMENT_P = 392,              /* DOCUMENT_P  */
    DOMAIN_P = 393,                /* DOMAIN_P  */
    DOUBLE_P = 394,                /* DOUBLE_P  */
    DROP = 395,                    /* DROP  */
    EACH = 396,                    /* EACH  */
    ELSE = 397,                    /* ELSE  */
    EMPTY_P = 398,                 /* EMPTY_P  */
    ENABLE_P = 399,                /* ENABLE_P  */
    ENCODING = 400,                /* ENCODING  */
    ENCRYPTED = 401,               /* ENCRYPTED  */
    END_P = 402,                   /* END_P  */
    ENUM_P = 403,                  /* ENUM_P  */
    ERROR_P = 404,                 /* ERROR_P  */
    ESCAPE = 405,                  /* ESCAPE  */
    EVENT = 406,                   /* EVENT  */
    EXCEPT = 407,                  /* EXCEPT  */
    EXCLUDE = 408,                 /* EXCLUDE  */
    EXCLUDING = 409,               /* EXCLUDING  */
    EXCLUSIVE = 410,               /* EXCLUSIVE  */
    EXECUTE = 411,                 /* EXECUTE  */
    EXISTS = 412,                  /* EXISTS  */
    EXPLAIN = 413,                 /* EXPLAIN  */
    EXPRESSION = 414,              /* EXPRESSION  */
    EXTENSION = 415,               /* EXTENSION  */
    EXTERNAL = 416,                /* EXTERNAL  */
    EXTRACT = 417,                 /* EXTRACT  */
    FALSE_P = 418,                 /* FALSE_P  */
    FAMILY = 419,                  /* FAMILY  */
    FETCH = 420,                   /* FETCH  */
    FILTER = 421,                  /* FILTER  */
    FINALIZE = 422,                /* FINALIZE  */
    FIRST_P = 423,                 /* FIRST_P  */
    FLOAT_P = 424,                 /* FLOAT_P  */
    FOLLOWING = 425,               /* FOLLOWING  */
    FOR = 426,                     /* FOR  */
    FORCE = 427,                   /* FORCE  */
    FOREIGN = 428,                 /* FOREIGN  */
    FORMAT = 429,                  /* FORMAT  */
    FORWARD = 430,                 /* FORWARD  */
    FREEZE = 431,                  /* FREEZE  */
    FROM = 432,                    /* FROM  */
    FULL = 433,                    /* FULL  */
    FUNCTION = 434,                /* FUNCTION  */
    FUNCTIONS = 435,               /* FUNCTIONS  */
    GENERATED = 436,               /* GENERATED  */
    GLOBAL = 437,                  /* GLOBAL  */
    GRANT = 438,                   /* GRANT  */
    GRANTED = 439,                 /* GRANTED  */
    GREATEST = 440,                /* GREATEST  */
    GROUP_P = 441,                 /* GROUP_P  */
    GROUPING = 442,                /* GROUPING  */
    GROUPS = 443,                  /* GROUPS  */
    HANDLER = 444,                 /* HANDLER  */
    HAVING = 445,                  /* HAVING  */
    HEADER_P = 446,                /* HEADER_P  */
    HOLD = 447,                    /* HOLD  */
    HOUR_P = 448,                  /* HOUR_P  */
    IDENTITY_P = 449,              /* IDENTITY_P  */
    IF_P = 450,                    /* IF_P  */
    ILIKE = 451,                   /* ILIKE  */
    IMMEDIATE = 452,               /* IMMEDIATE  */
    IMMUTABLE = 453,               /* IMMUTABLE  */
    IMPLICIT_P = 454,              /* IMPLICIT_P  */
    IMPORT_P = 455,                /* IMPORT_P  */
    IN_P = 456,                    /* IN_P  */
    INCLUDE = 457,                 /* INCLUDE  */
    INCLUDING = 458,               /* INCLUDING  */
    INCREMENT = 459,               /* INCREMENT  */
    INDENT = 460,                  /* INDENT  */
    INDEX = 461,                   /* INDEX  */
    INDEXES = 462,                 /* INDEXES  */
    INHERIT = 463,                 /* INHERIT  */
    INHERITS = 464,                /* INHERITS  */
    INITIALLY = 465,               /* INITIALLY  */
    INLINE_P = 466,                /* INLINE_P  */
    INNER_P = 467,                 /* INNER_P  */
    INOUT = 468,                   /* INOUT  */
    INPUT_P = 469,                 /* INPUT_P  */
    INSENSITIVE = 470,             /* INSENSITIVE  */
    INSERT = 471,                  /* INSERT  */
    INSTEAD = 472,                 /* INSTEAD  */
    INT_P = 473,                   /* INT_P  */
    INTEGER = 474,                 /* INTEGER  */
    INTERSECT = 475,               /* INTERSECT  */
    INTERVAL = 476,                /* INTERVAL  */
    INTO = 477,                    /* INTO  */
    INVOKER = 478,                 /* INVOKER  */
    IS = 479,                      /* IS  */
    ISNULL = 480,                  /* ISNULL  */
    ISOLATION = 481,               /* ISOLATION  */
    JOIN = 482,                    /* JOIN  */
    JSON = 483,                    /* JSON  */
    JSON_ARRAY = 484,              /* JSON_ARRAY  */
    JSON_ARRAYAGG = 485,           /* JSON_ARRAYAGG  */
    JSON_EXISTS = 486,             /* JSON_EXISTS  */
    JSON_OBJECT = 487,             /* JSON_OBJECT  */
    JSON_OBJECTAGG = 488,          /* JSON_OBJECTAGG  */
    JSON_QUERY = 489,              /* JSON_QUERY  */
    JSON_SCALAR = 490,             /* JSON_SCALAR  */
    JSON_SERIALIZE = 491,          /* JSON_SERIALIZE  */
    JSON_TABLE = 492,              /* JSON_TABLE  */
    JSON_VALUE = 493,              /* JSON_VALUE  */
    KEEP = 494,                    /* KEEP  */
    KEY = 495,                     /* KEY  */
    KEYS = 496,                    /* KEYS  */
    LABEL = 497,                   /* LABEL  */
    LANGUAGE = 498,                /* LANGUAGE  */
    LARGE_P = 499,                 /* LARGE_P  */
    LAST_P = 500,                  /* LAST_P  */
    LATERAL_P = 501,               /* LATERAL_P  */
    LEADING = 502,                 /* LEADING  */
    LEAKPROOF = 503,               /* LEAKPROOF  */
    LEAST = 504,                   /* LEAST  */
    LEFT = 505,                    /* LEFT  */
    LEVEL = 506,                   /* LEVEL  */
    LIKE = 507,                    /* LIKE  */
    LIMIT = 508,                   /* LIMIT  */
    LISTEN = 509,                  /* LISTEN  */
    LOAD = 510,                    /* LOAD  */
    LOCAL = 511,                   /* LOCAL  */
    LOCALTIME = 512,               /* LOCALTIME  */
    LOCALTIMESTAMP = 513,          /* LOCALTIMESTAMP  */
    LOCATION = 514,                /* LOCATION  */
    LOCK_P = 515,                  /* LOCK_P  */
    LOCKED = 516,                  /* LOCKED  */
    LOGGED = 517,                  /* LOGGED  */
    MAPPING = 518,                 /* MAPPING  */
    MATCH = 519,                   /* MATCH  */
    MATCHED = 520,                 /* MATCHED  */
    MATERIALIZED = 521,            /* MATERIALIZED  */
    MAXVALUE = 522,                /* MAXVALUE  */
    MERGE = 523,                   /* MERGE  */
    MERGE_ACTION = 524,            /* MERGE_ACTION  */
    METHOD = 525,                  /* METHOD  */
    MINUTE_P = 526,                /* MINUTE_P  */
    MINVALUE = 527,                /* MINVALUE  */
    MODE = 528,                    /* MODE  */
    MONTH_P = 529,                 /* MONTH_P  */
    MOVE = 530,                    /* MOVE  */
    NAME_P = 531,                  /* NAME_P  */
    NAMES = 532,                   /* NAMES  */
    NATIONAL = 533,                /* NATIONAL  */
    NATURAL = 534,                 /* NATURAL  */
    NCHAR = 535,                   /* NCHAR  */
    NESTED = 536,                  /* NESTED  */
    NEW = 537,                     /* NEW  */
    NEXT = 538,                    /* NEXT  */
    NFC = 539,                     /* NFC  */
    NFD = 540,                     /* NFD  */
    NFKC = 541,                    /* NFKC  */
    NFKD = 542,                    /* NFKD  */
    NO = 543,                      /* NO  */
    NONE = 544,                    /* NONE  */
    NORMALIZE = 545,               /* NORMALIZE  */
    NORMALIZED = 546,              /* NORMALIZED  */
    NOT = 547,                     /* NOT  */
    NOTHING = 548,                 /* NOTHING  */
    NOTIFY = 549,                  /* NOTIFY  */
    NOTNULL = 550,                 /* NOTNULL  */
    NOWAIT = 551,                  /* NOWAIT  */
    NULL_P = 552,                  /* NULL_P  */
    NULLIF = 553,                  /* NULLIF  */
    NULLS_P = 554,                 /* NULLS_P  */
    NUMERIC = 555,                 /* NUMERIC  */
    OBJECT_P = 556,                /* OBJECT_P  */
    OF = 557,                      /* OF  */
    OFF = 558,                     /* OFF  */
    OFFSET = 559,                  /* OFFSET  */
    OIDS = 560,                    /* OIDS  */
    OLD = 561,                     /* OLD  */
    OMIT = 562,                    /* OMIT  */
    ON = 563,                      /* ON  */
    ONLY = 564,                    /* ONLY  */
    OPERATOR = 565,                /* OPERATOR  */
    OPTION = 566,                  /* OPTION  */
    OPTIONS = 567,                 /* OPTIONS  */
    OR = 568,                      /* OR  */
    ORDER = 569,                   /* ORDER  */
    ORDINALITY = 570,              /* ORDINALITY  */
    OTHERS = 571,                  /* OTHERS  */
    OUT_P = 572,                   /* OUT_P  */
    OUTER_P = 573,                 /* OUTER_P  */
    OVER = 574,                    /* OVER  */
    OVERLAPS = 575,                /* OVERLAPS  */
    OVERLAY = 576,                 /* OVERLAY  */
    OVERRIDING = 577,              /* OVERRIDING  */
    OWNED = 578,                   /* OWNED  */
    OWNER = 579,                   /* OWNER  */
    PARALLEL = 580,                /* PARALLEL  */
    PARAMETER = 581,               /* PARAMETER  */
    PARSER = 582,                  /* PARSER  */
    PARTIAL = 583,                 /* PARTIAL  */
    PARTITION = 584,               /* PARTITION  */
    PASSING = 585,                 /* PASSING  */
    PASSWORD = 586,                /* PASSWORD  */
    PATH = 587,                    /* PATH  */
    PLACING = 588,                 /* PLACING  */
    PLAN = 589,                    /* PLAN  */
    PLANS = 590,                   /* PLANS  */
    POLICY = 591,                  /* POLICY  */
    POSITION = 592,                /* POSITION  */
    PRECEDING = 593,               /* PRECEDING  */
    PRECISION = 594,               /* PRECISION  */
    PRESERVE = 595,                /* PRESERVE  */
    PREPARE = 596,                 /* PREPARE  */
    PREPARED = 597,                /* PREPARED  */
    PRIMARY = 598,                 /* PRIMARY  */
    PRIOR = 599,                   /* PRIOR  */
    PRIVILEGES = 600,              /* PRIVILEGES  */
    PROCEDURAL = 601,              /* PROCEDURAL  */
    PROCEDURE = 602,               /* PROCEDURE  */
    PROCEDURES = 603,              /* PROCEDURES  */
    PROGRAM = 604,                 /* PROGRAM  */
    PUBLICATION = 605,             /* PUBLICATION  */
    QUOTE = 606,                   /* QUOTE  */
    QUOTES = 607,                  /* QUOTES  */
    RANGE = 608,                   /* RANGE  */
    READ = 609,                    /* READ  */
    REAL = 610,                    /* REAL  */
    REASSIGN = 611,                /* REASSIGN  */
    RECHECK = 612,                 /* RECHECK  */
    RECURSIVE = 613,               /* RECURSIVE  */
    REF_P = 614,                   /* REF_P  */
    REFERENCES = 615,              /* REFERENCES  */
    REFERENCING = 616,             /* REFERENCING  */
    REFRESH = 617,                 /* REFRESH  */
    REINDEX = 618,                 /* REINDEX  */
    RELATIVE_P = 619,              /* RELATIVE_P  */
    RELEASE = 620,                 /* RELEASE  */
    RENAME = 621,                  /* RENAME  */
    REPEATABLE = 622,              /* REPEATABLE  */
    REPLACE = 623,                 /* REPLACE  */
    REPLICA = 624,                 /* REPLICA  */
    RESET = 625,                   /* RESET  */
    RESTART = 626,                 /* RESTART  */
    RESTRICT = 627,                /* RESTRICT  */
    RETURN = 628,                  /* RETURN  */
    RETURNING = 629,               /* RETURNING  */
    RETURNS = 630,                 /* RETURNS  */
    REVOKE = 631,                  /* REVOKE  */
    RIGHT = 632,                   /* RIGHT  */
    ROLE = 633,                    /* ROLE  */
    ROLLBACK = 634,                /* ROLLBACK  */
    ROLLUP = 635,                  /* ROLLUP  */
    ROUTINE = 636,                 /* ROUTINE  */
    ROUTINES = 637,                /* ROUTINES  */
    ROW = 638,                     /* ROW  */
    ROWS = 639,                    /* ROWS  */
    RULE = 640,                    /* RULE  */
    SAVEPOINT = 641,               /* SAVEPOINT  */
    SCALAR = 642,                  /* SCALAR  */
    SCHEMA = 643,                  /* SCHEMA  */
    SCHEMAS = 644,                 /* SCHEMAS  */
    SCROLL = 645,                  /* SCROLL  */
    SEARCH = 646,                  /* SEARCH  */
    SECOND_P = 647,                /* SECOND_P  */
    SECURITY = 648,                /* SECURITY  */
    SELECT = 649,                  /* SELECT  */
    SEQUENCE = 650,                /* SEQUENCE  */
    SEQUENCES = 651,               /* SEQUENCES  */
    SERIALIZABLE = 652,            /* SERIALIZABLE  */
    SERVER = 653,                  /* SERVER  */
    SESSION = 654,                 /* SESSION  */
    SESSION_USER = 655,            /* SESSION_USER  */
    SET = 656,                     /* SET  */
    SETS = 657,                    /* SETS  */
    SETOF = 658,                   /* SETOF  */
    SHARE = 659,                   /* SHARE  */
    SHOW = 660,                    /* SHOW  */
    SIMILAR = 661,                 /* SIMILAR  */
    SIMPLE = 662,                  /* SIMPLE  */
    SKIP = 663,                    /* SKIP  */
    SMALLINT = 664,                /* SMALLINT  */
    SNAPSHOT = 665,                /* SNAPSHOT  */
    SOME = 666,                    /* SOME  */
    SOURCE = 667,                  /* SOURCE  */
    SQL_P = 668,                   /* SQL_P  */
    STABLE = 669,                  /* STABLE  */
    STANDALONE_P = 670,            /* STANDALONE_P  */
    START = 671,                   /* START  */
    STATEMENT = 672,               /* STATEMENT  */
    STATISTICS = 673,              /* STATISTICS  */
    STDIN = 674,                   /* STDIN  */
    STDOUT = 675,                  /* STDOUT  */
    STORAGE = 676,                 /* STORAGE  */
    STORED = 677,                  /* STORED  */
    STRICT_P = 678,                /* STRICT_P  */
    STRING_P = 679,                /* STRING_P  */
    STRIP_P = 680,                 /* STRIP_P  */
    SUBSCRIPTION = 681,            /* SUBSCRIPTION  */
    SUBSTRING = 682,               /* SUBSTRING  */
    SUPPORT = 683,                 /* SUPPORT  */
    SYMMETRIC = 684,               /* SYMMETRIC  */
    SYSID = 685,                   /* SYSID  */
    SYSTEM_P = 686,                /* SYSTEM_P  */
    SYSTEM_USER = 687,             /* SYSTEM_USER  */
    TABLE = 688,                   /* TABLE  */
    TABLES = 689,                  /* TABLES  */
    TABLESAMPLE = 690,             /* TABLESAMPLE  */
    TABLESPACE = 691,              /* TABLESPACE  */
    TARGET = 692,                  /* TARGET  */
    TEMP = 693,                    /* TEMP  */
    TEMPLATE = 694,                /* TEMPLATE  */
    TEMPORARY = 695,               /* TEMPORARY  */
    TEXT_P = 696,                  /* TEXT_P  */
    THEN = 697,                    /* THEN  */
    TIES = 698,                    /* TIES  */
    TIME = 699,                    /* TIME  */
    TIMESTAMP = 700,               /* TIMESTAMP  */
    TO = 701,                      /* TO  */
    TRAILING = 702,                /* TRAILING  */
    TRANSACTION = 703,             /* TRANSACTION  */
    TRANSFORM = 704,               /* TRANSFORM  */
    TREAT = 705,                   /* TREAT  */
    TRIGGER = 706,                 /* TRIGGER  */
    TRIM = 707,                    /* TRIM  */
    TRUE_P = 708,                  /* TRUE_P  */
    TRUNCATE = 709,                /* TRUNCATE  */
    TRUSTED = 710,                 /* TRUSTED  */
    TYPE_P = 711,                  /* TYPE_P  */
    TYPES_P = 712,                 /* TYPES_P  */
    UESCAPE = 713,                 /* UESCAPE  */
    UNBOUNDED = 714,               /* UNBOUNDED  */
    UNCONDITIONAL = 715,           /* UNCONDITIONAL  */
    UNCOMMITTED = 716,             /* UNCOMMITTED  */
    UNENCRYPTED = 717,             /* UNENCRYPTED  */
    UNION = 718,                   /* UNION  */
    UNIQUE = 719,                  /* UNIQUE  */
    UNKNOWN = 720,                 /* UNKNOWN  */
    UNLISTEN = 721,                /* UNLISTEN  */
    UNLOGGED = 722,                /* UNLOGGED  */
    UNTIL = 723,                   /* UNTIL  */
    UPDATE = 724,                  /* UPDATE  */
    USER = 725,                    /* USER  */
    USING = 726,                   /* USING  */
    VACUUM = 727,                  /* VACUUM  */
    VALID = 728,                   /* VALID  */
    VALIDATE = 729,                /* VALIDATE  */
    VALIDATOR = 730,               /* VALIDATOR  */
    VALUE_P = 731,                 /* VALUE_P  */
    VALUES = 732,                  /* VALUES  */
    VARCHAR = 733,                 /* VARCHAR  */
    VARIADIC = 734,                /* VARIADIC  */
    VARYING = 735,                 /* VARYING  */
    VERBOSE = 736,                 /* VERBOSE  */
    VERSION_P = 737,               /* VERSION_P  */
    VIEW = 738,                    /* VIEW  */
    VIEWS = 739,                   /* VIEWS  */
    VOLATILE = 740,                /* VOLATILE  */
    WHEN = 741,                    /* WHEN  */
    WHERE = 742,                   /* WHERE  */
    WHITESPACE_P = 743,            /* WHITESPACE_P  */
    WINDOW = 744,                  /* WINDOW  */
    WITH = 745,                    /* WITH  */
    WITHIN = 746,                  /* WITHIN  */
    WITHOUT = 747,                 /* WITHOUT  */
    WORK = 748,                    /* WORK  */
    WRAPPER = 749,                 /* WRAPPER  */
    WRITE = 750,                   /* WRITE  */
    XML_P = 751,                   /* XML_P  */
    XMLATTRIBUTES = 752,           /* XMLATTRIBUTES  */
    XMLCONCAT = 753,               /* XMLCONCAT  */
    XMLELEMENT = 754,              /* XMLELEMENT  */
    XMLEXISTS = 755,               /* XMLEXISTS  */
    XMLFOREST = 756,               /* XMLFOREST  */
    XMLNAMESPACES = 757,           /* XMLNAMESPACES  */
    XMLPARSE = 758,                /* XMLPARSE  */
    XMLPI = 759,                   /* XMLPI  */
    XMLROOT = 760,                 /* XMLROOT  */
    XMLSERIALIZE = 761,            /* XMLSERIALIZE  */
    XMLTABLE = 762,                /* XMLTABLE  */
    YEAR_P = 763,                  /* YEAR_P  */
    YES_P = 764,                   /* YES_P  */
    ZONE = 765,                    /* ZONE  */
    FORMAT_LA = 766,               /* FORMAT_LA  */
    NOT_LA = 767,                  /* NOT_LA  */
    NULLS_LA = 768,                /* NULLS_LA  */
    WITH_LA = 769,                 /* WITH_LA  */
    WITHOUT_LA = 770,              /* WITHOUT_LA  */
    MODE_TYPE_NAME = 771,          /* MODE_TYPE_NAME  */
    MODE_PLPGSQL_EXPR = 772,       /* MODE_PLPGSQL_EXPR  */
    MODE_PLPGSQL_ASSIGN1 = 773,    /* MODE_PLPGSQL_ASSIGN1  */
    MODE_PLPGSQL_ASSIGN2 = 774,    /* MODE_PLPGSQL_ASSIGN2  */
    MODE_PLPGSQL_ASSIGN3 = 775,    /* MODE_PLPGSQL_ASSIGN3  */
    UMINUS = 776                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 231 "/cmshome/pate1766/cscd43w25_space/build/./../postgresql-17.2/src/backend/parser/gram.y"

	core_YYSTYPE core_yystype;
	/* these fields must match core_YYSTYPE: */
	int			ival;
	char	   *str;
	const char *keyword;

	char		chr;
	bool		boolean;
	JoinType	jtype;
	DropBehavior dbehavior;
	OnCommitAction oncommit;
	List	   *list;
	Node	   *node;
	ObjectType	objtype;
	TypeName   *typnam;
	FunctionParameter *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs *objwithargs;
	DefElem	   *defelt;
	SortBy	   *sortby;
	WindowDef  *windef;
	JoinExpr   *jexpr;
	IndexElem  *ielem;
	StatsElem  *selem;
	Alias	   *alias;
	RangeVar   *range;
	IntoClause *into;
	WithClause *with;
	InferClause	*infer;
	OnConflictClause *onconflict;
	A_Indices  *aind;
	ResTarget  *target;
	struct PrivTarget *privtarget;
	AccessPriv *accesspriv;
	struct ImportQual *importqual;
	InsertStmt *istmt;
	VariableSetStmt *vsetstmt;
	PartitionElem *partelem;
	PartitionSpec *partspec;
	PartitionBoundSpec *partboundspec;
	RoleSpec   *rolespec;
	PublicationObjSpec *publicationobjectspec;
	struct SelectLimit *selectlimit;
	SetQuantifier setquantifier;
	struct GroupClause *groupclause;
	MergeMatchKind mergematch;
	MergeWhenClause *mergewhen;
	struct KeyActions *keyactions;
	struct KeyAction *keyaction;

#line 637 "gram.h"

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




int base_yyparse (core_yyscan_t yyscanner);


#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
