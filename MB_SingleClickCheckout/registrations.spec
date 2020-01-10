//*********************************************File Parameter**********************************************
nsl_static_var(EmailFP:1,PasswordFP:2, File=/home/cavisson/work/data/JCPenney/MOBExpressProfiles.txt, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(CloudEnvFP:1, CloudEnvNameFP:2, CookieFP:3, File=/home/netstorm/work/data/JCPenney/CloudEnvName.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None, CopyFileToTR=Yes);
nsl_static_var(RegularPPidFP:1,SkuIdFP:2,WebIdFP:3,BogoQuantityFP:4, File=/home/netstorm/work/data/JCPenney/Com_RegularProduct.txt, Refresh=SESSION, Mode=RANDOM, EncodeMode=All, CopyFileToTR=Yes);
nsl_static_var(PromoCodeFP:1, File=/home/netstorm/work/data/JCPenney/ProdPromoCode.txt, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=Yes);


//*********************************************Search Parameter**********************************************
nsl_search_var(AccessTokenSP, PAGE=MB_API_Exp_OauthToken, LB="\"access_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(CustomerIdSP, PAGE=MB_API_Exp_OauthToken, LB="\"account_id\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(RefreshTokenSP, PAGE=MB_API_Exp_OauthToken, LB="\"refresh_token\":\"", RB="\",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(ItemCountSP1, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB=",", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(ItemCountSP2, PAGE=MB_API_AB_draftorder, LB="\"itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(CheckCartRenderingSP, PAGE=MB_API_SB_cart, LB="at-summary-subtotal-label\">", RB="<", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODItemCountSP,  PAGE=EC_OrderConfirmation, PAGE=MB_API_EC_orders, LB="itemCount\":", RB="}", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantityBlockSP, PAGE=EC_OrderConfirmation, PAGE=MB_API_EC_orders, LB="sku\":{", RB="}", SaveOffset=0, ORD=ALL, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODProductIDSP, PAGE=EC_OrderConfirmation, PAGE=MB_API_EC_orders, LB="\"product\":{\"id\":", RB=",",  ORD=ALL, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaODQuantitySP, PAGE=EC_OrderConfirmation, PAGE=MB_API_EC_orders, LB="\"quantity\":", RB=",", ORD=ALL, SaveOffset=0, Search=Variable, Var=YodaODQuantityBlockSP, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(YodaOrderNoSP, PAGE=EC_OrderConfirmation, PAGE=MB_API_EC_orders, LB="\"number\":\"", RB="\",\"status\":", ORD=1, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);
nsl_search_var(OrderIdSP, PAGE=MB_API_EC_OriginReview, LB="\"id\":\"", RB="\",\"analyticsAttributes", ORD=1, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_search_var(OrderNoSP1, PAGE=EC_OrderConfirmation,  LB="\"number\":\"", RB="\",\"status\":", ORD=ANY, SaveOffset=0, RETAINPREVALUE="NO", EncodeMode=None);

//*********************************************Declare Parameter**********************************************


//*********************************************Checkpoint**********************************************
nsl_web_find(TEXT="Out of Stocks Items", PAGE=MB_API_SB_cart, FAIL=FOUND, ID="Items is  Out Of Stock", ActionOnFail=STOP);
//nsl_search_var(OrderConfID, PAGE=MB_API_EC_OriginReview, LB="\"id\":\"", RB="\"", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
