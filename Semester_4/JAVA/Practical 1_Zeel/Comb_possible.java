import java.util.*;
class Comb_possible
{
	public static void main(String[] args)
	{
		int[] i={1,2,3};
		for(int x=0;x<3;x++)
		{
			for(int y=0;y<3;y++)
			{
				for(int z=0;z<3;z++)
				{
					if(x!=y && y!=z && z!=x)
					{
						System.out.println(i[x]+" "+i[y]+" "+i[z]);
					}
				}
			}
		}
	}
}
