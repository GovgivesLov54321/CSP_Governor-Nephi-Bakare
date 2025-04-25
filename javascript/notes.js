//function hello(){
  //  document.getElementById("title").style.color = "orange"
//}
let images = ["https://static01.nyt.com/athletic/uploads/wp/2023/10/07085025/231007-Nikola-Jokic-scaled-e1696683052376.jpg", "https://kfor.com/wp-content/uploads/sites/3/2022/11/2022-OKC-Mil-SGA.jpg?w=612", "https://img.buzzfeed.com/buzzfeed-static/static/2021-04/26/19/asset/e498764414c5/anigif_sub-buzz-248-1619464041-1.gif", "https://upload.wikimedia.org/wikipedia/commons/1/1e/Jayson_Tatum_%2851839569977%29_%28cropped%29.jpg", "https://cdn.nba.com/teams/uploads/sites/1610612747/2025/04/2425_lal_highlight_thumb_250419_luka_2000.jpg"]

let counter = 0

function change(){
    if (counter < images.length){
        document.getElementById("img").src=images[counter] 
        counter +=1
    }
    else{
        counter=0
        document.getElementById("img").src=images[counter]
    }
}

//function hello(){
//    document.getElementById("title").innerHTML = "Hello World!"
//}

function hello(){
    let name = window.prompt("What is your name? ", "Enter text here")
    document.getElementById("title").innerHTML = "Hello, " + name + "!"
}



function hover(){
    document.getElementById("img").src = "https://cdn.britannica.com/07/5207-050-5BC9F251/Gray-wolf.jpg"
}

function leave(){
    document.getElementById("img").src = "https://www.pbs.org/wnet/nature/files/2014/10/HoneyBadger-Main-e1415392112925-1280x720.jpg"
}

function show(){
    document.getElementById("lost").style.display = "block"
}
//You cannot unhide this by calling it on the image. You have to attach it somewhere else.
function pop(){
    window.alert("Really, don't click that.")
}