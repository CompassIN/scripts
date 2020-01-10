//RTC test cases

//#nsl_decl_var(DecIndex);
//#nsl_index_file_var(index_param, File=indexFile, indexVar=DecIndex, EncodeMode=All);

//Mode=SEQUENTIAL
//Refresh=SESSION
nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=1, EncodeMode=All);
//nsl_static_var(body_param, File=body_data_file, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=1, EncodeMode=All);
//nsl_static_var(body_param:1, File=main_file, Refresh=SESSION, Mode=SEQUENTIAL, VAR_VALUE=F1=file, EncodeMode=All);

//Refresh=USE
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=USE, Mode=SEQUENTIAL, FirstDataLine=1, EncodeMode=All);


//Mode=UNIQUE
//Refresh=SESSION
//nsl_static_var(S1v4:1, S1v5:2, File=S1v4_data_file, Refresh=SESSION, Mode=UNIQUE, FirstDataLine=1, EncodeMode=All);
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=SESSION, Mode=UNIQUE, FirstDataLine=1, EncodeMode=All, CopyFileToTR=No);

//Refresh=USE
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=USE, Mode=UNIQUE, FirstDataLine=1, EncodeMode=All, CopyFileToTR=No);


//Mode=USEONCE
//Refresh=SESSION
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=SESSION, Mode=USE_ONCE, FirstDataLine=1, EncodeMode=All);
//Refresh=USE
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=USE, Mode=USE_ONCE, FirstDataLine=1, EncodeMode=All);


//Mode=RANDOME
//Refresh=SESSION
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=SESSION, Mode=RANDOM, FirstDataLine=1, EncodeMode=All);
//Refresh=USE
//nsl_static_var(S1v1:1, S1v2:2, S1v3:3, File=S1v1_data_file, Refresh=USE, Mode=RANDOM, FirstDataLine=1, EncodeMode=All);

//nsl_index_file_var(S1v1, FILE=S1v1_data_file, IndexVar=2, FirstDataLine=1, ColumnDelimiter=,, HeaderLine=0, VAR_VALUE=F2=file);


//Mode=Weighted Random
//nsl_static_var(S1v4:2, S1v5:3, File=S1v4_data_file_weight, Refresh=SESSION, Mode=WEIGHTED_RANDOM, FirstDataLine=1, EncodeMode=All);


//More than one group
//nsl_static_var(S1v4:1, S1v5:2, File=S1v1_data_file1, Refresh=SESSION, Mode=UNIQUE, FirstDataLine=1, EncodeMode=All);





//PDF Data testing: dynamic tx
//nsl_static_var(param2, FILE=file_tx, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);



//protobuf data type testing
//nsl_static_var(double_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=62, EncodeMode=All);
//nsl_static_var(float_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=50, EncodeMode=All);
//nsl_static_var(int32_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=38, EncodeMode=All);
//nsl_static_var(int64_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=26, EncodeMode=All);
//nsl_static_var(uint32_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=14, EncodeMode=All);
//nsl_static_var(uint64_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=2, EncodeMode=All);
//nsl_static_var(sint32_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=38, EncodeMode=All);
//nsl_static_var(sint64_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=26, EncodeMode=All);
//nsl_static_var(fixed32_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=14, EncodeMode=All);
//nsl_static_var(fixed64_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=2, EncodeMode=All);
//nsl_static_var(sfixed32_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=38, EncodeMode=All);
//nsl_static_var(sfixed64_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=26, EncodeMode=All);
//nsl_static_var(bool_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=86, EncodeMode=All);
//nsl_static_var(string_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=98, EncodeMode=All);
//nsl_static_var(bytes_data, FILE=data.txt, Refresh=SESSION, Mode=SEQUENTIAL, FirstDataLine=74, EncodeMode=All);



//search_parameter
//nsl_search_var(search, PAGE=*, LB="Street", RB="Town", SaveOffset=0, LBMATCH=FIRST, ORD=ANY, Search=Body, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(search1, PAGE=*, LB="Recipient", RB="Agarwal", SaveOffset=0, LBMATCH=FIRST, ORD=ANY, Search=Body, RETAINPREVALUE="YES", EncodeMode=None);
//nsl_search_var(search2, PAGE=*, LB="PostCode", RB="UK", SaveOffset=0, LBMATCH=FIRST, ORD=ANY, Search=Body, RETAINPREVALUE="YES", EncodeMode=None);
