nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/SFLLogin_MOB.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(FirstNameFP:2,LastNameFP:3,AddressFP:4,ZipCodeFP:5,PhonenoFP:6,CountryFP:1,GuestEmailIdFP:7, File=/home/netstorm/work/data/JCPenney/CamProdAddressDetail.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_search_var(ZipcodeSP, PAGE=API_zipCode, LB="zipCode\":\"", RB="\"}", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StateCodeSP, PAGE=API_zipCode, LB="state\":\"", RB="\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CitySP, PAGE=API_zipCode, LB="city\":\"", RB="\"", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AddressIdSP, PAGE=API_SaveAddresses1, LB="{\"id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_static_var(SFLProductIdFP:1, File=/home/netstorm/work/data/JCPenney/SFLProductId.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

nsl_decl_var(CategorypagecountDP);
nsl_decl_var(ListIdDP);
nsl_decl_var(PaymentIdDP);
nsl_decl_var(DynUserIdDP);

nsl_search_var(AccessTokenSP, PAGE=API_CAM_token,  LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DynUserIdSP, PAGE=API_CAM_token,  LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(AddressIdSP2, PAGE=API_SaveAddresses1, LB="{\"id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(LastnameSP, PAGE=API_SaveAddresses1, LB="\"lastName\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AddressSP, PAGE=API_SaveAddresses1, LB="\"addressLineOne\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(City2SP, PAGE=API_SaveAddresses1, LB="\"city\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(State2SP, PAGE=API_SaveAddresses1, LB="\"state\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ZipCode2SP, PAGE=API_SaveAddresses1, LB="\"zip\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PhoneNoSP, PAGE=API_SaveAddresses1, LB="\"phone\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(SFLProductSP, PAGE=API_CAM_PGP_savedItems, LB="DP_SFL_PPIDS", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(SFLProductSP1, PAGE=API_CAM_PGP_savedItems1, LB="DP_SFL_PPIDS", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ListIdSP, PAGE=CreateList2, LB="/saved-items/", RB="\"", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_search_var(ListBlockSP, PAGE=CreateList4, LB="} ]", RB="} ]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ListBlockSP, PAGE=CreateList4, LB="https://s7d9.scene7.com/", RB="isBusinessUserLists\":false}", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="\"id\" : \"", RB="\",\n    \"name\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="\"id\" : \"", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ListSP, PAGE=CreateList4, LB="/saved-items/", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="/saved-items/", RB="\"", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(PaymentDetailBlock1, PAGE=AcountDashoard, LB="\"paymentMethods\":{", RB="}", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PaymentIdSP1, PAGE=AcountDashoard, LB="\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PayAddressIdSP1, PAGE=AcountDashoard, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=2, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock1, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_search_var(PaymentIdSP, PAGE=API_CAM_PaymentMethod, LB="{\"data\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(PayAddressIdSP, PAGE=API_CAM_PaymentMethod, LB="\"address\":{\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_search_var(PaymentIdSP, PAGE=API_CAM_AddressespaymentMethods, LB="{\"data\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PaymentIdSP, PAGE=API_CAM_AddressespaymentMethods, LB="\"paymentMethods\":{\"data\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PayAddressIdSP, PAGE=API_CAM_AddressespaymentMethods, LB="\"address\":{\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


//nsl_search_var(PaymentDetailBlock, PAGE=API_CAM_AddressespaymentMethods, LB="\"paymentMethods\" : {", RB="}", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(PaymentIdSP, PAGE=API_CAM_AddressespaymentMethods, LB="\"id\" : \"", RB="\",", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(PayAddressIdSP, PAGE=API_CAM_AddressespaymentMethods, LB="\"id\" : \"", RB="\"", LBMATCH=FIRST, ORD=2, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=API_CAM_token, LB="\"refresh_token\" : \"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_random_number_var(ListName, Min=1000, Max=9999, Format=%04lu, Refresh=USE);
//nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_search_var(TrendinglistIdSP, PAGE=trendinglist4, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SharetokenSP, PAGE=trendinglist4, LB="\"shareToken\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AccountIdSP, PAGE=trendinglist4, LB="\"accountId\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_web_find(TEXT="zipCode", PAGE=API_zipCode, FAIL=NOTFOUND, ID="This is not Zip Code Page.", ActionOnFail=STOP);
nsl_web_find(TEXT="addressLineOne", PAGE=API_SaveAddresses1, FAIL=NOTFOUND, ID="This is not Save Address1 page.", ActionOnFail=STOP);
//nsl_web_find(TEXT/RE/IC="The email address or password you entered was not found in our records", PAGE=API_SignIn_session, FAIL=FOUND, ID="Incorrect EmailID and Passwd", ActionOnFail=STOP);
//nsl_web_find(TEXT="The customer session is invalid", PAGE=API_VewOrders2, FAIL=FOUND, ID="401, The customer session is invalid", ActionOnFail=STOP);
nsl_web_find(TEXT="Limit of list items reached", PAGE=API_CAM_PGP_savedItems, FAIL=FOUND, ID="Saved Item Limit reached ", ActionOnFail=STOP);
nsl_search_var(DPClusterSP, PAGE=API_CAM_token, LB="DPCluster=", RB=";", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceSP, PAGE=API_CAM_token, LB="DPInstance=", RB=";", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
