//*****************************************************Regular Product/ShoppingBag Flow Params************************************************************************************
nsl_static_var(PPIdType1:1,SkuIdType1:2, WebIdType1:3, BogoQuantityFP:4, File=/home/netstorm/work/data/JCPenney/Mob_RegularProduct.txt, Refresh=USE, Mode=RANDOM, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_static_var(PromocodeFP:1, File=/home/netstorm/work/data/JCPenney/ProdPromoCode.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);

//nsl_static_var(YodaCookieFP:1, File=/home/netstorm/work/data/JCPenney/YodaCookieFP.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

//******************************************************Guest CheckOut flow Params ****************************************************************************************************
nsl_static_var(GuestEmailIdFP:7,FirstNameFP:2,LastNameFP:3,AddressFP:4,ZipCodeFP:5,PhoneNoFP:6,CountryFP:1, File=/home/netstorm/work/data/JCPenney/ProdAddressDetail.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
//nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//*******************************************YODA Checkout Params***************************************************************
nsl_decl_var(YodaCheckOutDP);
nsl_decl_var(AddCookie);
nsl_decl_var(ProductOfferingDP);

nsl_search_var(GuestGroupIdSP, PAGE=MB_API_GC_draftorder3, PAGE=checkout, LB="\"groupId\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(AccessTokenSP, PAGE=MB_API_AB_OAuthGuest,  LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP,  PAGE=MB_API_AB_OAuthGuest,  LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=MB_API_AB_OAuthGuest,  LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(GuestCitySP, PAGE=MB_API_GC_Zipcode, LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(GuestStateSP, PAGE=MB_API_GC_Zipcode, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(OrderNoSP1, PAGE=MB_OrderConfirmation, PAGE=MB_API_GC_PO_order, LB="\"number\":\"", RB="\",\"status\":", SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODItemCountSP, PAGE=MB_OrderConfirmation,  PAGE=MB_API_GC_PO_order, LB="itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODProductIDSP, PAGE=MB_OrderConfirmation, PAGE=MB_API_GC_PO_order, LB="\"product\":{\"id\":", RB=",",  ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(OrderIdSP, PAGE=MB_API_GC_Payment_draftorder, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ItemCountSP1, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP2, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(DPClusterId, PAGE=MB_API_SB_cart, LB="\"dpCluster\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceId, PAGE=MB_API_SB_cart, LB="\"DPInstance\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPOrderId, PAGE=MB_API_SB_cart, LB="\"DPOrder\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SaveForlaterItemIdSP, PAGE=MB_API_SB_cart, PAGE=MB_API_SB_draftorder2, LB="\"items\":[{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(SaveForlaterPrdIdSP, PAGE=MB_API_SB_cart, PAGE=MB_API_SB_draftorder2, LB="\"product\":{\"id\":\"", RB="\"", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SaveForlaterSkuIdSP, PAGE=MB_API_SB_cart, PAGE=MB_API_SB_draftorder2, LB="\"sku\":{\"id\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(YodaProductIdSP, PAGE=MB_API_products, LB="\"productDetails\":{\"id\":\"", RB="\"", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(EtagIdSP, PAGE=MB_API_GC_Payment_draftorder, LB="X-ETag: \"", RB="\"", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(EtagIdSP, PAGE=MB_API_GC_Payment_draftorder, LB="X-ETag: ", RB=".Disabled", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);

//nsl_search_var(XPlatformSP, PAGE=MB_API_GC_Payment_draftorder, PAGE=MB_API_GC_PO_order, LB="X-Platform: ", RB="\r\n", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckoutRenderingSP, PAGE=checkout, LB="\"enableCheckoutServerSideRendering\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ProductOfferingSP,  PAGE=MB_API_products,  LB="product-offerings\\u002F", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductOfferingSP1, PAGE=MB_API_ProductAggregartor, LB="product-offerings/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CheckCartRenderingSP, PAGE=MB_API_SB_cart, LB="at-summary-subtotal-label\">", RB="<", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//nsl_web_find(TEXT="\"number\":\"2019", PAGE=MB_API_GC_Payment_draftorder, FAIL=NOTFOUND, ID="Order No not Generated", ActionOnFail=STOP);
nsl_web_find(TEXT="\"itemCount\":0", PAGE=MB_API_AB_draftorder, FAIL=FOUND, ID="Item not available", ActionOnFail=STOP);
nsl_web_find(TEXT="The access token is invalid", PAGE=*, FAIL=FOUND, ID="The access token is invalid", ActionOnFail=STOP);
nsl_web_find(TEXT="valid\":true", PAGE=MB_API_AB_bagitems, FAIL=NOTFOUND, ID="Item isnt added to bag", ActionOnFail=STOP);
nsl_web_find(TEXT="Out of Stocks Items", PAGE=MB_API_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);

