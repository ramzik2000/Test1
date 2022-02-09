var app = new Vue({
    el: '#app',
    data: {
        message: null,
        ExtraTxt: null,
        Subscribe: 'Subscribe to newsletter',
        secSubscribe: 'Subscribe to our newsletter and get 10% discount on pineapple glasses.',
        agree: 'I agree to',
        underline:'terms of the service'
    },
    methods: {

        err: function () {
            var terms = document.getElementById("checkbox");
            var button = document.getElementById("arrow");
            var epasts = document.getElementsByName("email")[0];
            var arr = epasts.value;
            var particija = arr.split('');

            for (i = 0; i < particija.length; i++) {
                var check = false;

                if (particija[i].includes("@")) {
                    check = true;
                    break;
                } 
       

                if (check == false && i == particija.length - 1) {
                    this.ExtraTxt = 'Please provide a valid e-mail address';
                    window.event.returnValue = false;
                }
            }
            if (arr.length == 0) {
                this.ExtraTxt = 'Email address is required';
                window.event.returnValue = false;
            }
            if (arr.substr(-3) == '.co') {
                this.ExtraTxt = 'We are not accepting subscriptions from Colombia emails';
                window.event.returnValue = false;
            }

            if (!terms.checked) {
                this.ExtraTxt = 'You must accept the terms and conditions';
                window.event.returnValue = false;
            }
            if (this.ExtraTxt != null) {
                button.style.visibility = "hidden";
            }
            else
                this.ok();

            epasts.onkeydown = function () {
                var key = event.keyCode || event.charCode;
                if (key)
                    button.style.visibility = "visible";
            };
            terms.onchange = function () {
                button.style.visibility = "visible";
            }
        },
    
        ok: function correct() {
            window.event.returnValue = false;
            var epasts = document.getElementsByName("email")[0];
            var checkbox = document.getElementById("checkbox");
            var button = document.getElementById("arrow");
            var image = document.getElementById("Union");
           
           
            var trophie = document.getElementsByClassName("victory");
            app.Subscribe = "Thanks for subscribing!";
            app.secSubscribe = "You have successfully subscribed to our email listing.Check your email for the discount code.";
            epasts.style.visibility = "hidden";
            checkbox.style.visibility = "hidden";
            button.style.visibility = "hidden";
            this.agree = null;
            this.underline = null;
            image.style.visibility = "visible";    

            var subscribe = document.getElementsByTagName("Subscribe_txt");
            var secSubscribe = document.getElementsByTagName("Subscribe_undertxt");
          
            if (window.matchMedia("(max-width: 1300px)").matches) {

                subscribe[0].style.top = '170px';
                secSubscribe[0].style.top = '220px';

            } else {
                subscribe[0].style.top = '150px';
                secSubscribe[0].style.top = '200px';
            }
        
            }

    }
        
            
    
})
