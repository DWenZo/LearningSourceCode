// 2017 10 27
function showQRCode()
{
    var cheak = screen.width;
    if (cheak > 500){
        document.getElementById("QRCodeD").style.display="block"; 
    }else
        document.getElementById("QRCodeM").style.display="block"; 
 
}
function hideQRCode()
{
    //并不用判断屏幕大小,防止熊孩子搞乱
    document.getElementById("QRCodeD").style.display="none"; 
    document.getElementById("QRCodeM").style.display="none"; 
}

function confirmInfo() 
{
    var name = document.getElementById("name");
    var email = document.getElementById("email");
    var comment = document.getElementById("commenttext");
    //document.write("test");
    var cheak = confirm("Please confirm your information:\nName:"+name.value+"\nEmail:"+email.value+"\n\nComment:\n"+comment.value);
    if (cheak == 1)
        return true;
    else
        return false;
}
