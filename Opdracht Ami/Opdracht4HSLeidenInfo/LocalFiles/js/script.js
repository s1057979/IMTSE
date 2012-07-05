// Main entry of code
$(document).ready(function() {

	// Hide the header
	$("#header").hide();
	
	// Show the splash
	showSplash(2500);
	

	// ## Event handlers onclick ##
	//
	// Menu home button
	//
	$("#menu_item_h").live("click", function() 
	{	
		$("#content").fadeOut(400, function() 
		{
			$.ajax({
				  url: "home.html",
				  dataType: "html",
				  success: function(data) 
				  {
					  // Load the html data in the content div
					  $('#content').html(data).delay(400).fadeIn(400);
					  
					  // Set the menu item selection
					  $("#menu_item_p").css("background", "transparent");
					  $("#menu_item_s").css("background", "transparent");
					  $("#menu_item_m").css("background", "transparent");
					  $("#menu_item_sa").css("background", "transparent");
					  $("#menu_item_h").css("background", "#FFFFFF");
				  }
				});
			});
	});
	//
	// Menu propedeuse button
	//
	$("#menu_item_p").live("click", function() 
	{
		$("#content").fadeOut(400, function() 
		{		
			$.ajax({
				  url: "menus/menu_p.html",
				  dataType: "html",
				  success: function(data) 
				  {
					  // Load the html data in the content div
					  $('#content').html(data).delay(400).fadeIn(400);
					  
					  // Set the menu item selection
					  $("#menu_item_p").css("background", "#FFFFFF");
					  $("#menu_item_s").css("background", "transparent");
					  $("#menu_item_m").css("background", "transparent");
					  $("#menu_item_sa").css("background", "transparent");
					  $("#menu_item_h").css("background", "transparent");
				  }
				});
		});
	});
	//
	// Menu studierichting button
	$("#menu_item_s").live("click", function() 
	{	
		$("#content").fadeOut(400, function() 
		{		  
			$.ajax({
				  url: "menus/menu_s.html",
				  dataType: "html",
				  success: function(data) 
				  {  
					  	// Load the html data in the content div
					  	$('#content').html(data).delay(400).fadeIn(400);
					  	
					  	// Set the menu item selection
				  		$("#menu_item_s").css("background", "#FFFFFF");
				  		$("#menu_item_p").css("background", "transparent");
				  		$("#menu_item_m").css("background", "transparent");
				  		$("#menu_item_sa").css("background", "transparent");
				  		$("#menu_item_h").css("background", "transparent");
				  }
				});
		 });
	});
	//
	// Menu minor button
	//
	$("#menu_item_m").live("click", function() 
	{	
		$("#content").fadeOut(400, function() 
		{	
			$.ajax({
				  url: "menus/menu_m.html",
				  dataType: "html",
				  success: function(data) 
				  {  
					  	// Load the html data in the content div
					  	$('#content').html(data).delay(400).fadeIn(400);
					  	
					  	// Set the menu item selection
					  	$("#menu_item_m").css("background", "#FFFFFF");
						$("#menu_item_s").css("background", "transparent");
				  		$("#menu_item_p").css("background", "transparent");
				  		$("#menu_item_sa").css("background", "transparent");
				  		$("#menu_item_h").css("background", "transparent");
				  }
				});
		  });
	});
	//
	// Menu stage en afstuderen button
	//
	$("#menu_item_sa").live("click", function() 
	{
		$("#content").fadeOut(400, function() 
		{
			$.ajax({
				  url: "menus/menu_sa.html",
				  dataType: "html",
				  success: function(data) 
				  {  
					  	// Load the html data in the content div
					  	$('#content').html(data).delay(400).fadeIn(400);
					  	
						// Set the menu item selection
				  		$("#menu_item_sa").css("background", "#FFFFFF");
				  		$("#menu_item_s").css("background", "transparent");
				  		$("#menu_item_m").css("background", "transparent");
				  		$("#menu_item_p").css("background", "transparent");
				  		$("#menu_item_h").css("background", "transparent");
				  }
				});
		});
	});
	
	// Show the splash screen
	function showSplash(delay)
	{
		// Open ajax request for the splash.html page
		$.ajax({
			  url: "splash.html",
			  dataType: "html",
			  success: function(data) 
			  {  
				  // Change the container content with effect
				  $('#container').html(data).delay(delay).fadeOut(400, function() {
				  	 // Show the header
					 $("#header").show();
					 
					 // Load the content of the page
					 showContent(1000); 
				  });
			  }
			});
	}

	// Open ajax request for the content.html page
	function showContent(delay)
	{
		$.ajax({
			  url: "content.html",
			  dataType: "html",
			  success: function(data) 
			  {  
				  // After finishing ajax request show the container with effect
				  $('#container').html(data).delay(delay).fadeIn(400, function() {
				  		// Open ajax request for the home page	
					  	$.ajax({
		  						url: "home.html",
		 						dataType: "html",
		  						success: function(data) 
		  						{
		  							// Change the page contents with effect
			  						$('#content').html(data).delay(400).fadeIn(400);
			  						
			  						// Set the correct selected menu item with css
			 						$("#menu_item_p").css("background", "transparent");
			  						$("#menu_item_s").css("background", "transparent");
			  						$("#menu_item_m").css("background", "transparent");
			  						$("#menu_item_sa").css("background", "transparent");
			  						$("#menu_item_h").css("background", "#87868e");
		  						}
							});
						
					  	 // Load the menu
						 showMenu(1000);
				  });
			  }
			});
	}

	// Open ajax request for the menu.html
	function showMenu(delay)
	{	
		$.ajax({
			  url: "menu.html",
			  dataType: "html",
			  success: function(data) 
			  {  
				  // Add the menu to the current container HTML with effect
				  $('#container').append(data).delay(1000).fadeIn(400);
				  
				  // Set the first menu item background to selected (white)
				  $("#menu_item_h").css("background", "#FFFFFF");
			  }
			});
	}

});
//End of main entry
