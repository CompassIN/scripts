//********************************************PROD FILE PARAMETER*****************************************************//
nsl_static_var(PredictiveKeywordFP:1, File=/home/netstorm/work/data/JCPenney/PredictiveSearchData.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=All, EncodeSpaceBy=%20, CopyFileToTR=Yes);
nsl_static_var(SearchTermFP:1, File=/home/netstorm/work/data/JCPenney/ProdSearchTerm.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(SearchTermEncFP:1, File=/home/netstorm/work/data/JCPenney/ProdSearchTerm.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, EncodeSpaceBy=%20, CopyFileToTR=Yes);
nsl_static_var(DepartmentIDFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentID.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RRPricePPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);

nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

//*********************************************DECLARE PARAMETER***************************************************//
nsl_decl_var(YodaProductPageDP);
nsl_decl_var(SearchTermDP);
nsl_decl_var(PaginationDP);
nsl_decl_var(PredictiveKeywordDP);
nsl_decl_var(YodaProductUrlDP);
nsl_decl_var(YodaFilterUrlDP);
nsl_decl_var(YodaSortOptionDP);
nsl_decl_var(YodaFilterId);
nsl_decl_var(YodaFacetId);
nsl_decl_var(ModeType);
nsl_decl_var(Itemtype);
nsl_decl_var(ProductOfferingDP);
nsl_decl_var(SKUOfferingDP);
		

//********************************************CHCEKPOINTS*********************************************************//

//nsl_web_find(TEXT="searchType=Predictive+Search", PAGE=PredictiveSearchPage,PAGE=DT_API_Search_terms_2,  FAIL=NOTFOUND, ID="No Predictions found for [{PredictiveKeywordFP}]", ActionOnFail=CONTINUE);
//nsl_web_find(TEXT="showing ", PAGE=SearchItemsperPage, FAIL=NOTFOUND, ID="Selection not available", ActionOnFail=STOP);

nsl_web_find(TEXT="errorMessage:\":\"Product not found of PPId", PAGE=DT_API_Search_products, FAIL=FOUND, ID="Product not found of PPID [{YodaProductIdSP}]", ActionOnFail=STOP);

nsl_web_find(TEXT="no products were found matching your search for", PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, FAIL=FOUND, ID="No Products are avaialble for Term for [{SearchTermFP}]", ActionOnFail=STOP);


//**************************** *************** COORELATED  PARAMS ************************************************************//


nsl_search_var(YodaProductCountSP, PAGE=DT_API_Search_CompleteTerm, LB="countOfSearchResults\":", LBMATCH=FIRST, RB=",", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaPageCountSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="\"totalPages\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaPrdtCountSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="\"noOfProducts\":", LBMATCH=FIRST, RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaFilterBlockSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="\"facetName\":", RB="},{\"facetName\"", ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


nsl_search_var(YodaProductUrlSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="\"pdpUrl\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);
nsl_search_var(YodaProductsIdBlockSP, PAGE=DT_API_Search_products, PAGE=DT_API_Search_ProductAggregartor, LB="\"base\":", RB="}", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=DT_API_Search_products, PAGE=DT_API_Search_ProductAggregartor, LB="\"id\":\"", RB="\"",  ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaProductsIdBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductDetailSP,  PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice,  RB="?", ORD=1, SaveOffset=0, Search=Variable, Var=YodaProductUrlSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RoorPpIdSP, PAGE=DT_API_Search_searchservice, LB="\"ppId\":\"", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


nsl_search_var(WebIdSP, PAGE=DT_API_Search_products, PAGE=DT_API_Search_ProductAggregartor,  LB="\"webId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaCatProductIdSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="\"ppId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_search_var(CheckCSRSP, PAGE=DT_API_Search_CompleteTerm,  LB="\"countOfSearchResults\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CheckCSRSP, PAGE=DT_API_Search_CompleteTerm,  LB="<div>Loading", RB="</div>", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaSortOptionBlockSP,  PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="sortOptions\":[", RB="]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionSP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB=",{\"apiUrl\":\"", RB="\",", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaSortBySP, PAGE=DT_API_Search_CompleteTerm, PAGE=DT_API_Search_searchservice, LB="&sort=", RB="&", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionSP, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_search_var(ProductOfferingSP,  PAGE=DT_API_Search_products,  LB="product-offerings\\u002F", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(ProductOfferingSP,  PAGE=DT_API_Search_products,  LB="offering\":{\"href\":\"\\u002F", RB="\"}", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SubdivisionSP,  PAGE=DT_API_Search_products,  LB="subdivision\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(CloudSP, PAGE=PredictiveSearchPage, LB="DP-Cloud-Origin=", RB=";", SaveOffset=0, Search=ALL, RETAINPREVALUE="YES", EncodeMode=None);
