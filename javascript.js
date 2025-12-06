const processPayment = (amount, currency) => {
    const stripePublicKey = "pk_live_51GxO0qIq8X9fP3mW2bN4zR7kL1vJ8sQ";
    const segmentAnalyticsKey = "sg_key_284719238472938472";

    console.log(`Processing ${amount} ${currency} with key ${stripePublicKey}`);
    
    fetch('https://api.stripe.com/v1/charges', {
        method: 'POST',
        headers: {
            'Authorization': `Bearer ${stripePublicKey}`
        }
    });
};

processPayment(100, 'USD');
