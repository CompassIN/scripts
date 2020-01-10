package com.cavisson.scripts.GCP_DBSpanner_MacysMST_Memissue2;

import java.io.FileInputStream;
import java.util.ArrayList;

import com.fasterxml.jackson.core.JsonGenerationException;
import com.fasterxml.jackson.databind.JsonMappingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.google.auth.oauth2.GoogleCredentials;
import com.google.cloud.spanner.DatabaseClient;
import com.google.cloud.spanner.DatabaseId;
import com.google.cloud.spanner.ResultSet;
import com.google.cloud.spanner.Spanner;
import com.google.cloud.spanner.SpannerOptions;
import com.google.cloud.spanner.Statement;
import com.google.cloud.spanner.TransactionContext;
import com.google.cloud.spanner.TransactionRunner.TransactionCallable;

public class NSSpannerEngine{
	
	//NSApi nsApi;
	DatabaseClient dbClient = null;
	Spanner spanner = null;
	final String PATH_TO_JSON_KEY = "/home/cavisson/CD_automation/scripts/default/default/GCP_DBSpanner_MacysMST_Memissue2/cloudspanner-key.json"; 
	long rc = -1;
	private ArrayList<String> alForQueryResults;
	
	 ObjectMapper mapper = new ObjectMapper();
	 
//	public NSSpannerEngine(NSApi nsApi){
//		this.nsApi = nsApi;
//	}
	
	 String   run(DatabaseClient dbClient,String command,String queryS) {
		switch (command) {
		case "selectQuery":
			return selectQuery(dbClient,queryS);
		case "selectQueryForObject":
			this.alForQueryResults = selectQueryForObject(dbClient, queryS);
			return "Success";
		case "insertQuery":
			return insertUsingDml(dbClient,queryS);
		case "updateQuery":
			return updateUsingDml(dbClient,queryS);
		case "deleteQuery":
			return deleteUsingDml(dbClient,queryS);
		default:
			printUsageAndExit();
			return "Usage Error.";
		}
	}
	
	 
	// Added for Json String to Student Object Conversion//
		public ArrayList<String> selectQueryForObject(DatabaseClient dbClient,String queryStr) {
			
			StringBuilder result = new StringBuilder();
			ArrayList<String> aL = new ArrayList<String>();
			ResultSet resultSet = dbClient.singleUse().executeQuery(Statement.of(queryStr));
			while (resultSet.next()) 
			{
				result.append('\n');
				result.append(resultSet.getString(0));
				//get the conversion done here
				String v = resultSet.getString(0);
				
				//add in arrayList
				aL.add(v);
				
			}
			return aL;//return the arrayList;
		}
		
		public void spanner_jsonToJavaObj()
		{
			try
			{
				System.out.println("Object conversion called for"  + alForQueryResults.toString() + 
						"size : "  + alForQueryResults.size());
				alForQueryResults.forEach(currVal -> jsonToObject(currVal));
			}
			catch(Exception e)
			{
				
			}
		}
		
		private  Object jsonToObject(String jsonString)
		{
			Object Obj  = null;
			
			try
			{
				
				 Obj = mapper.readValue(jsonString,Object.class);
				 
				 
				 System.out.println("Object conversion completed " + jsonString);
				 System.out.println("Object :" +  Obj.toString() );
				
			} catch (JsonGenerationException e) {
				System.out.println("Invalid Format : " + jsonString);
				//e.printStackTrace();
			} catch (JsonMappingException e) {
				System.out.println("Invalid Format : " + jsonString);
				//e.printStackTrace();
			} 
			finally{
				return Obj;
			}
		}
		
		
		
		
	 void printUsageAndExit() {
		System.err.println("Usage:");
		System.err.println("    SpannerExample <command> <instance_id> <database_id>");
		System.err.println("");
		System.err.println("Examples:");
		System.err.println("    SpannerExample selectQuery my-instance example-db");
		System.err.println("    SpannerExample insertQuery my-instance example-db");
		System.err.println("    SpannerExample updateQuery my-instance example-db");
		System.err.println("    SpannerExample deleteQuery my-instance example-db");
	}
	
	String insertUsingDml(DatabaseClient dbClient, String queryS) {
		rc = -1;
		dbClient.readWriteTransaction().run(new TransactionCallable<Void>() {
		public Void run(TransactionContext transaction) throws Exception {
		String sql = queryS;
		long rowCount = transaction.executeUpdate(Statement.of(sql));
		rc = rowCount;
		return null ;
		}});
		return rc + " record(s) inserted successfully." ;
	}
		
	String updateUsingDml(DatabaseClient dbClient,String query) {
		rc = -1;
		dbClient.readWriteTransaction().run(new TransactionCallable<Void>() {
		@Override
		public Void run(TransactionContext transaction) throws Exception {
		String sql = query;
		long rowCount = transaction.executeUpdate(Statement.of(sql));
		rc = rowCount;
		return null;
		}});
		return rc + "record(s) updated successfully";
	}

	String deleteUsingDml(DatabaseClient dbClient,String queryS) {
		rc = -1;
		dbClient.readWriteTransaction().run(new TransactionCallable<Void>() {
		@Override
		public Void run(TransactionContext transaction) throws Exception {
		String sql = queryS;
		long rowCount = transaction.executeUpdate(Statement.of(sql));
		rc = rowCount;
		return null;
		}});
		return rc + " record(s) deleted successfully"; 
	}

	public String selectQuery(DatabaseClient dbClient,String queryStr) {
		StringBuilder result = new StringBuilder();
		ResultSet resultSet = dbClient.singleUse().executeQuery(Statement.of(queryStr));
		while (resultSet.next()) 
		{
			result.append('\n');
			result.append(resultSet.getString(0));
			//result.append('|');
			//result.append(resultSet.getLong(0));
		}
		return result.toString();
	}
	
	
	
	/**
	 * This method is used for creating connection with google cloud spanner and return the databaseclient of googleSpanner
	 * @param args
	 * @return
	 */
	public DatabaseClient spanner_ns_db_getDBClient(String[] args) 
	{
		try
		{
			System.out.println("ons");
			if (args.length != 4) {
				printUsageAndExit();
			}

			//step-1 : create intial config and fetch options instance from authentication and provided projectID
			SpannerOptions options = SpannerOptions.newBuilder().setProjectId(args[3]).setCredentials(GoogleCredentials.fromStream( new FileInputStream(PATH_TO_JSON_KEY))).build();
			
			//Step-2 : get the spanner instance from options service provider
			this.spanner = options.getService();
			
			//step-3 : get the spanner db id instance using project id, dbinstance name
			DatabaseId db = DatabaseId.of(options.getProjectId(), args[1], args[2]);
				

			//step-4 : fetch the clinet project name and validate with databaseid instance containing projectid
			String clientProject = spanner.getOptions().getProjectId();
			if (!db.getInstanceId().getProject().equals(clientProject)) {
					System.err.println("Invalid project specified. Project in the database id should match"
							+ "the project name set in the environment variable GCLOUD_PROJECT. Expected: "
							+ clientProject);
					printUsageAndExit();
			}

			
			//DatabaseClient dbClient = spanner.getDatabaseClient(db);

			//step-5 : use spanner instance and dbid and find dbclient
			return  spanner.getDatabaseClient(db);
			
			//return run(dbClient, dbAdminClient, command, db,null,queries);
		}catch(Exception e)
		{
			e.printStackTrace();
		}
		
		return null;
	}
	
	public  String spanner_ns_db_operations(String queryStr, String[] args) 
	{
		try
		{
		  if(null == this.dbClient)
			 return " Unable to make the connection and error occured while instantiating DatabaseClient.";
				
			return run(this.dbClient, args[0],queryStr);
		}catch(Exception e)
		{
			e.printStackTrace();
		}
				
		return "Exception occured";
	}
	
	
	
	
	public void intiateDBClient(String[] args)
	{
		this.dbClient = spanner_ns_db_getDBClient(args);
	}
	
	public void closeConnection()
	{
		 this.spanner.close();
		 this.dbClient = null;
		 this.spanner = null;
		 this.alForQueryResults = null;
		 System.gc();
	}
	
	public void spanner_jsonSize() 
	{
		if(null == this.alForQueryResults)
		{
			System.out.println("The size of result json is 0.");
			return;
		}
		System.out.println("Size of json "+ this.alForQueryResults.size());
		
	}
}

