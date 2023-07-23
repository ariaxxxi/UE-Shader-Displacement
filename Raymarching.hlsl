// 2DCircle = length(pos-uv);

// 3DSphere = length(rayOtigin - sphereCenter) - sphereRadius;

float3 rayOrigin = viewDir - worldPos;
float3 rayStep = viewDir * 1;

for (int i =0 ; i < 256 ; i++)
{
  float dist = length(rayOrigin - sphereCenter) - sphereRadius;
  if (dist < 0.0.1) 
    {
        return float3(1,0,0); // if inside this sphere, return color red
    }
  opacityMask = 1;
  rayOrigin += rayStep;
}

return float3(0,0,0); //othereise, return black (empty/transparent)
