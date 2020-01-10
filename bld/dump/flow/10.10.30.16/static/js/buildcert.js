/*
Author : Ranjeet Kumar
purpose: Call AJAX and Written Some JavaScript and Jquery for Certified build
*/

//start resetbuildentry function
function resetbuildentry(){
  if (document.getElementById('buildname').value != 'null' ){
      document.getElementById('buildname').value = ''
      document.getElementById('releasename').value = '4.1.12'
      $('input:checkbox').removeAttr('checked');
  }
}
//End reset function


// Start save build certified function
function savebuildcert(){
      var buildname = $("#buildname").val();
      var releasename = $('#releasename').val();
      var ostype = $('#ostype').val();
      var nsbuild = document.getElementById('ns_build').checked;
      var ndbuild = document.getElementById('nd_build').checked;
      var nobuild = document.getElementById('no_build').checked;
      var nvbuild = document.getElementById('nv_build').checked;
      var monbuild = document.getElementById('mon_build').checked;
      var dsbuild = document.getElementById('dbs_build').checked;
      console.log("buildname:"+buildname);
      console.log("releasename:"+releasename);
      console.log("nsbuild :"+nsbuild+" ndbuild :"+ndbuild+ " nobuild :"+nobuild+ " nvbuild :"+nvbuild+ " monbuild : "+monbuild + " dsbuild :"+dsbuild + " ostype :"+ostype);

      if ( buildname == ""){
           $.notify("Please Enter Build name", "error" , {autoHideDelay: 2000});
           console.log("Please Enter Build name");
      }else if ( nsbuild == false && ndbuild == false && nobuild == false && nvbuild == false && monbuild == false && dsbuild == false ) {
           $.notify("Certify build Atleast from One Product", "error");
           console.log("Certify build Atleast from One Product");
      }else{
           var url = '/build/addbuild?buildname='+buildname+'&releasename='+releasename+'&nsbuild='+nsbuild+'&ndbuild='+ndbuild+'&nobuild='+nobuild+'&nvbuild='+nvbuild+'&monbuild='+monbuild+'&dsbuild='+dsbuild+'&ostype='+ostype;
           $.notify("Going to Add Build for Certify", "info" ,  {autoHideDelay: 500});

                $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data)
                            if (data != 'null' ){
                            $.notify(data,  "success", {autoHideDelay: 5000});
                            }else{
                            $.notify("Refresh Page. Try Again!!!",  "error");
                            }
                            document.getElementById('buildname').value = ''
                            document.getElementById('releasename').value = '4.1.12'
                            $('input:checkbox').removeAttr('checked');
                            },
                error: function() {
                                $.notify("Unexpected Error!! Contact to Admin", "error" , {autoHideDelay: 5000});
                            }
                });

            }
}

// End Build Certified function

//Start Build Update function 

function updateBuildCert(){
      var buildname = $("#buildname_update").val();
      var releasename = $('#releasename_update').val();
      var ostype = $('#ostype_update').val();
      var nsbuild = document.getElementById('ns_build_update').checked;
      var ndbuild = document.getElementById('nd_build_update').checked;
      var nobuild = document.getElementById('no_build_update').checked;
      var nvbuild = document.getElementById('nv_build_update').checked;
      var monbuild = document.getElementById('mon_build_update').checked;
      var dsbuild = document.getElementById('dbs_build_update').checked;
      console.log("build vname:"+buildname);
      console.log("releasename:"+releasename);
      console.log("nsbuild :"+nsbuild+" ndbuild :"+ndbuild+ " nobuild :"+nobuild+ " nvbuild :"+nvbuild+ " monbuild : "+monbuild + " dsbuild :"+dsbuild + " ostype :"+ostype);
     
       if ( buildname == ""){
           $.notify("Please Enter Build name", "error" , {autoHideDelay: 2000});
           console.log("Please Enter Build name");
      }else if ( nsbuild == false && ndbuild == false && nobuild == false && nvbuild == false && monbuild == false && dsbuild == false ) {
           $.notify("Certify build Atleast from One Product", "error");
           console.log("Certify build Atleast from One Product");
      }else{
           var url = '/build/updateBuild?buildname='+buildname+'&releasename='+releasename+'&nsbuild='+nsbuild+'&ndbuild='+ndbuild+'&nobuild='+nobuild+'&nvbuild='+nvbuild+'&monbuild='+monbuild+'&dsbuild='+dsbuild+'&ostype='+ostype;
           $.notify("Going to Add Build for Certify", "info" ,  {autoHideDelay: 500});

                $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data)
                            if (data != 'null' ){
                            $.notify(data,  "success", {autoHideDelay: 5000});
                            }else{
                            $.notify("Refresh Page. Try Again!!!",  "error");
                            }
                            document.getElementById('buildname').value = ''
                            document.getElementById('releasename').value = '4.1.12'
                            $('input:checkbox').removeAttr('checked');
                            },
                error: function() {
                                $.notify("Unexpected Error!! Contact to Admin", "error" , {autoHideDelay: 5000});
                            }
                });

            }

}

//End Build Update function 

// Satrt delete cert build
function deleteBuild(){

      var values = new Array();
      $.each($("input[id='checkbox9']:checked").closest("td").siblings("td:nth-child(2)"),
              function () {
                   values.push($(this).text());
              });
             var value1 = values.join (",");
             console.log("Delete Build =="+value1);
             if ( value1 == "" ) {
                $.notify("Select At Least One build", "error");
                console.log("Select At Least One build");
              }else{
                var url = '/build/delBuild?value1='+value1;
                $.notify("Going to delete build", "info");
                $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data)
                            if ( data == "0"){
                            $.notify("Selected Build Deleted Successfully, Please refresh page",  "success");
                            }else if( data == "2") {
                            $.notify("Specified Build not matched in Database", "warn");
                            }else{
                            $.notify("Refresh Page. Try Again!!!",  "error");
                            }
                            $('input#checkbox9').attr('checked', false);
                            },
                error: function() {
                                $.notify("Unexpected Error!! Contact to Admin", "error" , {autoHideDelay: 5000});
                            }
                });

            }
 }

// function to get build Info on update button click 

function getBuildinfoToUpdate(){
var values = new Array();
      console.log("get build info called");
      $.each($("input[id='checkbox9']:checked").closest("td").siblings("td:nth-child(2)"),
              function () {
                   values.push($(this).text());
              });
             var value1 = values[0];
             console.log("Delete Build =="+value1);
             if ( values.length == 0 ) {
                $.notify("Select At Least One build to update", "error");
                console.log("Select At Least One build");
              }
             else if ( values.length > 1){
                $.notify("Select only One build to update", "error");
                console.log("Select At Least One build");
              }else{
                var url = '/build/getBuildInfo?buildname='+value1;
                resetbuildentry();
                $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data);
                            if (data.dsbuild == "true"){
                                $("#dbs_build_update").prop("checked", true);
                                }
                            if (data.monbuild == "true"){
                                $("#mon_build_update").prop("checked", true);
                                } 
                            if (data.ndbuild == "true"){
                                $("#nd_build_update").prop("checked", true);
                                }
                            if (data.nobuild == "true"){
                                $("#no_build_update").prop("checked", true);
                                } 
                            if (data.nsbuild == "true"){
                                $("#ns_build_update").prop("checked", true);
                                } 
                            if (data.nvbuild == "true"){
                                $("#nv_build_update").prop("checked", true);
                                }
                            document.getElementById("ostype_update").value = data.ostype  
                            document.getElementById("releasename_update").value = data.release
                            document.getElementById("buildname_update").value = data.bname
                            }
                         
                });
                $('#updaterecord').modal('show');
              } 
}

// End Build Info update function      
