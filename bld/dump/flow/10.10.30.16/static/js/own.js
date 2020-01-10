/*
Author : Ranjeet Kumar
purpose: Call AJAX and Written Some JavaScript and Jquery for Rest function

*/

function clearMyField() {
    if(document.getElementById('name').value != 'null'  ) {
        document.getElementById('name').value = ''
        document.getElementById('email').value = ''
        document.getElementById('comment').value = ''
    }

}


$(document).ready(function(){
    $('[data-toggle="popover"]').popover({
        placement : 'left',
        trigger : 'hover'
    });
});

// Function to copy click board
function copyToClipboard(elementId) {
                var aux = document.createElement("input");
                aux.setAttribute("value", document.getElementById(elementId).href);
                document.body.appendChild(aux);
                aux.select();
                document.execCommand("copy");
                document.body.removeChild(aux);
                $.notify("Download link has been copied to clipboard!",  "success",{showDuration: 400});
}   //End function


//Start accordion toggle function
$(document).ready(function () {
    $('.accordion-toggle').on('click', function(event){
    	event.preventDefault();
    	// create accordion variables
    	var accordion = $(this);
    	var accordionContent = accordion.next('.accordion-content');

    	// toggle accordion link open class
    	accordion.toggleClass("open");
    	// toggle accordion content
    	accordionContent.slideToggle(250);

    });
});    // End this function

//Start Search function
$(document).ready(function() {
$('#myInput').keyup(function() {
searchTable($(this).val());
   });
 });

function searchTable(inputVal) {
var table = $('.table');
table.find('tr').each(function(index, row) {
var allCells = $(row).find('td');
console.log("all Cells : "+allCells);
   if(allCells.length > 0) {
      var found = false;
         allCells.each(function(index, td) {
         var regExp = new RegExp(inputVal, 'i');
         console.log("regExp : "+regExp)
         if(regExp.test($(td).text())) {
               found = true;
               return false;
         }
         });
         if(found == true) $(row).show();
            else $(row).hide();
    }
   });
}    // End

// Function to select checkbox and store in array

function myfunc(ele) {

 var values = new Array();
       $.each($("input[id='checkbox8']:checked").closest("td").siblings("td:nth-child(5)"),
              function () {
                   values.push($(this).find('div.btn-toolbar div a').attr('href'));
              });
              var value1 = values.join (", ");
              console.log("val---" + value1);
 }

$(document).ready(function(){
    $('[data-toggle="tooltip"]').tooltip();
});


$(document).ready(function() {
    $("input#checkbox8").click(myfunc);
});

// Ajax call to Copy build Server
function copyBuild(){
      var localhost = $("#localhost").val();
      var controller = $('#controller').val();
      console.log("localHost:"+localhost);
      console.log("Controller Name:"+controller)
      var values = new Array();
      $.each($("input[id='checkbox8']:checked").closest("td").siblings("td:nth-child(5)"),
              function () {
                   values.push($(this).find('div.btn-toolbar div a').attr('href'));
              });
             var value1 = values.join (",");
             console.log("new value==="+value1);
            if ( controller == ""){
                   controller = "work";
                   console.log("Controller Name:"+controller)
             }
             if ( localhost == ""){
                $.notify("Local Machine IP field required", "error" , {autoHideDelay: 2000});
                console.log("local Host field required");
              }else if ( value1 == "" ) {
                $.notify("Select At Least One build", "error");
                console.log("Select At Least One build");
              }else{
                var url = '/build/copyBuild?value1='+value1+'&localhost='+localhost+'&controller='+controller;
                $.notify("Going to Copy build on Host IP", "info");
                $('#pbarmain').show()
                $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data)
                            if ( data == "0" ){
			    $('#pbarmain').hide()
                            $.notify("Build Copied Successfully",  "success");
                            }else if( data == "3" ) {
			    $('#pbarmain').hide()
                            $.notify("Wrong Controller Name!!!", "warn");
                            }else{
			    $('#pbarmain').hide()
                            $.notify("Refresh Page. Try Again!!!",  "error");
                            }
                            $('input#checkbox8').attr('checked', false);
                            $('#localhost').val('');
                            $('#controller').val('');
                            },
                error: function() {
			        $('#pbarmain').hide()
                                $.notify("Unexpected Error!! Contact to Admin", "error" , {autoHideDelay: 5000});
                            }
                });

            }

}

// Ajax call for upgrade build
function upgradeBuild(){

   var localhost = $("#localhost").val();
      var controller = $('#controller').val();
      console.log("localHost:"+localhost);
      console.log("Controller Name:"+controller)
      var values = new Array();
       $.each($("input[id='checkbox8']:checked").closest("td").siblings("td:nth-child(5)"),
              function () {
                   values.push($(this).find('div.btn-toolbar div a').attr('href'));
       });
       var value1 = values.join (",");
       console.log("new value==="+value1);
       $.notify("It is an Implementation Phase", "error" , {autoHideDelay: 5000});
}



// Ajax Call to Send Query
function sendbuildHubQuery(){
      var sendername = $("#name").val();
      var sendermail = $('#email').val();
      var sendermessage = document.getElementById('comment').value;
      console.log("senderName:"+sendername);
      console.log("SenderMail:"+sendermail);
      console.log("SenderMessage:"+sendermessage);


      if ( sendername == ""){
                //console.log("sendername"+sendername)
                $.notify("Please Mention Your Name to Send Query", "error" , {autoHideDelay: 2000});
      }
      else if ( sendermail == ""){
                $.notify("Please Mention your Mail Address", "error" , {autoHideDelay: 2000});

      }else if (sendermessage  == "" ) {
                $.notify("Write Some Query", "error" , {autoHideDelay: 2000});
      }else{
             var url = '/sendquery?sendername='+sendername+'&sendermail='+sendermail+'&sendermessage='+sendermessage;
             //console.log("url:"+url);
             $.notify("Going to Send Query", "info" , {autoHideDelay: 2000})
             $.ajax({
                type: 'POST',
                url: url,
                success: function(data) {
                            console.log(data)
                            var obj = $.parseJSON(data);
                            status = obj['status']
                            name =   obj['name']
                            console.log( status , name)
                            if ( status == "OK" ){
                            $.notify("Build Hub Query Send Successfully "+name+"",  "success",{showDuration: 800});
                            }else if( data == "2" ) {
                            $.notify("Not Able to Send Due to Some error!!!", "warn",{showDuration: 800} );
                            }else{
                            $.notify("Find Some issue. Try Again!!!",  "error" , {showDuration: 800});
                            }

                      },
                error: function() {
                                $.notify("Unexpected Error!! Contact to Admin", "error" , {autoHideDelay: 5000});
                      }
                });
             clearMyField();
      }
}

