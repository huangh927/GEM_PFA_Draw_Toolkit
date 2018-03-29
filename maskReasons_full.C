maskReasons_27L1()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"27L1"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_27L2()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"27L2"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_28L1()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"28L1"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_28L2()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"28L2"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_29L1()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"29L1"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_29L2()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L2.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"29L2"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_30L1()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"30L1"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

maskReasons_30L2()
{

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");

  Int_t maskReason;
  Int_t n1, n2, n3, n4, n5, n6;


  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  n1=0;
  n2=0;
  n3=0;
  n4=0;
  n5=0;
  n6=0;
  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         {n1=n1+1;}
     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==7 || maskReason==10 || maskReason==11 || maskReason==14 || maskReason==15 || maskReason==18 || maskReason==19 || maskReason==22 || maskReason==23 || maskReason==26 || maskReason==27 || maskReason==30 || maskReason==31)
         {n2=n2+1;}
     if(maskReason==4 || maskReason==5 || maskReason==6 || maskReason==7 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==20 || maskReason==21 || maskReason==22 || maskReason==23 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n3=n3+1;}
     if(maskReason==8 || maskReason==9 || maskReason==10 || maskReason==11 || maskReason==12 || maskReason==13 || maskReason==14 || maskReason==15 || maskReason==24 || maskReason==25 || maskReason==26 || maskReason==27 || maskReason==28 || maskReason==29 || maskReason==30 || maskReason==31)
         {n4=n4+1;}
     if(maskReason>=16)
         {n5=n5+1;}
     if(maskReason>0)
         {n6=n6+1;}
   }
  cout<<"30L2"<<endl;
  cout<<"hotchannel="<<n1<<";  fitfailed="<<n2<<";  deadchannel="<<n3<<";  highnoise="<<n4<<";  higheffped="<<n5<<";  total="<<n6<<"."<<endl;

}

void maskReasons_full(){

    maskReasons_27L1();
    maskReasons_27L2();
    maskReasons_28L1();
    maskReasons_28L2();
    maskReasons_29L1();
    maskReasons_29L2();
    maskReasons_30L1();
    maskReasons_30L2();
}

