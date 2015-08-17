// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "gen/sieve_parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "sieve_parser.tab.hh"

// User implementation prologue.

#line 51 "gen/sieve_parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 29 "src/sieve_parser.yy" // lalr1.cc:413

#include "sieve_driver.hh"
#include "sieve_scanner.h"

#line 58 "gen/sieve_parser.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 144 "gen/sieve_parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  sieve_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  sieve_parser::sieve_parser (yyscan_t scanner_yyarg, sieve_driver &driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

  sieve_parser::~sieve_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  sieve_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  sieve_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  sieve_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  sieve_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  sieve_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  sieve_parser::symbol_number_type
  sieve_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  sieve_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  sieve_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 22: // "number"
      case 35: // numeric
        value.move< int > (that.value);
        break;

      case 19: // "identifier"
      case 20: // ":tag"
      case 21: // "string literal"
        value.move< std::string > (that.value);
        break;

      case 28: // arguments
      case 29: // argument
      case 30: // test_list
      case 31: // tests
      case 32: // test
      case 33: // string_list
      case 34: // strings
        value.move< std::vector<std::string> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  sieve_parser::stack_symbol_type&
  sieve_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 22: // "number"
      case 35: // numeric
        value.copy< int > (that.value);
        break;

      case 19: // "identifier"
      case 20: // ":tag"
      case 21: // "string literal"
        value.copy< std::string > (that.value);
        break;

      case 28: // arguments
      case 29: // argument
      case 30: // test_list
      case 31: // tests
      case 32: // test
      case 33: // string_list
      case 34: // strings
        value.copy< std::vector<std::string> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  sieve_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  sieve_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  sieve_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  sieve_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  sieve_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  sieve_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  sieve_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  sieve_parser::debug_level_type
  sieve_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  sieve_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline sieve_parser::state_type
  sieve_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  sieve_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  sieve_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  sieve_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 22 "src/sieve_parser.yy" // lalr1.cc:745
{
    yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 460 "gen/sieve_parser.tab.cc" // lalr1.cc:745

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (scanner, driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 22: // "number"
      case 35: // numeric
        yylhs.value.build< int > ();
        break;

      case 19: // "identifier"
      case 20: // ":tag"
      case 21: // "string literal"
        yylhs.value.build< std::string > ();
        break;

      case 28: // arguments
      case 29: // argument
      case 30: // test_list
      case 31: // tests
      case 32: // test
      case 33: // string_list
      case 34: // strings
        yylhs.value.build< std::vector<std::string> > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 5:
#line 79 "src/sieve_parser.yy" // lalr1.cc:859
    {
            driver.set_required_modules( yystack_[1].value.as< std::vector<std::string> > () );
        }
#line 593 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 83 "src/sieve_parser.yy" // lalr1.cc:859
    {
            if (!driver.supports_module("imap4flags") && (yystack_[2].value.as< std::string > () == "addflag" || yystack_[2].value.as< std::string > () == "setflag" || yystack_[2].value.as< std::string > () == "removeflag" || yystack_[2].value.as< std::string > () == "hasflag")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require imap4flags");
                YYABORT;
            }

            if (!driver.supports_module("variables") && (yystack_[2].value.as< std::string > () == "set")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require variables");
                YYABORT;
            }

            if (!driver.supports_module("fileinto") && (yystack_[2].value.as< std::string > () == "fileinto")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require fileinto");
                YYABORT;
            }

            if (!driver.supports_module("vacation") && (yystack_[2].value.as< std::string > () == "vacation")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require vacation");
                YYABORT;
            }

            if (!driver.supports_module("include") && (yystack_[2].value.as< std::string > () == "include")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require include");
                YYABORT;
            }

            if (!driver.supports_module("reject") && (yystack_[2].value.as< std::string > () == "reject")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require reject");
                YYABORT;
            }

            if (!driver.supports_module("ereject") && (yystack_[2].value.as< std::string > () == "ereject")) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".", "Hint: require ereject");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "reject" && yystack_[1].value.as< std::vector<std::string> > ().size() != 1) {
                driver.error(yystack_[1].location, "Incorrect arguments to \"reject\" command.", "Syntax:   reject <reason: string>");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "ereject" && yystack_[1].value.as< std::vector<std::string> > ().size() != 1) {
                driver.error(yystack_[1].location, "Incorrect arguments to \"reject\" command.", "Syntax:   ereject <reason: string>");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "fileinto" && (yystack_[1].value.as< std::vector<std::string> > ().size() > 2 || yystack_[1].value.as< std::vector<std::string> > ().size() < 1)) {
                driver.error(yystack_[1].location, "Incorrect arguments to \"fileinto\" command.", "Syntax:   fileinto [\":copy\"] <folder: string>");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "redirect" && (yystack_[1].value.as< std::vector<std::string> > ().size() > 2 || yystack_[1].value.as< std::vector<std::string> > ().size() < 1)) {
                driver.error(yystack_[1].location, "Incorrect arguments to \"redirect\" command.", "Syntax:   redirect [\":copy\"] <address: string>");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "keep") {
                driver.error(yystack_[1].location, "Too many arguments passed to \"keep\" command.", "Syntax:   keep");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "discard") {
                driver.error(yystack_[1].location, "Too many arguments passed to \"discard\" command.", "Syntax:   discard");
                YYABORT;
            }

            if (yystack_[2].value.as< std::string > () == "return") {
                driver.error(yystack_[1].location, "Too many arguments passed to \"return\" command.", "Syntax:   return");
                YYABORT;
            }

            if (!driver.valid_command(yystack_[2].value.as< std::string > ())) {
                driver.error(yystack_[2].location, "Unrecognized command \"" + yystack_[2].value.as< std::string > () + "\".");
                YYABORT;
            }
        }
#line 674 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 160 "src/sieve_parser.yy" // lalr1.cc:859
    {
            if (!driver.supports_module("include") && (yystack_[1].value.as< std::string > () == "return")) {
                driver.error(yystack_[1].location, "Unrecognized command \"" + yystack_[1].value.as< std::string > () + "\".", "Hint: require include");
                YYABORT;
            }

            if (yystack_[1].value.as< std::string > () == "reject") {
                driver.error(yystack_[0].location, "Incorrect arguments to \"reject\" command.", "Syntax:   reject <reason: string>");
                YYABORT;
            }

            if (yystack_[1].value.as< std::string > () == "fileinto") {
                driver.error(yystack_[0].location, "Incorrect arguments to \"fileinto\" command.", "Syntax:   fileinto [\":copy\"] <folder: string>");
                YYABORT;
            }

            if (yystack_[1].value.as< std::string > () == "redirect") {
                driver.error(yystack_[0].location, "Incorrect arguments to \"redirect\" command.", "Syntax:   fileinto <address: string>");
                YYABORT;
            }

            if (yystack_[1].value.as< std::string > () == "vacation") {
                driver.error(yystack_[0].location, "Incorrect arguments to \"vacation\" command.");
                YYABORT;
            }

            if (yystack_[1].value.as< std::string > () == "include") {
                driver.error(yystack_[0].location, "Incorrect arguments to \"include\" command.");
                YYABORT;
            }

            if (!driver.valid_command(yystack_[1].value.as< std::string > ())) {
                driver.error(yystack_[1].location, "Unrecognized command \"" + yystack_[1].value.as< std::string > () + "\".");
                YYABORT;
            }
        }
#line 715 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 209 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[0].value.as< std::vector<std::string> > (); }
#line 721 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 210 "src/sieve_parser.yy" // lalr1.cc:859
    { yystack_[1].value.as< std::vector<std::string> > ().insert(yystack_[1].value.as< std::vector<std::string> > ().end(), yystack_[0].value.as< std::vector<std::string> > ().begin(), yystack_[0].value.as< std::vector<std::string> > ().end()); yylhs.value.as< std::vector<std::string> > () = yystack_[1].value.as< std::vector<std::string> > (); }
#line 727 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 211 "src/sieve_parser.yy" // lalr1.cc:859
    { yystack_[1].value.as< std::vector<std::string> > ().insert(yystack_[1].value.as< std::vector<std::string> > ().end(), yystack_[0].value.as< std::vector<std::string> > ().begin(), yystack_[0].value.as< std::vector<std::string> > ().end()); yylhs.value.as< std::vector<std::string> > () = yystack_[1].value.as< std::vector<std::string> > (); }
#line 733 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 212 "src/sieve_parser.yy" // lalr1.cc:859
    { yystack_[1].value.as< std::vector<std::string> > ().insert(yystack_[1].value.as< std::vector<std::string> > ().end(), yystack_[0].value.as< std::vector<std::string> > ().begin(), yystack_[0].value.as< std::vector<std::string> > ().end()); yylhs.value.as< std::vector<std::string> > () = yystack_[1].value.as< std::vector<std::string> > (); }
#line 739 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 213 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[0].value.as< std::vector<std::string> > (); }
#line 745 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 214 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[0].value.as< std::vector<std::string> > (); }
#line 751 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 217 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[0].value.as< std::vector<std::string> > (); }
#line 757 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 218 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>( 1, std::to_string(yystack_[0].value.as< int > ()) ); }
#line 763 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 220 "src/sieve_parser.yy" // lalr1.cc:859
    {
            if ( !driver.supports_module("index") && yystack_[0].value.as< std::string > () == ":index" ) {
                driver.error(yystack_[0].location, "Unrecognized tag \"" + yystack_[0].value.as< std::string > () + "\".", "Hint: require index");
                YYABORT;
            }

            if ( !driver.supports_module("copy") && yystack_[0].value.as< std::string > () == ":copy" ) {
                driver.error(yystack_[0].location, "Unrecognized tag \"" + yystack_[0].value.as< std::string > () + "\".", "Hint: require copy");
                YYABORT;
            }

            if ( !driver.supports_module("relational") && (yystack_[0].value.as< std::string > () == ":count" || yystack_[0].value.as< std::string > () == ":value") ) {
                driver.error(yystack_[0].location, "Unrecognized tag \"" + yystack_[0].value.as< std::string > () + "\".", "Hint: require relational");
                YYABORT;
            }

            yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>(1, yystack_[0].value.as< std::string > ());
        }
#line 786 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 240 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[1].value.as< std::vector<std::string> > (); }
#line 792 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 243 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[0].value.as< std::vector<std::string> > (); }
#line 798 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 244 "src/sieve_parser.yy" // lalr1.cc:859
    { yystack_[2].value.as< std::vector<std::string> > ().insert(yystack_[2].value.as< std::vector<std::string> > ().end(), yystack_[0].value.as< std::vector<std::string> > ().begin(), yystack_[0].value.as< std::vector<std::string> > ().end()); yylhs.value.as< std::vector<std::string> > () = yystack_[2].value.as< std::vector<std::string> > (); }
#line 804 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 248 "src/sieve_parser.yy" // lalr1.cc:859
    {
        std::transform(yystack_[1].value.as< std::string > ().begin(), yystack_[1].value.as< std::string > ().end(), yystack_[1].value.as< std::string > ().begin(), ::tolower);
        if (!driver.valid_test(yystack_[1].value.as< std::string > ())) {
            driver.error(yystack_[1].location, "Unknown test \"" + yystack_[1].value.as< std::string > () + "\".");
            YYABORT;
        }

        if ( !driver.supports_module("imap4flags") && yystack_[1].value.as< std::string > () == "hasflag" ) {
            driver.error(yystack_[1].location, "Unrecognized test \"" + yystack_[1].value.as< std::string > () + "\".", "Hint: require imap4flags");
            YYABORT;
        }

        if ( !driver.supports_module("variables") && yystack_[1].value.as< std::string > () == "string" ) {
            driver.error(yystack_[1].location, "Unrecognized test \"" + yystack_[1].value.as< std::string > () + "\".", "Hint: require variables");
            YYABORT;
        }

        if ( !driver.supports_module("date") && (yystack_[1].value.as< std::string > () == "date" || yystack_[1].value.as< std::string > () == "currentdate") ) {
            driver.error(yystack_[1].location, "Unrecognized test \"" + yystack_[1].value.as< std::string > () + "\".", "Hint: require date");
            YYABORT;
        }

        if ( !driver.supports_module("body") && (yystack_[1].value.as< std::string > () == "body") ) {
            driver.error(yystack_[1].location, "Unrecognized test \"" + yystack_[1].value.as< std::string > () + "\".", "Hint: require body");
            YYABORT;
        }

        yystack_[0].value.as< std::vector<std::string> > ().push_back(yystack_[1].value.as< std::string > ());
     }
#line 838 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 277 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>(1, "true"); }
#line 844 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 278 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>(1, "false"); }
#line 850 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 281 "src/sieve_parser.yy" // lalr1.cc:859
    {yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>(1, yystack_[0].value.as< std::string > ()); }
#line 856 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 282 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<std::string> > () = yystack_[1].value.as< std::vector<std::string> > (); }
#line 862 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 285 "src/sieve_parser.yy" // lalr1.cc:859
    {yylhs.value.as< std::vector<std::string> > () = std::vector<std::string>(1, yystack_[0].value.as< std::string > ()); }
#line 868 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 286 "src/sieve_parser.yy" // lalr1.cc:859
    { yystack_[2].value.as< std::vector<std::string> > ().push_back(yystack_[0].value.as< std::string > ()); yylhs.value.as< std::vector<std::string> > () = yystack_[2].value.as< std::vector<std::string> > (); }
#line 874 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 289 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[0].value.as< int > (); }
#line 880 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 290 "src/sieve_parser.yy" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[1].value.as< int > (); }
#line 886 "gen/sieve_parser.tab.cc" // lalr1.cc:859
    break;


#line 890 "gen/sieve_parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  sieve_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  sieve_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char sieve_parser::yypact_ninf_ = -21;

  const signed char sieve_parser::yytable_ninf_ = -1;

  const signed char
  sieve_parser::yypact_[] =
  {
       3,   -21,    40,    58,   -21,    33,    12,   -21,    74,   -17,
     -21,     5,   -21,   -21,    51,    17,   -21,    58,   -21,    28,
      37,    47,   -21,   -21,   -21,   -21,   -21,   -21,    58,    17,
     -21,    64,   -21,    16,     2,   -21,    18,   -21,   -21,   -21,
     -21,   -21,   -21,    17,   -21,   -21,    13,   -21,    21,   -21,
      58,   -21,   -21,   -21,   -21
  };

  const unsigned char
  sieve_parser::yydefact_[] =
  {
       0,     2,     0,     0,    10,     0,     0,     3,     8,     0,
      30,     0,    28,    29,     0,     0,     7,     0,    23,    34,
       0,    15,    20,    19,    21,    22,     1,     4,     0,     0,
      32,     0,     5,    27,     0,    13,     0,    25,    35,     6,
      18,    17,    16,     0,     9,    31,     0,    12,     0,    24,
       0,    14,    33,    11,    26
  };

  const signed char
  sieve_parser::yypgoto_[] =
  {
     -21,    31,    -5,   -20,   -21,    25,    -1,    48,   -21,    -3,
      76,   -21,   -21
  };

  const signed char
  sieve_parser::yydefgoto_[] =
  {
      -1,     6,     7,    35,     8,    20,    21,    22,    36,    23,
      24,    31,    25
  };

  const unsigned char
  sieve_parser::yytable_[] =
  {
      15,    27,     1,     1,    30,     2,     2,     3,     3,    44,
       4,     4,    26,    32,    37,     2,    47,     3,    42,    40,
       4,     5,     5,    51,     2,    43,     3,     9,    49,     4,
      34,     5,    40,    50,    52,    53,    18,    10,    19,    33,
       5,    16,    17,    27,     9,    39,    38,    54,     9,    12,
      13,     9,    14,    18,    10,    19,    17,    18,    10,    19,
      17,    10,     9,    12,    13,    48,    14,    12,    13,    41,
      14,    18,    10,    19,    12,    13,    45,    14,    11,    46,
      28,    29
  };

  const unsigned char
  sieve_parser::yycheck_[] =
  {
       3,     6,     0,     0,    21,     3,     3,     5,     5,    29,
       8,     8,     0,     8,    17,     3,    14,     5,    21,    20,
       8,    19,    19,    43,     3,    28,     5,    11,    10,     8,
      13,    19,    33,    15,    21,    14,    20,    21,    22,    14,
      19,     8,     9,    48,    11,     8,    18,    50,    11,    16,
      17,    11,    19,    20,    21,    22,     9,    20,    21,    22,
       9,    21,    11,    16,    17,    34,    19,    16,    17,    21,
      19,    20,    21,    22,    16,    17,    12,    19,     2,    15,
       6,     7
  };

  const unsigned char
  sieve_parser::yystos_[] =
  {
       0,     0,     3,     5,     8,    19,    24,    25,    27,    11,
      21,    33,    16,    17,    19,    32,     8,     9,    20,    22,
      28,    29,    30,    32,    33,    35,     0,    25,     6,     7,
      21,    34,     8,    28,    13,    26,    31,    32,    18,     8,
      29,    30,    32,    32,    26,    12,    15,    14,    24,    10,
      15,    26,    21,    14,    32
  };

  const unsigned char
  sieve_parser::yyr1_[] =
  {
       0,    23,    24,    24,    24,    25,    25,    25,    25,    25,
      25,    26,    26,    27,    27,    28,    28,    28,    28,    28,
      28,    29,    29,    29,    30,    31,    31,    32,    32,    32,
      33,    33,    34,    34,    35,    35
  };

  const unsigned char
  sieve_parser::yyr2_[] =
  {
       0,     2,     1,     1,     2,     3,     3,     2,     1,     3,
       1,     3,     2,     3,     4,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     1,     1,
       1,     3,     1,     3,     1,     2
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const sieve_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"require\"", "\"string\"",
  "\"if\"", "\"elsif\"", "\"else\"", "\";\"", "\"(\"", "\")\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\",\"", "\"true\"", "\"false\"",
  "\"quantifier\"", "\"identifier\"", "\":tag\"", "\"string literal\"",
  "\"number\"", "$accept", "commands", "command", "block", "if_flow",
  "arguments", "argument", "test_list", "tests", "test", "string_list",
  "strings", "numeric", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  sieve_parser::yyrline_[] =
  {
       0,    72,    72,    73,    74,    78,    82,   159,   196,   197,
     198,   201,   202,   205,   206,   209,   210,   211,   212,   213,
     214,   217,   218,   219,   240,   243,   244,   248,   277,   278,
     281,   282,   285,   286,   289,   290
  };

  // Print the state stack on the debug stream.
  void
  sieve_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  sieve_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1300 "gen/sieve_parser.tab.cc" // lalr1.cc:1167
#line 293 "src/sieve_parser.yy" // lalr1.cc:1168


void yy::sieve_parser::error( const location_type &l, const std::string &m ) {
    driver.error(l, m);
}
