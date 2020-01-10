//nsl_search_var(search, PAGE=index_html2, LB="<title>", RB="</title>", LBMATCH=FIRST, ORD=ALL, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(test, PAGE=index_html, LB="<title>", RB="</title>", LBMATCH=FIRST, SaveOffset=0, Search=ALL, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_web_find(TEXT="Content", PAGE=index_html, FAIL=NOTFOUND, ActionOnFail=STOP, Search_IN=BODY);
//nsl_static_var(uname:1, File=file.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
//nsl_web_find(TEXT="Content-Length", PAGE=*, FAIL=NOTFOUND, ActionOnFail=STOP, Search_IN=HEADER);
//nsl_web_find(TEXT="Set-Cookie:", PAGE=reservation, FAIL=NOTFOUND, ActionOnFail=CONTINUE, Search_IN=HEADER);
//nsl_web_find(TEXT="Content-type:", PAGE=*, FAIL=FOUND, ActionOnFail=CONTINUE, Search_IN=HEADER);
//nsl_web_find(TEXT="search_para", PAGE=index_html2, FAIL=NOTFOUND, ActionOnFail=CONTINUE,Search=VAR_TXT, Search_IN=BODY);
//nsl_search_var(search_para, PAGE=index_html2, LB="Welcome", RB="Tours", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_web_find(TEXT="<Mercury>", PAGE=index_html);
//nsl_static_var(para_file:1, File=.use, Refresh=USE, Mode=USE_ONCE, EncodeMode=All, OnUseOnceError=ABORTSESSION, UseOnceWithinTest=No);
//nsl_static_var(para_file:1, File=data.use, Refresh=USE, Mode=USE_ONCE, EncodeMode=All, OnUseOnceError=ABORTSESSION, UseOnceWithinTest=No);
//nsl_web_find(TextPfx="Welcome", TextSfx="Tours", PAGE=findflight_2, Search_IN=HEADER);
nsl_static_var(data_file:1, File=data_2.use, Refresh=SESSION, Mode=USE_ONCE, FirstDataLine=2, EncodeMode=All, OnUseOnceError=ABORTSESSION, UseOnceWithinTest=No);
//nsl_static_var(data_file1:1, File=data1.use, Refresh=SESSION, Mode=USE_ONCE, EncodeMode=All, OnUseOnceError=ABORTSESSION, UseOnceWithinTest=No);
//nsl_static_var(data_file:1, File=data.seq, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=1, EncodeMode=All);
//nsl_search_var(check_search, PAGE=login, LB="<title>", RB="</title>", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_web_find(TextPfx="mercury", TextSfx="<merc>", PAGE=login, FAIL=FOUND, ActionOnFail=STOP, Search_IN=BODY);
//nsl_static_var(data_para:1,data_para1:2, File=data.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
//nsl_web_find(TextPfx="data_para", TextSfx="data_para1", PAGE=*, FAIL=NOTFOUND, ID="qZxdfcgbjhnk", ActionOnFail=STOP,Search=VAR_PFX_SFX);
nsl_static_var(data_seq:1, File=file.seq, Refresh=USE, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(data2_seq:1, File=file2.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(ran_para:1, File=random.ran, Refresh=SESSION, Mode=RANDOM, EncodeMode=All);
nsl_static_var(ran1_para:1, File=rana1.ran, Refresh=SESSION, Mode=RANDOM, FirstDataLine=2, EncodeMode=All);
//nsl_web_find(TEXT="welcome", PAGE=findflight_2, FAIL=NOTFOUND, ActionOnFail=STOP);
//nsl_web_find(TEXT="Keep-Alive", PAGE=index_html);
nsl_date_var(skuStorePrice, Format="%Y-%m-%dT%H:%M:%S.%MZ", Refresh=USE);
//nsl_date_var(startDateTime, Format="%y-%m-%d %H:%M:%S", Refresh=USE);
//nsl_static_var(skuStorePrice:1, File=file_param.use, Refresh=SESSION, Mode=USE_ONCE, FirstDataLine=2, EncodeMode=All, OnUseOnceError=ABORTSESSION, UseOnceWithinTest=No);
