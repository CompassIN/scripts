//****************************************************************Bopus Params **********************************************************************************************************************************************************
nsl_static_var(BopusPPIdFP:1,BopusSkuIdFP:2,BopusWebIdFP:3, BopusZipCodeFP:4, StoreLatFP:5,StoreLngFP:6, File=/home/netstorm/work/data/JCPenney/BopusProduct.txt, Refresh=SESSION, Mode=RANDOM, ColumnDelimiter=|, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
//nsl_static_var(YodaCookieFP:1, File=/home/netstorm/work/data/JCPenney/YodaCookieFP.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);


nsl_decl_var(StoreIdDP);
nsl_decl_var(ZipCodeDP);
nsl_decl_var(OrderIDDP);
nsl_decl_var(InstanceDP);
nsl_decl_var(StoreDetailsDP);
nsl_decl_var(DPOrderDP);
nsl_decl_var(ProductOfferingDP);
nsl_search_var(ProductOfferingSP, PAGE=BOPUS_PPidPage,  LB="product-offerings\\u002F", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductOfferingSP1, PAGE=BOPUS_ProductAggregartor, LB="product-offerings/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//******************************************************Bopus Guest/Register CheckOut flow Params ****************************************************************************************************
nsl_static_var(GuestEmailIdFP:7,FirstNameFP:2,LastNameFP:3,AddressFP:4,ZipCodeFP:5,PhoneNoFP:6,CountryFP:1, File=/home/netstorm/work/data/JCPenney/ProdAddressDetail.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_search_var(CitySP,  PAGE=Bopus_API_GC_Zipcode, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(StateSP,  PAGE=Bopus_API_GC_Zipcode, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//************* All 9 Profiles******************* 

//nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/MOB_RegProdLoginAll9Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
//nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//************* All 8 Profiles*******************
nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/MOB_RegProdLoginAll8Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//****************************** Yoda Checkout*****************************

nsl_search_var(AccessTokenSP,  PAGE=API_Bopus_RC_OuathToken, PAGE=BOPUS_Accounts2, LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP,  PAGE=API_Bopus_RC_OuathToken, PAGE=BOPUS_Accounts2, LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=API_Bopus_RC_OuathToken, PAGE=BOPUS_Accounts2, LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(OrderIdSP, PAGE=Bopus_API_GC_RO_draftorder, PAGE=API_Bopus_RC_PM_draftorder, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(OrderNoSP1, PAGE=Bopus_API_GC_PO_order, PAGE=API_Bopus_RC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(OrderNoSP1, PAGE=YODA_OrderConfirmation1, PAGE=YODA_OrderConfirmation3, PAGE=Bopus_API_GC_PO_order, PAGE=API_Bopus_RC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PaymentMethodIdSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="/payment-methods/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressIdSP1, PAGE=API_Bopus_RC_Paymentmethods1, LB="/addresses/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(FirstNameSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"firstName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(LastNameSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"lastName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"addressLineOne\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ZipcodeSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"zip\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PhoneNoSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"phone\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressVidSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"addressVid\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_web_find(TEXT="\",\"number\":\"", PAGE=API_Bopus_RC_orders, PAGE=Bopus_API_GC_PO_order, FAIL=NOTFOUND, ID="Order no not generated", ActionOnFail=STOP);
//nsl_web_find(TEXT="\",\"number\":\"", PAGE=YODA_OrderConfirmation3, PAGE=YODA_OrderConfirmation1, FAIL=NOTFOUND, ID="Order no not generated", ActionOnFail=STOP);
nsl_web_find(TEXT="\"billing\":", PAGE=API_Bopus_RC_PM_draftorder, FAIL=NOTFOUND, ID="This is not Payment Page", ActionOnFail=STOP);


nsl_search_var(DPClusterId, PAGE=API_Bopus_SB_cart, LB="\"dpCluster\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceId, PAGE=API_Bopus_SB_cart, LB="\"DPInstance\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPOrderId, PAGE=API_Bopus_SB_cart, LB="\"DPOrder\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


nsl_search_var(PPIdSP, PAGE=BOPUS_PPidPage, PAGE=BOPUS_ProductAggregartor, LB="\"productDetails\":{\"id\":\"", RB="\",", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(WebIdSP, PAGE=BOPUS_PPidPage, PAGE=BOPUS_ProductAggregartor, LB="\"lots\":[{\"id\":\"", RB="\",", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SkuIdSP, PAGE=BOPUS_PPidPage, PAGE=BOPUS_ProductAggregartor, LB="\"items\":[{\"id\":\"", RB="\",", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(BrandSP, PAGE=BOPUS_PPidPage, LB="\"brand\":{\"name\":\"", RB="\",", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=All, EncodeSpaceBy=%20);
nsl_search_var(StoreIDSP, PAGE=BOPUS_CheckStoreAvailability2, LB="],\"id\":\"", RB="\",", SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_web_find(TEXT="/pdp/free-shipping-content", PAGE=BOPUS_FreeShippingContent, FAIL=NOTFOUND, ID="This isnt free shipping content page", ActionOnFail=STOP);
//nsl_web_find(TEXT="{\"inventory\":", PAGE=BOPUS_ProductAggregator2, PAGE=BOPUS_ProductAggregator4, FAIL=NOTFOUND, ID="This inst product aggregator page", ActionOnFail=STOP);
nsl_web_find(TEXT="\"/v4/item-offerings", PAGE=BOPUS_EnterZipCodePage2, FAIL=NOTFOUND, ID="This isnt EnterZipCode page", ActionOnFail=STOP);
nsl_web_find(TEXT="status\":\"INSTOCK", PAGE=BOPUS_CheckStoreAvailability2, FAIL=NOTFOUND, ID="Item out of stock", ActionOnFail=STOP);
//nsl_web_find(TEXT="\"stores\":[{", PAGE=BOPUS_SelectStore2, FAIL=NOTFOUND, ID="this isnt select store page", ActionOnFail=STOP);
nsl_web_find(TEXT="Please enter a valid last name", PAGE=API_Bopus_RC_draftorder1, FAIL=FOUND, ID="Last name is invalid", ActionOnFail=STOP);

nsl_search_var(StoreDetailBlockSP, PAGE=BOPUS_CheckStoreAvailability2, LB="\"message\":\"In Stock\",\"pickUpStatus\":\"AVAILABLE\"", RB="]}", LBMATCH=FIRST, SaveOffset=0,  RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StoreNumberSP, PAGE=BOPUS_CheckStoreAvailability2, LB="\"number\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0,  Search=Variable, Var=StoreDetailBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StoreNameSP, PAGE=BOPUS_CheckStoreAvailability2, LB="\"name\":\"", RB="\",\"street\"", LBMATCH=FIRST, SaveOffset=0,  Search=Variable, Var=StoreDetailBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StoreDistanceSP, PAGE=BOPUS_CheckStoreAvailability2, LB="\"distance\":", RB=",", LBMATCH=FIRST, SaveOffset=0,  Search=Variable, Var=StoreDetailBlockSP, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StoreZipCodeSP, PAGE=BOPUS_CheckStoreAvailability2, LB="\"zip\":\"", RB="\"", SaveOffset=0, Search=Variable, Var=StoreDetailBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_web_find(TEXT="\"number\":\"2019", PAGE=API_Bopus_RC_PM_draftorder, PAGE=Bopus_API_GC_RO_draftorder, FAIL=NOTFOUND, ID="Order Number isnt generated", ActionOnFail=STOP);
nsl_search_var(ServicesProdSP, PAGE=API_Bopus_RC_Paymentmethods1, LB="\"href\":", RB="\"}", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=BOPUS_PPidPage, LB="\"productId\":\"", RB="\"", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(GroupIdSP, PAGE=Bopus_API_GC_draftorder2, PAGE=checkout, PAGE=Checkout, LB="\"groupId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(EtagIdSP, PAGE=Bopus_API_GC_RO_draftorder, PAGE=API_Bopus_RC_PM_draftorder, LB="X-ETag: \"", RB="\"", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(EtagIdSP, PAGE=Bopus_API_GC_RO_draftorder, PAGE=API_Bopus_RC_PM_draftorder, LB="X-ETag: ", RB=".Disabled", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(CheckoutRenderingSP, PAGE=Checkout, PAGE=checkout, LB="\"enableCheckoutServerSideRendering\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CardAuthRequiredSP, PAGE=API_Bopus_RC_Paymentmethods1,  LB="\"status\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SubdivisionSP,  PAGE=BOPUS_PPidPage, PAGE=BOPUS_ProductAggregartor, LB="subdivision\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_web_find(TEXT="Out of Stocks Items", PAGE=API_Bopus_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);

