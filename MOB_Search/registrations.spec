//*******************************************************Search Flow Params ***************************************************************************************
nsl_static_var(SearchTermFP:1, File=/home/netstorm/work/data/JCPenney/ProdSearchTerm.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, EncodeSpaceBy=+, CopyFileToTR=Yes);
nsl_static_var(SearchTermEncFP:1, File=/home/netstorm/work/data/JCPenney/ProdSearchTerm.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, EncodeSpaceBy=%20, CopyFileToTR=Yes);
nsl_static_var(PredictiveKeywordFP:1, File=/home/netstorm/work/data/JCPenney/PredictiveSearchData.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=All, EncodeSpaceBy=%20, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);


nsl_decl_var(SearchTermDP);
nsl_decl_var(PredictiveKeywordDP);
nsl_decl_var(YodaFilterUrlDP);
nsl_decl_var(YodaSortOptionDP);
nsl_decl_var(YodaProductUrlDP);
nsl_decl_var(YodaFilterId);
nsl_decl_var(YodaFacetId);
nsl_decl_var(ModeType);
nsl_decl_var(Itemtype);	
nsl_decl_var(ProductOfferingDP);
nsl_decl_var(SKUOfferingDP);


nsl_web_find(TEXT="errorMessage:\":\"Product not found of PPId", PAGE=MB_API_Search_products, FAIL=FOUND, ID="Product not found of PPID [{YodaProductIdSP}]", ActionOnFail=STOP);
nsl_web_find(TEXT="no products were found matching your search for", PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, FAIL=FOUND, ID="No Products Found for search term [{SearchTermFP}]", ActionOnFail=STOP);


//**********************Yoda****************************//
nsl_decl_var(YodaProductPageDP);

nsl_search_var(YodaFilterBlockSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"facetName\":", RB="},{\"facetName\"", ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterblock1, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"apiU", RB="}", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterUrlSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="rl\":\"", RB="?", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=YodaFilterblock1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterIdSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="N-",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaFilterUrlSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(YodaFacetIdSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"facetId\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ModeSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="&mode=", RB="\",", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaFilterBlockSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaSortOptionBlockSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="sortOptions\":", RB="]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB=",{\"apiUrl\":\"", RB="?", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaSortOptionSP1, PAGE=MB_API_Search_search, PAGE=MB_API_Search_searchservice, PAGE=MB_API_Search_CompleteTerm, LB="&sort=", RB="&mode", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductUrlSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"pdpUrl\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);
nsl_search_var(YodaProductCountSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm,  LB="countOfSearchResults\":", LBMATCH=FIRST, RB=",", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(YodaProductCountSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="countOfSearchResults\":", LBMATCH=FIRST, RB=",", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaPageCountSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"totalPages\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaPrdtCountSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"noOfProducts\":", LBMATCH=FIRST, RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaGalleryProductUrlSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="<a href=\"/p", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);


nsl_search_var(YodaProductsIdBlockSP, PAGE=MB_API_Search_products, PAGE=MB_API_Search_ProductAggregartor, LB="\"base\":", RB="}", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=MB_API_Search_products, PAGE=MB_API_Search_ProductAggregartor, LB="\"id\":\"", RB="\"",  ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaProductsIdBlockSP, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaSearchProductUrlSP, PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice, LB="\"ppId\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductDetailSP,  PAGE=MB_API_Search_search, PAGE=MB_API_Search_CompleteTerm, PAGE=MB_API_Search_searchservice,  RB="?", ORD=1, SaveOffset=0, Search=Variable, Var=YodaProductUrlSP, RETAINPREVALUE="YES", EncodeMode=None);


nsl_search_var(SearchProductIdSP, PAGE=MB_API_Search_search,  PAGE=MB_API_Search_CompleteTerm,	 LB="/", RB="?", ORD=1, SaveOffset=0, Search=Variable, Var=YodaProductUrlSP, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_search_var(CheckCSRSP, PAGE=MB_API_Search_CompleteTerm,  PAGE=MB_API_Search_search, LB="\"countOfSearchResults\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CheckCSRSP, PAGE=MB_API_Search_CompleteTerm,  PAGE=MB_API_Search_search, LB="<div>Loading", RB="</div>", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ProductOfferingSP,  PAGE=MB_API_Search_products,  LB="product-offerings\\u002F", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(ProductOfferingSP,  PAGE=MB_API_Search_products,  LB="offering\":{\"href\":\"\\u002F", RB="\"}", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SubdivisionSP,  PAGE=MB_API_Search_products,  LB="subdivision\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(CloudSP, PAGE=API_Search_terms_1, LB="DP-Cloud-Origin=", RB=";", SaveOffset=0, Search=ALL, RETAINPREVALUE="YES", EncodeMode=None);

