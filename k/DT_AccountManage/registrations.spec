
//******************************************************FILE PARAMS **********************************************************************************************************//


nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/SFLLogin_DT.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(FirstNameFP:2,LastNameFP:3,AddressFP:4,ZipCodeFP:5,PhonenoFP:6,CountryFP:1,GuestEmailIdFP:7, File=/home/netstorm/work/data/JCPenney/CamProdAddressDetail.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(DepartmentUrlFP:1,DepartmentFP:2, File=/home/netstorm/work/data/JCPenney/SimpTaxDepartmentURL.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RRPricePPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_static_var(DepartmentIDFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentID.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

nsl_static_var(SFLProductIdFP:1, File=/home/netstorm/work/data/JCPenney/SFLProductId.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);


nsl_decl_var(PGP_SaveForLaterDP);
nsl_decl_var(PDP_SaveForLaterDP);
nsl_decl_var(YodaCategoryUrlDP);
nsl_decl_var(YodaCategoryIdDP);
nsl_decl_var(YodaProductPageDP);
nsl_decl_var(DPClusterDP);
nsl_decl_var(InstanceDP);
nsl_decl_var(ListIdDP);
nsl_decl_var(PaymentIdDP);


//******************************************************CHECKPOINTS *********************************************************************************************//
nsl_web_find(TEXT="JCPenney | Login", PAGE=SignInPage1, FAIL=FOUND, ID="Your Email and Password are not matched", ActionOnFail=STOP);
nsl_web_find(TEXT="The access token is invalid", PAGE=*, FAIL=FOUND, ID="The access token is invalid", ActionOnFail=STOP);


//*******************************************************COORELATED PARAMS ******************************************************************************//
nsl_search_var(StateSP, PAGE=AddAddressPage1, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CitySP, PAGE=AddAddressPage1,  LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ZipCodeSP, PAGE=AddAddressPage1, LB="\"zipCode\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DeleteButtonContainerBlockSP, PAGE=ClickOnSaveAddressPage2, LB="myAddressDeleteButtonContainer", RB="delete</a>", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SeqNumSP, PAGE=ClickOnSaveAddressPage2, LB="seqNum=", RB="&amp", SaveOffset=0, Search=Variable, Var=DeleteButtonContainerBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AddressRepositoryIdSP, PAGE=ClickOnSaveAddressPage2, LB="addressRepositoryId=", RB="\"", SaveOffset=0, Search=Variable, Var=DeleteButtonContainerBlockSP, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(DynUserIdSP, PAGE=SignInPage1, LB="\"account_id\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AccessTokenSP, PAGE=SignInPage1, LB="\"access_token\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(AddressIdSP, PAGE=ClickOnSaveAddressPage2, LB="{\"id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(FirstnameSP, PAGE=ClickOnSaveAddressPage2, LB="\"firstName\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(LastnameSP, PAGE=ClickOnSaveAddressPage2, LB="\"lastName\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AddressSP, PAGE=ClickOnSaveAddressPage2, LB="\"addressLineOne\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(City2SP, PAGE=ClickOnSaveAddressPage2, LB="\"city\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(State2SP, PAGE=ClickOnSaveAddressPage2, LB="\"state\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ZipCode2SP, PAGE=ClickOnSaveAddressPage2, LB="\"zip\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PhoneNoSP, PAGE=ClickOnSaveAddressPage2, LB="\"phone\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(PaymentIdSP, PAGE=paymentMethodPage, LB="{\"data\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(PayAddressIdSP, PAGE=paymentMethodPage, LB="\"address\":{\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(PaymentDetailBlock1, PAGE=AcountDashoard, LB="\"paymentMethods\":{", RB="}", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PaymentIdSP1, PAGE=AcountDashoard, LB="\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock1, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PayAddressIdSP1, PAGE=AcountDashoard, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=2, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock1, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(PaymentDetailBlock, PAGE=AddresspaymentMethods, LB="\"paymentMethods\":{", RB="}", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PaymentIdSP, PAGE=AddresspaymentMethods, LB="\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=1, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(PayAddressIdSP, PAGE=AddresspaymentMethods, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=2, SaveOffset=0, Search=Variable, Var=PaymentDetailBlock, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ListIdSP, PAGE=CreateList2, LB="/saved-items/", RB="\"", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_search_var(ListBlockSP, PAGE=CreateList4, LB="} ]", RB="} ]", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ListBlockSP, PAGE=CreateList4, LB="https://s7d9.scene7.com/", RB="isBusinessUserLists\":false}", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="\"id\" : \"", RB="\",\n    \"name\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="\"id\" : \"", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ListSP, PAGE=CreateList4, LB="/saved-items/", RB="\"", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, Search=Variable, Var=ListBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(ListSP, PAGE=CreateList4, LB="/saved-items/", RB="\"", ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_random_number_var(ListName, Min=1000, Max=9999, Format=%04lu, Refresh=USE);

//nsl_search_var(TrendingListCountSP, PAGE=TrendingListPage, LB="\"totalList\" : ", RB=",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_search_var(TrendinglistIdSP, PAGE=trendinglist4, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SharetokenSP, PAGE=trendinglist4, LB="\"shareToken\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(AccountIdSP, PAGE=trendinglist4, LB="\"accountId\":\"", RB="\"", LBMATCH=FIRST, ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
