window.onload = function()
{
    let prepinac = document.getElementById("prepinac");
    prepinac.onclick = prepni;
}

function prepni() 
{
    if(prepinac.getAttribute("src") == "Pics/prepinac0.png")
    {
        prepinac.src = "Pics/prepinac1.png";
    }
    else 
    {
        prepinac.src = "Pics/prepinac0.png";
    }
}


let platno = document.getElementById("platno");
let kontext = platno.getContext("2d");
kontext.fillRect( 50, 50, 100, 100 );
kontext.strokeRect( 200, 50, 100, 100 );


