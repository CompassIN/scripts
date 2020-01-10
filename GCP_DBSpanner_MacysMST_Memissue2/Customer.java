
package com.cavisson.scripts.GCP_DBSpanner_MacysMST_Memissue2;

import com.fasterxml.jackson.annotation.JsonProperty;

public class Customer {
	
	@JsonProperty("Name")
	private Name Name;

	public Name getName() {
		return Name;
	}

	public void setName(Name name) {
		Name = name;
	}

}

