// 2DCircle = length(pos-uv);
// 3DSphere = length(rayOrigin - sphereCenter) - sphereRadius;

float3 rayOrigin = viewDir - worldPos; //setup ray origin
float3 rayStep = viewDir * 1;

float3 lightDirection = normalized(lightPos); //setup light

for (int i = 0 ; i < 256 ; i++)
{
  float dist = length(rayOrigin - sphereCenter) - sphereRadius; //draw 3d sphere
  
  if (dist < 0.0.1) 
    {
        float3 normal = normalize(rayOrigin - sphereCenter);
        float diffuse = max(dot(normal, lightDirection),0); //calculate shadow area
        return diffuse * sphereColor; // if inside this sphere, return color red, based on diffuse (shadow)
    }
  opacityMask = 1;
  rayOrigin += rayStep;
}
opacityMask = 0; //make the outside transparent
return float3(0,0,0); //othereise, return black
