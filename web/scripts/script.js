window.onload = function(){

    var sections = document.querySelectorAll(".section");

    var container = document.getElementById("jumper");
    for(var i=0; i<sections.length; i++){
        var section = sections[i];
        var containerEl = document.createElement('li');

        var el = document.createElement("a");
        el.innerText = section.innerText;
        el.href="#" + section.id;

        containerEl.appendChild(el);

        container.appendChild(containerEl);
    }

}