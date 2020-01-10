nsl_static_var(InstanceName:1, DBName:2, ProjectID:3, File=SpannerDetails.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All, CopyFileToTR=NO);
nsl_static_var(SQLQuery:1, File=SQLQuery.seq, Refresh=SESSION, Mode=SEQUENTIAL, ColumnDelimiter=;, EncodeMode=All,CopyFileToTR=NO);
//nsl_unique_number_var(Tran, Format=%08lu, Refresh=SESSION);
//nsl_static_var(SQLQuery:1, File=SQLQuery.seq, Refresh=SESSION, Mode=RANDOM, ColumnDelimiter=;, EncodeMode=All,CopyFileToTR=NO);
nsl_static_var(SQLFields:1, File=SQLFields.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=None);
