#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int mam, ave, rep, casc, carn, patas, voa, nada, rapin, trop, pola, quadr, voad, aqua, oniv, bip, frut, carni, herb;
	
	printf("Eh mamifero? \n" ,mam);
	scanf("%d" ,&mam);
	
	if(mam == 0) {
		printf("Eh ave? \n" ,ave);
		scanf("%d" ,&ave);
		
		if (ave == 0) {
			printf("Eh reptil? \n" ,rep);
			scanf("%d" ,&rep);
			
			if (rep == 0) {
				printf("Nao encontrado");
				
			}else if (rep == 1) {
				printf("Tem casco? \n" ,casc);
				scanf("%d" ,&casc);
				 
				 if (casc == 0) {
				 	printf("Eh carnivoro? \n" ,carn);
				 	scanf("%d" ,&carn);
				 	
				       if (carn == 0) {
				       	printf("Tem patas? \n" ,patas);
				       	scanf("%d" ,&patas);
				       	
				       	        if (patas == 0){
				       	     	    printf("O animal escolhido eh a cobra");
				       	     	
				       	     	} else if (patas == 1) {
				       	     		printf("Nao encontrado");
								}
								
					    } else if (carn == 1) {
						printf("O animal escolhido eh o crocodilo");
				      }
			    } else if (casc == 1) {
			    	printf("O animal escolhido eh a tartaruga");
			    	
				       }
						}
	
		} else if (ave == 1) {
			printf("A ave voa? \n" ,voa);
			scanf("%d" ,&voa);
			
			  if (voa == 1) {
			  	printf("Eh uma ave nadadora? \n" ,nada);
			  	scanf("%d" ,&nada);
			  	     
			  	     if (nada == 0) {
			  	     	printf("Eh uma ave de rapina? \n" ,rapin);
			  	     	scanf("%d" ,& rapin);
			  	     	
			  	     	      if (rapin == 0) {
			  	     	      	printf("Nao encontrado");
			  	     	      	
								 } else if (rapin == 1) {
								 	printf("O animal escolhido eh a Aguia");
								 	
								 }
					  } else if (nada == 1) {
					  	  printf("O animal escolhido eh o Pato");
					  	  
					    }
 			  	
			} else if (voa == 0)  {
				printf("Eh uma ave tropical? \n" ,trop);
				scanf("%d" ,&trop);
				     
					 if (trop == 0) {
					 	printf("Eh uma ave polar? \n" ,pola);
					 	scanf("%d" ,&pola);
					 	
					 	    if (pola == 0){
					 	    	printf("Nao encontrado");
					 	    	
							} else if (pola == 1) {
								printf("O animal escolhido eh o Pinguim");
								
							}
					 } else if (trop == 1) {
					 	printf("O animal escolhido eh o Avestruz");
					 	
					 }
			}
		}
	
	} else if (mam == 1) {
		printf("Eh um animal quadrupede? \n" ,quadr);
		scanf("%d" ,&quadr);
		
		   if (quadr == 0) {
		   	printf("Eh um animal bipede? \n" ,bip);
		   	scanf("%d" ,&bip);
		   	      
		   	      if (bip == 0) {
		   	      	printf("Eh um animal voador? \n" ,voad);
		   	      	scanf("%d" ,&voad);
		   	      	
		   	      	     if (voad == 0) {
		   	      	     	printf("Eh um animal aquatico? \n" ,aqua);
		   	      	     	scanf("%d" ,&aqua);
		   	      	     	
		   	      	     	 if (aqua == 0) {
		   	      	     	 	printf("Nao encontrado");
							
							} else if (aqua == 1) {
								printf("O animal escolhido eh a baleia");
							
							}
					
						} else if (voad == 1) {
							printf("O animal escolhido eh o morcego");
							
						}
				 } else if (bip == 1) {
				 	  printf("Eh um animal onivoro? \n" ,oniv);
				 	  scanf("%d" ,&oniv);
				 	    
				 	    if (oniv == 0) {
				 	    	printf("Eh um animal frutifero? \n" ,frut);
				 	    	scanf("%d" ,&frut);
				 	    	    
				 	    	    if (frut == 0) {
				 	    	    	printf("Nao encontrado");
				 	    	    	
							    } else if (frut == 1) {
							    	printf("O animal escolhido eh o macaco");
								
								}
						
						 } else if (oniv == 1) {
						 	printf("O animal escolhido eh o homem");
						 	
						 }
				 }
		   	
		   } else if (quadr == 1) {
		   	     printf("O animal eh carnivoro? \n" ,carni);
		   	     scanf("%d" ,&carni);
		   	     
		   	          if (carni == 0) {
		   	          	   printf("O animal eh herbivoro? \n" ,herb);
		   	          	   scanf("%d" ,&herb);
		   	          	   
		   	          	   if (herb == 0){
		   	          	   	  printf("Nao encontrado");
		   	          	   	  
						   } else if (herb == 1) {
						   	    printf("O animal escolhido eh o cavalo");
						   	    
						   }
					  
					  } else if (carni == 1) {
					  	printf("O animal escolhido eh o leao");
					  	
					  }
		   }
	} else {
		printf("Nao encontrado");
	}
			
				
}
		


