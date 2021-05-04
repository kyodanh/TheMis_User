Action()
{

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p4-msg.chat.zalo.me");

	web_custom_request("p4-msg.chat.zalo.me", 
		"URL=https://p4-msg.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=2300541172619,10,2300062008148,2300190507117,2300203899015,2300204435079,2300205689018,2300331150006,2300331189954,2300539133561,2300540269303,2300541077102&ts=1616576853", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	lr_start_transaction("Trans_BaoCao_kinhDoanh");

	web_add_auto_header("Origin", 
		"https://themis.test.xplat.fpt.com.vn");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"89\", \"Chromium\";v=\"89\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("bao-cao-nhan-vien_3", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-khoan/bao-cao-nhan-vien", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2021\",\"thongTinKyTinh\":\"5\",\"loaiTinh\":\"kinh-doanh\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	web_custom_request("check-eva_2", 
		"URL=https://themis.test.xplat.fpt.com.vn/data-rmis/check-eva", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2020\",\"thongTinKyTinh\":\"\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("2020", 
		"URL=https://themis.test.xplat.fpt.com.vn/thong-tin/ky-tinh-khoan-theo-nam/2020", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p6-ctl.chat.zalo.me");

	web_add_cookie("zpw_sek=L4Nb.117641473.a1.L8DPnz0uZMxHAOvfyJYDRgiQw0No0gy0Yd-r6Q5Q_nV_4zr1ftFTFeD2uLo11R1ChKx84wgOK7NlETLMPcTrLW; DOMAIN=p3-msg.chat.zalo.me");

	web_add_auto_header("Origin", 
		"https://themis.test.xplat.fpt.com.vn");

	web_custom_request("bao-cao-nhan-vien_4", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-khoan/bao-cao-nhan-vien", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2020\",\"thongTinKyTinh\":\"22\",\"loaiTinh\":\"kinh-doanh\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		EXTRARES, 
		"Url=https://p6-ctl.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=256950998275,7,256781839624,256818836124,256818874912,256818875086,256950956129,256950998225,256950998275&ts=1616576921", "Referer=", ENDITEM, 
		"Url=https://p3-msg.chat.zalo.me/?zpw_ver=355&zpw_type=24&params=2300541172619,10,2300062008148,2300190507117,2300203899015,2300204435079,2300205689018,2300331150006,2300331189954,2300539133561,2300540269303,2300541077102&ts=1616576923", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Trans_BaoCao_kinhDoanh",LR_AUTO);

	lr_start_transaction("Trans_BaoCao_SanXuat");

	web_custom_request("bao-cao-nhan-vien_5", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-khoan/bao-cao-nhan-vien", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2020\",\"thongTinKyTinh\":\"22\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("2021", 
		"URL=https://themis.test.xplat.fpt.com.vn/thong-tin/ky-tinh-khoan-theo-nam/2021", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://themis.test.xplat.fpt.com.vn");

	web_custom_request("check-eva_3", 
		"URL=https://themis.test.xplat.fpt.com.vn/data-rmis/check-eva", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2021\",\"thongTinKyTinh\":\"\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	web_custom_request("bao-cao-nhan-vien_6", 
		"URL=https://themis.test.xplat.fpt.com.vn/bao-cao-khoan/bao-cao-nhan-vien", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://themis.test.xplat.fpt.com.vn/bao-cao-nhan-vien", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body={\"searchString\":\"\",\"limit\":10,\"pageNum\":1,\"advance\":{\"thongTinNam\":\"2021\",\"thongTinKyTinh\":\"5\",\"loaiTinh\":\"san-xuat\",\"sort\":{\"sortSanXuat\":[],\"sortKinhDoanhNT\":[],\"sortKinhDoanhNN\":[]}}}", 
		LAST);

	lr_end_transaction("Trans_BaoCao_SanXuat",LR_AUTO);

	return 0;
}
