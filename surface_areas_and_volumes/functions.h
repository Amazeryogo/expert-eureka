#define pi 3.1415926539791
/* keywords 
 * l = length (l in cones is slant height)
 * b = breath
 * h = height
 * s = side
 * r = radius
 * SA = Surface Area
 * TSA = Total SA
 * CSA = Curved SA
 *
 * */
int SAofCuboid(int l, int h, int b){
    return 2*(l*b + b*h + h*l);

}
int VolumeofCuboid(int l, int b, int h){
    return l*b*h;
}
int SAofCube(int s){
    return 6*(s*s);
}
int VolumeofCube(int s){
    return s*s*s;
}

int LSAofcuboid(int l, int h, int b){
   return (2*l*h)+(2*b*h);
}

int CSAofCylinder(float r, float h){ // float cuz pi = 3.14
   return 2*pi*r*h;
}

int TSAofCylinder(float r,float h){
   return 2*pi*r*(r+h);
}
int VolumeofCylinder(float r, float h){
    return pi*r*r*h;
}

int CSAofCone(float r, float l){
   return pi * r * l
}

int TSAofCone(float r, float l){
   return pi*r*(l+r)
}

int VolumeofCone(float r, float h){
    return (1/3)*pi*r*r*h;
}
int SAofSphere(float r){
   return 4*pi*r*r;
}
int VolumeofSphere(float r){
    return (4/3)*pi*r*r*r;
}
int CSAofHemisphere(float r){
   return 2*pi*r*r;

}
int TSAofHemisphere(float r){
   return 3*pi*r*r;
}
int VolumeofHemisphere(float r){
   return (2/3)*pi*r*r*r;
}

