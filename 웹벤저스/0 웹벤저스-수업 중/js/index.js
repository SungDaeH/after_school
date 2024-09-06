let my, title;
window.onload=function() {
    
    title=document.querySelector(".title");
    my=document.querySelector(".my");
    title.onclick=function() {
        $(".music").hide();
        my.style.display="block";
        $(".my").animate({"left":"70%"},{duration:500, easing:"easeOutElastic"} );
        $(".myName").delay(500).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
        $(".myTel").delay(1000).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
        $(".myFm").delay(1500).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
        $(".myLi").delay(2000).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
        $(".myPro").delay(2500).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
        $(".myGallery").delay(3000).animate({"left":"250px"},{duration:500, easing:"easeInSine"} );
    }    
    for (i=0; i<5; i++){
        $(".img5 li:eq(" + i + ")").css("background", "url(./img/li" + i + ".jpg")
                                    .css("backgroundSize", "100% 100%")
    }
}
$(function() {
    // $(".music").delay(1000).animate({"display":"block"},500);
    // $(".music").animate({"opacity":"1"}, 1000);
})