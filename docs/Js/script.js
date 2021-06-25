// ripple animation

$(document).ready(function () {
  var ripple_wrap = $(".ripple-wrap"),
    rippler = $(".ripple"),
    finish = false,
    monitor = function (el) {
      var computed = window.getComputedStyle(el, null),
        borderwidth = parseFloat(
          computed.getPropertyValue("border-left-width")
        );
      if (!finish && borderwidth >= 1500) {
        el.style.WebkitAnimationPlayState = "paused";
        el.style.animationPlayState = "paused";
        swapContent1();
      }
      if (finish) {
        el.style.WebkitAnimationPlayState = "running";
        el.style.animationPlayState = "running";
        return;
      } else {
        window.requestAnimationFrame(function () {
          monitor(el);
        });
      }
    };

  storedcontent = $("#page-2").html();
  $("#page-2").remove();

  rippler.bind(
    "webkitAnimationEnd oAnimationEnd msAnimationEnd mozAnimationEnd animationend",
    function (e) {
      ripple_wrap.removeClass("goripple");
    }
  );

  $("body").on("click", ".anchor", function (e) {
    rippler.css("left", e.clientX + "px");
    rippler.css("top", e.clientY + "px");
    e.preventDefault();
    finish = false;
    ripple_wrap.addClass("goripple");
    window.requestAnimationFrame(function () {
      monitor(rippler[0]);
    });
  });

  function swapContent1() {
    var newcontent = $("#main-page").html();
    $("#main-page").html(storedcontent);
    storedcontent = newcontent;
    setTimeout(function () {
      finish = true;
    }, 10);
  }
});

// ripple animation

$(document).ready(function () {
  var ripple_wrap = $(".ripple-wrap"),
    rippler = $(".ripple"),
    finish = false,
    monitor = function (el) {
      var computed = window.getComputedStyle(el, null),
        borderwidth = parseFloat(
          computed.getPropertyValue("border-left-width")
        );
      if (!finish && borderwidth >= 1500) {
        el.style.WebkitAnimationPlayState = "paused";
        el.style.animationPlayState = "paused";
        swapContent2();
      }
      if (finish) {
        el.style.WebkitAnimationPlayState = "running";
        el.style.animationPlayState = "running";
        return;
      } else {
        window.requestAnimationFrame(function () {
          monitor(el);
        });
      }
    };

  storedcontent2 = $("#Conditionals").html();
  $("#Conditionals").remove();

  rippler.bind(
    "webkitAnimationEnd oAnimationEnd msAnimationEnd mozAnimationEnd animationend",
    function (e) {
      ripple_wrap.removeClass("goripple");
    }
  );

  $("body").on("click", ".anchor-2", function (e) {
    rippler.css("left", e.clientX + "px");
    rippler.css("top", e.clientY + "px");
    e.preventDefault();
    finish = false;
    ripple_wrap.addClass("goripple");
    window.requestAnimationFrame(function () {
      monitor(rippler[0]);
    });
  });

  function swapContent2() {
    var newcontent2 = $("#main-page").html();
    $("#main-page").html(storedcontent2);
    storedcontent2 = newcontent2;
    setTimeout(function () {
      finish = true;
    }, 10);
  }
});

// aos animation

AOS.init({
  duration: "1500",
});
