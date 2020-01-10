//********************************************PROD FILE PARAMETER*****************************************************//

//nsl_static_var(DepartmentUrlFP:1,DepartmentFP:2, File=/home/netstorm/work/data/JCPenney/SimpTaxDepartmentURL.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(DepartmentNameFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentName.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=None, CopyFileToTR=Yes);

//nsl_static_var(DepartmentIDFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentID.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RRPricePPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL,  EncodeMode=None);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);

//*********************************************DECLARE PARAMETER***************************************************//

nsl_decl_var(PaginationDP);
nsl_decl_var(PaginationDP1);
nsl_decl_var(YodaFilterUrlDP);
nsl_decl_var(YodaSortOptionUrlDP);
nsl_decl_var(YodaCategoryUrlDP);
nsl_decl_var(YodaProductPageDP);
nsl_decl_var(YodaProductUrlDP);
nsl_decl_var(YodaCategoryIdDP);
nsl_decl_var(ProductOfferingDP);
nsl_decl_var(SKUOfferingDP);
nsl_decl_var(UrlStateDP);
nsl_decl_var(FilterTypeDP);
nsl_decl_var(YodaCategoryDP);
nsl_decl_var(ProductCompareDP);
nsl_decl_var(YodagalleryNameDP);
//*******************************************************CHECKPOINTS********************************************************************

nsl_web_find(TEXT=">0 products", PAGE=CategoryPage,FAIL=FOUND, ID="This is not CategoryPage.", ActionOnFail=STOP);
nsl_web_find(TEXT="errorMessage:\":\"Product not found of PPId", PAGE=DT_API_Browse_products, FAIL=FOUND, ID="Product not found of PPID [{YodaProductIdSP}]", ActionOnFail=STOP);

//*********************************************************COORELATED PARAMS***************************************************//

//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"breadcrumb-active\">", RB="data-automation-id=\"DEPARTMENT\"><img", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"breadcrumb-active\">", RB="data-automation-id=\"image", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"breadcrumb-active\">", RB="</div></div></div></div></div></div><div style", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaCategoryUrlSP, PAGE=DepartmentPage,  LB="href=\"/g", RB="\"", ORD=ANY, SaveOffset=0,Search=Variable, Var=YodaCategoryBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(YodaCategoryIdSP, PAGE=DepartmentPage, LB="id=", RB="&", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaCategorySP, PAGE=DepartmentPage, LB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodagalleryNameSP, PAGE=DepartmentPage, RB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaCategoryUrlSP1, PAGE=DT_API_departments, LB="\"url\":\"/g", RB="\"",  LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaCategorySP1, PAGE=DT_API_departments, LB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP1, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodagalleryNameSP1, PAGE=DT_API_departments, RB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP1, RETAINPREVALUE="NO", EncodeMode=None);



nsl_search_var(ProductCountSP,  PAGE=CategoryOrganicPage, LB="\"totalNumRecs\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaFilterIdBlockSP,  PAGE=CategoryOrganicPage, LB="\"facetName\":", RB="},{\"facetName\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterIdBlockSP1,  PAGE=CategoryOrganicPage, LB="\"apiU", RB="}", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterUrlSP,  PAGE=CategoryOrganicPage, LB="rl\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(FilterTypeSP,  PAGE=CategoryOrganicPage, LB="?", RB="&", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(FilterTypeSP,  PAGE=CategoryOrganicPage, LB="?", RB="&productGridView", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefinementUrlSP,  PAGE=CategoryOrganicPage, LB="rl\":\"/v1/search-service/", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_search_var(YodaFilterUrlSP,  PAGE=CategoryOrganicPage, LB="rl\":\"", RB="?responseType", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterIdSP1,  PAGE=CategoryOrganicPage, LB="N-", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaFilterUrlSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFacetIdSP,  PAGE=CategoryOrganicPage, LB="\"facetId\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionBlockSP,  PAGE=CategoryOrganicPage, LB="\"sortOptions\":", RB="]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionUrlSP,  PAGE=CategoryOrganicPage, LB="},{\"apiUrl\":\"", RB="?", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionSP,  PAGE=CategoryOrganicPage, LB="?", RB="&productGridView", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaPageCountSP,  PAGE=CategoryOrganicPage, LB="\"totalPages\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SortingUrlSP,  PAGE=CategoryOrganicPage, LB="},{\"apiUrl\":\"/v1/search-service/", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);



//*************************Params Used in PDP Flow ***************************************************************//
nsl_search_var(YodaCatProductIdSP,  PAGE=CategoryOrganicPage, LB="\"ppId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductUrlBlockSP,  PAGE=CategoryOrganicPage, LB="ProductList-listBodyClass List-list-as-table", RB="abovePaginationZoneInfo", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductUrlSP,  PAGE=CategoryOrganicPage, LB="\"pdpUrl\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);
nsl_search_var(ProductDetailSP,  PAGE=CategoryOrganicPage,  RB="?", ORD=1, SaveOffset=0, Search=Variable, Var=YodaProductUrlSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(WebIdSP, PAGE=DT_API_Browse_products,  PAGE=DT_API_Browse_PDP_ProductAggregartor, LB="\"webId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductsIdBlockSP, PAGE=DT_API_Browse_products, PAGE=DT_API_Browse_PDP_ProductAggregartor, LB="\"base\":", RB="}", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=DT_API_Browse_products, PAGE=DT_API_Browse_PDP_ProductAggregartor, LB="\"id\":\"", RB="\"",  ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaProductsIdBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductOfferingSP, PAGE=DT_API_Browse_products, LB="offering\":{\"href\":\"\\u002F", RB="\"}", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SubdivisionSP,  PAGE=DT_API_Browse_products,  LB="subdivision\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(UrlStateSP, PAGE=DT_API_Browse_products, LB="\"urlState\":\"", RB="\"}", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(UrlStateSP, PAGE=CategoryOrganicPage, LB="urlState=", RB="\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);


//************************************ Below PARAMS are not USED Now ************************************************

nsl_search_var(CheckCSRSP, PAGE=CategoryPage, LB="<div>Loading", RB="</div>", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(ItemperPageBlockSP,  PAGE=CategoryOrganicPage, LB="<div class=\"productResults_showing\">showing items:", RB="<ul class=\"pagination\">", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemsPerPageUrlSP,  PAGE=CategoryOrganicPage, LB="href=\"/", RB="\">", ORD=ANY, SaveOffset=0, Convert=HTMLToText, Search=Variable, Var=ItemperPageBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductCompareSP, PAGE=CategoryOrganicPage, LB="\"ppId\":\"", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_random_number_var(SimilarItem, Min=2, Max=4, Format=%01lu, Refresh=USE);
