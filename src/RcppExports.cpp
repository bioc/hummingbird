// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hummingbirdEMinternal
SEXP hummingbirdEMinternal(SEXP normM, SEXP normUM, SEXP abnormM, SEXP abnormUM, SEXP pos, SEXP binSize);
RcppExport SEXP _hummingbird_hummingbirdEMinternal(SEXP normMSEXP, SEXP normUMSEXP, SEXP abnormMSEXP, SEXP abnormUMSEXP, SEXP posSEXP, SEXP binSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type normM(normMSEXP);
    Rcpp::traits::input_parameter< SEXP >::type normUM(normUMSEXP);
    Rcpp::traits::input_parameter< SEXP >::type abnormM(abnormMSEXP);
    Rcpp::traits::input_parameter< SEXP >::type abnormUM(abnormUMSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pos(posSEXP);
    Rcpp::traits::input_parameter< SEXP >::type binSize(binSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(hummingbirdEMinternal(normM, normUM, abnormM, abnormUM, pos, binSize));
    return rcpp_result_gen;
END_RCPP
}
// hummingbirdPostAdjustmentInternal
SEXP hummingbirdPostAdjustmentInternal(SEXP em, SEXP pos, SEXP minCpGs, SEXP minLength, SEXP maxGap);
RcppExport SEXP _hummingbird_hummingbirdPostAdjustmentInternal(SEXP emSEXP, SEXP posSEXP, SEXP minCpGsSEXP, SEXP minLengthSEXP, SEXP maxGapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type em(emSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pos(posSEXP);
    Rcpp::traits::input_parameter< SEXP >::type minCpGs(minCpGsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type minLength(minLengthSEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxGap(maxGapSEXP);
    rcpp_result_gen = Rcpp::wrap(hummingbirdPostAdjustmentInternal(em, pos, minCpGs, minLength, maxGap));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hummingbird_hummingbirdEMinternal", (DL_FUNC) &_hummingbird_hummingbirdEMinternal, 6},
    {"_hummingbird_hummingbirdPostAdjustmentInternal", (DL_FUNC) &_hummingbird_hummingbirdPostAdjustmentInternal, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_hummingbird(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
