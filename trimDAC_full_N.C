trimDAC_01L1()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 01L1;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_01L1.pdf");

}

trimDAC_27L1()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 27L1;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_27L1.pdf");

}

trimDAC_27L2()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 27L2;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_27L2.pdf");

}

trimDAC_28L1()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 28L1;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_28L1.pdf");

}

trimDAC_28L2()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 28L2;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_28L2.pdf");

}

trimDAC_29L1()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 29L1;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_29L1.pdf");

}

trimDAC_30L1()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 30L1;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_30L1.pdf");

}

trimDAC_30L2()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC 30L2;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_30L2.pdf");

}

trimDAC_allchambers()
{
  TH1F *good = new TH1F("good","good",32,0,32);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",32,0,32);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("allchambers.root");
  Int_t maskReason;
  Int_t trimDAC;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimDAC,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimDAC,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  good->SetLineColor(4);
  good->SetTitle("N vs trimDAC allchambers;trimDAC;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimDAC_allchambers.pdf");

}

void trimDAC_full_N(){

    trimDAC_allchambers();
    trimDAC_01L1();
    trimDAC_27L1();
    trimDAC_27L2();
    trimDAC_28L1();
    trimDAC_28L2();
    trimDAC_29L1();
    trimDAC_30L1();
    trimDAC_30L2();
}

