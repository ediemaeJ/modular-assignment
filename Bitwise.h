#define BIT_SET(x,n) (x)|(x<<n) 

#define BIT_CLEAR(x,n)) (x)&~(x<<n)

#define BIT_TOGGLE(x,n) (x)^(x<<n)

#define BIT_READ(x,n) (x>>n)&1 

#define IS_EVEN(x) x%2=0?true:false

#define IS_ODD(x) x%2=0?false:true 
