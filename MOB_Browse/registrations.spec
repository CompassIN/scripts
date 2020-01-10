//*******************************************************Browse Flow Params ***************************************************************************************
//nsl_static_var(DepartmentUrlFP:1,DepartmentFP:2, File=/home/netstorm/work/data/JCPenney/SimpTaxDepartmentURL.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(DepartmentNameFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentName.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=None, CopyFileToTR=Yes);

nsl_static_var(DepatmentFP:1,CategoryIdFP:2, File=/home/netstorm/work/data/JCPenney/DepartmentIdNew.txt.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(DeptURLFP:1, File=/home/netstorm/work/data/JCPenney/Mob_Dept.txt.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_static_var(RRPricePPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=SESSION, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);

nsl_decl_var(YodaProductUrlDP);
nsl_decl_var(YodaCategoryUrlDP);
nsl_decl_var(YodaCategoryIdDP);
nsl_decl_var(GalleryNameDP);
nsl_decl_var(ProductOfferingDP);
nsl_decl_var(SKUOfferingDP);
nsl_decl_var(UrlStateDP);
nsl_decl_var(YodaSortOptionUrlDP);
nsl_decl_var(YodaFilterUrlDP);
nsl_decl_var(FilterTypeDP);
nsl_decl_var(YodaCategoryDP);
nsl_decl_var(PaginationDP1);
nsl_decl_var(YodagalleryNameDP);

nsl_web_find(TEXT="errorMessage:\":\"Product not found of PPId", PAGE=MB_API_Browse_products, FAIL=FOUND, ID="Product not found of PPID [{YodaProductIdSP}]", ActionOnFail=STOP);

//*******************************************************Browse Yoda Flow Params ***************************************************************************************

//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"department-navigation-link\"", RB="Clearance</a></li>", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"department-navigation-link\"", RB="data-automation-id=\"department-navigation-link\"", ORD=ANY, LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"department-navigation-link\"", RB="data-automation-id=\"DEPARTMENT\"", ORD=ANY, LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"department-navigation-link\"", RB="data-automation-id=\"image", ORD=ANY, LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"breadcrumb-active\">", RB="data-automation-id=\"list-item", ORD=ANY, LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_search_var(YodaCategoryBlockSP, PAGE=DepartmentPage, LB="data-automation-id=\"breadcrumb-active\">", RB="data-automation-id=\"DEPARTMENT\"><img", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaCategoryUrlSP, PAGE=DepartmentPage,  LB="href=\"/g", RB="\"", ORD=ANY, SaveOffset=0,Search=Variable, Var=YodaCategoryBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(YodaCategoryIdSP, PAGE=DepartmentPage, LB="/N-", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaCategorySP, PAGE=DepartmentPage, LB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodagalleryNameSP, PAGE=DepartmentPage, RB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP, RETAINPREVALUE="NO", EncodeMode=None);


nsl_search_var(YodaCategoryUrlSP1, PAGE=MB_API_departments,  LB="\"url\":\"/g", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(YodaCategoryIdSP1, PAGE=MB_API_departments, LB="/N-", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP1, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaCategorySP1, PAGE=MB_API_departments, LB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP1, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodagalleryNameSP1, PAGE=MB_API_departments, RB="?",  LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaCategoryUrlSP1, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(ProductCountSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"totalNumRecs\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaFilterIdBlockSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"facetName\":", RB="},{\"facetName\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterIdBlockSP1,  PAGE=MB_API_Category_searchservice_organic, LB="\"apiU", RB="}", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterUrlSP,  PAGE=MB_API_Category_searchservice_organic, LB="rl\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaFilterIdSP1,  PAGE=MB_API_Category_searchservice_organic, LB="N-", LBMATCH=FIRST, SaveOffset=0, Search=Variable, Var=YodaFilterUrlSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(FilterTypeSP,  PAGE=MB_API_Category_searchservice_organic, LB="?", RB="&productGridView", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RoorPpIdSP, PAGE=MB_API_Category_searchservice_organic, LB="\"ppId\":\"", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefinementUrlSP,  PAGE=MB_API_Category_searchservice_organic, LB="rl\":\"/v1/search-service/", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP1, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaFacetIdSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"facetId\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaFilterIdBlockSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaSortOptionBlockSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"sortOptions\":", RB="]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionUrlSP, PAGE=MB_API_Category_searchservice_organic, LB="},{\"apiUrl\":\"", RB="?", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaSortOptionSP,  PAGE=MB_API_Category_searchservice_organic, LB="?", RB="&productGridView", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductCountSP, PAGE=MB_API_Category_searchservice_organic, LB="\"totalProductsCount\":", LBMATCH=FIRST, RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaPageCountSP, PAGE=MB_API_Category_searchservice_organic, LB="\"totalPages\":", RB=",\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductsIdBlockSP, PAGE=MB_API_Browse_products, PAGE=MB_API_Browse_ProductAggregartor, LB="\"base\":", RB="}", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=MB_API_Browse_products, PAGE=MB_API_Browse_ProductAggregartor, LB="\"id\":\"", RB="\"",  ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaProductsIdBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(UrlStateSP, PAGE=MB_API_Category_searchservice_organic, LB="urlState=", RB="\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SortingUrlSP,  PAGE=MB_API_Category_searchservice_organic, LB="},{\"apiUrl\":\"/v1/search-service/", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=YodaSortOptionBlockSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaProductUrlBlockSP,  PAGE=MB_API_Category_searchservice_organic, LB="ProductList-listBodyClass List-list-as-table", RB="abovePaginationZoneInfo", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductUrlSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"pdpUrl\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);
nsl_search_var(ProductDetailSP,  PAGE=MB_API_Category_searchservice_organic,  RB="?", ORD=1, SaveOffset=0, Search=Variable, Var=YodaProductUrlSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(YodaCatProductUrlSP,  PAGE=MB_API_Category_searchservice_organic, LB="\"ppId\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=Specified, CharsToEncode=" ", EncodeSpaceBy=%20);

nsl_search_var(CheckCSRSP, PAGE=MB_API_Browse_categories, LB="<div>Loading", RB="</div>", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(ProductOfferingSP,  PAGE=MB_API_Browse_products,  LB="offering\":{\"href\":\"\\u002F", RB="\"}", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SubdivisionSP,  PAGE=MB_API_Browse_products,  LB="subdivision\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//********************************************Param not used Now ************************************************//

//nsl_search_var(CloudSP, PAGE=HomePage, LB="DP-Cloud-Origin=", RB=";", SaveOffset=0, Search=ALL, RETAINPREVALUE="YES", EncodeMode=None);
