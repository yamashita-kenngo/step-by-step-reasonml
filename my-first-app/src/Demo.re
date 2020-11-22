type decision = 
  | Yes
  | No
  | Maybe;
let decision = Maybe;

let resonse =
  switch(decision) {
   | Yes => "Yes!"
   | No => "I'm afraid not."
  };

Js.log("response");

[@bs.val] [@bs.scope "document"]
external createElement : string => Dom.element = "";

[@bs.set] external setInnerText : (Dom.element, string) => unit = "innerText";

[@bs.val] [@bs.scope "document.body"]
external appendChild : Dom.element => Dom.element = "";

let div = createElement("div");
setInnerText(div, Greeting.greeting("world"));
appendChild(div);