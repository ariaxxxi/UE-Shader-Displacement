float result = 0

for (int i = 0 ; i < nSides ; i++)
{
    for (int j=0; j < nCopies ; j ++)
  {
     float angle = (i / nSides) * (3.14 * 2);
     float2 pos = center + (j / nCopies) * radius * float2(sin(1-angle),
                                                           cos(1-angle));
     result += length (pos-uv) < size
  }
}

return (result)
