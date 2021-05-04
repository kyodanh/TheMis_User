vuser_end()
{

	web_add_cookie("MSISIPSelectionPersistent=QUQgQVVUSE9SSVRZ; DOMAIN=adfs.fpt.com.vn");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"89\", \"Chromium\";v=\"89\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(5);

	web_url("dang-xuat", 
		"URL=https://themis.test.xplat.fpt.com.vn/dang-xuat", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://themis.test.xplat.fpt.com.vn/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}