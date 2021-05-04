/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("adfs=1; DOMAIN=themis.test.xplat.fpt.com.vn");

	web_add_cookie("sstk=630f2d6e-218a-46dc-a908-2fcb75c1b132-1616576349604; DOMAIN=themis.test.xplat.fpt.com.vn");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_cookie("921003f142e7cfc42fd106350b5b3d9e=6ef5a8f4485d2a17e81198c877602733; DOMAIN=themis.test.xplat.fpt.com.vn");

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p4-ctl.chat.zalo.me");

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p5-msg.chat.zalo.me");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"89\", \"Chromium\";v=\"89\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("dang-nhap-test-perf", 
		"URL=https://themis.test.xplat.fpt.com.vn/dang-nhap-test-perf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/new/webfonts/fa-solid-900.woff2", "Referer=https://themis.test.xplat.fpt.com.vn/assets/new/css/all.css", ENDITEM, 
		"Url=/assets/new/image/background.jpg", "Referer=https://themis.test.xplat.fpt.com.vn/assets/new/css/newstyle/login.css", ENDITEM, 
		"Url=/assets/image/avatar.jpg", "Referer=https://themis.test.xplat.fpt.com.vn/assets/new/css/common.css", ENDITEM, 
		"Url=https://p4-ctl.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=256950998275,7,256781839624,256818836124,256818874912,256818875086,256950956129,256950998225,256950998275&ts=1616576781", "Referer=", ENDITEM, 
		"Url=https://p5-msg.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=2300541172619,10,2300062008148,2300190507117,2300203899015,2300204435079,2300205689018,2300331150006,2300331189954,2300539133561,2300540269303,2300541077102&ts=1616576783", "Referer=", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("login ");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://themis.test.xplat.fpt.com.vn");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("dang-nhap-demo", 
		"URL=https://themis.test.xplat.fpt.com.vn/dang-nhap-demo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/dang-nhap-test-perf", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"access_token\"", 
		LAST);

	web_add_cookie("sstk=e597761b-2627-4144-bf14-dad3b8436fd2-1616576883591; DOMAIN=themis.test.xplat.fpt.com.vn");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("bao-cao-nhan-vien", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://themis.test.xplat.fpt.com.vn/dang-nhap-test-perf", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/new/image/topBannerBackground.png", ENDITEM, 
		"Url=/assets/new/webfonts/fa-solid-900.woff2", "Referer=https://themis.test.xplat.fpt.com.vn/assets/new/css/all.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://themis.test.xplat.fpt.com.vn");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bao-cao-nhan-vien_2", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-khoan/bao-cao-nhan-vien", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2021\",\"thongTinKyTinh\":\"5\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p3-ctl.chat.zalo.me");

	web_custom_request("check-eva", 
		"URL=https://themis.test.xplat.fpt.com.vn/data-rmis/check-eva", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2021\",\"thongTinKyTinh\":\"\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		EXTRARES, 
		"Url=https://p3-ctl.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=256950998275,7,256781839624,256818836124,256818874912,256818875086,256950956129,256950998225,256950998275&ts=1616576851", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("login ",LR_AUTO);

	return 0;
}
