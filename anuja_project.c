 #include<stdio.h>
 int YourSkinType();// function prototye
 int YourMajorSkinConcern();// function prototye
 void SuggestingProductForYourSkinType(int type);// function prototye
 void SuggestingProductForYourSkinConcern(int concern);// function prototye
 const char* skintypetostring( int type); // function prototye
 const char* skinconcerntostring( int concern); // function prototype
 void suggestpro( int type , int concern); // function prototye
 int main(){
    int type =  YourSkinType();
    int concern =  YourMajorSkinConcern();
    printf("\nHERE IS YOUR SKIN PROFILE \n");
    printf(":)_____________________:)\n");
    printf("%s skin with %s concern\n" , skintypetostring(type), skinconcerntostring(concern));
    printf(" _____________________________:)\n");
    suggestpro(type , concern); // fuction call 
 return 0;
 }
 int YourSkinType(){ // fucntion defination ( tell the user to select his or her skin type ) 
  int alternatives;
  printf(" Select you skin type through given options :)\n");
  printf("1. Dry Skin \n 2. Oily Skin \n 3. Oily&Dry both(conbined)\n 4. Normal\n 5. Other\n");
  printf(" enter your skin type through numbers between 1-5\n");
  scanf("%d" ,&alternatives);
  if( alternatives>=1 && alternatives <=5)
      return alternatives;
  else{
      printf(" YoU hAvE cHoOsEn WrOnG nUmBeR please choose right number -_-");
      return YourSkinType(); //resurcive call if the user made an invalid choice other tthen given choices
  }
}
int  YourMajorSkinConcern(){ // function defination ( telling the user to select their major skin concern)
  int options;
  printf(" here are some skin concern select your major skin concern out of the given set\n");
  printf(" 1. acne\n 2. pigmantation\n 3.aging\n 4.sensitivity\n 5.other");
  printf(" select your skin concern via through numbers b/w 1 to 5");
  scanf("%d" ,&options);
  if(options>=1&& options<=5)
      return options;
  else{
      printf(" you have choosen wrong number please choose right number -_-");
      return YourMajorSkinConcern(); // recursive call if the user selecrted the wrong option 
 }
}
  void SuggestingProductForYourSkinType(int type){
    switch(type){
        case 1:// for user having dry skin :)
        printf("1. cream based cleaner\n");
        printf("CERAVE HYDRATING FACIAL CLEANER\n");
        printf(" 2. hydrating toner\n");
        printf("THAYERS ALCOHOL FREE ROSE PETALS WITCH HAZEL TONER\n");
        printf("3. rich nourishing moisturizer\n");
        printf("KIEHL'S ULTRA FACIAL CREAM\n");
        break ;
        case 2: // for  user having oily skin :)
        printf("1. oil free cleaner\n");
        printf("CETAPHIL OILY SKIN CLEANER\n");
        printf("2. oil control toner\n");
        printf("MINIMALIST\n");
        printf("3. gel moisturizer contain 0 fat\n");
        printf("NEUTROGENA HYDRO BOOST WATER GEL\n");
       break;
      case 3:// for user having both dry and oily skin
      printf(" 1.fosming cleaner\n");
      printf("LA ROCHA-POSAY TOLERIANA PURIFYING FOAMING CLEANER\n");
      printf("2. balancing toner\n");
      printf("PIXI GLOW TONIC\n");
      printf("3.hydrating lightweight moisturizer\n");
      printf("CLINIQUE MOISTURE SURGE 72-HOUR AUTO REPLENISHING HYDRATOR\n");
      break;
      case 4: // user having normal skin
      printf("1.mild cleaner\n");
      printf("CERAVE HYDRATING CLEANER\n");
      printf("2.alcohol free toner\n");
      printf("PAULA'S CHOICE ENRISHED CALMING TONER\n");
      printf("3. balanced moisturizer\n");
      printf("DR. SETHS CERAMIDE AND VITAMIN C MOISTURIZER\n");
      break;
      case 5:// user having other skin type
      printf("consult to our best dermatoligist through the link given on our website");

    }

  }
  void SuggestingProductForYourSkinConcern(int concern){
    switch(concern){
        case 1:// acne
        printf("4.salicylic acid treatment");
        printf("THE DERMA Co 2PERCENT , SALICILIC ACID FACE SERUM\n");
        printf("5.non comedogenic sunscreen");
        printf("DECONSTRUCT LIGHTWEIGHT GEL SUNSCREEN\n");
        break;
        case 2: // pigmentation
        printf("4.vitamin C serum");
        printf("5 PERCENT OFF MINIMALIST 10 PERCENT VITAMIN C FACE SERUM\n");
        printf("5.sunscreen with zinc oxide");
        printf("FIXDERMA SHADOW SUNSCREEN SPF 50+\n");
        break;
        case 3: // aging
        printf("4.retinol serum");
        printf("PILGRIM LIFT& FIRM SERUM\n");
        printf("5.hiigh SPF and broad spectrum sunscreen");
        printf("DEMATOUCH NIACINAMIDDE 1 PERCENT SPF 90+ TINTED BB CREAM\n");
        break;
        case 4 : //sensitivity
        printf("4.fragerance free serum with ceramide");
        printf("ORIMI SKINCSRE| POLY-HYDRATING FACE SERUM\n");
        printf(" 5.mineral sunscreen");
        printf("SUN MILK 100 PERCENT MINERAL SUNSCREEN SPF 50 PA++++++++++\n");
        break;
        case 5 :
        printf(" no product can be recommended without any details please consult to our dermatoligist\n");
    }
  }
  void suggestpro( int type , int concern){
    printf("according to your skin type and skin concern your recommended  products are:\n");
    SuggestingProductForYourSkinType(type);
    SuggestingProductForYourSkinConcern(concern);

  }
  const char* skintypetostring( int type){
    switch (type){
        case 1: return "dry";
        case 2: return "oily";
        case 3: return "both oily and dry";
        case 4 : return " normal";
        case 5 : return " other";
        default : return " unknown";

    }
  }
   const char* skinconcerntostring( int concern){
    switch ( concern){
        case 1 : return " acne";
        case 2 : return " pigmentation";
        case 3: return " aging";
        case 4: return " sensitivity";
        case 5 : return " other";
        default : return " unknown";

    }
   }
