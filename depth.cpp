float3 rayStep = cameraDir * -1;
float4 inputTex = Texture2DSample(texObject, texObjectSampler, uv);

for (int i = 0 ; i < 25 ; i ++)
{
  if(inputTex.r > 0.1 && inputTex.g > 0.1 && inputTex.b > 0.1)
  {
    return float3(i,0,0) //brighter and brighter red: gradient
  }

  uv += rayStep * 0.15; //distance between the slices

  inputTex = Texture2DSampler(texObject, texObjectSampler, uv.xy);
}

return inputTex;
