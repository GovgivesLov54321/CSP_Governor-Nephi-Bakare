// Denver Nuggets: Nikola Jokic = https://static01.nyt.com/athletic/uploads/wp/2023/10/07085025/231007-Nikola-Jokic-scaled-e1696683052376.jpg
// Milwaukee Bucks: Giannis Antetokounmpo = https://img.buzzfeed.com/buzzfeed-static/static/2021-04/26/19/asset/e498764414c5/anigif_sub-buzz-248-1619464041-1.gif
// Boston Celtics: Jayson Tatum = https://upload.wikimedia.org/wikipedia/commons/1/1e/Jayson_Tatum_%2851839569977%29_%28cropped%29.jpg
// Oklahoma City Thunder: Shai Gilgeous-Alexander = https://kfor.com/wp-content/uploads/sites/3/2022/11/2022-OKC-Mil-SGA.jpg?w=612
// Los Angeles Lakers: Luka Doncic = https://cdn.nba.com/teams/uploads/sites/1610612747/2025/04/2425_lal_highlight_thumb_250419_luka_2000.jpg
let photograph = ["https://static01.nyt.com/athletic/uploads/wp/2023/10/07085025/231007-Nikola-Jokic-scaled-e1696683052376.jpg", "https://kfor.com/wp-content/uploads/sites/3/2022/11/2022-OKC-Mil-SGA.jpg?w=612", "https://img.buzzfeed.com/buzzfeed-static/static/2021-04/26/19/asset/e498764414c5/anigif_sub-buzz-248-1619464041-1.gif", "https://upload.wikimedia.org/wikipedia/commons/1/1e/Jayson_Tatum_%2851839569977%29_%28cropped%29.jpg", "https://cdn.nba.com/teams/uploads/sites/1610612747/2025/04/2425_lal_highlight_thumb_250419_luka_2000.jpg"]


let counter = 0

function change(){
    if (counter < photograph.length){
        document.getElementById("photograph").src=photograph[counter] 
        counter +=1
    }
    else{
        counter=0
        document.getElementById("photograph").src=photograph[counter]
    }
}
function hover(){
    document.getElementById("photograph").src = "https://cdn.britannica.com/07/5207-050-5BC9F251/Gray-wolf.jpg"
}

function leave(){
    document.getElementById("photograph").src = "https://www.pbs.org/wnet/nature/files/2014/10/HoneyBadger-Main-e1415392112925-1280x720.jpg"
}