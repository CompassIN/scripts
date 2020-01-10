///********************************************PROD FILE PARAMETER*****************************************************//
nsl_static_var(RegularPPidFP:1,SkuIdFP:2, WebIdFP:3, BogoQuantityFP:4, File=/home/netstorm/work/data/JCPenney/Com_RegularProduct.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(PromoCodeFP:1, File=/home/netstorm/work/data/JCPenney/ProdPromoCode.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(GiftCardNoFP:1,GiftCardPinFP:2, File=/home/netstorm/work/data/JCPenney/GiftCard.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(EnterpriseCouponFP:1,EnterpriseSerialNumberFP:2, File=/home/netstorm/work/data/JCPenney/EnterpriseCoupon.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(FreeShippingCouponFP:1, File=/home/netstorm/work/data/JCPenney/FreeShippingCoupon.txt, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(RootPPIDFP:1, File=/home/netstorm/work/data/JCPenney/RRPricePPId/RRPricePPid.txt, Refresh=USE, Mode=SEQUENTIAL, ColumnDelimiter=|, EncodeMode=None);
nsl_static_var(DepartmentIDFP:1, File=/home/netstorm/work/data/JCPenney/DepartmentID.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);

//All 9 Card entries 
//nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/COM_RegProdLoginAll9Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
//nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll9Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//All 8 Card entries 
nsl_static_var(EmailIdFP:1,PasswordFP:2, File=/home/netstorm/work/data/JCPenney/COM_RegProdLoginAll8Card.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CreditCardTypeFP:1,CreditCardNumberFP:2, File=/home/netstorm/work/data/JCPenney/PaymentDetailAll8Card.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);

//*********************************************DECLARE PARAMETER***************************************************//

nsl_decl_var(OrderInfoDP);
nsl_decl_var(OrderIDDP);
nsl_decl_var(InstanceDP);
nsl_decl_var(CheckOutPromoDP);
nsl_decl_var(YodaCheckOutDP);
nsl_decl_var(AddCookie);

//********************************************CHCEKPOINTS*********************************************************//

nsl_web_find(TEXT="\"account_id\"",  PAGE=DT_API_RC_OauthToken, FAIL=NOTFOUND, ID="Customer Details are not coming in Response", ActionOnFail=STOP);
nsl_web_find(TEXT="\"access_token\"", PAGE=DT_API_RC_OauthToken, FAIL=NOTFOUND, ID="This is not API_RC_OauthToken Page", ActionOnFail=STOP);
nsl_web_find(TEXT="code\":\"SUBMITTED", PAGE=DT_API_RC_orders, FAIL=NOTFOUND, ID="Order not submitted", ActionOnFail=STOP);
nsl_web_find(TEXT="\"valid\":true", PAGE=DT_API_AB_bagitems, FAIL=NOTFOUND, ID="Item Not Available [{RegularPPidFP}]; [{SkuIdFP}]", ActionOnFail=STOP);
//nsl_web_find(TEXT="\"number\":\"2019", PAGE=DT_API_RC_PM_draftorder, FAIL=NOTFOUND, ID="Order number didnt generate", ActionOnFail=STOP);
nsl_web_find(TEXT="Please enter a valid last name", PAGE=DT_API_RC_draftorder2, FAIL=FOUND, ID="Last name is invalid", ActionOnFail=STOP);
nsl_web_find(TEXT="Out of Stocks Items", PAGE=DT_API_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);


//*******************************************COORELATED Params****************************************//
nsl_search_var(CardAuthRequiredSP, PAGE=DT_API_RC_PaymentMethod,  LB="\"status\":\"", RB="\",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);


nsl_search_var(AccessTokenSP, PAGE=DT_API_AB_OauthGuest, PAGE=DT_API_RC_OauthToken, LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=DT_API_AB_OauthGuest, PAGE=DT_API_RC_OauthToken,  LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP, PAGE=DT_API_AB_OauthGuest, PAGE=DT_API_RC_OauthToken,PAGE=DT_API_AB_OauthGuest, LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(OrderNoSP1,  PAGE=PO_OrderConfirmation, LB="\"number\":\"", RB="\",\"status\":", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(GroupIdSP, PAGE=DT_API_RC_draftorder3, PAGE=DT_API_RC_Checkout, LB="\"groupId\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(UserDetailBlockSP, PAGE=DT_API_RC_Addresses, LB="\"data\":[{", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(FirstNameSP, PAGE=DT_API_RC_PaymentMethod, LB="\"firstName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(LastNameSP, PAGE=DT_API_RC_PaymentMethod, LB="\"lastName\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressSP, PAGE=DT_API_RC_PaymentMethod, LB="\"addressLineOne\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(StateSP, PAGE=DT_API_RC_PaymentMethod, LB="\"state\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CitySP, PAGE=DT_API_RC_PaymentMethod, LB="\"city\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ZipcodeSP, PAGE=DT_API_RC_PaymentMethod, LB="\"zip\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PhoneNoSP, PAGE=DT_API_RC_PaymentMethod, LB="\"phone\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressVidSP, PAGE=DT_API_RC_PaymentMethod, LB="\"addressVid\":\"", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressIdSP, PAGE=DT_API_RC_Addresses, LB="\"id\":\"", RB="\"", ORD=ANY, SaveOffset=0, Search=Variable, Var=UserDetailBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(AddressIdSP1, PAGE=DT_API_RC_PaymentMethod, LB="/addresses/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(PaymentMethodIdSP, PAGE=DT_API_RC_PaymentMethod, LB="/payment-methods/", RB="\"", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(OrderIdSP, PAGE=DT_API_RC_PM_draftorder, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(EtagIdSP, PAGE=DT_API_RC_PM_draftorder, LB="X-ETag: ", RB=".Disabled", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);

nsl_search_var(SubTotalAmountSP, PAGE=DT_API_RC_draftorder3, PAGE=DT_API_RC_Checkout, PAGE=DT_API_GiftCard_draftorder, PAGE=DT_API_RC_PM_draftorder, LB="\"ORDER AMOUNT\",\"amount\":", RB="},", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(YodaODItemCountSP,  PAGE=PO_OrderConfirmation, PAGE=DT_API_RC_orders, LB="itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantityBlockSP, PAGE=PO_OrderConfirmation, PAGE=DT_API_RC_orders, LB="sku\":{", RB="}", SaveOffset=0, ORD=ALL, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODProductIDSP, PAGE=PO_OrderConfirmation, PAGE=DT_API_RC_orders, LB="\"product\":{\"id\":", RB=",",  ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantitySP, PAGE=PO_OrderConfirmation, PAGE=DT_API_RC_orders, LB="\"quantity\":", RB=",", ORD=ALL, SaveOffset=0, Search=Variable, Var=YodaODQuantityBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaOrderNoSP, PAGE=PO_OrderConfirmation, PAGE=DT_API_RC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP1, PAGE=DT_API_AB_draftorder, LB="\"itemCount\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP2, PAGE=DT_API_AB_draftorder, LB="\"itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

nsl_search_var(DPClusterId, PAGE=DT_API_SB_cart, LB="\"dpCluster\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPInstanceId, PAGE=DT_API_SB_cart, LB="\"DPInstance\":\"", RB="\",\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(DPOrderId, PAGE=DT_API_SB_cart, LB="\"DPOrder\":\"", RB="\",", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);


//nsl_search_var(XPlatformSP, PAGE=DT_API_RC_PM_draftorder, PAGE=DT_API_RC_orders, LB="X-Platform: ", RB="\r\n", LBMATCH=FIRST, SaveOffset=0, Search=Header, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckoutRenderingSP, PAGE=DT_API_RC_Checkout, LB="\"enableCheckoutServerSideRendering\":", RB=",", LBMATCH=FIRST, ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CheckCartRenderingSP, PAGE=DT_API_SB_cart, LB="at-summary-subtotal-label\">", RB="<", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
