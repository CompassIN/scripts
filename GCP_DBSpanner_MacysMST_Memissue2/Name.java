
package com.cavisson.scripts.GCP_DBSpanner_MacysMST_Memissue2;

import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * @author satya.tripathy
 *
 */
public class Name {
	
	@JsonProperty("FirstName")
	private String FirstName;
	
	@JsonProperty("LastName")
	private String LastName;
	
	public String getFirstName() {
		return FirstName;
	}
	public void setFirstName(String FirstName) {
		this.FirstName = FirstName;
	}
	public String getLastName() {
		return LastName;
	}
	public void setLastName(String LastName) {
		this.LastName = LastName;
	}
	
	

}

