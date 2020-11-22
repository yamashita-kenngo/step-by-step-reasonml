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
