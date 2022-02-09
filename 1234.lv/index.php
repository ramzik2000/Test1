<!DOCTYPE html>
<html lang="lv">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale = 1.0" />
<link rel="stylesheet" href="styles.css" type="text/css">
<link rel="stylesheet" href="MobileStyles.css" type="text/css">

</head>
<body>
<div class="Summer_pic"></div>
<div class="header">
<logo_pineapple><img src="pic/mini_logo.png"></logo_pineapple>
<pineapple_txt><img src="pic/pineapple.png"></pineapple_txt>
<a href="#"><About_but>About</About_but> </a>
<a href="#"><HowItWorks_but>How it works</HowItWorks_but> </a>
<a href="#"><Contact_but>Contact</Contact_but> </a>
</div>

<div class="left">
<form id="app" method="POST">
<victory></victory>
<img src="pic/Union.png" class="victory"id="Union">
<Subscribe_txt>{{Subscribe}}</Subscribe_txt>
<Subscribe_undertxt>{{secSubscribe}}</Subscribe_undertxt>

<input type="text"class="textfield"name="email"placeholder="Type your email address here..." >
<button type="submit" name="arrow"id="arrow"  class="arrow"style="border: 0; background: transparent">
<img src="pic/send.png" v-on:click="err">

</button>
<upText>{{ExtraTxt}}</upText>
<input type="checkbox"class="checkmark" id="checkbox">
<IAgreeTo_txt>{{agree}} <a href="#">{{underline}}</a></IAgreeTo_txt>
</form>
<FootLine>
<a href="#"><Facebook_but></Facebook_but></a>
<a href="#"><Instagram_but></Instagram_but></a>
<a href="#"><Twitter_but></Twitter_but></a>
<a href="#"><Youtube_but></Youtube_but></a>
</FootLine>
</div>
<script src="https://cdn.jsdelivr.net/npm/vue@2/dist/vue.js"></script>
<script src="js/main.js"></script>



</body>
</html>
