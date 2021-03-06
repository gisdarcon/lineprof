// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// contains
int contains(CharacterVector haystack, CharacterVector needle);
RcppExport SEXP lineprof_contains(SEXP haystackSEXP, SEXP needleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type haystack(haystackSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type needle(needleSEXP );
        int __result = contains(haystack, needle);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// firstTRUE
int firstTRUE(LogicalVector x);
RcppExport SEXP lineprof_firstTRUE(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP );
        int __result = firstTRUE(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseLineProfileRefs
List parseLineProfileRefs(std::string input);
RcppExport SEXP lineprof_parseLineProfileRefs(SEXP inputSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type input(inputSEXP );
        List __result = parseLineProfileRefs(input);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// pause
void pause(double sec);
RcppExport SEXP lineprof_pause(SEXP secSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type sec(secSEXP );
        pause(sec);
    }
    return R_NilValue;
END_RCPP
}
