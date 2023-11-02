window.onload = function()
{
    test();
}






function drawButton()
{

}





function test() 
{
    

    let allTables = document.getElementsByTagName("table");
    for( let table of allTables)
    {
        let thead = table.getElementsByTagName("thead");
        if(table.querySelector("thead") == null)
        {
            let thead = document.createElement("thead");
            table.insertAdjacentElement("afterbegin", thead);
        }

        
    }

}