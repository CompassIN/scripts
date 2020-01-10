//**************************************************************************** FILE PARAMETER ***********************************************************************************************//
nsl_static_var(RegularPPidFP:1,SkuIdFP:2, WebIdFP:3, BogoQuantityFP:4, File=/home/netstorm/work/data/JCPenney/Com_RegularProduct.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(PromoCodeFP:1, File=/home/netstorm/work/data/JCPenney/ProdPromoCode.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(DepartmentIDFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentID.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

//nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(FirstNameFP:2,LastNameFP:3,AddressFP:4,ZipCodeFP:5,PhonenoFP:6,CountryFP:1,GuestEmailIdFP:7, File=/home/netstorm/work/data/JCPenney/ProdAddressDetail.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

//*********************************************DECLARE PARAMETER***************************************************//

nsl_decl_var(ProductLoop);
nsl_decl_var(ItemDP);
nsl_decl_var(AddCookie);

//********************************************CHCEKPOINTS*********************************************************//
//nsl_web_find(TEXT/RE="\"number\":\"2019", PAGE=DT_API_GC_Payment_draftorder, FAIL=NOTFOUND, ID="Order No not Generated", ActionOnFail=STOP);
//nsl_web_find(TEXT/RE="\"number\":[2019]*", PAGE=DT_API_GC_Payment_draftorder, FAIL=NOTFOUND, ID="Order No not Generated", ActionOnFail=STOP);
nsl_web_find(TEXT="The access token is invalid", PAGE=*, FAIL=FOUND, ID="The access token is invalid", ActionOnFail=STOP);
nsl_web_find(TEXT="\"valid\":true", PAGE=DT_API_AB_bagitems, FAIL=NOTFOUND, ID="Item Not Available [{RegularPPidFP}]; [{SkuIdFP}]", ActionOnFail=STOP);
nsl_web_find(TEXT="Out of Stocks Items", PAGE=DT_API_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);

//***************************** SEARCH PARAM ******************************************//


nsl_search_var(AccessTokenSP, PAGE=DT_API_AB_OauthGuest,  LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP, PAGE=DT_API_AB_OauthGuest,  LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=DT_API_AB_OauthGuest,  LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(ItemCountSP1, PAGE=DT_API_AB_draftorder , LB="\"itemCount\":", RB=",", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP2, PAGE=DT_API_AB_draftorder , LB="\"itemCount\":", RB="}", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(DPClusterId, PAGE=DT_API_SB_cart, LB="\"dpCluster\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceId, PAGE=DT_API_SB_cart, LB="\"DPInstance\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPOrderId, PAGE=DT_API_SB_cart, LB="\"DPOrder\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(SaveForlaterItemIdSP, PAGE=DT_API_SB_cart, PAGE=DT_API_SB_draftorder2, LB="\"items\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SaveForlaterPrdIdSP, PAGE=DT_API_SB_cart, PAGE=DT_API_SB_draftorder2, LB="\"product\":{\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SaveForlaterSkuIdSP, PAGE=DT_API_SB_cart, PAGE=DT_API_SB_draftorder2, LB="\"sku\":{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(GuestGroupIdSP, PAGE=DT_API_GC_draftorder3, PAGE=checkout, LB="\"groupId\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(GuestCitySP, PAGE=DT_API_GC_Zipcode, LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(GuestStateSP, PAGE=DT_API_GC_Zipcode, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(OrderNoSP1,  PAGE=OrderConfirmation, PAGE=DT_API_GC_PO_order, LB="\"number\":\"", RB="\",\"status\":", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(OrderIdSP, PAGE=DT_API_GC_Payment_draftorder, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(StateSP2, PAGE=DT_API_GC_Zipcode, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CitySP2, PAGE=DT_API_GC_Zipcode,  LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ZipCodeSP2, PAGE=DT_API_GC_Zipcode, LB="\"zipCode\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


//nsl_search_var(XPlatformSP, PAGE=DT_API_GC_Payment_draftorder, PAGE=DT_API_GC_PO_order, LB="X-Platform: ", RB="\r\n", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckoutRenderingSP, PAGE=checkout, LB="\"enableCheckoutServerSideRendering\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(EtagIdSP, PAGE=DT_API_GC_Payment_draftorder, LB="X-ETag: ", RB=".Disabled", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(CheckCartRenderingSP, PAGE=DT_API_SB_cart, LB="at-summary-subtotal-label\">", RB="<", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaODProductIDSP, PAGE=OrderConfirmation, PAGE=DT_API_GC_PO_order, LB="\"product\":{\"id\":", RB=",",  ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODItemCountSP,  PAGE=OrderConfirmation, PAGE=DT_API_GC_PO_order, LB="itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
