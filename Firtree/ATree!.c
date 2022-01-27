                            p
                           (_)
                         {write(
                        1,&_,1);}
                       r(_){int x;
                      if(!(_%2)){x=
                       _/2;return
                      (2*x*x+10*x+
                     1);}x=_/ 2+ 1;
                    return(2*x*x+8*x
                   -3); }t(_){int k ;
                  int x=_%2?_:_+1;for(
                    int g=_;g>0;g--)
                   {for(k=1;k<(r(_)-1
                  )/2-(x-1)/2+ 1;k++)p
                 (32);for(k=0;k<x;k++)p
                (124); p(10);}}l(_,n ) {
               intu=1;int y=2;for(int i=1
              ;i<=n;i++){u-=(y=!(i%2)?y+2:
                y);for(int z=1;z<=i+3; z
               ++){u=u+2;int k=(_-1)/2+1-
              ((u-1)/2+1)-1;for(int b=0; b
             <=k;b++)p(' ');for(int b=0; b<
            u; b++)p( '*');p('\n');}}} main(
           int w,char**x){if(!(w-1)){printf (
                        "Usage"//
                        ": %s\n",
                        *x);exit(
                        0);}int i
                        = atoi (x
                        [1]);l(r(
                        i),i);t(i
                        );}//////
