//*****************************************************Regular Product/ShoppingBag Flow Params************************************************************************************
nsl_decl_var(ProductLoop);
nsl_decl_var(CheckOutPromoDP);
nsl_decl_var(YodaCheckOutDP);
nsl_decl_var(OrderIDDP);
nsl_decl_var(OrderIDDP1);
nsl_decl_var(OrderIDDP2);
nsl_decl_var(InstanceDP);
nsl_decl_var(ProductOfferingDP);
nsl_static_var(PromocodeFP:1, File=/home/netstorm/work/data/JCPenney/ProdPromoCode.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(PPIdType1:1,SkuIdType1:2, WebIdType1:3, BogoQuantityFP:4, File=/home/netstorm/work/data/JCPenney/Mob_RegularProduct.txt, Refresh=USE, Mode=RANDOM, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_search_var(ItemCountSP1, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP2, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_static_var(YodaCookieFP:1, File=/home/netstorm/work/data/JCPenney/YodaCookieFP.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);


//************* All 9 Profiles******************* 
//nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/MOB_RegProdLoginAll9Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
//nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//************* All 8 Profiles*******************
nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/MOB_RegProdLoginAll8Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CardTypeFP:1,CardnoFP:2,File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_search_var(ProductOfferingSP,  PAGE=MB_API_product,  LB="product-offerings\\u002F", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ProductOfferingSP1, PAGE=MB_API_ProductAggregartor, LB="product-offerings/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_static_var(EnterpriseCouponFP:1,EnterpriseSerialNumberFP:2, File=/home/netstorm/work/data/JCPenney/EnterpriseCoupon.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_decl_var(WrapIdDP);
nsl_static_var(GiftCardNoFP:1,GiftCardPinFP:2, File=/home/netstorm/work/data/JCPenney/GiftCard.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(FreeShippingCouponFP:1, File=/home/netstorm/work/data/JCPenney/FreeShippingCoupon.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//***************Yoda**************//

nsl_search_var(AccessTokenSP, PAGE=MB_API_AB_OAuthGuest, PAGE=MB_API_RC_OauthToken, PAGE=MB_API_Ensemble_accounts, LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP, PAGE=MB_API_AB_OAuthGuest, PAGE=MB_API_RC_OauthToken, PAGE=MB_API_Ensemble_accounts, LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=MB_API_AB_OAuthGuest, PAGE=MB_API_RC_OauthToken, PAGE=MB_API_Ensemble_accounts, LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(OrderNoSP1, PAGE=MB_OrderConfirmation, PAGE=MB_API_RC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(GroupIdSP, PAGE=MB_API_RC_draftorder3, PAGE=Checkout2, LB="\"groupId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(UserDetailBlockSP, PAGE=MB_API_RC_Addresses, LB="\"data\":[{", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(FirstNameSP, PAGE=MB_API_RC_Addresses, LB="\"firstName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(LastNameSP, PAGE=MB_API_RC_Addresses, LB="\"lastName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressSP, PAGE=MB_API_RC_Addresses, LB="\"addressLineOne\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(StateSP, PAGE=MB_API_RC_Addresses, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CitySP, PAGE=MB_API_RC_Addresses, LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ZipcodeSP, PAGE=MB_API_RC_Addresses, LB="\"zip\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PhoneNoSP, PAGE=MB_API_RC_Addresses, LB="\"phone\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressVidSP, PAGE=MB_API_RC_Addresses, LB="\"addressVid\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressIdSP, PAGE=MB_API_RC_Addresses, LB="\"id\":\"", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=UserDetailBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressIdSP1, PAGE=MB_API_RC_Addresses, LB="/addresses/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PaymentMethodIdSP, PAGE=MB_API_RC_PaymentMethod, LB="/payment-methods/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_web_find(TEXT="\"account_id\"", PAGE=MB_API_AB_OAuthGuest, PAGE=MB_API_Ensemble_accounts, PAGE=MB_API_RC_OauthToken, FAIL=NOTFOUND, ID="Customer Details are not coming in Response", ActionOnFail=STOP);
//nsl_web_find(TEXT="\"access_token\" :", PAGE=MB_API_RC_OauthToken, FAIL=NOTFOUND, ID="This is not API_RC_OauthToken Page", ActionOnFail=STOP);
nsl_web_find(TEXT="\"access_token\"", PAGE=MB_API_RC_OauthToken, FAIL=NOTFOUND, ID="This is not API_RC_OauthToken Page", ActionOnFail=STOP);
nsl_web_find(TEXT="code\":\"SUBMITTED", PAGE=MB_API_RC_orders, FAIL=NOTFOUND, ID="Order not submitted", ActionOnFail=STOP);
nsl_search_var(OrderIdSP, PAGE=MB_API_RC_PM_draftorder, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(SubTotalAmountSP, PAGE=MB_API_RC_draftorder3, PAGE=Checkout2, PAGE=MB_API_GiftCard_draftorder, PAGE=MB_API_RC_PM_draftorder, LB="\"SUB TOTAL\",\"amount\":", RB="}", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_web_find(TEXT="Please enter a valid last name", PAGE=MB_API_RC_draftorder2, FAIL=FOUND, ID="Last name is invalid", ActionOnFail=STOP);
nsl_web_find(TEXT="\"itemCount\":0", PAGE=MB_API_AB_draftorder, PAGE=MB_API_Ensemble_draftorder,  FAIL=FOUND, ID="Item not available", ActionOnFail=STOP);

nsl_search_var(CardAuthRequiredSP, PAGE=MB_API_RC_PaymentMethod,  LB="\"status\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODItemCountSP, PAGE=MB_OrderConfirmation,  PAGE=MB_API_RC_orders, LB="itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantityBlockSP, PAGE=MB_OrderConfirmation, PAGE=MB_API_RC_orders, LB="sku\":{", RB="}", SaveOffset=0, ORD=ALL, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODProductIDSP, PAGE=MB_OrderConfirmation, PAGE=MB_API_RC_orders, LB="\"product\":{\"id\":", RB=",",  ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantitySP, PAGE=MB_OrderConfirmation, PAGE=MB_API_RC_orders, LB="\"quantity\":", RB=",", ORD=ALL, SaveOffset=0, Search=Variable, Var=YodaODQuantityBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaOrderNoSP, PAGE=MB_OrderConfirmation, PAGE=MB_API_RC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(DPClusterId, PAGE=MB_API_SB_cart, LB="\"dpCluster\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceId, PAGE=MB_API_SB_cart, LB="\"DPInstance\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPOrderId, PAGE=MB_API_SB_cart, LB="\"DPOrder\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_web_find(TEXT="valid\":true", PAGE=MB_API_AB_bagitems, FAIL=NOTFOUND, ID="Response isnt expected", ActionOnFail=STOP);
//nsl_web_find(TEXT="\"number\":\"2019", PAGE=MB_API_RC_PM_draftorder, FAIL=NOTFOUND, ID="Order number did not generate", ActionOnFail=STOP);
nsl_search_var(YodaProductIdSP, PAGE=MB_API_product, LB="\"productDetails\":{\"id\":\"", RB="\"", ORD=ANY, SaveOffset=0,  RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(EtagIdSP, PAGE=MB_API_RC_PM_draftorder, LB="X-ETag: ", RB=".Disabled", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_decl_var(AddCookie);
//nsl_search_var(XPlatformSP, PAGE=MB_API_RC_PM_draftorder, PAGE=MB_API_RC_orders, LB="X-Platform: ", RB="\r\n", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckoutRenderingSP, PAGE=Checkout2, LB="\"enableCheckoutServerSideRendering\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckCartRenderingSP, PAGE=MB_API_SB_cart, LB="at-summary-subtotal-label\">", RB="<", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
//nsl_search_var(CloudSP, PAGE=MB_API_product, LB="DP-Cloud-Origin=", RB=";", SaveOffset=0, Search=ALL, RETAINPREVALUE="YES", EncodeMode=None);
nsl_web_find(TEXT="Out of Stocks Items", PAGE=MB_API_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);
