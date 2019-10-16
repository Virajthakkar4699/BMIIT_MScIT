#include<iostream>
using namespace std;
class CRC
{
	private:
		int i,j,k,l,frame[20],generator[20],fsize,gsize;
		
	public:
		void GetFrame();
		void GetGenerator();
		void Check();
};

void CRC::GetFrame()
{
	cout<<"\n Enter Frame size: ";
    cin>>fsize;
     
    cout<<"\n Enter Frame:";
    for(i=0;i<fsize;i++)
    {
        cin>>frame[i];
    }
}

void CRC::GetGenerator()
{
	cout<<"\n Enter Generator size: ";
    cin>>gsize;
     
    cout<<"\n Enter Generator:";
    for(i=0;i<gsize;i++)
    {
        cin>>generator[i];
    }
}

void CRC::Check()
{
	cout<<"\n Sender Side:";
    cout<<"\n Frame: ";
    for(i=0;i<fsize;i++)
    {
        cout<<frame[i];
    }
    cout<<"\n Generator :";
    for(i=0;i<gsize;i++)
    {
        cout<<generator[i];
    }
 
    //Append 0's
    int rs=gsize-1;
    cout<<"\n Number of 0's to be appended: "<<rs;
    for (i=fsize;i<fsize+rs;i++)
    {
        frame[i]=0;
    }
 
    int temp[20];
    for(i=0;i<20;i++)
    {
        temp[i]=frame[i];
    }
 
    cout<<"\n Message after appending 0's :";
    for(i=0; i<fsize+rs;i++)
    {
        cout<<temp[i];
    }
 
    //Division
    for(i=0;i<fsize;i++)
    {
        j=0;
        k=i;
        //check whether it is divisible or not
        if (temp[k]>=generator[j])
        {
            for(j=0,k=i;j<gsize;j++,k++)
            {
                if((temp[k]==1 && generator[j]==1) || (temp[k]==0 && generator[j]==0))
                {
                    temp[k]=0;
                }
                else
                {
                    temp[k]=1;
                }
            }
        }
    }
 
    //CRC
    int crc[15];
    for(i=0,j=fsize;i<rs;i++,j++)
    {
        crc[i]=temp[j];
    }
 
    cout<<"\n CRC bits: ";
    for(i=0;i<rs;i++)
    {
        cout<<crc[i];
    }
 
    cout<<"\n Transmitted Frame: ";
    int tf[15];
    for(i=0;i<fsize;i++)
    {
        tf[i]=frame[i];
    }
    for(i=fsize,j=0;i<fsize+rs;i++,j++)
    {
        tf[i]=crc[j];
    }
    for(i=0;i<fsize+rs;i++)
    {
        cout<<tf[i];
    }

	cout<<"\n Receiver side : ";
    cout<<"\n Received Frame: ";
    for(i=0;i<fsize+rs;i++)
    {
        cout<<tf[i];
    }
 
    for(i=0;i<fsize+rs;i++)
    {
        temp[i]=tf[i];
    }
 
    //Division
    for(i=0;i<fsize+rs;i++)
    {
        j=0;
        k=i;
        if (temp[k]>=generator[j])
        {
            for(j=0,k=i;j<gsize;j++,k++)
            {
                if((temp[k]==1 && generator[j]==1) || (temp[k]==0 && generator[j]==0))
                {
                    temp[k]=0;
                }
                else
                {
                    temp[k]=1;
                }
            }
        }
    }



	cout<<"\n Reaminder: ";
    int rrem[15];
    for (i=fsize,j=0;i<fsize+rs;i++,j++)
    {
        rrem[j]= temp[i];
    }
    for(i=0;i<rs;i++)
    {
        cout<<rrem[i];
    }
 
    int flag=0;
    for(i=0;i<rs;i++)
    {
        if(rrem[i]!=0)
        {
            flag=1;
        }
    }
 
    if(flag==0)
    {
        cout<<"\n Since Remainder Is 0 Hence Message Transmitted From Sender To Receriver Is Correct";
    }
    else
    {
        cout<<"\n Since Remainder Is Not 0 Hence Message Transmitted From Sender To Receriver Contains Error";
    }
}

int main()
{
	CRC Obj;
	Obj.GetFrame();
	Obj.GetGenerator();
	Obj.Check();
	
	return 0;
	
	
}

