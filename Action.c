Action()
{

	web_reg_save_param_ex(
		"ParamName=login",
		"LB=userSession value=",
		"RB=>\n",
		SEARCH_FILTERS,
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/WebTours/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?in=home", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={login}", ENDITEM, 
		"Name=username", "Value=wyx", ENDITEM, 
		"Name=password", "Value=wyx123456", ENDITEM, 
		"Name=login.x", "Value=61", ENDITEM, 
		"Name=login.y", "Value=14", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?page=menu&in=home", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=FormDateUpdate.class", "Referer=http://127.0.0.1:1080/WebTours/reservations.pl?page=welcome", ENDITEM, 
		LAST);

	web_reg_find("Text=Flight Selections", 
		LAST);

	lr_think_time(8);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/reservations.pl?page=welcome", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={departure}", ENDITEM, 
		"Name=departDate", "Value=12/25/2017", ENDITEM, 
		"Name=arrive", "Value={arrive}", ENDITEM, 
		"Name=returnDate", "Value=12/26/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=35", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	web_reg_find("Text=Flight Reservation", 
		LAST);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=020;338;12/15/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=35", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	web_reg_find("Text=Reservation Made!", 
		LAST);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=w", ENDITEM, 
		"Name=lastName", "Value=yx", ENDITEM, 
		"Name=address1", "Value=cqupt", ENDITEM, 
		"Name=address2", "Value=cd", ENDITEM, 
		"Name=pass1", "Value=w yx", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=020;338;12/15/2017", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=86", ENDITEM, 
		"Name=buyFlights.y", "Value=15", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_url("Itinerary Button", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?page=menu&in=flights", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Flights List", 
		LAST);

	web_submit_data("itinerary.pl", 
		"Action=http://127.0.0.1:1080/WebTours/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/itinerary.pl", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value=753-795-wy", ENDITEM, 
		"Name=removeFlights.x", "Value=19", ENDITEM, 
		"Name=removeFlights.y", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		LAST);

	return 0;
}